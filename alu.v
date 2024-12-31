module alu (
    // 4 byte registers
    input [31:0] in_a,
    in_b,
    input to_add,
    output reg [31:0] out
);

  always @*
    if (to_add) assign out = in_a + in_b;
    else begin
      // nor
      assign out = in_a~|in_b;
      //$display("NOR case: in_a = %d, in_b = %d, out = %d", in_a, in_b, out);
    end

endmodule
