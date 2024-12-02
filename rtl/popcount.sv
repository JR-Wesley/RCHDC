//////////////////////////////////////////////////////////////////////////////////
// Company: EDA Lab, Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//              
// parameter:
//          
// input: 
//          
// output:
//          
// design:
//          
// timing:
// 
//////////////////////////////////////////////////////////////////////////////////

module popcount #(
    parameter DW = 8
) (
    input wire [DW - 1 : 0] data,
    output logic [$clog2(DW) - 1 : 0] pc
);
    assign pc = |data;

endmodule