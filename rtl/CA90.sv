//////////////////////////////////////////////////////////////////////////////////
// Company: EDA Lab, Shanghai, China
// Engineer: Hanyu Zhang
// Create Date: 2024/11/07
// Description: CA 90 rule generator
// Revision:
// Revision 0.01 - File Created
//////////////////////////////////////////////////////////////////////////////////

`include "define.sv"

module CA90 (
    //   input wire clk,
    //  input wire en,
    // 1 left, 0 right
    //    input wire l_or_r,
    input  wire  [`DIM - 1 : 0] vec,
    output logic [`DIM - 1 : 0] vec_next
);
  // TODO: CA90 rules for random generating
  logic [`DIM - 1 : 0] vec_left, vec_right;

  assign vec_left = {vec[`DIM-2 : 0], vec[`DIM-1]};
  assign vec_right = {vec[0], vec[`DIM-1 : 1]};

  assign vec_next = vec_left ^ vec_right;

endmodule
