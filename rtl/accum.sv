
// add one bits for HDC
module accum #(
    parameter DW = 8 
    )(
    input wire clk, rst_n,
    input wire clr,
    input wire en,
    input wire data,
    output logic [DW - 1 : 0] acc
);
    logic [DW - 1 : 0] acc_next;
    assign acc_next = clr ? '0 :
                    en ? (acc + data) : acc;

    always_ff@(posedge clk, negedge rst_n) begin
        if(rst_n) acc <= '0;
        else acc <= acc_next;
    end

endmodule

// module accum #(
//     parameter DW = 8 
//     )(
//     input wire clk, rst_n,
//     input wire clr,
//     input wire en,
//     input wire [DW - 1 : 0] data,
//     output logic [DW - 1 : 0] acc
// );
//     logic [DW - 1 : 0] acc_next;
//     assign acc_next = clr ? '0 :
//                     en ? (acc + data) : acc;

//     always_ff@(posedge clk, negedge rst_n) begin
//         if(rst_n) acc <= '0;
//         else acc <= acc_next;
//     end

// endmodule

module accumMod #(
    parameter M = 100 
    )(
    input wire clk, rst_n,
    input wire clr,
    input wire en,
    input wire [$clog2(M) - 1 : 0] data,
    output logic [$clog2(M) - 1 : 0] acc
);
    logic [$clog2(M) - 1 : 0] acc_next;

    assign acc_mod = (acc_next >= M || acc_next < acc) ? 
                    (acc_next - M) : (acc + data);

    assign acc_next = clr ? '0 :
                    en ? acc_mod : acc;

    always_ff@(posedge clk, negedge rst_n) begin
        if(rst) acc <= '0;
        else acc <= acc_next;
    end

endmodule
