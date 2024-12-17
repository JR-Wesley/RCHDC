//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//          compare the max of two input
// parameter:
// input:
// output:
// design:
// timing:
//////////////////////////////////////////////////////////////////////////////////
`ifndef __COMPARE_SV__
`define __COMPARE_SV__

`include "Define.sv"

module Compare #(
    parameter integer DW   = 32,
    parameter integer CLSW = 16
) (
  input  wire  [  DW - 1 : 0] a,
  input  wire  [CLSW - 1 : 0] numa,
  input  wire  [  DW - 1 : 0] b,
  input  wire  [CLSW - 1 : 0] numb,
  output logic [  DW - 1 : 0] max,
  output logic [CLSW - 1 : 0] numMax
);

  logic res;
  assign res = (a < b);
  assign max = res ? a : b;
  assign numMax = res ? numa : numb;

endmodule

`endif
