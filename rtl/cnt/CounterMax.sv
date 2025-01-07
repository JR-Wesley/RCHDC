`ifndef __COUNTER_MAX_SV__
`define __COUNTER_MAX_SV__

module CounterMax #(
    parameter int  DW   = 100,
    parameter type dw_t = logic [DW - 1 : 0]
) (
  input  logic clk,
  input  logic rst_n,
  input  logic en,
  input  dw_t  max,
  output dw_t  cnt,
  output logic co
);

  dw_t cnt_inc;
  always_comb begin
    cnt_inc = (cnt < max) ? cnt + 1'b1 : '0;
    co = en & (cnt == max);
  end

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) cnt <= '0;
    else if (en) cnt <= cnt_inc;
  end

endmodule

`endif
