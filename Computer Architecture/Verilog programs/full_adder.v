module f_adder (a, b, cin, sum, cout);
 input a, b, cin;
 output sum, cout;
 wire s1,c1,c2;
 
 xor xor1(s1, a, b);
 and and1(c1, a, b);
 xor xor2(sum,s1,cin);
 and a2(c2,s1,cin);
 or or1(cout,c1,c2);
endmodule

module f__adder;
 reg a, b, cin;
 wire sum, cout;
 initial begin
 $dumpfile("f_adder.vcd");
 $dumpvars(0,f_adder);
 a = 0; b = 0;
 cin= 0;
 #1
 a = 0; b = 0;
 cin= 1;
 #1
 a = 0;
 b = 1;
 cin=0;
 #1
 a = 0;
 b = 1;
 cin=1;
 #1
 a= 1;
 b=0;
 cin=0;
 #1
 a = 1;
 b = 0;
 cin=1;
 #1
 a = 1;
 b = 1;
 cin=0;
 #1
 a= 1;
 b= 1;
 cin=1;
 end
endmodule