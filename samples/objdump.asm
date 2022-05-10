$ llvm-objdump -M intel --disassemble-symbols=add target/debug/bounce

target/debug/bounce:    file format elf64-x86-64

Disassembly of section .text:

0000000000007d50 <add>:
    7d50: 48 83 ec 28                   sub     rsp, 40
    7d54: 48 89 7c 24 08                mov     qword ptr [rsp + 8], rdi
    7d59: 48 89 74 24 10                mov     qword ptr [rsp + 16], rsi
    7d5e: 48 89 7c 24 18                mov     qword ptr [rsp + 24], rdi
    7d63: 48 89 74 24 20                mov     qword ptr [rsp + 32], rsi
    7d68: 48 01 f7                      add     rdi, rsi
    7d6b: 48 89 3c 24                   mov     qword ptr [rsp], rdi
    7d6f: 48 8b 04 24                   mov     rax, qword ptr [rsp]
    7d73: 48 83 c4 28                   add     rsp, 40
    7d77: c3                            ret
    7d78: 0f 1f 84 00 00 00 00 00       nop     dword ptr [rax + rax]