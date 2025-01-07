`ifndef __ACCUM_SV__
`define __ACCUM_SV__

module AccuM #(
    parameter int  M    = 100,
    parameter type dw_t = logic [$clog2(M) - 1 : 0]
) (
  input  logic clk,
  input  logic rst_n,
  input  logic en,
  input  dw_t  dm,
  output dw_t  accm
);

  dw_t acc_next;
  always_comb begin
    acc_next = accm + dm;
    if (acc_next >= M || acc_next < accm) acc_next -= M;
  end

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) accm <= '0;
    else if (en) accm <= acc_next;
  end

endmodule

`endif
