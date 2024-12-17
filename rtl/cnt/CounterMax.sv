`ifndef __COUNTER_MAX_SV__
`define __COUNTER_MAX_SV__

module CounterMax #(
    parameter integer DW = 8
) (
  input  wire               clk,
  input  wire               rst_n,
  input  wire               en,
  input  wire  [DW - 1 : 0] max,
  output logic [DW - 1 : 0] cnt,
  output logic              co
);

  assign co = en & (cnt == max);

  logic [DW - 1 : 0] cnt_inc;
  assign cnt_inc = (cnt < max) ? cnt + 1'b1 : '0;

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) cnt <= '0;
    else if (en) cnt <= cnt_inc;
  end

endmodule

`endif
