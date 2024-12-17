`ifndef __ACCUM_SV__
`define __ACCUM_SV__

module AccuM #(
    parameter integer M = 100
) (
  input  wire                      clk,
  input  wire                      rst_n,
  input  wire                      clr,
  input  wire                      en,
  input  wire  [$clog2(M) - 1 : 0] d,
  output logic [$clog2(M) - 1 : 0] acc
);

  logic [$clog2(M) - 1 : 0] acc_plus;
  assign acc_plus = acc + d;

  // The orginal wire connection:
  // assign acc_mod = (acc_next >= M || acc_next < acc) ? (acc_next - M) : (acc + data);
  // Avoid signal unoptimizable: Circular combinational logic: 'accuMod.acc_next'
  logic [$clog2(M) - 1 : 0] acc_next;
  assign acc_next = (acc_plus >= M || acc_plus < acc) ? acc_plus - M : acc_plus;

  // priority:
  // clr: set to zero
  // en: enable register or hold
  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) acc <= '0;
    else if (clr) acc <= '0;
    else if (en) acc <= acc_next;
  end

endmodule

`endif
