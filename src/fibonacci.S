.global fibonacci
.text
fibonacci:
    cmp x0, #1
    ble base
    mov x1, #0
    mov x2, #1
    mov x3, #2
loop:
    cmp x3, x0
    bgt done
    add x4, x1, x2
    mov x1, x2
    mov x2, x4
    add x3, x3, #1
    b loop
done:
    mov x0, x2
    ret
base:
    mov x0, #1
    ret
