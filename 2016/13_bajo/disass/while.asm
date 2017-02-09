;--------------------------------------------------------------------------------
; while.c disassembly
;--------------------------------------------------------------------------------

      global  main
      section .text

main:
      push   rbp                      ; Preprotocolo
      mov    rbp,rsp

      mov    DWORD PTR [rbp-0x4],0x3  ; int a = 3

; BUCLE
      jmp    0x4004fe <main+17>       ; while
otra_vuelta:
      sub    DWORD PTR [rbp-0x4],0x1  ; a--
      cmp    DWORD PTR [rbp-0x4],0x0  ; a == 0
      jne    0x4004fa otra_vuelta     ; otra vuelta
; FIN BUCLE

      mov    eax,0x0                  ; Valor de retorno de main
      pop    rbp
      ret

; vim: ft=nasm
