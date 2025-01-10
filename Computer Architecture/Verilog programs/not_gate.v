
module notgate (a,c); 
input a;
output c;
//not not1(c,a);
endmodule

module not_gate;
reg a;
wire c;
//not_gate not1(a,c); //module call
initial begin
 $dumpfile("not_gate.vcd");
 $dumpvars(0,not_gate);
 a=0;
 #10c
 a=1;
end
endmodule