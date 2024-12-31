module tb_proc ();

  reg clk;

  proc processor (.clock(clk));

  initial begin
    clk = 1'b0;
    forever begin
      #100 clk = ~clk;
      //$display("clk (bin) = %b", clk);
    end
  end


endmodule
