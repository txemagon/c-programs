;--------------------------------------------------------------------------------
; llamada-void-int disassembly
;--------------------------------------------------------------------------------

push   rbp                                                                                           │
              mov    rbp,rsp
              sub    rsp,0x10
              mov    DWORD PTR [rbp-0x4],edi
              mov    eax,DWORD PTR [rbp-0x4]                                                                       │
              mov    esi,eax                                                                                       │
              mov    edi,0x4005f4                                                                                  │
              mov    eax,0x0                                                                                       │
              call   0x400410 <printf@plt>                                                                         │
              leave                                                                                                │
              ret                                                                                                  │
                                                                                           │
              mov    rbp,rsp                                                                                       │
              sub    rsp,0x10                                                                                      │
              mov    DWORD PTR [rbp-0x4],edi                                                                       │
              mov    QWORD PTR [rbp-0x10],rsi                                                                      │
              mov    edi,0x7                                                                                       │
              call   0x40052d <proc>                                                                               │
              mov    eax,0x0                                                                                       │
              leave             

; vim: ft=nasm

