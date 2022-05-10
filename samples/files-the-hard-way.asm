            global _start

            section .text
_start:     mov     rax, 2      ; "open"
            mov     rdi, path   ; 
            xor     rsi, rsi    ; O_RDONLY
            syscall

            push rax            ; push file descriptor onto stack
            sub rsp, 16         ; reserve 16 bytes of memory

read_buffer:
            xor     rax, rax    ; "read"
            mov     rdi, [rsp+16] ; file descriptor
            mov     rsi, rsp    ; address of buffer
            mov     rdx, 16     ; size of buffer
            syscall

            test    rax, rax
            ; jz means 'jump if zero'
            jz      exit

            mov     rdx, rax    ; number of bytes
            mov     rax, 1      ; "write"
            mov     rdi, 1      ; file descriptor (stdout)
            mov     rsi, rsp    ; address of buffer
            syscall

            jmp read_buffer

exit:
            mov     rax, 60     ; "exit"
            xor     rdi, rdi    ; return code 0
            syscall

            section .data
path:       db      "/etc/hosts", 0 ; null-terminated