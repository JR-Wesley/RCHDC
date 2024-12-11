
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge

from rich.console import Console
import hdc
import ref
import torch
from config import Config


# ignore the error of decorator function parameter when linting
@cocotb.test()  # type: ignore
async def testbench(dut):

    pr = ref.handle_dut(dut)
    con = Console()
    define_file_path = "../../rtl/define.sv"
    ref_mnist = ref.ref_model(define_file_path)

    # NOTE: check the modules under `dut`
    print(dir(dut))

    clock = Clock(dut.clk, 10, units="step")
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))

    # initialize
    # NOTE: The value is updated after the rising edge.
    dut.rst_n.value = 0
    dut.smp_en.value = 0
    dut.smp_clr.value = 0
    dut.set_clr.value = 0
    pr("rst_n")
    for _ in range(2):
        await RisingEdge(dut.clk)
    pr("rst_n")
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)

    ref_mnist.train()
    # stimu for DUT, training samples
    for i in range(ref_mnist.cfg.SET_SIZE):
        for size in range(ref_mnist.cfg.SMP_SIZE):
            dut.smp_clr.value = 0
            dut.smp_en.value = 1
            dut.im_value.value = ref_mnist.feat(i, size)
            dut.im_pos.value = ref_mnist.pos(i, size)
            dut.label.value = ref_mnist.label

            await RisingEdge(dut.clk)

        # sample done assert at the last cycle.
        assert dut.smp_done.value == 1, "sample not done"
        con.print(
            f"Timing: sample {i:0{3}d} done.", style="blue")

        # clear the spatio_enc for the next sample
        dut.smp_clr.value = 1
        dut.smp_en.value = 0
        await RisingEdge(dut.clk)

    # set done assert at the last cycle.
    assert dut.set_done.value == 1, "set not done"
    con.print(
        f"Timing: A batch set - {ref_mnist.cfg.SMP_SIZE} samples done.", style="blue")

    dut.smp_en.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # conver to tensor and rotate
    hw_set_enc = hdc.binStr2tensor(
        str(dut.set_enc.value.binstr), ref_mnist.cfg.DIM, prefix=False)
    assert torch.equal(hw_set_enc, ref_mnist.am(ref_mnist.label)), f"not equal"
    con.print("Function: AM[1] HW value equals ref model", style="bold red")

    for _ in range(3):
        await RisingEdge(dut.clk)
