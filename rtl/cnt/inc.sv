//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//          accumulate by 1 bit
// parameter:
// input:
//           ont_bit: inc or not
// output:
//           acc: the accumulated result
// design:
// timing:
//          one-cycle
//////////////////////////////////////////////////////////////////////////////////
`ifndef __INC_SV__
`define __INC_SV__

module inc #(
    parameter DW = 8
) (
    input  wire               clk,
    input  wire               rst_n,
    input  wire               clr,
    input  wire               en,
    input  wire               one_bit,
    output logic [DW - 1 : 0] acc
);
  logic [DW - 1 : 0] acc_next;
  /* verilator lint_off WIDTHEXPAND */
  assign acc_next = clr ? '0 : en ? (acc + one_bit) : acc;
  /* verilator lint_on WIDTHEXPAND */

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) acc <= '0;
    else acc <= acc_next;
  end

endmodule

`endif

