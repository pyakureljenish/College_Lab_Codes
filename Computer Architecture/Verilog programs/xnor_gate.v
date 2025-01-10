
module xnorgate (a, b, c);
 input a, b;
 output c;
endmodule


module xnor_gate;
 reg a, b;
 wire c;
 initial begin
 $dumpfile("xnor_gate.vcd");
 $dumpvars(0,xnor_gate);
 a = 0; b = 0; 
 #1
 a = 0; b = 1; 
 #1
 a = 1; b = 0;
 #1
 a = 1; b = 1;
 end
endmodule