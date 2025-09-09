.global factorial
.text
factorial:
    mov x1, #1
1:
    cmp x0, #1
    ble end
    mul x1, x1, x0
    sub x0, x0, #1
    b 1b
end:
    mov x0, x1
    ret
