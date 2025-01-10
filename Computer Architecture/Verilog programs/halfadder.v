
module half_adder(a,b,s,c);
input a,b;
output s,c;

//xor n1(s,a,b);// gate level modeling
//and a1(c,a,b);
assign s=a^b;// dataflow modeling
assign c=a&b;
endmodule

module half_adder_tb;
reg a,b;
wire s,c;
half_adder n2(a,b,s,c);

initial begin
    $dumpfile("xor.vcd");
    $dumpvars(0,xor_gate_tb);

    a=0;b=0;
       #10
       a=0;b=1;
        #10

          a=1;b=0;
           #10

             a=1;b=1;
              #10

             $finish();


    
end
endmodule