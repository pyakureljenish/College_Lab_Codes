
module half_adder(a,b,s,c);
input a,b;
output s,c;

//xor n1(s,a,b);// gate level modeling
//and a1(c,a,b);
assign s=a^b;// dataflow modeling
assign c=a&b;
endmodule
