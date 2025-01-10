module xorgate (a, b, c);
 input a, b;
 output c;
endmodule


module xor_gate;
 reg a, b;
 wire c;
 initial begin
 $dumpfile("xor_gate.vcd");
 $dumpvars(0,xor_gate);
 a = 0; b = 0; 
 #1
 a = 0; b = 1; 
 #1
 a = 1; b = 0;
 #1
 a = 1; b = 1;
 end
endmodule