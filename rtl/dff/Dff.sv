//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//          a parameterized DFF module
// timing:
//          one-cycle
//////////////////////////////////////////////////////////////////////////////////

`ifndef __DFF_SV__
`define __DFF_SV__

module Dff #(
    parameter integer DW = 32
) (
  input  wire               clk,
  input  wire  [DW - 1 : 0] data,
  output logic [DW - 1 : 0] qout
);

  always_ff @(posedge clk) begin : dff
    qout <= data;
  end

endmodule

`endif

