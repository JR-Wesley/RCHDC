
module Counter #(
    parameter M = 100
)(
    input wire clk, rst_n,
    input wire en,
    output logic [$clog2(M) - 1 : 0] cnt,
    output logic co
);
    assign co = en & (cnt == M - 1);

    logic [$clog2(M) - 1 : 0] cnt_inc;
    logic [$clog2(M) - 1 : 0] cnt_next;
    assign cnt_inc = (cnt < M - 1) ? cnt + 1'b1 : '0;
    assign cnt_next = en ? cnt_inc : cnt;

    always_ff@(posedge clk, negedge rst_n) begin
        if(rst) cnt <= '0;
        else cnt <= cnt_next;
    end
endmodule

module CounterMax #(
    parameter DW = 8
)(
    input wire clk, rst_n, en,
    input wire [DW - 1 : 0] max,
    output logic [DW - 1 : 0] cnt,
    output logic co
);
    assign co = en & (cnt == max);

    logic cnt_max = (cnt < max) ? cnt + 1'b1 : '0;

    logic [DW - 1 : 0] cnt_next;
    assign cnt_next = en ? cnt_max : cnt;

    always_ff@(posedge clk, negedge rst_n) begin
        if(!rst_n) cnt <= '0;
        else cnt <= cnt_next;
    end

endmodule
