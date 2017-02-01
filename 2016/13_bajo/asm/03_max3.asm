; --------------------------------------------------------------------------------
;  Descripcion: Función que devuelve el mayor de tres números.
;
;       int64_t maximo3(int64_t x, int64_t y, int64_t z);
;
; Los parámetros se pasan en rdi, rsi, rdx
; EL valor de retorno en rax
;
;  Ensamblar y ejecutar:
;          nasm -felf64 maximo3.asm & \
;          gcc llamar_maximo3.cpp maximo3.o -omaximo3 & ./maximo3
;
; Fuente original: http://cs.lmu.edu/~ray/notes/nasmtutorial/
; --------------------------------------------------------------------------------

    global maximo_de_tres

    section .text
maximo_de_tres:
    mov     rax, rdi
    cmp     rax, rsi
    cmovl   rax, rsi
    cmp     rax, rdx
    cmovl   rax, rdx
    ret

; vim: ft=nasm:
