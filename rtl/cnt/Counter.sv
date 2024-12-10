//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//           A modular counter
// parameter:
//           M: the mod
// input:
//           en: enable
// output:
//           cnt: the counter
//           co: carry out at the last cycle
// design:
// timing:
//////////////////////////////////////////////////////////////////////////////////
`ifndef __COUNTER_SV__
`define __COUNTER_SV__

module Counter #(
    parameter M = 100
) (
    input  wire                      clk,
    input  wire                      rst_n,
    input  wire                      en,
    output logic [$clog2(M) - 1 : 0] cnt,
    output logic                     co
);
  assign co = en & (cnt == M - 1);

  logic [$clog2(M) - 1 : 0] cnt_inc;
  logic [$clog2(M) - 1 : 0] cnt_next;
  assign cnt_inc = (cnt < M - 1) ? cnt + 1'b1 : '0;

  assign cnt_next = en ? cnt_inc : cnt;

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) cnt <= '0;
    else cnt <= cnt_next;
  end

endmodule

`endif

