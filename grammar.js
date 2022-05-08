module.exports = grammar({
  name: "x86asm",

  rules: {
    source_file: ($) => $.toplevel_item,

    toplevel_item: ($) => repeat1($.statement),

    statement: ($) => seq(choice($.comment, $.directive), $._NEWLINE),

    comment: ($) => /;.*/,
    directive: ($) => choice($.section),

    section: ($) => seq("section", $.section_name),
    section_name: ($) => /\.[a-zA-Z_][a-zA-Z_0-9]*/,

    _NEWLINE: ($) => seq(optional($.comment), choice("\n", "\r\n")),
  },
});
