.global prime
.text
prime:
    cmp x0, #2
    blt not_prime
    cmp x0, #2
    beq is_prime

    and x1, x0, #1
    cbz x1, not_prime

    mov x1, #3
loop:
    mul x2, x1, x1
    cmp x2, x0
    bgt is_prime

    udiv x2, x0, x1
    msub x2, x2, x1, x0
    cbz x2, not_prime

    add x1, x1, #2
    b loop

is_prime:
    mov x0, #1
    ret
not_prime:
    mov x0, #0
    ret
