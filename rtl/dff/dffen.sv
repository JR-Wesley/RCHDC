
module dffen #(
    parameter DW = 32
) (
    input wire clk,
    input wire en,
    input wire [DW - 1 : 0]data,
    output logic [DW - 1 : 0] qout
);

    always_ff @( posedge clk) begin : dff_en
        if(en) begin
            qout <= data;
        end
    end

endmodule