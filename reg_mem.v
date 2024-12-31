module reg_mem (
    input [2:0] regA,
    regB,
    writeReg,
    input write_enable,
    input [31:0] write_val,
    output reg [31:0] readRegA,
    readRegB
);


  reg [31:0] r0, r1, r2, r3, r4, r5, r6, r7;

  //might be a nice way to macro this out, but its ok for now
  localparam 
R0 = 3'b000,
R1 = 3'b001,
R2 = 3'b010,
R3 = 3'b011,
R4 = 3'b100,
R5 = 3'b101,
R6 = 3'b110,
R7 = 3'b111;

  // need to review blocking vs nonblocking assignment in verilog
  `define write_reg(REG_NUM, VAL) \
case(REG_NUM) \
    R0: r0 = VAL; \
    R1: r1 = VAL; \
    R2: r2 = VAL; \
    R3: r3 = VAL; \
    R4: r4 = VAL; \
    R5: r5 = VAL; \
    R6: r6 = VAL; \
    R7: r7 = VAL; \
endcase \

  `define read_reg(REG_NUM, DEST) \
case(REG_NUM) \
    R0: DEST = r0 ; \
    R1: DEST = r1 ; \
    R2: DEST = r2 ; \
    R3: DEST = r3 ; \
    R4: DEST = r4 ; \
    R5: DEST = r5 ; \
    R6: DEST = r6 ; \
    R7: DEST = r7 ; \
endcase \

  //allowing reading and writing in the same cycle for now, there is an order in
  //which it occurs -- will need to consider data hazard stuff at a later point
  //
  always_latch @* if (write_enable) `write_reg(writeReg, write_val)

  always @* begin
    `read_reg(regA, readRegA)
    `read_reg(regB, readRegB)
  end

  initial begin
    r0 = 0;
    r1 = 1;
    r2 = 2;
    r3 = 3;
    r4 = 4;
    r5 = 5;
    r6 = 6;
    r7 = 7;
    $monitor("r0 = %d\n r1 = %d\n r2 = %d\n r3 = %d\n r4 = %d\n r5 = %d\n r6 = %d\n r7=%d\n", r0,
             r1, r2, r3, r4, r5, r6, r7);
  end


endmodule
