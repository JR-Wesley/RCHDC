import torch
from config import Config
from cocotb.triggers import RisingEdge
import imp
from my_package import preData, fig, hdc


def num2tensor(num, datawidth) -> torch.Tensor:
    """
    Function
    ===
    Convert a number to a torch.tensor with {0, 1}.

    Exmaple
    ---
    0b0101 -> [0, 1, 0, 1]
    """
    return torch.tensor([((num >> 1) & 1) for i in range(datawidth - 1, -1, -1)],
                        dtype=torch.int8)


def binStr2tensor(binStr: str, datawidth, prefix=True) -> torch.Tensor:
    """
    Function
    ===
    Convert a binary string to a torch.tensor.

    Parameter
    ---
    binary_str (str): A binary string starting with '0b'.

    Return
    --
    torch.Tensor: A tensor containing the binary digits.

    Exmaple
    ---
    0b0101 -> [0, 1, 0, 1]
    """
    # 是否去除二进制字符串的前缀'0b'
    if prefix:
        binary_str = binStr[2:]
    else:
        binary_str = binStr
        pass

    # 将字符串转换为整数列表
    bin_list = [int(bit) for bit in binary_str]
    if len(bin_list) < datawidth:
        bin_list = [0] * (datawidth - len(bin_list)) + bin_list
    else:
        bin_list = bin_list[-datawidth:]

    return torch.tensor(bin_list[::-1], dtype=torch.int8)


def tensor2binStr(tensor: torch.Tensor) -> str:
    """
    Function
    ===
    Convert a torch.tensor containing binary digits to a binary string.

    Parameter
    ---
    tensor (torch.Tensor): A 1D tensor containing only 0s and 1s.

    Return
    ---
    str: A binary string representation of the tensor.
    """
    # 将tensor转换为Python列表
    binary_list = tensor.tolist()
    # 将列表中的每个数字转换为字符串
    binary_str_list = [str(bit) for bit in binary_list]
    # 反转字符串列表，因为索引0对应于最高位
    binary_str_list.reverse()
    # 将反转后的字符串列表连接成一个字符串
    binary_str = ''.join(binary_str_list)
    # 在字符串前加上'0b'前缀
    return '0b' + binary_str


class ref_mnist:
    device = torch.device("cuda")
    dataset_path = "../../../../py/data"
    batch_size = 256
    dim = 1024
    datatype = 'binary'  # 'binary' {0, 1} 'bipolar' {-1, 1}
    operation = 'MAP'

    img_size = 28 * 28  # size of MNIST image
    img_gray_val = 256  # maximum gray scale of MNIST image
    num_class = 10  # number of classes inside MNIST dataset

    if_quant = True

    def __init__(self):
        self.device = torch.device(
            "cuda" if torch.cuda.is_available() else "cpu")
        self.train_iter, self.test_iter = preData.load_data_mnist(
            path=self.dataset_path, batch_size=self.batch_size)
        self.position_IM = hdc.item_memory(
            dim=self.dim, number=self.img_size, datatype=self.datatype)
        self.grayscale_IM = hdc.item_memory(
            dim=self.dim, number=self.img_gray_val, datatype=self.datatype)
        self.AM = torch.zeros(
            size=(self.num_class, self.dim), dtype=torch.int32)
        self.position_IM, self.grayscale_IM, self.AM = self.position_IM.to(
            self.device), self.grayscale_IM.to(self.device), self.AM.to(self.device)

    def train(self):
        hdc.train(AM=self.AM, train_iter=self.train_iter, test_iter=self.test_iter,
                  pos_IM=self.position_IM, val_IM=self.grayscale_IM, num_classes=self.num_class,
                  if_quant=self.if_quant, datatype=self.datatype)

    def hw_encode(self, img):
        img = img.to(self.device)
        img = torch.round(img.reshape(-1) * 255).to(torch.int32)

        pos_indices = torch.arange(len(img)).unsqueeze(1)
        pixel_indices = img.unsqueeze(1)
# Ensure indices are within valid bounds
        assert torch.all(pixel_indices >= 0) and torch.all(
            pixel_indices < self.grayscale_IM.size(0)), "Pixel indices out of bounds"

        return (self.position_IM[pos_indices], self.grayscale_IM[pixel_indices])


async def mnist_train(dut, ref_model, console):
    """
    Func
    ===
    Train MNIST dataset in HW.

    """
    # ref_model.train()

    dut.state.value = 0
    X_iter, Y_iter = next(iter(ref_model.train_iter))
    # iterate over a batch of train dataset
    num = 0
    for sample, label in zip(X_iter, Y_iter):
        pos, val = ref_model.hw_encode(img=sample)
        # shape: (len(img), vector_size)
        dut.smp_clr.value = 0
        dut.smp_en.value = 1
        dut.label.value = label.item()
        for i in range(ref_model.img_size):
            dut.im_pos.value = int(tensor2binStr(pos[i][0]), 2)
            dut.im_value.value = int(tensor2binStr(val[i][0]), 2)
            await RisingEdge(dut.clk)

        # sample done assert at the next cycle.
        console.print(
            f"Timing: sample {num}, label {label:0{3}d} done.", style="blue")

        dut.smp_en.value = 0
        # clear the spatio_enc for the next sample
        dut.smp_clr.value = 1
        await RisingEdge(dut.clk)

        hw_enc = binStr2tensor(str(dut.smp_enc.value.binstr),
                               ref_model.dim, prefix=False)
        sw_enc = hdc.encode(sample, ref_model.position_IM,
                            ref_model.grayscale_IM, if_quant=True, datatype=ref_model.datatype)
        hw_enc = hw_enc.to(ref_model.device)
        assert torch.equal(hw_enc, sw_enc), f"HW AM not equal"
        dut.smp_clr.value = 0
        await RisingEdge(dut.clk)

        num += 1
        if (num == 8):
            break

    # set done assert at the next cycle.
    console.print(
        f"Timing: A batch set - {ref_model.batch_size} samples done.", style="blue")

    dut.set_clr.value = 1
    await RisingEdge(dut.clk)
    dut.set_clr.value = 0


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

        self.smp_enc = torch.zeros(self.cfg.DIM, dtype=torch.int8)
        self.set_enc = torch.zeros(self.cfg.CLS_NUM, self.cfg.DIM)

        self.smp_cnt = 0
        self.set_cnt = [0] * self.cfg.CLS_NUM
        self.amem = torch.zeros(
            (self.cfg.CLS_NUM, self.cfg.DIM), dtype=torch.int8)
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
                self.set_cnt[i] += 1
                self.smp_enc.zero_()
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
        return int(tensor2binStr(self.im_feat[sample]), 2)

    def pos(self, sample):
        """
        Function
        ===
        Fetch the position and convert to integer

        Input
        ---
        sample:
        """
        return int(tensor2binStr(self.im_pos[sample]), 2)

    def AM(self, label):
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


def compare(dut, ref_model, console, hw_enc):
    # conver to tensor and rotate
    hw_set_enc = torch.zeros(ref_model.set_size, ref_model.dim)
    for i in range(ref_model.set_size):
        hw_set_enc[i] = binStr2tensor(
            str(dut.AM[i].value.binstr), ref_model.cfg.DIM, prefix=False)
        assert torch.equal(hw_set_enc[i], ref_model.am(i)), f"HW AM not equal"
    console.print(
        "Function: all the AM HW value equals to ref model", style="bold red")

    cls_simi = [len(torch.nonzero(ref_model.am(i) ^ hw_enc))
                for i in range(ref_model.set_size)]
    min_val = min(cls_simi)
    min_idx = cls_simi.index(min_val)
    assert (min_idx == dut.cls_min.value.integer), f"predict min similarit not equal"
    console.print(
        "Function: HW predicted min simi index equals to ref model", style="bold red")
