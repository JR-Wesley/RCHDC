//////////////////////////////////////////////////////////////////////////////////
// Company: EDA Lab, Shanghai, China
// Engineer: Hanyu Zhang
// 
// Create Date: 2024/11/07
// Description: definination of parameters
//              
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// 
//////////////////////////////////////////////////////////////////////////////////

`ifndef _DEFINE_SV_
`define _DEFINE_SV_

`define DIM         1024

// the size of one sample and its data width
`define SMP_SIZE    28 * 28
`define SMP_DW      $clog2(`SMP_SIZE)

// the number of the train samples and its data width
`define SMP_NUM     256
`define SMP_NUM_DW  $clog2(`SMP_NUM)

// the number of classes and its data width
`define CLS_NUM     10
`define CLS_DW      $clog2(`CLS_NUM)

`endif
