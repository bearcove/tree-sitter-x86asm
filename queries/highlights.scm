(string_literal) @string

(integer_literal) @constant.builtin

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
(ptr) @keyword

(operand_ident) @property
(section_name) @property
(identifier) @property

(literal_offset) @comment

":" @punctuation.delimiter

"[" @punctuation.bracket
"]" @punctuation.bracket
"<" @punctuation.bracket
">" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket

(path) @string
(objdump_section_addr) @label
(objdump_offset_addr) @label
(objdump_machine_code_bytes) @comment