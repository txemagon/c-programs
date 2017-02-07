;--------------------------------------------------------------------------------
; Muestra los argumentos en linea de comandos.
;
; rdi: argc, rsi: argv
;
; Para compilar y ejecutar:
;       nasm -felf64 04_argv.asm && gcc 04_argv.o -o muestra_argv
;       ./muestra_argv par1 par2
;--------------------------------------------------------------------------------

    global  main
    extern  puts
    section .text
main:
    push    rdi         ; Lo guardamos para usarlo
    push    rsi
    sub     rsp, 8      ; Hay que alinear la pila a 16 bytes antes de la llamada

    mov     rdi, [rsi]  ; Primer argumento
    call    puts

    add     rsp, 8      ; Equilibrado de la pila
    pop     rsi
    pop     rdi

    add     rsi, 8      ; Apuntar a la segunda celda de argv
    dec     rdi
    jnz     main        ; Decrementar mientras queden argumentos.

    ret                 ; REtornar al sistema operativo.


; vim: ft=nasm
