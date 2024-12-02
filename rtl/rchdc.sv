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

module rchdc (
    input wire clk, rst_n,
    input wire [`DIM - 1 : 0] im_value,
    input wire [`DIM - 1 : 0] im_pos,
    input wire [`CLS_DW - 1 : 0] label
);
    // samples in
    logic smp_in, smp_done;

    CounterMax #(
        .DW (`SMP_DW   )
    ) elemCnt (
        .clk    (clk        ),
        .rst_n  (rst_n      ),
        .en     (smp_in    ),
        .max    (`SMP_SIZE      ),
        .cnt    (           ),
        .co     (smp_done  )
    );
    
    logic [`DIM - 1 : 0] am_sample;
    generate
        for (genvar d = 0; d < `DIM; d++) begin : sample
            logic [`SMP_DW - 1 : 0] im_bit_nb;

            // bind operation using XOR ^
            // accumulate each element in a sample
            accum #(
                .DW     (`SMP_DW    ) 
            ) bitAcc (
                .clk    (clk        ),
                .rst_n  (rst_n      ),
                .clr    (clear      ),
                .en     (smp_in     ),
                .data   (im_value[d] ^ im_pos[d]     ),
                .acc    (im_bit_nb  )
            );

            // count the 1's in each bit's sum.
            logic [$clog2(`SMP_DW) - 1 : 0] im_bit_pc;
            popcount #(
                .DW     (`SMP_DW   )
            ) cnt (
                .data   (im_bit_nb  ),
                .pc     (im_bit_pc  )
            );

            // if the MSB is 1, the bit is set to 1; else to 0.
            dffen #(
                .DW     (1              )
            ) cntff (
                .clk    (clk            ),
                .en     (smp_done       ),
                .data   (im_bit_pc[$clog2(`SMP_DW) - 1]   ),
                .qout   (am_sample[d]   )
            );
        end
    endgenerate

    logic train_done;
    CounterMax #(
        .DW     (`SMP_NUM_DW)
    ) smpCnt (
        .clk    (clk        ),
        .rst_n  (rst_n      ),
        .en     (smp_done   ),
        .max    (`SMP_NUM   ),
        .cnt    (           ),
        .co     (train_done )
    );
    
    logic [`SMP_NUM_DW - 1 : 0] sample_sum;
    accum #(
        .DW     (`SMP_NUM_DW) 
    ) sampleAcc (
        .clk    (clk        ),
        .rst_n  (rst_n      ),
        .clr    (clear      ),
        .en     (smp_in     ),
        .data   (im_bit_nb  ),
        .acc    (sample_sum )
    );

    logic [`DIM - 1 : 0] AM [`CLS_NUM - 1 : 0];

    always_ff@(posedge clk) begin
        if(train_done) AM[label] <= im_bit_nb;
    end


endmodule