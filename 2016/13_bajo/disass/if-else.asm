main:
        push   rbp                        ; Preprotocolo
        mov    rbp,rsp

        mov    DWORD PTR [rbp-0x14],edi   ; Mover los parámetros
        mov    QWORD PTR [rbp-0x20],rsi

        mov    DWORD PTR [rbp-0x4],0x7    ; Variables locales

        cmp    DWORD PTR [rbp-0x4],0x7    ; if (a > 7)
        jle    false                      ; Si se cumple lo contrario salto al falso
true:
        mov    DWORD PTR [rbp-0x4],0x2
        jmp    fin
false:
        mov    DWORD PTR [rbp-0x4],0x3
fin:
; Continua el programa
        mov    eax,0x0A                   ; Valor de retorno de main
        pop    rbp
        ret

; vim: ft=nasm

