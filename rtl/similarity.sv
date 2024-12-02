//////////////////////////////////////////////////////////////////////////////////
// Company: EDA Lab, Shanghai, China
// Engineer: Hanyu Zhang
// 
// Create Date: 2024/11/07
// Description: similarity measurement with Humming distance
//              the adder chain needs to be optimized
//              cosine may be supported in the future
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// 
//////////////////////////////////////////////////////////////////////////////////

`include "define.sv"

module similarity (
    input wire clk, rst_n,
    input wire [`DIM - 1 : 0] a,
    input wire [`DIM - 1 : 0] b,
    output logic [$clog2(`DIM) - 1 : 0] simi
);
    logic [`DIM - 1 : 0] xor_;
    assign xor_ = a ^ b;
    localparam ADDER_LENGTH = $clog2(`DIM);

// main body of the adder tree
    generate
        for (genvar stg = 0; stg < ADDER_LENGTH; stg++) begin : adder_stg
            logic [stg : 0] addend1[`DIM >> (stg + 1)];
            logic [stg : 0] addend2[`DIM >> (stg + 1)];
            logic [stg + 1 : 0] sum[`DIM >> (stg + 1)];
            for (genvar i = 0; i < (`DIM >> (stg + 1)); i++) begin : adder_div_half
                assign sum[i] = addend1[i] + addend2[i];
            end
        end
    endgenerate

    // connect adjacent stage except the input and output stage
    generate
        for (genvar stg = 1; stg < ADDER_LENGTH; stg++) begin : addend_assign
            for (genvar i = 0; i < (`DIM >> (stg + 1)); i++) begin
                assign adder_stg[stg].addend1[i] = adder_stg[stg - 1].sum[2 * i];
                assign adder_stg[stg].addend2[i] = adder_stg[stg - 1].sum[2 * i + 1];                   
            end
       end
    endgenerate
    
    // input
    generate
        for (genvar i = 0; i < (`DIM >> 1); i++) begin : in_addend_assign
            assign adder_stg[0].addend1[i] = xor_[2 * i];
            assign adder_stg[0].addend2[i] = xor_[2 * i + 1];
        end
    endgenerate

    // output
    assign simi = adder_stg[ADDER_LENGTH - 1].sum[0];

endmodule