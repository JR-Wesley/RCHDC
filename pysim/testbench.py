import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge

import torch
from rich.console import Console
import ref
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


async def exp_train(dut, ref_model, console):
    """
    Func
    ===

    """
    ref_model.train()

    dut.state.value = 0
    for num in range(ref_model.cfg.SET_SIZE):
        dut.smp_en.value = 1
        dut.label.value = ref_model.label[num]
        dut.smp_clr.value = 0
        for size in range(ref_model.cfg.SMP_SIZE):
            index = num + size
            if index >= ref_model.set_size:
                index -= ref_model.set_size
            dut.im_value.value = ref_model.feat(index)
            dut.im_pos.value = ref_model.pos(size)
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


async def exp_predict(dut, ref_model, lbl, console):
    """
    Func
    ===
    Input a set of random value form ref_model.
    Compare with reference.

    """
    dut.state.value = 1
    dut.smp_clr.value = 0
    dut.smp_en.value = 1
    dut.label.value = ref_model.label[lbl]
    # stimu for DUT, training samples
    for size in range(ref_model.cfg.SMP_SIZE):
        dut.im_value.value = ref_model.feat(size)
        dut.im_pos.value = ref_model.pos(lbl)
        await RisingEdge(dut.clk)

    # sample done assert at the next cycle.
    console.print(
        f"Timing: predicting sample done.", style="blue")

    dut.smp_en.value = 0
    # clear the spatio_enc for the next sample
    dut.smp_clr.value = 1
    await RisingEdge(dut.clk)

    hw_pred_enc = ref.binStr2tensor(
        str(dut.smp_enc.value.binstr), ref_model.cfg.DIM, prefix=False)
    dut.smp_clr.value = 0
    await RisingEdge(dut.clk)

    await RisingEdge(dut.clk)
    ref.compare(dut, ref_model, console, hw_pred_enc)


@cocotb.test()  # type: ignore
# ignore the error of decorator function parameter when linting
async def testbench(dut):

    pr = ref.handle_dut(dut)
    con = Console()
    define_file_path = "../../rtl/Define.sv"
    ref_simple = ref.ref_model(define_file_path)
    ref_mnist = ref.ref_mnist()

    """ Init COCOTB, dut. """
    await init(dut, pr)

    """ For training, encode a set of samples and write into AM. """
    await ref.mnist_train(dut, ref_mnist, con)

    """ For predicting, encode one sample and compare """
    for _ in range(4):
        await RisingEdge(dut.clk)
    await ref.mnist_predict(dut, ref_mnist, con)

    """ test using mini dataset """
    # await exp_train(dut, ref_simple, con)
    # await exp_predict(dut, ref_simple, 2, con)
    # await exp_predict(dut, ref_simple, 7, con)
    # await exp_predict(dut, ref_simple, 4, con)
