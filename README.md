# tree-sitter-x86asm

A tree-sitter grammar for x86 assembly, Intel syntax.

Just enough to highlight stuff on <https://fasterthanli.me/>.

In particular:

  * Parsing of effective addresses is very hacky (but highlights fine)
	* NASM macros aren't parsed at all
	* A ton of stuff is missing

But still, it makes a bunch of code look good, and that's good enough for me.

![](https://user-images.githubusercontent.com/7998310/167667446-6c1ed5a8-d554-48d6-a05f-4f77f73b6753.png)

It even sorta-understands objdump output:

![](https://user-images.githubusercontent.com/7998310/167667561-94e3837c-8e16-4692-909a-91a522a6e2fb.png)
