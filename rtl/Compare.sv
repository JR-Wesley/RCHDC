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
    parameter int  DW     = 32,
    parameter int  CLSW   = 16,
    parameter type dw_t   = logic [  DW - 1 : 0],
    parameter type clsw_t = logic [CLSW - 1 : 0]
) (
  input  dw_t   a,
  input  clsw_t numa,
  input  dw_t   b,
  input  clsw_t numb,
  output dw_t   max,
  output clsw_t numMax
);

  logic res;
  always_comb begin
    res = (a < b);
    max = res ? a : b;
    numMax = res ? numa : numb;
  end

endmodule

`endif
