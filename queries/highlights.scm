(string_literal) @string
(path) @string

(integer_literal) @constant.builtin
(objdump_section_addr) @constant.builtin
(objdump_offset_addr) @constant.builtin

(register) @constant.builtin
(segment) @constant.builtin

(comment) @comment

"section" @keyword
"extern" @keyword
"global" @keyword
"ptr" @keyword
(shell_prompt) @keyword
(builtin_kw) @keyword
(ins_kw) @keyword

(width) @keyword

(operand_ident) @property
(section_name) @property
(identifier) @property

":" @punctuation.delimiter

"[" @punctuation.bracket
"]" @punctuation.bracket
