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
`include "./cnt/CounterMax.sv"
`include "./cnt/Inc.sv"

module Encoder #(
    parameter int  CNT_W = 8,
    parameter type cw_t  = logic [CNT_W - 1 : 0]
) (
  input  logic clk,
  input  logic rst_n,
  input  logic clr,
  input  logic en,
  input  cw_t  cnt,
  input  dw_t  data,
  input  cw_t  thre,
  output dw_t  enc,
  output logic done
);

  // samples counter
  CounterMax #(
      .DW(CNT_W)
  ) elemCnt (
    .*,
    .max(cnt),
    .cnt(),
    .co (done)
  );

  generate
    for (genvar d = 0; d < `DIM; d++) begin : g_sample
      cw_t im_bit_nb;

      // NOTE: transformation from {-1, 1} to {0, 1}
      // bind operation using XOR ^
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

