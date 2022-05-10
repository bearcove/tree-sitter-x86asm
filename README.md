# tree-sitter-x86asm

A tree-sitter grammar for x86 assembly, Intel syntax.

Just enough to highlight stuff on <https://fasterthanli.me/>.

In particular:

  * Parsing of effective addresses is very hacky (but highlights fine)
	* NASM macros aren't parsed at all
	* A ton of stuff is missing

But still, it makes a bunch of code look good, and that's good enough for me.

![](https://user-images.githubusercontent.com/7998310/167738355-573986ef-1020-43a8-b3f6-9b37e43f94fb.png)

It even sorta-understands objdump output:

![](https://user-images.githubusercontent.com/7998310/167738375-5467c5da-efca-4c79-bdda-c88b5ede4eba.png)
