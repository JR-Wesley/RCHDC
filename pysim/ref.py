import torch
import hdc
from config import Config


class ref_model:
    def __init__(self, cfg_file_path):
        self.cfg = Config(cfg_file_path)
        self.cfg.print_vars()

        self.im_feat = hdc.item_memory(
            dim=self.cfg.DIM, number=self.cfg.SMP_SIZE)
        self.im_pos = hdc.item_memory(
            dim=self.cfg.DIM, number=self.cfg.SMP_SIZE)

        self.smp_enc, self.set_enc = [torch.zeros(
            self.cfg.DIM, dtype=torch.uint8) for _ in range(2)]
        self.amem = torch.zeros(
            (self.cfg.CLS_NUM, self.cfg.DIM), dtype=torch.uint8)
        self.label = 1

    def train(self):
        set_size = self.cfg.SET_SIZE
        sample_size = self.cfg.SMP_SIZE
        threshold = (2 ** (self.cfg.SET_DW - 1) - 1)

        if isinstance(set_size, int) and isinstance(sample_size, int):
            for i in range(set_size):
                for size in range(sample_size):
                    self.smp_enc += self.im_feat[size] ^ self.im_pos[size]
                self.set_enc += hdc.quant(self.smp_enc,
                                          thre=(2 ** (self.cfg.SMP_DW - 1) - 1))
                self.smp_enc.zero_()
            self.amem[self.label] = hdc.quant(self.set_enc, thre=threshold)
        else:
            raise TypeError("Configuration must be integers.")

    def feat(self, set, sample):
        """
        Function
        ===
        Fetch the feature and convert to integer

        Input
        ---
        sample:
        """
        return int(hdc.tensor2binStr(self.im_feat[sample]), 2)

    def pos(self, set, sample):
        """
        Function
        ===
        Fetch the position and convert to integer

        Input
        ---
        sample:
        """
        return int(hdc.tensor2binStr(self.im_pos[sample]), 2)

    def am(self, label):
        return self.amem[label]


def handle_dut(dut):
    # NOTE: cocotb reads the data of the last cycle!!!
    # handle the reading logic properly.
    def printSig(attrs=""):
        """
        Function
        ===
        A closure function to print the value of an internal signal of DUT.

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
