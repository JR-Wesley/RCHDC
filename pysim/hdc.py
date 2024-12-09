import torch
import torch.nn.functional as F

def item_memory(dim, number, datatype='bipolar'):
    """
    Function
    ===
    Generate random vectors

    Parameter
    ---
    `data type`: the element is within 
    'bipolar' {-1, 1}
    'binary' {0, 1}

    Return
    ---
    A tensor with the size of (number, dim)
    """
    # Function `randint` ranges from 0 to 2 (0 included, 2 not included). 
    table = torch.randint(low=0, high=2, size=(number, dim), dtype=torch.int8)

    if datatype == 'bipolar':
        table[table == 0] = -1
    elif datatype == 'binary':
        pass
    else:
        raise ValueError('Sorry, currently only supporting bipolar datatype.')
    
    return table

def quant(hv, thre, datatype='bipolar'):
    """
    Function
    ===
    Quantinize the element in the HV. 
    Range > thre and <= thre

    Parameter
    ---
    `data type`: the element is within 
    'bipolar' {-1, 1}
    'binary' {0, 1}

    """
    if datatype == 'bipolar':
        return torch.where(hv > thre, torch.ones_like(hv),
                                    torch.full_like(hv, -1))    
    elif datatype == 'binary':
        return torch.where(hv > thre, torch.ones_like(hv),
                                    torch.full_like(hv, 0))
    else:
        raise ValueError('Sorry, currently only supporting bipolar datatype.')

"""
Convert the format between string, int, tensor for comparison.
"""
def num2tensor(num, datawidth):
    """
    Function
    ===
    Convert a number to a torch.tensor with {0, 1}.

    Exmaple
    ---
    0b0101 -> [0, 1, 0, 1]
    """
    return torch.tensor([((num >> 1) & 1) for i in range(datawidth - 1, -1, -1)],
                        dtype=torch.uint8)

def binStr2tensor(binStr, datawidth):
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
    # 去除二进制字符串的前缀'0b'
    binary_str = binStr[2:]
    # 将字符串转换为整数列表
    bin_list = [int(bit) for bit in binary_str]
    if len(bin_list) < datawidth:
        bin_list = [0] * (datawidth - len(bin_list)) + bin_list
    else:
        bin_list = bin_list[-datawidth:]

    return torch.tensor(bin_list, dtype=torch.int8)

def tensor2binStr(tensor):
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
