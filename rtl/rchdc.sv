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

`include "define.sv"

module rchdc (
    input  wire                    clk,
    input  wire                    rst_n,
    input  wire                    smp_clr,
    input  wire                    set_clr,
    input  wire  [  `DIM  - 1 : 0] im_value,
    input  wire  [  `DIM  - 1 : 0] im_pos,
    input  wire                    smp_en,
    input  wire                    state,
    input  wire  [`CLS_DW - 1 : 0] label,
    output logic [`CLS_DW - 1 : 0] predict
);
  //==================== For training or predicting, encode one sample ====================
  logic [`SMP_DW - 1 : 0] smp_cnt;
  logic [`DIM - 1 : 0] smp_enc;
  logic smp_done;
  /* verilator lint_off WIDTHTRUNC */
  assign smp_cnt = `SMP_SIZE - 1;
  /* verilator lint_on WIDTHTRUNC */

  encoder #(
      .CNT_W(`SMP_DW)
  ) spatio_enc (
      .clk  (clk),
      .rst_n(rst_n),
      .en   (smp_en),
      .clear(smp_clr),
      .cnt  (smp_cnt),
      .data (im_value ^ im_pos),
      .enc  (smp_enc),
      .done (smp_done)
  );

  //==================== For training, sum up all the samples ====================
  logic set_en;
  logic set_done;
  logic [`SET_DW - 1 : 0] set_cnt;
  logic [`DIM - 1 : 0] set_enc;

  always_ff @(posedge clk) begin : wr_set_en
    if (smp_done) set_en <= '1;
    else set_en <= '0;
  end

  /* verilator lint_off WIDTHTRUNC */
  assign set_cnt = `SET_SIZE - 1;
  /* verilator lint_on WIDTHTRUNC */

  encoder #(
      .CNT_W(`SET_DW)
  ) tempo_enc (
      .clk  (clk),
      .rst_n(rst_n),
      .en   (set_en),
      .clear(set_clr),
      .cnt  (set_cnt),
      .data (smp_enc),
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
  // Check similarity
  generate
    for (genvar l = 0; l < 2; l++) begin : g_class
      logic [$clog2(`DIM) : 0] cls_simi;
      similarity simi (
          .clk (clk),
          .a   (AM[l]),
          .b   (set_enc),
          .simi(cls_simi)
      );
    end
  endgenerate

  // TODO: find the max class
  logic [`CLS_DW - 1 : 0] cls_mimi;
  assign cls_mimi = (state != `PREDICT)? 0 :
    (g_class[0].cls_simi > g_class[1].cls_simi) ? 4'd0 : 4'd1;

  assign predict = cls_mimi;

endmodule

`endif

