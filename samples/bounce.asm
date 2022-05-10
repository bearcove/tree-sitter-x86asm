; reserve 40 bytes on the stack (five 8-byte slots), let's 0-index
; them: we have stack slot 0, 1, 2, 3, 4.
sub     rsp, 40

; As per SysV AMD64 ABI, the first argument is in the `rdi` register
; and the second argument is in the `rsi` register. We're supposed to
; return values in the `rax` register.

; copy 1st argument to stack slot 1
mov     qword ptr [rsp + 8], rdi
; copy 2nd argument to stack slot 2
mov     qword ptr [rsp + 16], rsi
; copy 1st argument to stack slot 3
mov     qword ptr [rsp + 24], rdi
; copy 2nd argument to stack slot 4
mov     qword ptr [rsp + 32], rsi
; add (both arguments) together, result ends up in `rdi`
add     rdi, rsi
; copy rdi to stack slot 0
mov     qword ptr [rsp], rdi
; copy stack slot 0 to rax
mov     rax, qword ptr [rsp]
; free 40 bytes from the stack
add     rsp, 40
; return to caller
ret