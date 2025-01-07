`ifndef __ACCUMULATOR_SV__
`define __ACCUMULATOR_SV__

module Accumulator #(
    parameter int  DW   = 8,
    parameter type dw_t = logic [DW - 1 : 0]
) (
  input  logic clk,
  input  logic rst_n,
  input  logic en,
  input  dw_t  d,
  output dw_t  acc
);

  dw_t acc_next;
  always_comb acc_next = acc + d;

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) acc <= '0;
    else if (en) acc <= acc_next;
  end

endmodule

`endif
