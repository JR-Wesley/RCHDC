`ifndef __ACCUMULATOR_SV__
`define __ACCUMULATOR_SV__

module Accumulator #(
    parameter integer DW = 8
) (
  input  wire               clk,
  input  wire               rst_n,
  input  wire               clr,
  input  wire               en,
  input  wire  [DW - 1 : 0] d,
  output logic [DW - 1 : 0] acc
);

  logic [DW - 1 : 0] acc_next;
  assign acc_next = acc + d;

  // priority:
  // clr: set to zero
  // en: enable register or hold
  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) acc <= '0;
    else if (clr) acc <= '0;
    else if (en) acc <= acc_next;
  end

endmodule

`endif
