module multiplexer (a,b,c,d,s0,s1,o);
input a,b,c,d,s0,s1;
output o;
assign o=((~s0)&(~s1)&a)|((~s0)&(s1)&b)|((s0)&(~s1)&c)|((s0)&(s1)&d); 
endmodule

module mux;
reg a,b,c,d,s0,s1;
wire o;
multiplexer m1(a,b,c,d,s0,s1,o);

initial begin
$dumpfile("multiplexer.vcd");
$dumpvars(0,mux);


a=1;
b=0;
c=1;
d=1;
s0=0;
s1=0;
#10

a=1;
b=0;
c=1;
d=1;
s0=0;
s1=1;
#10

a=1;
b=0;
c=1;
d=1;
s0=1;
s1=0;
#10

a=1;
b=0;
c=1;
d=1;
s0=1;
s1=1;
#10

$finish();
end
endmodule

