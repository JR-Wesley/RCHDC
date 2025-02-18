//////////////////////////////////////////////////////////////////////////////////
// Company: EDA Lab, Shanghai, China
// Engineer: Hanyu Zhang
// Create Date: 2024/11/07
// Description: definination of parameters
// Revision:
// Revision 0.01 - File Created
//////////////////////////////////////////////////////////////////////////////////

`ifndef __DEFINE_SV__
`define __DEFINE_SV__

// NOTE: parameters set for simulation
`define DIM 16

//      state      definition
`define TRAIN 1'b0
`define PREDICT 1'b1

//      the        size     of one     sample and     its  data width
`define SMP_SIZE 14
`define SMP_DW $clog2(`SMP_SIZE + 1)

//      the        number   of the     train  samples and  its  data width
`define SET_SIZE 14
`define SET_DW $clog2(`SET_SIZE + 1)

//      the        number   of classes and    its     data width
`define CLS_NUM 16
`define CLS_DW $clog2(`CLS_NUM)

typedef logic [`SMP_DW - 1 : 0] smpw_t;
typedef logic [`SET_DW - 1 : 0] setw_t;
typedef logic [`DIM  - 1 : 0] dw_t;
typedef logic [`CLS_DW  - 1 : 0] clsw_t;

`define FFARN(__q, __d, __clk, __arst_n) \
  always_ff @(posedge (__clk), negedge (__arst_n)) begin \
    if (!__arst_n) __q <= '0; \
    __q <= (__d); \
  end

`define FFARNE(__q, __d, __en, __clk, __arst_n) \
  always_ff @(posedge (__clk), negedge (__arst_n)) begin \
    if (!__arst_n) __q <= '0; \
    if (__en) __q <= (__d); \
  end

`endif
