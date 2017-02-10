main:
      ; Preprotocolo
      push   rbp
      mov    rbp,rsp
      sub    rsp,0x10                   ; Reserva para variables

; Empieza for
inicializacion:
      mov    DWORD PTR [rbp-0x4],0x0    ; int i=0
      jmp    condicion

carga_util_del_for:
      mov    eax,DWORD PTR [rbp-0x4]
      mov    esi,eax
      mov    edi,0x4005f4
      mov    eax,0x0
      call   0x400410 <printf@plt>

incremento:
      inc    DWORD PTR [rbp-0x4],0x1    ; i++
condicion:
      cmp    DWORD PTR [rbp-0x4],0x2    ; i<3
      jle    carga_util_del_for

      ; Postprotocolo
      mov    eax,0x0
      leave  ; Es lo más fácil cuando hay reserva de memoria para variables.
      ret

; vim: ft=nasm

