; --------------------------------------------------------------------------------
; uint64_t factorial(uint64_t);
; --------------------------------------------------------------------------------

    global  factorial
    section .text

factorial:
    cmp     rdi, 1
    jnbe    link_to
    mov     rax, 1
    ret
link_to:
    push    rdi
    dec     rdi
    call    factorial
    pop     rdi
    imul    rax, rdi
    ret

; vim: ft=nasm
