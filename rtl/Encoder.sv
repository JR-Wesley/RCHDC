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
    parameter integer CNT_W = 8
) (
  input  wire                  clk,
  input  wire                  rst_n,
  input  wire                  clr,
  input  wire                  en,
  input  wire  [CNT_W - 1 : 0] cnt,
  input  wire  [ `DIM - 1 : 0] data,
  input  wire  [CNT_W - 1 : 0] thre,
  output logic [ `DIM - 1 : 0] enc,
  output logic                 done
);

  // samples counter
  CounterMax #(
      .DW(CNT_W)
  ) elemCnt (
      .clk  (clk),
      .rst_n(rst_n),
      .en   (en),
      .max  (cnt),
      .cnt  (),
      .co   (done)
  );

  generate
    for (genvar d = 0; d < `DIM; d++) begin : g_sample
      logic [CNT_W - 1 : 0] im_bit_nb;

      // TODO: transformation from {-1, 1} to {0, 1}
      // bind operation using XOR ^
      // accumulate each element in a sample
      Inc #(
          .DW(CNT_W)
      ) bitAcc (
          .clk    (clk),
          .rst_n  (rst_n),
          .clr    (clr),
          .en     (en),
          .one_bit(data[d]),
          .acc    (im_bit_nb)
      );

      // count the 1's in each bit's sum.
      //      logic [$clog2(CNT_W) - 1 : 0] im_bit_pc;
      //      popcount #(
      //          .DW(CNT_W)
      // ) cnt (
      // .data(im_bit_nb),
      // .pc  (im_bit_pc)
      // );

      // if the MSB is 1, the bit is set to 1; else to 0.
      // dffen #(
      //     .DW(1)
      // ) ffEnc (
      //     .clk (clk),
      //     .en  (done),
      //     .data(im_bit_nb[CNT_W-1]),
      //     // .data(im_bit_pc[$clog2(CNT_W)-1]),
      //     .qout(enc[d])
      // );
      assign enc[d] = (im_bit_nb > thre) ? 1'b1 : 1'b0;
      // assign enc[d] = im_bit_nb[CNT_W-1];
    end
  endgenerate

endmodule

`endif

