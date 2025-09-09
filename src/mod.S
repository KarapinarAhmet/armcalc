.global mod
.text
mod:
    sdiv x2, x0, x1   // bölüm
    msub x0, x2, x1, x0  // x0 - (x2 * x1)
    ret
