;--------------------------------------------------------------------------------
; Programa que calcula x^y
; ./power <x> <y>
;
;-------------------------------------------------------------------------------

    global  main
    extern  printf
    extern  puts
    extern  atoi

    section .text

main:
    push    r12             ; Preservar los registros seguros
    push    r13
    push    r14
    ; Empujando tres registros la pila está alineada

    cmp     rdi, 3          ; argc debe valer 3
    jne     error1

    mov     r12, rsi        ; argv

; ecx va a contar desde el exponente hasta 0
; esi tiene la base
; eax acumula el resultado

    mov     rdi, [r12+16]   ; argv[2]
    call    atoi
    cmp     eax, 0
    jl      error2          ; No se permiten exp negativos
    mov     r13d, eax       ; (int) y -> r13d

    mov     rdi, [r12+8]    ; argv[1]
    call    atoi
    mov     r14d, eax       ; (int) x > r14d

    mov     eax, 1          ; resultado = 1
menguar_exponente:
    test    r13d, r13d
    jz      terminado
    imul    eax, r14d
    dec     r13d
    jmp     menguar_exponente

terminado:
    mov     rdi, respuesta
    movsxd  rsi, eax        ; Mover 4 bytes a 8 con el signo
    xor     rax, rax
    call    printf
    jmp     done

error1:
    mov     edi, npar_erroneo
    call    puts
    jmp     done

error2:
    mov     edi, exponente_negativo
    call    puts

done:
    pop     r14
    pop     r13
    pop     r12

    ret

npar_erroneo:
    db      "Hacen falta dos parámetros", 10, 0

exponente_negativo:
    db      "No se permiten exponentes negativos", 10, 0

respuesta:
    db      "%d", 10, 0
; vim: ft=nasm
