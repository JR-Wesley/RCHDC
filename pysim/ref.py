import torch
import hdc
from config import Config


class ref_model:
    def __init__(self, cfg_file_path):
        self.cfg = Config(cfg_file_path)
        self.cfg.print_vars()
        self.dim = self.cfg.DIM
        self.sample_size = self.cfg.SMP_SIZE
        self.set_size = self.cfg.SET_SIZE

        self.im_feat = hdc.item_memory(
            dim=self.cfg.DIM, number=self.cfg.SMP_SIZE)
        self.im_pos = hdc.item_memory(
            dim=self.cfg.DIM, number=self.cfg.SMP_SIZE)

        self.smp_enc = torch.zeros(self.cfg.DIM, dtype=torch.uint8)
        self.set_enc = torch.zeros(self.cfg.CLS_NUM, self.cfg.DIM)

        self.smp_cnt = 0
        self.set_cnt = [0] * self.cfg.CLS_NUM
        self.amem = torch.zeros(
            (self.cfg.CLS_NUM, self.cfg.DIM), dtype=torch.uint8)
        self.label = range(self.cfg.SMP_SIZE)

    def train(self):

        if isinstance(self.set_size, int) and isinstance(self.sample_size, int):
            for i in range(self.set_size):
                for size in range(self.sample_size):
                    # a trick to distinguish between samples
                    index = i + size
                    if index >= self.set_size:
                        index -= self.set_size
                    self.smp_enc += self.im_feat[index] ^ self.im_pos[size]
                self.set_enc[i] += hdc.quant(self.smp_enc,
                                             thre=(self.sample_size // 2))
                # reset sample encoding register
                self.smp_enc.zero_()
                self.set_cnt[i] += 1
            for i in range(self.set_size):
                self.amem[i] = hdc.quant(
                    self.set_enc[i], thre=(self.set_cnt[i] // 2))
            # reset set counter
            self.set_cnt = [0] * self.cfg.CLS_NUM
        else:
            raise TypeError("Configuration must be integers.")

    def feat(self, sample):
        """
        Function
        ===
        Fetch the feature and convert to integer

        Input
        ---
        sample:
        """
        return int(hdc.tensor2binStr(self.im_feat[sample]), 2)

    def pos(self, sample):
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


def compare(dut, ref_model, console):
    # conver to tensor and rotate
    hw_set_enc = torch.zeros(ref_model.set_size, ref_model.dim)
    for i in range(ref_model.set_size):
        hw_set_enc[i] = hdc.binStr2tensor(
            str(dut.AM[i].value.binstr), ref_model.cfg.DIM, prefix=False)
        assert torch.equal(hw_set_enc[i], ref_model.am(i)), f"HW AM not equal"
    console.print(
        "Function: all the AM HW value equals to ref model", style="bold red")

    cls_simi = [len(torch.nonzero(ref_model.am(i)))
                for i in range(ref_model.set_size)]
    min_val = min(cls_simi)
    min_idx = cls_simi.index(min_val)
    print(min_idx, dut.cls_min.value)
