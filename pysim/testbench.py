
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb.types import LogicArray

from enum import Enum
import hdc

@cocotb.test()
async def testbench(dut):

    DIM = 1024
    SMP_SIZE = 3
    SMP_NUM = 256
    CLS_NUM = 10
    
    clock = Clock(dut.clk, 10, units="step")
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))

    # reset
    dut.rst_n.value = 0   
    for i in range(2):
        await RisingEdge(dut.clk)
    dut.rst_n.value = 1

    # several groups of test
    for i in range(1):
        im_feat = hdc.item_memory(dim=DIM, number=SMP_SIZE, datatype='binary')
        im_pos = hdc.item_memory(dim=DIM, number=SMP_SIZE, datatype='binary')
    # 查看 dut 下的信号
        print(dir(dut))

        dut.label.value = 1
        for size in range(SMP_SIZE):
            # stimu for DUT
            dut.im_value.value = int(hdc.tensor2binStr(im_feat[size]), 2)
            dut.im_pos.value = int(hdc.tensor2binStr(im_pos[size]), 2)
            dut.smp_in.value = 1
            await RisingEdge(dut.clk)
            print(dir(dut.elemCnt))
            print(dut.elemCnt.cnt.value)
            print(dut.am_sample.value.binstr)
            # enc = 0 
            # for size in range(3):
            #     enc += im_feat[0] ^ im_pos[0]
            #     await RisingEdge(dut.clk)
            # quant_enc = hdc.quant(enc, 1)
            # assert hdc.compare(dut.am_sample, quant_enc), f"output q was incorrect on the {i}th cycle"
    dut.smp_in.value = 0
# print(f"Input: {ax:0{dw}d}, {bx:0{dw}d}. Expected: {expected_val:0{dw}d}, HW gots: {(hw_val >> 2):0{dw}d}")



