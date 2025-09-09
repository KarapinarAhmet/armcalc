.global power_val
.text
power_val:
    // x0 = base, x1 = exp
    scvtf d0, x0
    scvtf d1, x1

    fcmp d1, #0.0
    b.ne check_neg
    fmov d0, #1.0
    ret

check_neg:
    fcmp d1, #0.0
    bge calc

    fneg d1, d1
    stp x29, x30, [sp, -16]!
    mov x29, sp
    bl log
    fmul d0, d0, d1
    bl exp
    ldp x29, x30, [sp], 16

    fmov d1, #1.0
    fdiv d0, d1, d0
    ret

calc:
    stp x29, x30, [sp, -16]!
    mov x29, sp
    bl log
    fmul d0, d0, d1
    bl exp
    ldp x29, x30, [sp], 16
    ret
