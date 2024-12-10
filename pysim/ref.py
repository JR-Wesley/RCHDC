import torch
import hdc


def handle_dut(dut):
    # WARN: cocotb reads the data of the last cycle!!!
    # handle the reading logic properly.
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


class ref:

    def __init__(self, param):
        # im_feat = hdc.item_memory(dim=DIM, number=SMP_SIZE, datatype='binary')
        # im_pos = hdc.item_memory(dim=DIM, number=SMP_SIZE, datatype='binary')
        # spa_enc = 0
        pass

    def train() -> torch.tensor:
        pass
