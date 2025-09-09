.global mod_math
.text
mod_math:
    sdiv x2, x0, x1
    msub x0, x2, x1, x0
    ret
