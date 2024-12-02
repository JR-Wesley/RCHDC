# test_dff.py

import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb.types import LogicArray


@cocotb.test()
async def testbench(dut):
    """
    """

    # Assert initial output is unknown
    # Set initial input value to prevent it from floating
    dut.rst_n.value = 1

    clock = Clock(dut.clk, 10, units="step")
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))

    # Synchronize with the clock. This will regisiter the initial `d` value
    await RisingEdge(dut.clk)
    # expected_val = 0  # Matches initial input value
    # for i in range(1):
    #     ax = random.randint(0, 2 ** length - 1)
    #     bx = random.randint(0, 2 ** length - 1)
    #     expected_val = int(GF(ax) * GF(bx))
    #     dut.ax.value = ax << r
    #     dut.bx.value = bx
    #     # print(dir(dut.gf_blk.row[0].col[0]))
    #     # print(dir(dut.gf_blk.row[1]))

    #     for i in range(3):
    #         await RisingEdge(dut.clk)
    #     hw_val = dut.px.value
    #     assert (hw_val >> r) == expected_val, f"output q was incorrect on the {i}th cycle"
    #     dw = math.floor((size) * math.log10(2)) + 1
    #     print(f"Input: {ax:0{dw}d}, {bx:0{dw}d}. Expected: {expected_val:0{dw}d}, HW gots: {(hw_val >> 2):0{dw}d}")

    # Check the final input on the next clock
    # await RisingEdge(dut.clk)
    # assert dut.px.value == expected_val, "output q was incorrect on the last cycle"