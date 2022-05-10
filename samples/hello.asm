; in `hello.asm`

        global _start

        section .text

_start: mov rdi, 1      ; stdout fd
        mov rsi, msg
        mov rdx, 9      ; 8 chars + newline
        mov rax, 1      ; write syscall
        syscall

        xor rdi, rdi    ; return code 0
        mov rax, 60     ; exit syscall
        syscall
        
        section .data

msg:    db "hi there", 10