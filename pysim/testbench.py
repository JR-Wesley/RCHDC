import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge

from rich.console import Console
import hdc
import ref
import torch
from config import Config


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
            dut.im_value.value = ref_model.feat(num, size)
            dut.im_pos.value = ref_model.pos(num, size)
            dut.label.value = ref_model.label[num]
            # clear the spatio_enc for the next sample
            if size == (ref_model.cfg.SMP_SIZE - 1):
                dut.smp_clr.value = 1
                if num == (ref_model.cfg.SET_SIZE - 1):
                    dut.set_clr.value = 1

            await RisingEdge(dut.clk)

        # sample done assert at the last cycle.
        # assert dut.smp_done.value == 1, "sample not done"
        console.print(
            f"Timing: sample {num:0{3}d} done.", style="blue")

        dut.smp_clr.value = 0
        dut.smp_en.value = 0
        dut.set_clr.value = 0
        await RisingEdge(dut.clk)

    await RisingEdge(dut.clk)

    # set done assert at the last cycle.
    # assert dut.set_done.value == 1, "set not done"
    console.print(
        f"Timing: A batch set - {ref_model.cfg.SMP_SIZE} samples done.", style="blue")


async def predict(dut, ref_model, lbl, console):
    ref_model.train()
    dut.state.value = 1
    # stimu for DUT, training samples
    for size in range(ref_model.cfg.SMP_SIZE):
        dut.smp_clr.value = 0
        dut.smp_en.value = 1
        dut.im_value.value = ref_model.feat(lbl, size)
        dut.im_pos.value = ref_model.pos(lbl, size)
        dut.label.value = ref_model.label[lbl]
        # clear the spatio_enc for the next sample
        if size == (ref_model.cfg.SMP_SIZE - 1):
            dut.smp_clr.value = 1

        await RisingEdge(dut.clk)

    # sample done assert at the last cycle.
    # assert dut.smp_done.value == 1, "sample not done"
    console.print(
        f"Timing: predicting sample done.", style="blue")

    dut.smp_clr.value = 0
    dut.smp_en.value = 0
    await RisingEdge(dut.clk)


@cocotb.test()  # type: ignore
# ignore the error of decorator function parameter when linting
async def testbench(dut):

    pr = ref.handle_dut(dut)
    con = Console()
    define_file_path = "../../rtl/Define.sv"
    ref_mnist = ref.ref_model(define_file_path)
    ref_mnist_p = ref.ref_model(define_file_path)

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

    """ For training, encode a set of samples and write into AM. """
    await train(dut, ref_mnist, con)

    # conver to tensor and rotate
    hw_set_enc = hdc.binStr2tensor(
        str(dut.AM[2].value.binstr), ref_mnist.cfg.DIM, prefix=False)
    # assert torch.equal(hw_set_enc, ref_mnist.am(ref_mnist.label)), f"not equal"
    con.print("Function: AM[2] HW value equals ref model", style="bold red")

    """ For predicting, encode one sample and compare """
    await predict(dut, ref_mnist_p, 2, con)
    await predict(dut, ref_mnist_p, 6, con)

    for _ in range(3):
        await RisingEdge(dut.clk)
