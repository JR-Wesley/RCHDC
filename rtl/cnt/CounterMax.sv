//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//           A maximum counter
// parameter:
//           DW: max data width of the counter
// input:
//           en: enable
//           max: the maximum of the counter
// output:
//           cnt: the counter
//           co: carry out at the last cycle
// design:
// timing:
//////////////////////////////////////////////////////////////////////////////////
`ifndef __COUNTERMAX_SV__
`define __COUNTERMAX_SV__

module CounterMax #(
    parameter DW = 8
) (
    input  wire               clk,
    input  wire               rst_n,
    input  wire               en,
    input  wire  [DW - 1 : 0] max,
    output logic [DW - 1 : 0] cnt,
    output logic              co
);
  assign co = en & (cnt == max);

  logic [DW - 1 : 0] cnt_max;
  assign cnt_max = (cnt < max) ? cnt + 1'b1 : '0;

  logic [DW - 1 : 0] cnt_next;
  assign cnt_next = en ? cnt_max : cnt;

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) cnt <= '0;
    else cnt <= cnt_next;
  end

endmodule

`endif

