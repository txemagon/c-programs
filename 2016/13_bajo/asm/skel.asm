; --------------------------------------------------------------------------------
;  Descripcion: 
;
;  Ensamblar y ejecutar:
;          nasm -felf64 XX.asm & ld XX.o -oXX & ./XX
;
; Fuente original: http://cs.lmu.edu/~ray/notes/nasmtutorial/
; --------------------------------------------------------------------------------

    global _start

    section .text
_start:


    section .bss
    section .data

; vim: ft=nasm:
