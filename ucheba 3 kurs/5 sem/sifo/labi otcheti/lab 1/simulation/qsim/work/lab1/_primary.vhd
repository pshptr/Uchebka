library verilog;
use verilog.vl_types.all;
entity lab1 is
    port(
        Q0              : out    vl_logic;
        CLRN            : in     vl_logic;
        C               : in     vl_logic;
        D0              : in     vl_logic;
        Q1              : out    vl_logic;
        Q2              : out    vl_logic;
        Q3              : out    vl_logic
    );
end lab1;
