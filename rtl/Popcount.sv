//////////////////////////////////////////////////////////////////////////////////
// Company: EDA Lab, Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//          count the number of 1's in data
// parameter:
//          DW: data width
// input:
//          data
// output:
//          pc:the population count
// design:
// timing:
//////////////////////////////////////////////////////////////////////////////////
`ifndef __POPCOUNT_SV__
`define __POPCOUNT_SV__

module Popcount #(
    parameter int DW = 32
) (
  input  logic [        DW - 1 : 0] data_i,
  output logic [$clog2(DW) - 1 : 0] pc_o
);

  // TODO: tree-based popcount
  always_comb begin
    pc_o = 0;
    for (int i = 0; i < DW; i++) begin
      pc_o += data_i[i];
    end
  end

endmodule

`endif

