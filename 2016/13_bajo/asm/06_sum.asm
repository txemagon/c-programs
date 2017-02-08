;--------------------------------------------------------------------------------
; double sum(double[], uint64_t length)
;--------------------------------------------------------------------------------

    global  sum
    section .text

sum:
    xorpd   xmm0, xmm0              ; Initialize return value to 0
    cmp     rsi, 0                  ; Check length == 0
    je      done
next:
    addsd   xmm0, [rdi]             ; sum next element
    add     rdi, 8                  ; jump to next double
    dec     rsi                     ; Decrease length
    jnz     next

done:
    ret

; vim: ft=nasm
