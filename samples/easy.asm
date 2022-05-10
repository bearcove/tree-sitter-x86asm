
_main:  push    dword handler
        push    dword [fs:0]
        mov     dword [fs:0], esp
        xor     eax,eax
        mov     eax, dword[eax]   ; cause exception
        pop     dword [fs:0]      ; disengage exception handler
        add     esp, 4
        ret