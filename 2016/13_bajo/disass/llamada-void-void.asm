;--------------------------------------------------------------------------------
; llamada-void-void disassembly
;--------------------------------------------------------------------------------


main:
     push   rbp                       ; Salvar la pila vieja
     mov    rbp,rsp                   ; Crear una pila nueva
     sub    rsp,0x10                  ; Reservar espacio para los parámetros de registro
     mov    DWORD PTR [rbp-0x4],edi   ; argc
     mov    QWORD PTR [rbp-0x10],rsi  ; argv

     mov    eax,0x0                   ;
     call   0x4004ed <proc>           ; Llamada al procedimeitnto
     mov    eax,0x0                   ; Borrar el valor de retorno

     leave                            ; poner sp en bp y sacar bp
     ret

proc:
     push   rbp                       ; Protocolo de entrada
     mov    rbp, rsp

     pop    rbp                       ; Protocolo de salida
     ret

; vim: ft=nasm
