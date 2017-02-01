; --------------------------------------------------------------------------------
;  Descripcion: Imprime los primeros 90 números de la sucesión de fibonacci.
;
;  Ensamblar y ejecutar:
;          nasm -felf64 fib.asm & ld fib.o -ofib & ./fib
;
; Fuente original: http://cs.lmu.edu/~ray/notes/nasmtutorial/
; --------------------------------------------------------------------------------

    global main
    extern printf

    section .text
                        ; rcx = 90  Numeros de fibonacci pèndientes.
                        ; rbx = 1   Numero siguiente
                        ; rax       Numero actual
main:
    push    rbx         ; Este registro hay que preservarlo junto con rbp y r12..r15

    mov     ecx, 90
    xor     rax, rax    ; Numero previo = 0
    xor     rbx, rbx
    inc     rbx         ; Valor inicial 1


print:
    push    rax         ; Las llamadas a printf se pueden cargar estos registros.
    push    rcx

    mov     rdi, formato
    mov     rsi, rax
    xor     rax, rax    ; Porque printf es varargs
    ; La pila está alineada porque se han empujado tres reg de 8 bytes.
    call    printf

    pop     rcx
    pop     rax

    mov     rdx, rax
    mov     rax, rbx
    add     rbx, rdx
    dec     ecx
    jnz     print

    pop     rbx
    ret

formato:
    db      '%20li', 10, 0

; vim: ft=nasm:
