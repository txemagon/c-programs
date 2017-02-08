; --------------------------------------------------------------------------------
; ./average [<int>]+
; --------------------------------------------------------------------------------

    global  main
    extern  atoi
    extern  printf
    default rel

    section .text
main:
    dec     rdi             ; argc--
    jz      no_hay_media

    mov     [count], rdi    ; count = argc

acumula:
    add     rsi, 8
    push    rdi
    push    rsi
    mov     rdi, [rsi]

    sub     rsp, 8
    call    atoi
    add     rsp, 8

    pop     rsi
    pop     rdi

    add     [sum], rax
    dec     rdi
    jnz     acumula

; media
    cvtsi2sd    xmm0, [sum]
    cvtsi2sd    xmm1, [count]
    divsd       xmm0, xmm1
    mov         rdi, format
    mov         rax, 1      ; printf es variadica y hay un valor no entero.
    sub         rsp, 8
    call        printf
    add         rsp, 8

done:
    ret


no_hay_media:
    mov     rdi, uso
    xor     rax, rax
    call    printf
    jmp     done

; Constantes
uso:
    db      'Pon enteros en la linea de comandos para que calcule la media.', 10, 0
format:
    db      '%g', 10, 0


;Variables
    section .data
count:  dq  0
sum:    dq  0
; vim: ft:nasm
