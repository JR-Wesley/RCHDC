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

module Inc #(
    parameter int  DW   = 8,
    parameter type dw_t = logic [DW - 1 : 0]
) (
  input  logic clk,
  input  logic rst_n,
  input  logic clr,
  input  logic en,
  input  logic one_bit,
  output dw_t  acc
);
  dw_t acc_next;
  /* verilator lint_off WIDTHEXPAND */
  assign acc_next = acc + one_bit;
  /* verilator lint_on WIDTHEXPAND */

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) acc <= '0;
    else if (clr) acc <= '0;
    else if (en) acc <= acc_next;
  end

endmodule

`endif

