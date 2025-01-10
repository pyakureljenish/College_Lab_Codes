`include "or_gate.v"
module or_gate_tb;
reg a,b;
wire c;
orgate or(a,b,o);
initial begin
    $dumpfile("or.vcd");
    $dumpvars(0,or_gate_tb);
    a=0;
    b=0;
    #10

    a=0;
    b=1;
    #10

    a=1;
    b=0;
    #10

    a=1;
    b=1;
    #10
    
$finish();
end
endmodule