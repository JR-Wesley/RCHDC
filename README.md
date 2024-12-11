# HDC


# Arch

## encoding

### 两级量化

## train



## predict



## 子模块

1. 求 n 个数的最小值


2. pop count/ 统计 1 的个数


# 验证

这里使用了 <a href="">COCOTB</a> 作为快速验证框架，因为可以快速地和软件算法结果对比。

读取 dut 转换为 tensor 与 reference model 对比。

## 编译工具

iverilog 编译 single element array 时报错，<a href="https://github.com/steveicarus/iverilog/pull/1115">issue</a> 此 PR 还未更新至 release，需要更新最新代码。

# log
counter_timing.vcd:两次编码的计数器时序。

