//////////////////////////////////////////////////////////////////////////////////
// Company: EDA Lab, Shanghai, China
// Engineer: Hanyu Zhang
// 
// Create Date: 2024/11/07
// Description: a parameterized DFF module 
//              priority:
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// 
//////////////////////////////////////////////////////////////////////////////////

module dff #(
    parameter DW = 32
) (
    input wire clk,
    input wire [DW - 1 : 0]data,
    output logic [DW - 1 : 0] qout
);

    always_ff @( posedge clk ) begin : dff
        qout <= data;
    end

endmodule