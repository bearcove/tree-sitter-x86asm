
/home/amos/.cargo/bin/cargo:     file format elf64-x86-64

Disassembly of section .text:

00000000001142e0 <main>:
  1142e0:	55                   	push   rbp
  1142e5:	53                   	push   rbx
  1142e6:	48 81 ec e8 00 00 00 	sub    rsp,0xe8
  1142ed:	48 c7 44 24 20 00 00 	mov    QWORD PTR [rsp+0x20],0x0
  1142f4:	00 00 
  1142f6:	0f 28 05 a3 ad 6d 00 	movaps xmm0,XMMWORD PTR [rip+0x6dada3]        # 7ef0a0 <_fini+0x550>
  1142fd:	0f 11 44 24 28       	movups XMMWORD PTR [rsp+0x28],xmm0
  114302:	4c 8d 74 24 20       	lea    r14,[rsp+0x20]
  114315:	66 2e 0f 1f 84 00 00 	cs nop WORD PTR [rax+rax*1+0x0]
  114336:	74 e8                	je     114320 <main+0x40>
