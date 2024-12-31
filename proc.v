// this is the real state machine

module proc (
    input clock
);

  // opcodes, might end up somewhere else
  // integer may be wrong dtype
  // opcodes are the states of each pipeline
  localparam reg [2:0] ADD = 3'b000,  //rtype
  NOR = 3'b001,  // rtype
  LW = 3'b010,  // ltype
  SW = 3'b011,  // ltype
  BEQ = 3'b100,  // ltype
  JALR = 3'b101,  // jtype
  HALT = 3'b110,  // o type
  NOOP = 3'b111;

  // need to understand integer type
  reg [31:0] pc;
  reg halted = 0;

  reg [31:0] branch_target;
  reg [31:0] next_instr;

  // states for each step of pipeline
  reg [2:0] ifid_op = NOOP, idex_op = NOOP, exmem_op = NOOP, memwb_op = NOOP;

  reg [2:0] ifid_regA, ifid_regB, ifid_destReg;
  reg [15:0] ifid_offsetField;

  reg [2:0] idex_destReg;
  reg [31:0] idex_RegA_val;
  reg [31:0] idex_RegB_val;


  reg [2:0] exmem_destReg;  // reg wb occurs in mem for destReg
  reg [31:0] exmem_alu_result;

  reg reg_mem_write_enable = 0;
  reg [31:0] reg_mem_write_value = 0;

  //opcodes serve as states for each phase of state machine
  //IF

  //if instruction mem worked, I think rest of this would?
  imem instr_mem (
      .pc(pc),
      .instr(next_instr)
  );

  decoder instr_decode (
      .instr(next_instr),
      .opcode(ifid_op),  // pipeline org might be a little odd
      .regA(ifid_regA),
      .regB(ifid_regB),
      .destReg(ifid_destReg),
      .offsetField(ifid_offsetField)
  );

  //ID
  reg_mem register_memory (
      .regA(ifid_regA),
      .regB(ifid_regB),
      .writeReg(exmem_destReg),
      // depends on the opcode -- NEEDS TO CHANGE WITH LW
      .write_enable(reg_mem_write_enable),
      .write_val(reg_mem_write_value),
      .readRegA(idex_RegA_val),
      .readRegB(idex_RegB_val)
  );

  //EX
  //this is going to get more complex with other commands
  alu arithmetic (
      .in_a(idex_RegA_val),
      .in_b(idex_RegB_val),
      .to_add(ifid_op != NOR),
      // there's a scuffed thing happening in the pipeline where it's going farther forward than I want
      .out(exmem_alu_result)
  );

  //MEM

  //WB

  //push opcodes further, may need more sequential logic
  always @(posedge clock) begin
    if (!halted) begin
      $display("ifid_op = %d, ifid_regA = %d, ifid_regB = %d, ifid_destReg = %d", ifid_op,
               ifid_regA, ifid_regB, ifid_destReg);
      $display("idex_op = %d, idex_destReg = %d, idex_regAv = %d, idex_regBv = %d", idex_op,
               idex_destReg, idex_RegA_val, idex_RegB_val);
      $display("exmem_op = %d, exmem_destReg = %d, exmem_alu_result = %d", exmem_op, exmem_destReg,
               exmem_alu_result);
    end
    if (ifid_op == HALT) halted = 1;
    if (halted) ifid_op = NOOP;
    idex_op = ifid_op;
    idex_destReg = ifid_destReg;


    exmem_op = idex_op;
    exmem_destReg = idex_destReg;
    //ordering matters here, flexibility allows for lw in future
    reg_mem_write_enable = exmem_op == ADD || exmem_op == NOR;
    reg_mem_write_value = exmem_alu_result;
    if (reg_mem_write_enable)
      $display("reg_mem_write_value = %d, exmem_destReg = %d", reg_mem_write_value, exmem_destReg);

    memwb_op = exmem_op;
    //for now ignore branching
    pc = pc + 1;
    //$display("pc = %d", pc);
  end

endmodule
