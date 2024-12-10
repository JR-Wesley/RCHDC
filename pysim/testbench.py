
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb.types import LogicArray

from enum import Enum
from rich.console import Console
import hdc
import ref


@cocotb.test()
async def testbench(dut):

    DIM = 16
    SMP_SIZE = 5
    SET_SIZE = 5
    CLS_NUM = 10

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
    # print(dir(dut.AM))
    print(dut.AM.value)

    im_feat = hdc.item_memory(dim=DIM, number=SMP_SIZE, datatype='binary')
    im_pos = hdc.item_memory(dim=DIM, number=SMP_SIZE, datatype='binary')
    spa_enc = 0

    # several groups of test
    for i in range(SET_SIZE):
        for size in range(SMP_SIZE):
            # stimu for DUT
            dut.smp_clr.value = 0
            dut.smp_en.value = 1
            dut.im_value.value = int(hdc.tensor2binStr(im_feat[size]), 2)
            dut.im_pos.value = int(hdc.tensor2binStr(im_pos[size]), 2)
            dut.label.value = 1

            await RisingEdge(dut.clk)

            spa_enc += im_feat[size] ^ im_pos[size]
            con.print("ref:", spa_enc, style="blue")

        # clear the spatio_enc
        dut.smp_clr.value = 1
        dut.smp_en.value = 0
        await RisingEdge(dut.clk)

        # done assert at the last cycle.
        # assert dut.smp_done.value == 1, "sample not done"
        con.print(f"sample {i} done.", style="bold red")

    pr("set_done")
    # assert dut.set_done.value == 1, "set not done"
    con.print(f"A batch set - {SMP_SIZE} samples done.", style="bold red")

    dut.smp_en.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # TODO: the output reg for 1 cycle
    enc_data = hdc.binStr2tensor(
        str(dut.spatio_enc.enc.value.binstr), DIM, prefix=False)
    print(enc_data)
    # assert (enc_data == (im_feat[2] ^ im_pos[2])), f"input data is xor or two HVs"

    for i in range(5):
        await RisingEdge(dut.clk)

    # print(f"Input: {ax:0{dw}d}, {bx:0{dw}d}. Expected: {expected_val:0{dw}d}, HW gots: {(hw_val >> 2):0{dw}d}")
