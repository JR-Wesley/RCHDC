//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//           \sum im_pos * im_value
// parameter:
//           DIM:
// input:
//           feature
// output:
//           predict
// design:
//          two encoding:
// timing:
//          train:
//          predict:
//////////////////////////////////////////////////////////////////////////////////
`ifndef __RCHDC_SV__
`define __RCHDC_SV__

`include "./Define.sv"
`include "./Encoder.sv"
`include "./Similarity.sv"
`include "./FindMin.sv"

module Rchdc (
  input  wire                    clk,
  input  wire                    rst_n,
  input  wire                    set_clr,
  input  wire                    smp_clr,
  input  wire                    smp_en,
  input  wire  [  `DIM  - 1 : 0] im_value,
  input  wire  [  `DIM  - 1 : 0] im_pos,
  input  wire                    state,
  input  wire  [`CLS_DW - 1 : 0] label,
  output logic [`CLS_DW - 1 : 0] predict
);
  //==================== For training or predicting, encode one sample ====================
  logic [`SMP_DW - 1 : 0] smp_cnt;
  logic [`SMP_DW - 1 : 0] smp_thre;
  assign smp_thre = `SMP_DW'(`SMP_SIZE >> 1);
  logic [`DIM - 1 : 0] smp_enc;
  assign smp_cnt = `SMP_DW'(`SMP_SIZE - 1);
  logic smp_done;

  Encoder #(
      .CNT_W(`SMP_DW)
  ) spatio_enc (
      .clk  (clk),
      .rst_n(rst_n),
      .en   (smp_en),
      .clr  (smp_clr),
      .cnt  (smp_cnt),
      .data (im_value ^ im_pos),
      .thre (smp_thre),
      .enc  (smp_enc),
      .done (smp_done)
  );

  //==================== For training, sum up all the samples ====================
  logic set_en;
  logic [`SET_DW - 1 : 0] set_cnt;
  logic [`SET_DW - 1 : 0] set_thre;
  assign set_thre = `SET_DW'(`SET_SIZE >> 1);
  logic [`DIM - 1 : 0] set_enc;
  assign set_cnt = `SET_DW'(`SET_SIZE - 1);
  logic set_done;

  always_ff @(posedge clk) begin : wr_set_en
    if (smp_done) set_en <= '1;
    else set_en <= '0;
  end

  Encoder #(
      .CNT_W(`SET_DW)
  ) tempo_enc (
      .clk  (clk),
      .rst_n(rst_n),
      .en   (set_en),
      .clr  (set_clr),
      .cnt  (set_cnt),
      .data (smp_enc),
      .thre (set_thre),
      .enc  (set_enc),
      .done (set_done)
  );
  //==================== AM ====================
  logic [`DIM - 1 : 0] AM[`CLS_NUM];
  logic am_wr;

  always_ff @(posedge clk) begin : wr_am_en
    if (set_done) am_wr <= '1;
    else am_wr <= '0;
  end

  // update the AM
  always_ff @(posedge clk) begin : updateAM
    if (am_wr) AM[label] <= set_enc;
  end

  //==================== For interfering, query the AM ====================
  logic [$clog2(`DIM) : 0] cls_simi[`CLS_NUM];
  generate
    // Check similarity
    for (genvar l = 0; l < `CLS_NUM; l++) begin : g_simi
      Similarity simi (
          .clk (clk),
          .a   (AM[l]),
          .b   (set_enc),
          .simi(cls_simi[l])
      );
    end
  endgenerate

  // TODO: find the min Hum
  logic [`CLS_DW - 1 : 0] cls_min;
  FindMin maxcls (
      .clk     (clk),
      .nums    (cls_simi),
      .indexMin(cls_min)
  );
  // assign cls_max = (state != `PREDICT)? '0 :
  //   (cls_simi[0] > cls_simi[1]) ? `CLS_DW'('d0) :`CLS_DW'('d1)  ;

  assign predict = (state != `PREDICT) ? cls_min : '0;

endmodule

`endif
