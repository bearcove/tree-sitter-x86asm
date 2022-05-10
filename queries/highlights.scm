(string_literal) @string
(path) @string

(integer_literal) @constant.builtin
(objdump_section_addr) @label
(objdump_offset_addr) @label

(register) @constant.builtin
(segment) @constant.builtin

(objdump_machine_code_bytes) @comment
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
