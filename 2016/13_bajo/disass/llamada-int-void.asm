;--------------------------------------------------------------------------------
; llamada-int-void disassembly
;--------------------------------------------------------------------------------

proc:
              push   rbp
              mov    rbp,rsp

              mov    edi, output
              call   0x400400 <puts@plt>
              nop

              mov    eax, 0x3                     ; proc return value
              pop    rbp
              ret
main:
              push   rbp                          ; Preprotocolor
              mov    rbp,rsp
              sub    rsp,0x10
              mov    DWORD PTR [rbp-0x4],edi
              mov    QWORD PTR [rbp-0x10],rsi

              mov    eax,0x0
              call   0x400526 <proc>

              mov    eax,0x0                      ; main return value
              leave
              ret
output:
  db '7', 10, 0

; vim: ft=nasm

