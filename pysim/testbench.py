import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge

from rich.console import Console
import hdc
import ref
import torch
from config import Config


async def init(dut, pr):

    clock = Clock(dut.clk, 10, units="step")
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))

    # NOTE: check the modules under `dut`
    print(dir(dut))

    # initialize
    # NOTE: The value is updated after the rising edge.
    dut.rst_n.value = 0
    pr("rst_n")
    for _ in range(2):
        await RisingEdge(dut.clk)
    pr("rst_n")
    dut.rst_n.value = 1
    dut.smp_en.value = 0
    dut.smp_clr.value = 0
    dut.set_clr.value = 0
    await RisingEdge(dut.clk)


async def train(dut, ref_model, console):
    """
    Func
    ===

    """
    ref_model.train()

    dut.state.value = 0
    for num in range(ref_model.cfg.SET_SIZE):
        for size in range(ref_model.cfg.SMP_SIZE):
            dut.smp_clr.value = 0
            dut.smp_en.value = 1
            index = num + size
            if index >= ref_model.set_size:
                index -= ref_model.set_size
            dut.im_value.value = ref_model.feat(index)
            dut.im_pos.value = ref_model.pos(size)
            dut.label.value = ref_model.label[num]
            await RisingEdge(dut.clk)

        # sample done assert at the next cycle.
        console.print(
            f"Timing: sample {num:0{3}d} done.", style="blue")

        dut.smp_en.value = 0
        # clear the spatio_enc for the next sample
        dut.smp_clr.value = 1
        await RisingEdge(dut.clk)

        dut.smp_clr.value = 0
        await RisingEdge(dut.clk)

    # set done assert at the next cycle.
    console.print(
        f"Timing: A batch set - {ref_model.cfg.SMP_SIZE} samples done.", style="blue")

    dut.set_clr.value = 1
    await RisingEdge(dut.clk)
    dut.set_clr.value = 0


async def predict(dut, ref_model, lbl, console):
    dut.state.value = 1
    # stimu for DUT, training samples
    for size in range(ref_model.cfg.SMP_SIZE):
        dut.smp_clr.value = 0
        dut.smp_en.value = 1
        dut.im_value.value = ref_model.feat(lbl)
        dut.im_pos.value = ref_model.pos(lbl)
        dut.label.value = ref_model.label[lbl]
        await RisingEdge(dut.clk)

    # sample done assert at the next cycle.
    console.print(
        f"Timing: predicting sample done.", style="blue")

    dut.smp_en.value = 0
    # clear the spatio_enc for the next sample
    dut.smp_clr.value = 1
    await RisingEdge(dut.clk)

    dut.smp_clr.value = 0
    await RisingEdge(dut.clk)


@cocotb.test()  # type: ignore
# ignore the error of decorator function parameter when linting
async def testbench(dut):

    pr = ref.handle_dut(dut)
    con = Console()
    define_file_path = "../../rtl/Define.sv"
    ref_mnist = ref.ref_model(define_file_path)
    ref_mnist_p = ref.ref_model(define_file_path)

    """ Init COCOTB, dut. """
    await init(dut, pr)

    """ For training, encode a set of samples and write into AM. """
    await train(dut, ref_mnist, con)

    """ For predicting, encode one sample and compare """
    await predict(dut, ref_mnist_p, 2, con)
    await predict(dut, ref_mnist_p, 6, con)
    ref.compare(dut, ref_mnist, con)

    for _ in range(3):
        await RisingEdge(dut.clk)
