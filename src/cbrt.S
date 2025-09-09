.global cbrt_val
.text
cbrt_val:
    scvtf d0, x0
    bl cbrt
    ret
