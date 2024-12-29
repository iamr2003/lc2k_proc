module mem(
    input [31:0] addr,
    input write_enable,
    input [31:0] write_data,
    output [31:0] read_data
);
// this one's going to be messy
// I can just make a really large array
// I think we'll do that
reg [31:0] data [0:65536]; // hopefully this isn't too much


// hopefully interp as a number is ok?
assign read_data = data[addr];

always_latch @*
    if(write_enable)
        data[addr] = write_data;

endmodule
