//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// function:
// parameter:
//           DIM:
// input:
//           feature
// output:
//           predict
// design:
//          two encoding:
//////////////////////////////////////////////////////////////////////////////////
`ifndef __RCHDC_SV__
`define __RCHDC_SV__

`include "./Define.sv"
`include "./Encoder.sv"
`include "./Similarity.sv"
`include "./FindMin.sv"

// TODO: datawidth partition, 1024 -> 32
module Rchdc (
  input  logic  clk,
  input  logic  rst_n,
  input  logic  state,
  input  logic  smp_clr,
  input  logic  smp_en,
  input  dw_t   im_value,
  input  dw_t   im_pos,
  input  clsw_t label,
  input  logic  set_clr,
  output clsw_t predict
);

  //==================== For training or predicting, encode one sample ====================
  dw_t smp_enc;

  Encoder #(
      .CNT_W(`SMP_DW)
  ) spatio_enc (
    .*,
    .clr (smp_clr),
    .en  (smp_en),
    .data(im_value ^ im_pos),
    .enc (smp_enc)
  );

  //==================== AM ====================
  dw_t AM[`CLS_NUM];

  //==================== For training, sum up all the samples ====================
  generate
    for (genvar l = 0; l < `CLS_NUM; l++) begin : g_class
      logic set_en;
      assign set_en = smp_clr && (state == `TRAIN) && (label == l);

      dw_t set_enc;
      Encoder #(
          .CNT_W(`SET_DW)
      ) tempo_enc (
        .*,
        .clr (set_clr),
        .en  (set_en),
        .data(smp_enc),
        .enc (set_enc)
      );

      // update the AM only when the set accumulation is done
      logic am_wr;
      assign am_wr = set_clr && (state == `TRAIN);

      always_ff @(posedge clk) begin : updateAM
        if (am_wr) AM[l] <= set_enc;
      end
    end
  endgenerate

  //==================== For interfering, query the AM ====================
  // when state is predicting
  logic [$clog2(`DIM) : 0] cls_simi[`CLS_NUM];
  logic pred_en;
  assign pred_en = smp_clr && (state == `PREDICT);

  generate
    // Check similarity
    for (genvar l = 0; l < `CLS_NUM; l++) begin : g_simi
      Similarity simi (
        .*,
        .en  (pred_en),
        .a   (AM[l]),
        .b   (smp_enc),
        .simi(cls_simi[l])
      );
    end
  endgenerate

  logic min_en;
  `FFARN(min_en, pred_en, clk, rst_n);
  logic [`CLS_DW - 1 : 0] cls_min;
  FindMin mincls (
    .*,
    .en      (min_en),
    .nums    (cls_simi),
    .indexMin(cls_min)
  );

  assign predict = (state == `PREDICT) ? cls_min : '0;

endmodule

`endif
