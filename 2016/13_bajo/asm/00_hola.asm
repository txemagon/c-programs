;--------------------------------------------------------------------------------
; Escribe hola mundo en la consola. Para linux 64
; Para ensamblar y correr:
;
;     nasm -felf64 00_hola.asm && ld -o 00_hola 00_hola.o && ./00_hola
;--------------------------------------------------------------------------------


    global _start

    section .text
_start:
    ; write(1, mensaje, 13);
    mov rax, 1                        ; La llamada al sistema 1 es el write
    mov rdi, 1                        ; El manejador 1 es stdout
    mov rsi, mensaje                  ; Dirección de la cadena
    mov rdx, 11                       ; Número de bytes en la cadena
    syscall                           ; Hacer la llamada al sistema operativo

    ;exit(0)
    mov eax, 60                       ; la llamada 60 es exit
    xor rdi, rdi                      ; 0 como valor de retorno
    syscall
mensaje:
    db "Hola Mundo", 10               ; 10 es el retorno de carro.
