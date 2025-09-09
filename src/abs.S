.global abs_val
.text
abs_val:
    cmp x0, #0
    bge done
    neg x0, x0
done:
    ret
