
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb.types import LogicArray

from enum import Enum
from rich.console import Console
import hdc
import ref
import math
import torch


@cocotb.test()
async def testbench(dut):

    DIM = 16
    SMP_SIZE = 7
    SMP_DW = math.ceil(math.log2(SMP_SIZE))
    SET_SIZE = 7
    SET_DW = math.ceil(math.log2(SET_SIZE))
    CLS_NUM = 10
    CLS_DW = math.ceil(math.log2(CLS_NUM))

    pr = ref.handle_dut(dut)
    con = Console()

    clock = Clock(dut.clk, 10, units="step")
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))

    # NOTE: The value is updated after the rising edge.
    # initialize
    dut.rst_n.value = 0
    dut.smp_en.value = 0
    dut.smp_clr.value = 0
    dut.set_clr.value = 0
    pr("rst_n")
    for i in range(2):
        await RisingEdge(dut.clk)
    pr("rst_n")
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)

    # NOTE: check the modules under `dut`
    print(type(dut.rst_n.value.binstr), type(dut.rst_n.value.integer))

    im_feat = hdc.item_memory(dim=DIM, number=SMP_SIZE)
    im_pos = hdc.item_memory(dim=DIM, number=SMP_SIZE)
    smp_enc, set_enc = [torch.zeros(DIM, dtype=torch.uint8) for _ in range(2)]
    am = torch.zeros(CLS_NUM, DIM, dtype=torch.uint8)
    label = 1

    # training samples
    for i in range(SET_SIZE):
        for size in range(SMP_SIZE):
            # stimu for DUT
            dut.smp_clr.value = 0
            dut.smp_en.value = 1
            dut.im_value.value = int(hdc.tensor2binStr(im_feat[size]), 2)
            dut.im_pos.value = int(hdc.tensor2binStr(im_pos[size]), 2)
            dut.label.value = label

            await RisingEdge(dut.clk)

            smp_enc += im_feat[size] ^ im_pos[size]
            con.print("ref:", smp_enc, style="blue")

        set_enc += hdc.quant(smp_enc, thre=(2 ** (SMP_DW - 1) - 1))
        con.print("ref set_enc:", set_enc, style="blue")
        smp_enc.zero_()

        # sample done assert at the last cycle.
        assert dut.smp_done.value == 1, "sample not done"
        con.print(f"sample {i} done.", style="bold red")

        # clear the spatio_enc for the next sample
        dut.smp_clr.value = 1
        dut.smp_en.value = 0
        await RisingEdge(dut.clk)

    am[label] = hdc.quant(set_enc, thre=(2 ** (SET_DW - 1) - 1))

    # set done assert at the last cycle.
    assert dut.set_done.value == 1, "set not done"
    con.print(f"A batch set - {SMP_SIZE} samples done.", style="bold red")

    dut.smp_en.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # conver to tensor and rotate
    hw_set_enc = hdc.binStr2tensor(
        str(dut.set_enc.value.binstr), DIM, prefix=False)
    assert torch.equal(hw_set_enc, am[1]), f"not equal"
    con.print("HW value equals ref model", style="bold red")

    for i in range(5):
        await RisingEdge(dut.clk)

    # print(f"Input: {ax:0{dw}d}, {bx:0{dw}d}. Expected: {expected_val:0{dw}d}, HW gots: {(hw_val >> 2):0{dw}d}")
