//////////////////////////////////////////////////////////////////////////////////
// Company: EDA Lab, Shanghai, China
// Engineer: Hanyu Zhang
// Create Date: 2024/11/07
// Description: definination of parameters
// Revision:
// Revision 0.01 - File Created
//////////////////////////////////////////////////////////////////////////////////

`ifndef _DEFINE_SV_
`define _DEFINE_SV_

`define DIM 1024

//      state      definition
`define TRAIN 1'b0
`define PREDICT 1'b1

//      the        size     of one     sample and     its  data width
// NOTE: for simulation
//      `define    SMP_SIZE 28 *       28
`define SMP_SIZE 3
`define SMP_DW $clog2(`SMP_SIZE)

//      the        number   of the     train  samples and  its  data width
// NOTE: for simulation
// `define SET_SIZE 256
`define SET_SIZE 2
`define SET_DW $clog2(`SET_SIZE)

//      the        number   of classes and    its     data width
`define CLS_NUM 10
`define CLS_DW $clog2(`CLS_NUM)

`endif
