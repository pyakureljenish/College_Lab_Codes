module andgate(a,b,c);
input a, b;
 output c;
 //andgate and(a,b,c);


endmodule



module and_gate;
reg a, b;
 wire d; 
 
 
 
 initial begin
 $dumpfile("and_gate.vcd");
 $dumpvars(0,and_gate);
 a = 0; b = 0;
 #10

 a = 0; b = 1;
 #10
 a = 1; b = 0;
 #10
 a = 1; b = 1;
 end
endmodule


