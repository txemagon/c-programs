;--------------------------------------------------------------------------------
; llamada-void-int disassembly
;--------------------------------------------------------------------------------

proc:
              push   rbp                        ; Protocolo de entrada
              mov    rbp,rsp
              sub    rsp,0x10
              mov    DWORD PTR [rbp-0x4],edi    ; Almacenamiento de parámetros en la pila

              mov    eax,DWORD PTR [rbp-0x4]
              mov    esi,eax
              mov    edi, format
              mov    eax,0x0
              call   0x400410 <printf@plt>      ; Llamada a printf

              leave
              ret

main:
              mov    rbp,rsp                    ; Protocolo de entrada
              sub    rsp,0x10
              mov    DWORD PTR [rbp-0x4],edi
              mov    QWORD PTR [rbp-0x10],rsi

              mov    edi,0x7
              call   0x40052d <proc>
              mov    eax,0x0

              leave                             ; Protocolo de salida
              ret

format:
              db '%i', 10, 0

; vim: ft=nasm

