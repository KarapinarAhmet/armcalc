.global exp_val
    .text
// double exp_val(long n)
exp_val:
    stp x29, x30, [sp, -16]!   // frame push
    mov x29, sp

    scvtf d0, x0               // x0 (int/long) -> d0 (double)
    bl   exp@PLT               // call libm exp(double)

    ldp x29, x30, [sp], 16     // frame pop
    ret
