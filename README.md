# tree-sitter-x86asm

A tree-sitter grammar for x86 assembly, Intel syntax.

Just enough to highlight stuff on <https://fasterthanli.me/>.

In particular:

  * Parsing of effective addresses is very hacky (but highlights fine)
	* NASM macros aren't parsed at all
	* A ton of stuff is missing

But still, it makes a bunch of code look good, and that's good enough for me.

![](https://user-images.githubusercontent.com/7998310/167659230-fc8487bb-447a-48f0-a437-1b83e25c5be9.png)
