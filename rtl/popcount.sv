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
//          XOR all the bits
// timing:
//////////////////////////////////////////////////////////////////////////////////

module popcount #(
    parameter DW = 8
) (
    input wire [DW - 1 : 0] data,
    output logic [$clog2(DW) - 1 : 0] pc
);
  // TODO: count the pop
  assign pc = |data;

endmodule
