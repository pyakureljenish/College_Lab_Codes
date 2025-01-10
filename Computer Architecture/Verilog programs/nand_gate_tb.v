`include "nand_gate.v"
module nand_gate_tb;
reg a,b;
wire c;
nand_gate n2(a,b,c);

initial begin
    $dumpfile("nand.vcd");
    $dumpvars(0,nand_gate_tb);

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