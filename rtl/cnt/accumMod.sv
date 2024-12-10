//////////////////////////////////////////////////////////////////////////////////
// Company: Shanghai, China
// Engineer: Hanyu Zhang
// Revision:
//          2024/11/07 created
// function:
//           A parameteriazed modular accumulator
// parameter:
//           M: the mod
// input:
//           en: enable
//           max: the data to accumulate
// output:
//           acc: the accumulated result
//////////////////////////////////////////////////////////////////////////////////
`ifndef __ACCUMMOD_SV__
`define __ACCUMMOD_SV__

module accumMod #(
    parameter M = 100
) (
    input  wire                      clk,
    input  wire                      rst_n,
    input  wire                      clr,
    input  wire                      en,
    input  wire  [$clog2(M) - 1 : 0] data,
    output logic [$clog2(M) - 1 : 0] acc
);
  logic [$clog2(M) - 1 : 0] acc_next;
  logic [$clog2(M) - 1 : 0] acc_mod;

  assign acc_mod = (acc_next >= M || acc_next < acc) ? (acc_next - M) : (acc + data);

  assign acc_next = clr ? '0 : en ? acc_mod : acc_next;

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) acc <= '0;
    else acc <= acc_next;
  end

endmodule

`endif

