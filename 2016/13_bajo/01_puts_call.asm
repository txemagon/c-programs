; --------------------------------------------------------------------------------
; Escribe "Hola, Mundo" en la consola usando una librería C.
;
; nasm -felf64 01_puts_call.asm && gcc 01_puts_call.o -o puts_call && ./puts_call
; --------------------------------------------------------------------------------

    _global main
    extern puts

    section .text

main:                       ; Esto es llamado por el código de entrada de la librería de C

    mov rdi, mensaje        ; Primer argumento entero (puntero) en rdi. Ver (1)
    call puts
    ret

mensaje:
    db "Hola, Mundo", 0


; Las llamadas a función almacenan los parámetros:
;   - enteros:    rdi, rsi, rdx, rcx, r8, r9
;   - flotantes (float, double: xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7
; Los parámetros restantes van a la pila => El primer parámetro está en [rsp+8]
; Sólo se preservan los registros rbp, rbx, r12, r13, r14, r15
; El valor de retorno está en rdx:rax o xmm1:xmm0. O solo en los últimos rax, xmm0

