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
    parameter int  DW   = 32,
    parameter type dw_t = logic [DW - 1 : 0]
) (
  input  dw_t a,
  input  dw_t b,
  output dw_t min
);

  always_comb begin
    min = (a < b) ? a : b;
  end

endmodule

`endif
