//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//          calculate the `Euclid` similarity of two vectors
// parameter:
// input:
//           a, b: two vectors
// output:
//           simi: the similarity
// design:
//          tree adder
// timing:
//          one-cycle
//////////////////////////////////////////////////////////////////////////////////
// `include "define.sv"
`define DIM 1024
module similarity (
    input wire clk,
    input wire [`DIM - 1 : 0] a,
    input wire [`DIM - 1 : 0] b,
    output logic [$clog2(`DIM) - 1 : 0] simi
);
    logic [`DIM - 1 : 0] xor_;
    assign xor_ = a ^ b;
    localparam ADDER_LENGTH = $clog2(`DIM);

// main body of the adder tree
    generate
        for (genvar stg = 0; stg < ADDER_LENGTH; stg++) begin : g_adder_stg
            logic [stg : 0] addend1[`DIM >> (stg + 1)];
            logic [stg : 0] addend2[`DIM >> (stg + 1)];
            logic [stg + 1 : 0] sum[`DIM >> (stg + 1)];
            for (genvar i = 0; i < (`DIM >> (stg + 1)); i++) begin : g_adder_div_half
                assign sum[i] = addend1[i] + addend2[i];
            end
        end
    endgenerate

    // connect adjacent stage except the input and output stage
    generate
        for (genvar stg = 1; stg < ADDER_LENGTH; stg++) begin : g_addend_assign
            for (genvar i = 0; i < (`DIM >> (stg + 1)); i++) begin : g_add
                assign g_adder_stg[stg].addend1[i] = g_adder_stg[stg - 1].sum[2 * i];
                assign g_adder_stg[stg].addend2[i] = g_adder_stg[stg - 1].sum[2 * i + 1];                   
            end
       end
    endgenerate

    // input
    generate
        for (genvar i = 0; i < (`DIM >> 1); i++) begin : g_in_addend_assign
            assign g_adder_stg[0].addend1[i] = xor_[2 * i];
            assign g_adder_stg[0].addend2[i] = xor_[2 * i + 1];
        end
    endgenerate

    // output
    dff #(
      .DW(ADDER_LENGTH)
      ) ff (
        .clk    (clk),
        .data   (g_adder_stg[ADDER_LENGTH - 1].sum[0][ADDER_LENGTH-:1]),
        .qout   (simi)
        );

endmodule
