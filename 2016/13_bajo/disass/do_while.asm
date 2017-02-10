
       ; Preprotocolo
       push   rbp
       mov    rbp,rsp

       mov    DWORD PTR [rbp-0x4],0x3     ; int a = 3
       ; do-while
vuelta:
       sub    DWORD PTR [rbp-0x4],0x1     ; a--
       cmp    DWORD PTR [rbp-0x4],0x0     ; (a == 0)
       jne    vuelta                      ; while (condicion)

       ; Valores de retorno
       mov    eax,0x0
       pop    rbp
       ret

; vim: ft=nasm

