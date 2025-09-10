.global cbrt_val
    .text
// double cbrt_val(long n)
cbrt_val:
    stp x29, x30, [sp, -16]!   // frame push
    mov x29, sp

    scvtf d0, x0               // arg -> double
    bl cbrt@PLT                // cbrt(n)

    ldp x29, x30, [sp], 16     // frame pop
    ret
