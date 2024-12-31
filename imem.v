module imem(
    input [31:0] pc, //I'll just assume it's an integer like everything else
    output [31:0] instr
);
// need to figure out how to load this properly
// functions similar to normal memory, just has no writing
reg [31:0] instruction_memory [0:255];

initial begin
    //this is actually kind of hard
  // $readmemh("instructions.hex", instruction_memory);

  // let's pick some basic functions on our own first
  //917505d
  // add 1 6 1
  //00000000000011100000000000000001 (binary signed 2's complement little
  //endian)
// 1245188
// add 2 3 4
// 00000000000100110000000000000100
//
// 7274501
// add 5 7 5
// 00000000011011110000000000000101
  
  //halt - 25165824
  //  00000001100000000000000000000000

  instruction_memory[0] = 32'b00000000000011100000000000000001;
  instruction_memory[1] = 32'b00000000000100110000000000000100;
  instruction_memory[2] = 32'b00000000011011110000000000000101;
  instruction_memory[3] = 32'b00000001100000000000000000000000;
end

assign instr = instruction_memory[pc];


endmodule
