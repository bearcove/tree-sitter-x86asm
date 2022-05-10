(string_literal) @string

(integer_literal) @constant.builtin

(register) @constant.builtin
(segment) @constant.builtin

(comment) @comment

"section" @keyword
"extern" @keyword
"global" @keyword
"ptr" @keyword
(builtin_kw) @keyword
(ins_kw) @keyword

(width) @keyword

(operand_ident) @property
(section_name) @property
(identifier) @property

":" @punctuation.delimiter

"[" @punctuation.bracket
"]" @punctuation.bracket
