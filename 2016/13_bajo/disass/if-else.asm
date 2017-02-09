        push   rbp
        mov    rbp,rsp
        mov    DWORD PTR [rbp-0x14],ed
        mov    QWORD PTR [rbp-0x20],rsi
        mov    DWORD PTR [rbp-0x4],0x7
        cmp    DWORD PTR [rbp-0x4],0x7
        jle    0x4004f7 <main+33>
        mov    DWORD PTR [rbp-0x4],0x2
        jmp    0x4004fe <main+40>
        mov    DWORD PTR [rbp-0x4],0x3
        mov    eax,0x0
        pop    rbp
        ret      

; vim: ft=nasm

