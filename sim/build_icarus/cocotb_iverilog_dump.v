module cocotb_iverilog_dump();
initial begin
    $dumpfile("/home/maria/v/hdc/sim/build_icarus/rchdc.fst");
    $dumpvars(0, rchdc);
end
endmodule
