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
  input  logic  clk,
  input  logic  rst_n,
  input  logic  smp_clr,
  input  logic  smp_en,
  input  dw_t   im_value,
  input  dw_t   im_pos,
  input  logic  set_clr,
  input  logic  state,
  input  clsw_t label,
  output clsw_t predict
);

  //==================== For training or predicting, encode one sample ====================
  smpw_t smp_cnt, smp_thre;
  assign smp_thre = `SMP_DW'(`SMP_SIZE >> 1);
  dw_t smp_enc;
  assign smp_cnt = `SMP_DW'(`SMP_SIZE - 1);
  logic smp_done;

  Encoder #(
      .CNT_W(`SMP_DW)
  ) spatio_enc (
    .*,
    .en  (smp_en),
    .clr (smp_clr),
    .cnt (smp_cnt),
    .data(im_value ^ im_pos),
    .thre(smp_thre),
    .enc (smp_enc),
    .done(smp_done)
  );

  //==================== For training, sum up all the samples ====================
  // when state is training
  logic set_en;
  `FFARN(set_en, smp_done && (state == `TRAIN), clk, rst_n);

  setw_t set_cnt, set_thre;
  assign set_thre = `SET_DW'(`SET_SIZE >> 1);
  dw_t set_enc;
  assign set_cnt = `SET_DW'(`SET_SIZE - 1);
  logic set_done;

  Encoder #(
      .CNT_W(`SET_DW)
  ) tempo_enc (
    .*,
    .en  (set_en),
    .clr (set_clr),
    .cnt (set_cnt),
    .data(smp_enc),
    .thre(set_thre),
    .enc (set_enc),
    .done(set_done)
  );

  //==================== AM ====================
  dw_t AM[`CLS_NUM];

  logic am_wr;
  `FFARN(am_wr, set_done, clk, rst_n);

  // update the AM
  always_ff @(posedge clk) begin : updateAM
    if (am_wr) AM[label] <= set_enc;
  end

  //==================== For interfering, query the AM ====================
  // when state is predicting
  logic [$clog2(`DIM) : 0] cls_simi[`CLS_NUM];
  generate
    // Check similarity
    for (genvar l = 0; l < `CLS_NUM; l++) begin : g_simi
      Similarity simi (
        .*,
        .a   (AM[l]),
        .b   (smp_enc),
        .simi(cls_simi[l])
      );
    end
  endgenerate

  // TODO: find the min Hum
  logic [`CLS_DW - 1 : 0] cls_min;
  FindMin maxcls (
    .*,
    .nums    (cls_simi),
    .indexMin(cls_min)
  );
  // assign cls_max = (state != `PREDICT)? '0 :
  //   (cls_simi[0] > cls_simi[1]) ? `CLS_DW'('d0) :`CLS_DW'('d1)  ;

  assign predict = (state == `PREDICT) ? cls_min : '0;

endmodule

`endif
