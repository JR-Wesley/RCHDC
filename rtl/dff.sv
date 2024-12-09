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

module dff #(
    parameter DW = 32
) (
    input wire clk,
    input wire [DW - 1 : 0] data,
    output logic [DW - 1 : 0] qout
);

  always_ff @(posedge clk) begin : dff
    qout <= data;
  end

endmodule

