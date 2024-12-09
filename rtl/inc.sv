
// add one bits for HDC

module inc #(
    parameter DW = 8
) (
    input wire clk,
    input wire rst_n,
    input wire clr,
    input wire en,
    input wire one_bit,
    output logic [DW - 1 : 0] acc
);
  logic [DW - 1 : 0] acc_next;
  assign acc_next = clr ? '0 : en ? (acc + one_bit) : acc;

  always_ff @(posedge clk, negedge rst_n) begin
    if (!rst_n) acc <= '0;
    else acc <= acc_next;
  end

endmodule

