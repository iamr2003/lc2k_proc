module decoder(
    input [31:0] instr, //note that bits 31-25 are unused
    output [2:0] opcode,
    output [2:0] regA,
                 regB,
                 destReg,
    output [15:0] offsetField 
);

assign opcode = instr[24:22];
assign regA = instr[21:19];
assign regB = instr[18:16];
assign destReg = instr[2:0];
assign offsetField = instr[15:0];

//opcodes, might end up somewhere else
// localparam 
// ADD_OP = 3'b000,  // rtype
// NOR_OP = 3'b001,
// LW_OP = 3'b010,   // ltype
// SW_OP = 3'b011,
// BEQ_OP = 3'b100,
// JALR_OP = 3'b101, // jtype
// HALT_OP = 3'b110, // o type
// NOOP_OP = 3'b111;



endmodule
