              global start
              section .text
start:
              push   rbp                        ; Preprotocolo
              mov    rbp,rsp

              mov    DWORD PTR [rbp-0x14],edi   ; Alojar los parámetros en la pila
              mov    QWORD PTR [rbp-0x20],rsi
              mov    DWORD PTR [rbp-0x4],0x7    ; a = 7

              cmp    DWORD PTR [rbp-0x4],0x7    ; if (a > 7)
              jle    0x4004f5 <main+31>         ; Notad que el mayor cambia por lower or equal
              mov    DWORD PTR [rbp-0x4],0x2    ;   a = 2

              mov    eax,0x0                    ; Valor de retorno de main
              pop    rbp
              ret

; vim: ft=nasm

