# HDC


# Arch

## encoding

### 两级量化

1. 每个 sample，如一张图片、一句话，在累加后量化。
2. 所有样本完成后，每个分类根据计数器的值二分量化。


### 硬件开销

参数设置：
- 维数: 1024
- 类别: 32
- 样本 size: 1024 (28*28)
- 类别 数量: 1024例

sample  encoding:

class AM & footprint:

simi humming (DIM )

## 子模块

1. 求 n 个数的最小值


2. pop count/ 统计 1 的个数


# 验证

这里使用了 <a href="">COCOTB</a> 作为快速验证框架，因为可以快速地和软件算法结果对比。

读取 dut 转换为 tensor 与 reference model 对比。

## 编译工具

For Iverilog, access [0] in array [0:0] raises an error.
iverilog 编译 single element array 时报错，<a href="https://github.com/steveicarus/iverilog/pull/1115">issue</a> 此 PR 还未更新至 release，需要更新最新代码。

# log
smp_set.vcd: sample and set encoding.
basic_train_predict.vcd: quantinization

