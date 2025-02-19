//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//          Find the index of the max number of all the numbers
// parameter:
// input:
//           An array
// output:
//           numMaxCls: the index of the max
// design:
//          comparasion adder
// timing:
//          one-cycle
//////////////////////////////////////////////////////////////////////////////////
`ifndef __FIND_MIN_SV__
`define __FIND_MIN_SV__

`include "Define.sv"
// `include "./Compare.sv"

module FindMin (
  input  logic                    clk,
  input  logic                    rst_n,
  input  logic                    en,
  input  logic [$clog2(`DIM) : 0] nums    [`CLS_NUM],
  output logic [ `CLS_DW - 1 : 0] indexMin
);
  logic [$clog2(`DIM) : 0] min;
  logic [$clog2(`CLS_NUM) - 1 : 0] i_m;
  always_comb begin
    min = nums[0];
    i_m = 0;
    for (int i = 1; i < `CLS_NUM; i++) begin
      if (nums[i] < min) begin
        min = nums[i];
        /* verilator lint_off WIDTHTRUNC */
        i_m = i;
        /* verilator lint_on WIDTHTRUNC */
      end
    end
  end

  `FFARNE(indexMin, i_m, en, clk, rst_n);
  // TODO: find the min Humming

  // localparam integer COMLEN = `CLS_DW;
  //
  // // main body of the comparing tree
  // generate
  //   for (genvar stg = 0; stg < COMLEN; stg++) begin : g_comp_stg
  //     logic [$clog2(`DIM) : 0] comp1[`CLS_NUM  >> (stg + 1)];
  //     logic [$clog2(`DIM) : 0] comp2[`CLS_NUM >> (stg + 1)];
  //     logic [$clog2(`DIM) : 0] compMin[`CLS_NUM >> (stg + 1)];
  //     for (genvar i = 0; i < (`CLS_NUM >> (stg + 1)); i++) begin : g_comp_div_half
  //       Compare #(
  //           .DW($clog2(`DIM) + 1)
  //       ) stg_comp (
  //         .a  (comp1[i]),
  //         .b  (comp2[i]),
  //         .min(compMin[i])
  //       );
  //     end
  //   end
  // endgenerate
  //
  // // connect adjacent stage except the input and output stage
  // generate
  //   for (genvar stg = 1; stg < COMLEN; stg++) begin : g_comp_assign
  //     for (genvar i = 0; i < (`CLS_NUM >> (stg + 1)); i++) begin : g_comp
  //       assign g_comp_stg[stg].comp1[i] = g_comp_stg[stg-1].compMin[2*i];
  //       assign g_comp_stg[stg].comp2[i] = g_comp_stg[stg-1].compMin[2*i+1];
  //     end
  //   end
  // endgenerate
  //
  // // input
  // generate
  //   for (genvar i = 0; i < (`CLS_NUM >> 1); i++) begin : g_in_addend_assign
  //     assign g_comp_stg[0].comp1[i] = nums[2*i];
  //     assign g_comp_stg[0].comp2[i] = nums[2*i+1];
  //   end
  // endgenerate
  //
  // // output
  // //   // for Iverilog access [0] in array[0:0] raise error
  // `FFARNE(indexMin, nums[g_comp_stg[COMLEN-1].compMin[0]], en, clk, rst_n);

endmodule

`endif
