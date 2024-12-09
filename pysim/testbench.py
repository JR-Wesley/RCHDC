
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb.types import LogicArray

from enum import Enum
import hdc


def handle_dut(dut):
    def printSig(attrs=""):
        """
        Function
        ===
        A closure function to print the value of an internal signal.

        Input
        ---
        attrs: A string splitted by '.' representing the internal signals.
        """
        at = attrs.split('.')
        cur = dut
        for a in at:
            cur = getattr(cur, a)

        print(attrs, ": ", getattr(cur, 'value'))

    return printSig


@cocotb.test()
async def testbench(dut):

    DIM = 1024
    SMP_SIZE = 3
    SMP_NUM = 256
    CLS_NUM = 10
    pr = handle_dut(dut)

    clock = Clock(dut.clk, 10, units="step")
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))

    # NOTE: The value is updated after the rising edge.
    dut.rst_n.value = 0
    dut.smp_en.value = 0
    pr("rst_n")
    for i in range(2):
        await RisingEdge(dut.clk)
    pr("rst_n")
    dut.rst_n.value = 1

    # NOTE: check the modules under `dut`
    print(type(dut.rst_n.value.binstr), type(dut.rst_n.value.integer))
    print(dir(dut))

    # several groups of test
    for i in range(2):
        im_feat = hdc.item_memory(dim=DIM, number=SMP_SIZE, datatype='binary')
        im_pos = hdc.item_memory(dim=DIM, number=SMP_SIZE, datatype='binary')
        spa_enc = 0

        for size in range(SMP_SIZE):
            # NOTE: pre load the value
            if size == 0:
                dut.smp_en.value = 1
                dut.im_value.value = int(hdc.tensor2binStr(im_feat[size]), 2)
                dut.im_pos.value = int(hdc.tensor2binStr(im_pos[size]), 2)
                dut.label.value = 1
                await RisingEdge(dut.clk)

            # stimu for DUT
            dut.im_value.value = int(hdc.tensor2binStr(im_feat[size]), 2)
            dut.im_pos.value = int(hdc.tensor2binStr(im_pos[size]), 2)

            # pr("spatio_enc.elemCnt.cnt")
            # pr("spatio_enc.elemCnt.en")
            # pr("spatio_enc.elemCnt.cnt_next")
            await RisingEdge(dut.clk)
            # pr("spatio_enc.elemCnt.cnt")
            # pr("spatio_enc.elemCnt.en")
            # pr("spatio_enc.elemCnt.cnt_next")

            pr("spatio_enc.g_sample[1].im_bit_nb")
            spa_enc += im_feat[1] ^ im_pos[0]

        assert dut.smp_done.value == 1, "sample not done"
        print(f"{SMP_SIZE} samples done.")

        # await RisingEdge(dut.clk)
        pr("spatio_enc.enc")
        # TODO: the output reg for 1 cycle
        # enc_data = hdc.binStr2tensor(
        #     str(dut.spatio_enc.enc.value.binstr), DIM, prefix=False)
#         print(enc_data)
        # assert (enc_data == (im_feat[2] ^ im_pos[2])), f"input data is xor or two HVs"

    assert dut.set_done.value == 1, "set not done"
    print(f"{SMP_SIZE} samples done.")

    # print(f"Input: {ax:0{dw}d}, {bx:0{dw}d}. Expected: {expected_val:0{dw}d}, HW gots: {(hw_val >> 2):0{dw}d}")
