.global power_val
    .text
// double power_val(long base, long exp)
power_val:
    stp x29, x30, [sp, -16]!   // frame push
    mov x29, sp

    scvtf d0, x0               // base -> double
    scvtf d1, x1               // exp -> double
    bl pow@PLT                 // pow(base, exp)

    ldp x29, x30, [sp], 16     // frame pop
    ret
