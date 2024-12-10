//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//           A accumulator
// parameter:
//           DW
// input:
//           en: enable
//           max: the data to accumulate
// output:
//           acc: the accumulated result
//////////////////////////////////////////////////////////////////////////////////

`ifndef __ACCUM_SV__
`define __ACCUM_SV__

module accum #(
    parameter DW = 8
) (
    input  wire               clk,
    input  wire               rst_n,
    input  wire               clr,
    input  wire               en,
    input  wire  [DW - 1 : 0] data,
    output logic [DW - 1 : 0] acc
);
  logic [DW - 1 : 0] acc_next;
  assign acc_next = clr ? '0 : en ? (acc + data) : acc;

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) acc <= '0;
    else acc <= acc_next;
  end

endmodule

`endif

