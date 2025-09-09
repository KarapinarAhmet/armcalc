.global sqrt_val
.text
sqrt_val:
    scvtf d0, x0
    fsqrt d0, d0
    ret
