//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//           encode input data
// parameter:
//           CNT_W: max counter width
// input:
//           cnt: the number of input feature
//           data: input data
// output:
//           enc: encoded data
// design:
// timing:
//          Add `cnt` data together, output after `cnt` cycles.
//////////////////////////////////////////////////////////////////////////////////
`ifndef __ENCODER_SV__
`define __ENCODER_SV__

`include "Define.sv"
`include "./cnt/Counter.sv"
`include "./cnt/Inc.sv"

module Encoder #(
    parameter int  CNT_W = 8,
    parameter type cw_t  = logic [CNT_W - 1 : 0]
) (
  input  logic clk,
  input  logic rst_n,
  input  logic clr,
  input  logic en,
  input  dw_t  data,
  output dw_t  enc
);

  cw_t cnt, thre;
  Counter #(
      .M(2 ** CNT_W)
  ) elemCnt (
    .*,
    .co()
  );
  assign thre = cnt >> 1;

  generate
    for (genvar d = 0; d < `DIM; d++) begin : g_sample
      cw_t im_bit_nb;

      // accumulate each element in a sample
      Inc #(
          .DW(CNT_W)
      ) bitAcc (
        .*,
        .one_bit(data[d]),
        .acc    (im_bit_nb)
      );

      assign enc[d] = (im_bit_nb > thre) ? 1'b1 : 1'b0;
    end
  endgenerate

endmodule

`endif

