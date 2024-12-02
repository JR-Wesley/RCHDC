
module testbench;
    logic [`DIM - 1 : 0] im;

    logic [`DIM - 1 : 0] 
    rchdc (
        .clk    (clk        ),
        .rst_n  (rst_n      ),
        input wire [`DIM - 1 : 0] im_value,
        input wire [`DIM - 1 : 0] im_pos,
        input wire [`CLS_DW - 1 : 0] label
    );

endmodule
