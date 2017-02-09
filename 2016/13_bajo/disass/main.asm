;--------------------------------------------------------------------------------
; main.cpp disassembly
;--------------------------------------------------------------------------------

    push   rbp                          ; Create new stack frame
    mov    rbp,rsp                      ;
    mov    DWORD PTR [rbp-0x4],edi      ; edi=argc => saved to a local
    mov    QWORD PTR [rbp-0x10],rsi     ; rsi=argv => Saved to a local
    mov    eax,0x0                      ; set return value
    pop    rbp                          ; Restore the stack frame
    ret                                 ; End and return

; vim: ft=nasm
