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
`include "./Compare.sv"
`include "./dff/Dff.sv"

module FindMin (
  input  wire                     clk,
  input  wire  [$clog2(`DIM) : 0] nums    [`CLS_NUM],
  output logic [ `CLS_DW - 1 : 0] indexMin
);

  localparam integer COMLEN = `CLS_DW;

  // main body of the comparing tree
  generate
    for (genvar stg = 0; stg < COMLEN; stg++) begin : g_comp_stg
      logic [$clog2(`DIM) : 0] comp1[`CLS_NUM  >> (stg + 1)];
      logic [`CLS_DW - 1 : 0] num1[`CLS_NUM  >> (stg + 1)];
      logic [$clog2(`DIM) : 0] comp2[`CLS_NUM >> (stg + 1)];
      logic [`CLS_DW - 1 : 0] num2[`CLS_NUM  >> (stg + 1)];
      logic [$clog2(`DIM) : 0] compMax[`CLS_NUM >> (stg + 1)];
      logic [`CLS_DW - 1 : 0] numMax[`CLS_NUM  >> (stg + 1)];
      for (genvar i = 0; i < (`CLS_NUM >> (stg + 1)); i++) begin : g_comp_div_half
        Compare #(
            .DW($clog2(`DIM) + 1),
            .CLSW(`CLS_DW)
        ) stg_comp (
            .a     (comp1[i]),
            .numa  (num1[i]),
            .b     (comp2[i]),
            .numb  (num2[i]),
            .max   (compMax[i]),
            .numMax(numMax[i])
        );
      end
    end
  endgenerate

  // connect adjacent stage except the input and output stage
  generate
    for (genvar stg = 1; stg < COMLEN; stg++) begin : g_comp_assign
      for (genvar i = 0; i < (`CLS_NUM >> (stg + 1)); i++) begin : g_comp
        assign g_comp_stg[stg].comp1[i] = g_comp_stg[stg-1].compMax[2*i];
        assign g_comp_stg[stg].comp2[i] = g_comp_stg[stg-1].compMax[2*i+1];
        assign g_comp_stg[stg].num1[i] = g_comp_stg[stg-1].numMax[2*i];
        assign g_comp_stg[stg].num2[i] = g_comp_stg[stg-1].numMax[2*i+1];
      end
    end
  endgenerate

  // input
  generate
    for (genvar i = 0; i < (`CLS_NUM >> 1); i++) begin : g_in_addend_assign
      assign g_comp_stg[0].comp1[i] = nums[2*i];
      assign g_comp_stg[0].comp2[i] = nums[2*i+1];
      assign g_comp_stg[0].num1[i] = `CLS_DW'(2 * i);
      assign g_comp_stg[0].num2[i] = `CLS_DW'(2 * +1);
    end
  endgenerate

  // output
  Dff #(
      .DW(`CLS_DW)
  ) ff_max (
      .clk (clk),
      // for Iverilog access [0] in array[0:0] raise error
      .data(g_comp_stg[COMLEN-1].numMax[0]),
      .qout(indexMin)
  );

endmodule

`endif
