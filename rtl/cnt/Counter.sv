`ifndef __COUNTER_SV__
`define __COUNTER_SV__

module Counter #(
    parameter integer M = 100
) (
  input  wire                      clk,
  input  wire                      rst_n,
  input  wire                      en,
  output logic [$clog2(M) - 1 : 0] cnt,
  output logic                     co
);

  assign co = en & (cnt == M - 1);

  logic [$clog2(M) - 1 : 0] cnt_inc;
  assign cnt_inc = (cnt < M - 1) ? cnt + 1'b1 : '0;

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) cnt <= '0;
    else if (en) cnt <= cnt_inc;
  end

endmodule

`endif
