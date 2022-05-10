#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_db = 2,
  anon_sym_dw = 3,
  anon_sym_dd = 4,
  anon_sym_dq = 5,
  anon_sym_section = 6,
  anon_sym_info = 7,
  anon_sym_extern = 8,
  anon_sym_global = 9,
  aux_sym_shell_cmd_token1 = 10,
  sym_shell_prompt = 11,
  anon_sym_Disassemblyofsection = 12,
  anon_sym_COLON = 13,
  sym_objdump_file_format = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  aux_sym_objdump_section_label_token1 = 17,
  sym_objdump_section_addr = 18,
  aux_sym_objdump_machine_code_bytes_token1 = 19,
  aux_sym_objdump_offset_addr_token1 = 20,
  aux_sym_label_token1 = 21,
  aux_sym_ins_token1 = 22,
  anon_sym_byte = 23,
  anon_sym_word = 24,
  anon_sym_dword = 25,
  anon_sym_qword = 26,
  anon_sym_xmmword = 27,
  anon_sym_BYTE = 28,
  anon_sym_WORD = 29,
  anon_sym_DWORD = 30,
  anon_sym_QWORD = 31,
  anon_sym_XMMWORD = 32,
  anon_sym_ptr = 33,
  anon_sym_PTR = 34,
  anon_sym_COMMA = 35,
  aux_sym_register_token1 = 36,
  aux_sym_register_token2 = 37,
  aux_sym_register_token3 = 38,
  aux_sym_register_token4 = 39,
  aux_sym_register_token5 = 40,
  aux_sym_register_token6 = 41,
  anon_sym_rip = 42,
  anon_sym_LBRACK = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  anon_sym_STAR = 46,
  anon_sym_PLUS = 47,
  anon_sym_DASH = 48,
  anon_sym_RBRACK = 49,
  anon_sym_cs = 50,
  anon_sym_ds = 51,
  anon_sym_es = 52,
  anon_sym_fs = 53,
  anon_sym_gs = 54,
  anon_sym_ss = 55,
  sym_escape_sequence = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_string_literal_token1 = 58,
  aux_sym__decimal_literal_token1 = 59,
  aux_sym__decimal_literal_token2 = 60,
  aux_sym__decimal_literal_token3 = 61,
  aux_sym__hex_literal_token1 = 62,
  aux_sym__hex_literal_token2 = 63,
  aux_sym__hex_literal_token3 = 64,
  aux_sym__octal_literal_token1 = 65,
  aux_sym__octal_literal_token2 = 66,
  aux_sym__binary_literal_token1 = 67,
  aux_sym__binary_literal_token2 = 68,
  anon_sym_LF = 69,
  anon_sym_CR_LF = 70,
  sym_ins_kw = 71,
  sym_section_name = 72,
  sym__IDENTIFIER = 73,
  sym_source_file = 74,
  sym_toplevel_item = 75,
  sym_statement = 76,
  sym_directive = 77,
  sym_builtin = 78,
  sym_builtin_kw = 79,
  sym_section = 80,
  sym_extern = 81,
  sym_global = 82,
  sym_shell_cmd = 83,
  sym_objdump_disas_of_section = 84,
  sym_objdump_section_label = 85,
  sym_objdump_offset_label = 86,
  sym_objdump_machine_code_bytes = 87,
  sym_objdump_offset_addr = 88,
  sym_label = 89,
  sym_ins = 90,
  sym_width = 91,
  sym_ptr = 92,
  sym_operand_args = 93,
  sym_operand = 94,
  sym_register = 95,
  sym_operand_ident = 96,
  sym_effective_addr = 97,
  sym_segment_prefix = 98,
  sym_segment = 99,
  sym_string_literal = 100,
  sym_integer_literal = 101,
  sym_literal_offset = 102,
  sym__decimal_literal = 103,
  sym__hex_literal = 104,
  sym__octal_literal = 105,
  sym__binary_literal = 106,
  sym__NEWLINE = 107,
  sym_identifier = 108,
  aux_sym_toplevel_item_repeat1 = 109,
  aux_sym_objdump_machine_code_bytes_repeat1 = 110,
  aux_sym_operand_args_repeat1 = 111,
  aux_sym_effective_addr_repeat1 = 112,
  aux_sym_string_literal_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_db] = "db",
  [anon_sym_dw] = "dw",
  [anon_sym_dd] = "dd",
  [anon_sym_dq] = "dq",
  [anon_sym_section] = "section",
  [anon_sym_info] = "info",
  [anon_sym_extern] = "extern",
  [anon_sym_global] = "global",
  [aux_sym_shell_cmd_token1] = "shell_cmd_token1",
  [sym_shell_prompt] = "shell_prompt",
  [anon_sym_Disassemblyofsection] = "Disassembly of section ",
  [anon_sym_COLON] = ":",
  [sym_objdump_file_format] = "objdump_file_format",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [aux_sym_objdump_section_label_token1] = "objdump_section_label_token1",
  [sym_objdump_section_addr] = "objdump_section_addr",
  [aux_sym_objdump_machine_code_bytes_token1] = "objdump_machine_code_bytes_token1",
  [aux_sym_objdump_offset_addr_token1] = "objdump_offset_addr_token1",
  [aux_sym_label_token1] = "label_token1",
  [aux_sym_ins_token1] = "ins_token1",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_xmmword] = "xmmword",
  [anon_sym_BYTE] = "BYTE",
  [anon_sym_WORD] = "WORD",
  [anon_sym_DWORD] = "DWORD",
  [anon_sym_QWORD] = "QWORD",
  [anon_sym_XMMWORD] = "XMMWORD",
  [anon_sym_ptr] = "ptr",
  [anon_sym_PTR] = "PTR",
  [anon_sym_COMMA] = ",",
  [aux_sym_register_token1] = "register_token1",
  [aux_sym_register_token2] = "register_token2",
  [aux_sym_register_token3] = "register_token3",
  [aux_sym_register_token4] = "register_token4",
  [aux_sym_register_token5] = "register_token5",
  [aux_sym_register_token6] = "register_token6",
  [anon_sym_rip] = "rip",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [anon_sym_cs] = "cs",
  [anon_sym_ds] = "ds",
  [anon_sym_es] = "es",
  [anon_sym_fs] = "fs",
  [anon_sym_gs] = "gs",
  [anon_sym_ss] = "ss",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym__decimal_literal_token1] = "_decimal_literal_token1",
  [aux_sym__decimal_literal_token2] = "_decimal_literal_token2",
  [aux_sym__decimal_literal_token3] = "_decimal_literal_token3",
  [aux_sym__hex_literal_token1] = "_hex_literal_token1",
  [aux_sym__hex_literal_token2] = "_hex_literal_token2",
  [aux_sym__hex_literal_token3] = "_hex_literal_token3",
  [aux_sym__octal_literal_token1] = "_octal_literal_token1",
  [aux_sym__octal_literal_token2] = "_octal_literal_token2",
  [aux_sym__binary_literal_token1] = "_binary_literal_token1",
  [aux_sym__binary_literal_token2] = "_binary_literal_token2",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_ins_kw] = "ins_kw",
  [sym_section_name] = "section_name",
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [sym_source_file] = "source_file",
  [sym_toplevel_item] = "toplevel_item",
  [sym_statement] = "statement",
  [sym_directive] = "directive",
  [sym_builtin] = "builtin",
  [sym_builtin_kw] = "builtin_kw",
  [sym_section] = "section",
  [sym_extern] = "extern",
  [sym_global] = "global",
  [sym_shell_cmd] = "shell_cmd",
  [sym_objdump_disas_of_section] = "objdump_disas_of_section",
  [sym_objdump_section_label] = "objdump_section_label",
  [sym_objdump_offset_label] = "objdump_offset_label",
  [sym_objdump_machine_code_bytes] = "objdump_machine_code_bytes",
  [sym_objdump_offset_addr] = "objdump_offset_addr",
  [sym_label] = "label",
  [sym_ins] = "ins",
  [sym_width] = "width",
  [sym_ptr] = "ptr",
  [sym_operand_args] = "operand_args",
  [sym_operand] = "operand",
  [sym_register] = "register",
  [sym_operand_ident] = "operand_ident",
  [sym_effective_addr] = "effective_addr",
  [sym_segment_prefix] = "segment_prefix",
  [sym_segment] = "segment",
  [sym_string_literal] = "string_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_literal_offset] = "literal_offset",
  [sym__decimal_literal] = "_decimal_literal",
  [sym__hex_literal] = "_hex_literal",
  [sym__octal_literal] = "_octal_literal",
  [sym__binary_literal] = "_binary_literal",
  [sym__NEWLINE] = "_NEWLINE",
  [sym_identifier] = "identifier",
  [aux_sym_toplevel_item_repeat1] = "toplevel_item_repeat1",
  [aux_sym_objdump_machine_code_bytes_repeat1] = "objdump_machine_code_bytes_repeat1",
  [aux_sym_operand_args_repeat1] = "operand_args_repeat1",
  [aux_sym_effective_addr_repeat1] = "effective_addr_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_db] = anon_sym_db,
  [anon_sym_dw] = anon_sym_dw,
  [anon_sym_dd] = anon_sym_dd,
  [anon_sym_dq] = anon_sym_dq,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_global] = anon_sym_global,
  [aux_sym_shell_cmd_token1] = aux_sym_shell_cmd_token1,
  [sym_shell_prompt] = sym_shell_prompt,
  [anon_sym_Disassemblyofsection] = anon_sym_Disassemblyofsection,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_objdump_file_format] = sym_objdump_file_format,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_objdump_section_label_token1] = aux_sym_objdump_section_label_token1,
  [sym_objdump_section_addr] = sym_objdump_section_addr,
  [aux_sym_objdump_machine_code_bytes_token1] = aux_sym_objdump_machine_code_bytes_token1,
  [aux_sym_objdump_offset_addr_token1] = aux_sym_objdump_offset_addr_token1,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [aux_sym_ins_token1] = aux_sym_ins_token1,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_xmmword] = anon_sym_xmmword,
  [anon_sym_BYTE] = anon_sym_BYTE,
  [anon_sym_WORD] = anon_sym_WORD,
  [anon_sym_DWORD] = anon_sym_DWORD,
  [anon_sym_QWORD] = anon_sym_QWORD,
  [anon_sym_XMMWORD] = anon_sym_XMMWORD,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_PTR] = anon_sym_PTR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_register_token1] = aux_sym_register_token1,
  [aux_sym_register_token2] = aux_sym_register_token2,
  [aux_sym_register_token3] = aux_sym_register_token3,
  [aux_sym_register_token4] = aux_sym_register_token4,
  [aux_sym_register_token5] = aux_sym_register_token5,
  [aux_sym_register_token6] = aux_sym_register_token6,
  [anon_sym_rip] = anon_sym_rip,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_cs] = anon_sym_cs,
  [anon_sym_ds] = anon_sym_ds,
  [anon_sym_es] = anon_sym_es,
  [anon_sym_fs] = anon_sym_fs,
  [anon_sym_gs] = anon_sym_gs,
  [anon_sym_ss] = anon_sym_ss,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym__decimal_literal_token1] = aux_sym__decimal_literal_token1,
  [aux_sym__decimal_literal_token2] = aux_sym__decimal_literal_token2,
  [aux_sym__decimal_literal_token3] = aux_sym__decimal_literal_token3,
  [aux_sym__hex_literal_token1] = aux_sym__hex_literal_token1,
  [aux_sym__hex_literal_token2] = aux_sym__hex_literal_token2,
  [aux_sym__hex_literal_token3] = aux_sym__hex_literal_token3,
  [aux_sym__octal_literal_token1] = aux_sym__octal_literal_token1,
  [aux_sym__octal_literal_token2] = aux_sym__octal_literal_token2,
  [aux_sym__binary_literal_token1] = aux_sym__binary_literal_token1,
  [aux_sym__binary_literal_token2] = aux_sym__binary_literal_token2,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_ins_kw] = sym_ins_kw,
  [sym_section_name] = sym_section_name,
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [sym_source_file] = sym_source_file,
  [sym_toplevel_item] = sym_toplevel_item,
  [sym_statement] = sym_statement,
  [sym_directive] = sym_directive,
  [sym_builtin] = sym_builtin,
  [sym_builtin_kw] = sym_builtin_kw,
  [sym_section] = sym_section,
  [sym_extern] = sym_extern,
  [sym_global] = sym_global,
  [sym_shell_cmd] = sym_shell_cmd,
  [sym_objdump_disas_of_section] = sym_objdump_disas_of_section,
  [sym_objdump_section_label] = sym_objdump_section_label,
  [sym_objdump_offset_label] = sym_objdump_offset_label,
  [sym_objdump_machine_code_bytes] = sym_objdump_machine_code_bytes,
  [sym_objdump_offset_addr] = sym_objdump_offset_addr,
  [sym_label] = sym_label,
  [sym_ins] = sym_ins,
  [sym_width] = sym_width,
  [sym_ptr] = sym_ptr,
  [sym_operand_args] = sym_operand_args,
  [sym_operand] = sym_operand,
  [sym_register] = sym_register,
  [sym_operand_ident] = sym_operand_ident,
  [sym_effective_addr] = sym_effective_addr,
  [sym_segment_prefix] = sym_segment_prefix,
  [sym_segment] = sym_segment,
  [sym_string_literal] = sym_string_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_literal_offset] = sym_literal_offset,
  [sym__decimal_literal] = sym__decimal_literal,
  [sym__hex_literal] = sym__hex_literal,
  [sym__octal_literal] = sym__octal_literal,
  [sym__binary_literal] = sym__binary_literal,
  [sym__NEWLINE] = sym__NEWLINE,
  [sym_identifier] = sym_identifier,
  [aux_sym_toplevel_item_repeat1] = aux_sym_toplevel_item_repeat1,
  [aux_sym_objdump_machine_code_bytes_repeat1] = aux_sym_objdump_machine_code_bytes_repeat1,
  [aux_sym_operand_args_repeat1] = aux_sym_operand_args_repeat1,
  [aux_sym_effective_addr_repeat1] = aux_sym_effective_addr_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_db] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_shell_prompt] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Disassemblyofsection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_objdump_file_format] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_objdump_section_label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_objdump_section_addr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_objdump_machine_code_bytes_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_objdump_offset_addr_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ins_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmmword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMMWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PTR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_register_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_rip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_es] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ss] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__octal_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__octal_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__binary_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__binary_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_ins_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym__IDENTIFIER] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_toplevel_item] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_extern] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_objdump_disas_of_section] = {
    .visible = true,
    .named = true,
  },
  [sym_objdump_section_label] = {
    .visible = true,
    .named = true,
  },
  [sym_objdump_offset_label] = {
    .visible = true,
    .named = true,
  },
  [sym_objdump_machine_code_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_objdump_offset_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_ins] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [sym_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_args] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_operand_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_effective_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_segment_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_offset] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__NEWLINE] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_toplevel_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_objdump_machine_code_bytes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_effective_addr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(920);
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '$') ADVANCE(935);
      if (lookahead == '(') ADVANCE(1014);
      if (lookahead == ')') ADVANCE(1015);
      if (lookahead == '*') ADVANCE(1016);
      if (lookahead == '+') ADVANCE(1017);
      if (lookahead == ',') ADVANCE(1005);
      if (lookahead == '-') ADVANCE(1018);
      if (lookahead == '.') ADVANCE(1158);
      if (lookahead == '0') ADVANCE(944);
      if (lookahead == '1') ADVANCE(943);
      if (lookahead == ':') ADVANCE(937);
      if (lookahead == '<') ADVANCE(938);
      if (lookahead == '>') ADVANCE(939);
      if (lookahead == 'B') ADVANCE(942);
      if (lookahead == 'D') ADVANCE(941);
      if (lookahead == 'P') ADVANCE(1078);
      if (lookahead == 'Q') ADVANCE(1081);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == 'X') ADVANCE(1067);
      if (lookahead == '[') ADVANCE(1013);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == ']') ADVANCE(1019);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'a') ADVANCE(955);
      if (lookahead == 'b') ADVANCE(951);
      if (lookahead == 'c') ADVANCE(953);
      if (lookahead == 'd') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(947);
      if (lookahead == 'f') ADVANCE(954);
      if (lookahead == 'g') ADVANCE(1118);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'p') ADVANCE(1146);
      if (lookahead == 'q') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(1095);
      if (lookahead == 'w') ADVANCE(1129);
      if (lookahead == 'x') ADVANCE(1121);
      if (lookahead == 'y') ADVANCE(1123);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(921);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(949);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(958);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(948);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1055);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == ',') ADVANCE(1005);
      if (lookahead == '0') ADVANCE(1035);
      if (lookahead == '1') ADVANCE(1036);
      if (lookahead == '<') ADVANCE(938);
      if (lookahead == 'B') ADVANCE(1083);
      if (lookahead == 'D') ADVANCE(1080);
      if (lookahead == 'P') ADVANCE(1078);
      if (lookahead == 'Q') ADVANCE(1081);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == 'X') ADVANCE(1067);
      if (lookahead == '[') ADVANCE(1013);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(1103);
      if (lookahead == 'd') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == 'p') ADVANCE(1146);
      if (lookahead == 'q') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(1113);
      if (lookahead == 'w') ADVANCE(1129);
      if (lookahead == 'x') ADVANCE(1121);
      if (lookahead == 'y') ADVANCE(1123);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(921);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(1106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1038);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(1111);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(1037);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1030);
      if (lookahead != 0) ADVANCE(1031);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1057);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(921);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(681);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '$') ADVANCE(935);
      if (lookahead == '(') ADVANCE(1014);
      if (lookahead == ')') ADVANCE(1015);
      if (lookahead == '*') ADVANCE(1016);
      if (lookahead == '+') ADVANCE(1017);
      if (lookahead == ',') ADVANCE(1005);
      if (lookahead == '-') ADVANCE(1018);
      if (lookahead == '.') ADVANCE(1158);
      if (lookahead == '0') ADVANCE(971);
      if (lookahead == '1') ADVANCE(972);
      if (lookahead == ':') ADVANCE(937);
      if (lookahead == '<') ADVANCE(938);
      if (lookahead == '>') ADVANCE(939);
      if (lookahead == 'B') ADVANCE(970);
      if (lookahead == 'D') ADVANCE(969);
      if (lookahead == 'P') ADVANCE(1078);
      if (lookahead == 'Q') ADVANCE(1081);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == 'X') ADVANCE(1067);
      if (lookahead == '[') ADVANCE(1013);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == ']') ADVANCE(1019);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'a') ADVANCE(984);
      if (lookahead == 'b') ADVANCE(981);
      if (lookahead == 'c') ADVANCE(982);
      if (lookahead == 'd') ADVANCE(976);
      if (lookahead == 'e') ADVANCE(975);
      if (lookahead == 'f') ADVANCE(983);
      if (lookahead == 'g') ADVANCE(1118);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'p') ADVANCE(1146);
      if (lookahead == 'q') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(1095);
      if (lookahead == 'w') ADVANCE(1129);
      if (lookahead == 'x') ADVANCE(1121);
      if (lookahead == 'y') ADVANCE(1123);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(921);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(978);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(986);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(977);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '0') ADVANCE(1035);
      if (lookahead == '1') ADVANCE(1036);
      if (lookahead == ':') ADVANCE(901);
      if (lookahead == '>') ADVANCE(939);
      if (lookahead == 'B') ADVANCE(1083);
      if (lookahead == 'D') ADVANCE(1080);
      if (lookahead == 'P') ADVANCE(1078);
      if (lookahead == 'Q') ADVANCE(1081);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == 'X') ADVANCE(1067);
      if (lookahead == '[') ADVANCE(1013);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(1103);
      if (lookahead == 'd') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == 'p') ADVANCE(1146);
      if (lookahead == 'q') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(1113);
      if (lookahead == 'w') ADVANCE(1129);
      if (lookahead == 'x') ADVANCE(1121);
      if (lookahead == 'y') ADVANCE(1123);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(1106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1038);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(1111);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(1037);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '0') ADVANCE(1035);
      if (lookahead == '1') ADVANCE(1036);
      if (lookahead == 'P') ADVANCE(1078);
      if (lookahead == '[') ADVANCE(1013);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(1104);
      if (lookahead == 'd') ADVANCE(1102);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == 'p') ADVANCE(1146);
      if (lookahead == 'r') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(1113);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(1106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1038);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(1123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '0') ADVANCE(1035);
      if (lookahead == '1') ADVANCE(1036);
      if (lookahead == '[') ADVANCE(1013);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(1104);
      if (lookahead == 'd') ADVANCE(1102);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == 'r') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(1113);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(1106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1038);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(1123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '(') ADVANCE(1014);
      if (lookahead == ')') ADVANCE(1015);
      if (lookahead == '*') ADVANCE(1016);
      if (lookahead == '+') ADVANCE(1017);
      if (lookahead == '-') ADVANCE(1018);
      if (lookahead == '0') ADVANCE(1035);
      if (lookahead == '1') ADVANCE(1036);
      if (lookahead == '<') ADVANCE(938);
      if (lookahead == ']') ADVANCE(1019);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'a') ADVANCE(1106);
      if (lookahead == 'b') ADVANCE(1104);
      if (lookahead == 'c') ADVANCE(1105);
      if (lookahead == 'd') ADVANCE(1100);
      if (lookahead == 'e') ADVANCE(1086);
      if (lookahead == 'f') ADVANCE(1109);
      if (lookahead == 'g') ADVANCE(1142);
      if (lookahead == 'r') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(1112);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1038);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(1123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(1111);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '.') ADVANCE(917);
      if (lookahead == '0') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(907);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(251);
      if (lookahead == '1') ADVANCE(251);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(607);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(1058);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(526);
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '2') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(685);
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(608);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 's') ADVANCE(866);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 's') ADVANCE(866);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 's') ADVANCE(869);
      END_STATE();
    case 23:
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '3') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == '8') ADVANCE(177);
      END_STATE();
    case 25:
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '3') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == '1') ADVANCE(85);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(79);
      if (lookahead == '8') ADVANCE(1058);
      END_STATE();
    case 27:
      if (lookahead == '1') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(64);
      if (lookahead == '6') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(67);
      if (lookahead == '6') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == '1') ADVANCE(523);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == 'z') ADVANCE(227);
      END_STATE();
    case 31:
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '2') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(607);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(607);
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(1058);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(893);
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(863);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(875);
      if (lookahead == 'g') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(294);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(391);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(897);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(897);
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(298);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(300);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(841);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 'd') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'f') ADVANCE(667);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(551);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(129);
      if (lookahead == 'y') ADVANCE(482);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(608);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(295);
      END_STATE();
    case 49:
      if (lookahead == '2') ADVANCE(296);
      END_STATE();
    case 50:
      if (lookahead == '2') ADVANCE(428);
      END_STATE();
    case 51:
      if (lookahead == '2') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 52:
      if (lookahead == '2') ADVANCE(701);
      END_STATE();
    case 53:
      if (lookahead == '2') ADVANCE(297);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(502);
      END_STATE();
    case 55:
      if (lookahead == '2') ADVANCE(502);
      if (lookahead == 'b') ADVANCE(1058);
      END_STATE();
    case 56:
      if (lookahead == '2') ADVANCE(502);
      if (lookahead == 'b' ||
          lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 57:
      if (lookahead == '2') ADVANCE(502);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 58:
      if (lookahead == '2') ADVANCE(703);
      END_STATE();
    case 59:
      if (lookahead == '2') ADVANCE(640);
      if (lookahead == 'a' ||
          lookahead == 'u') ADVANCE(1058);
      END_STATE();
    case 60:
      if (lookahead == '2') ADVANCE(712);
      END_STATE();
    case 61:
      if (lookahead == '2') ADVANCE(845);
      END_STATE();
    case 62:
      if (lookahead == '2') ADVANCE(436);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(798);
      END_STATE();
    case 63:
      if (lookahead == '2') ADVANCE(839);
      END_STATE();
    case 64:
      if (lookahead == '2') ADVANCE(835);
      END_STATE();
    case 65:
      if (lookahead == '2') ADVANCE(689);
      END_STATE();
    case 66:
      if (lookahead == '2') ADVANCE(625);
      END_STATE();
    case 67:
      if (lookahead == '2') ADVANCE(837);
      END_STATE();
    case 68:
      if (lookahead == '2') ADVANCE(700);
      END_STATE();
    case 69:
      if (lookahead == '2') ADVANCE(702);
      END_STATE();
    case 70:
      if (lookahead == '2') ADVANCE(291);
      END_STATE();
    case 71:
      if (lookahead == '2') ADVANCE(711);
      END_STATE();
    case 72:
      if (lookahead == '3') ADVANCE(607);
      END_STATE();
    case 73:
      if (lookahead == '3') ADVANCE(35);
      END_STATE();
    case 74:
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == '3') ADVANCE(608);
      END_STATE();
    case 76:
      if (lookahead == '3') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == '3') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == '3') ADVANCE(63);
      if (lookahead == '6') ADVANCE(81);
      END_STATE();
    case 79:
      if (lookahead == '4') ADVANCE(1058);
      END_STATE();
    case 80:
      if (lookahead == '4') ADVANCE(608);
      END_STATE();
    case 81:
      if (lookahead == '4') ADVANCE(833);
      END_STATE();
    case 82:
      if (lookahead == '4') ADVANCE(836);
      END_STATE();
    case 83:
      if (lookahead == '5') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == '5') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 85:
      if (lookahead == '6') ADVANCE(1058);
      END_STATE();
    case 86:
      if (lookahead == '6') ADVANCE(177);
      END_STATE();
    case 87:
      if (lookahead == '6') ADVANCE(527);
      END_STATE();
    case 88:
      if (lookahead == '6') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == '6') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(636);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == '6') ADVANCE(79);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == '8') ADVANCE(1058);
      END_STATE();
    case 92:
      if (lookahead == '8') ADVANCE(608);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(916);
      if (lookahead == 'u') ADVANCE(912);
      if (lookahead == 'x') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1028);
      if (lookahead != 0) ADVANCE(1026);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'b') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'j') ADVANCE(116);
      if (lookahead == 'k') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(652);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(892);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'b') ADVANCE(830);
      if (lookahead == 'd') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(796);
      if (lookahead == 'q') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 'v') ADVANCE(746);
      if (lookahead == 'w') ADVANCE(275);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(635);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(857);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(824);
      if (lookahead == 'p') ADVANCE(607);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == 'm') ADVANCE(716);
      if (lookahead == 'n') ADVANCE(754);
      if (lookahead == 'q') ADVANCE(70);
      if (lookahead == 's') ADVANCE(905);
      if (lookahead == 'u') ADVANCE(607);
      if (lookahead == 'z') ADVANCE(832);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead == 'm') ADVANCE(716);
      if (lookahead == 'n') ADVANCE(768);
      if (lookahead == 'q') ADVANCE(1058);
      if (lookahead == 's') ADVANCE(867);
      if (lookahead == 'u') ADVANCE(607);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(1058);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(586);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == 'u') ADVANCE(568);
      if (lookahead == 'x') ADVANCE(570);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(814);
      if (lookahead == 'p') ADVANCE(720);
      if (lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(499);
      if (lookahead == 'c') ADVANCE(487);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'e') ADVANCE(848);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(613);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(574);
      if (lookahead == 'x') ADVANCE(588);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'q') ADVANCE(668);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == 'w') ADVANCE(133);
      if (lookahead == 'y') ADVANCE(691);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(500);
      if (lookahead == 'c') ADVANCE(521);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(572);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(651);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(583);
      if (lookahead == 'z') ADVANCE(359);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == 'o') ADVANCE(817);
      if (lookahead == 'u') ADVANCE(475);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(873);
      if (lookahead == 'r') ADVANCE(873);
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'b') ADVANCE(501);
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(852);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(581);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == 'x') ADVANCE(589);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(893);
      if (lookahead == 'l') ADVANCE(893);
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(870);
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(821);
      if (lookahead == 'u') ADVANCE(477);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(889);
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c' ||
          lookahead == 'o' ||
          lookahead == 's' ||
          lookahead == 'z') ADVANCE(1058);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'g') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == 'm') ADVANCE(604);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(874);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c' ||
          lookahead == 'e' ||
          lookahead == 'o' ||
          lookahead == 's' ||
          lookahead == 'z') ADVANCE(1058);
      if (lookahead == 'g') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(874);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c' ||
          lookahead == 'e' ||
          lookahead == 'o' ||
          lookahead == 'p' ||
          lookahead == 's' ||
          lookahead == 'z') ADVANCE(1058);
      if (lookahead == 'g') ADVANCE(338);
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead == 'z') ADVANCE(226);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1058);
      if (lookahead == 'f') ADVANCE(488);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == 'z') ADVANCE(360);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'c' ||
          lookahead == 'd' ||
          lookahead == 'i') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(844);
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead == 'u') ADVANCE(472);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == 's') ADVANCE(794);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(741);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(822);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead == 'q') ADVANCE(665);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(545);
      if (lookahead == 'f') ADVANCE(863);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'f') ADVANCE(863);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(828);
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead == 'c') ADVANCE(618);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(811);
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'h') ADVANCE(801);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead == 'l') ADVANCE(476);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(705);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'q') ADVANCE(1058);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'g') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(651);
      if (lookahead == 'r') ADVANCE(738);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'c') ADVANCE(593);
      if (lookahead == 'd') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(795);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == 's') ADVANCE(763);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(454);
      if (lookahead == 's') ADVANCE(800);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(454);
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(735);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(789);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(819);
      if (lookahead == 'p') ADVANCE(720);
      if (lookahead == 'u') ADVANCE(483);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(830);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(830);
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'q') ADVANCE(291);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(830);
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 's') ADVANCE(830);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(830);
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(607);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(1058);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(899);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(871);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(888);
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 's') ADVANCE(830);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(863);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(888);
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'w') ADVANCE(863);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'e' ||
          lookahead == 'u') ADVANCE(1058);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'e' ||
          lookahead == 'u') ADVANCE(1058);
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(605);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(608);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(685);
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(812);
      END_STATE();
    case 192:
      if (lookahead == 'b') ADVANCE(692);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(405);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(694);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(705);
      if (lookahead == 'v') ADVANCE(403);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(623);
      if (lookahead == 'i') ADVANCE(824);
      if (lookahead == 'p') ADVANCE(607);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(653);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'q') ADVANCE(57);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(704);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == 'z') ADVANCE(840);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(682);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(743);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(830);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(1058);
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(830);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(1058);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(1058);
      if (lookahead == 'o') ADVANCE(815);
      if (lookahead == 'p') ADVANCE(611);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(1058);
      if (lookahead == 's') ADVANCE(885);
      if (lookahead == 't') ADVANCE(855);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(880);
      if (lookahead == 'd') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(890);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 's') ADVANCE(769);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(604);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(851);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(838);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(745);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(466);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(491);
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead == 'o') ADVANCE(604);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(545);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(545);
      if (lookahead == 'm') ADVANCE(713);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(621);
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'h') ADVANCE(802);
      if (lookahead == 'q') ADVANCE(668);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(584);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(719);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == 'x') ADVANCE(693);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(709);
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(780);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(766);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(595);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(717);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(717);
      if (lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(830);
      if (lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(607);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 'q') ADVANCE(607);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(607);
      if (lookahead == 'q') ADVANCE(607);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(1058);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(1058);
      if (lookahead == 'q') ADVANCE(877);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(610);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(534);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(853);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(896);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(899);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(863);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(863);
      if (lookahead == 'q') ADVANCE(863);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(612);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(859);
      if (lookahead == 'q') ADVANCE(884);
      if (lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 266:
      if (lookahead == 'd') ADVANCE(859);
      if (lookahead == 'q') ADVANCE(884);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == 'x') ADVANCE(183);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(871);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(805);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(864);
      END_STATE();
    case 270:
      if (lookahead == 'd') ADVANCE(813);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(510);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(872);
      END_STATE();
    case 274:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'm') ADVANCE(795);
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(604);
      END_STATE();
    case 278:
      if (lookahead == 'd') ADVANCE(608);
      END_STATE();
    case 279:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 280:
      if (lookahead == 'd') ADVANCE(646);
      if (lookahead == 'm') ADVANCE(844);
      END_STATE();
    case 281:
      if (lookahead == 'd') ADVANCE(646);
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 282:
      if (lookahead == 'd') ADVANCE(646);
      if (lookahead == 'q') ADVANCE(1058);
      END_STATE();
    case 283:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 284:
      if (lookahead == 'd') ADVANCE(832);
      END_STATE();
    case 285:
      if (lookahead == 'd') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 286:
      if (lookahead == 'd') ADVANCE(645);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 'q') ADVANCE(645);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'd') ADVANCE(645);
      if (lookahead == 'q') ADVANCE(645);
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 288:
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == 'w') ADVANCE(870);
      END_STATE();
    case 289:
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 'w') ADVANCE(870);
      END_STATE();
    case 290:
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 291:
      if (lookahead == 'd') ADVANCE(640);
      END_STATE();
    case 292:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'h') ADVANCE(658);
      if (lookahead == 'l') ADVANCE(870);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'h') ADVANCE(677);
      if (lookahead == 'l') ADVANCE(888);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 294:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(879);
      END_STATE();
    case 295:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(862);
      END_STATE();
    case 296:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(861);
      if (lookahead == 'q') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 297:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(435);
      END_STATE();
    case 298:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(685);
      if (lookahead == 'q') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'q') ADVANCE(640);
      END_STATE();
    case 300:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'q') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 301:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 302:
      if (lookahead == 'd') ADVANCE(640);
      if (lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'v') ADVANCE(888);
      END_STATE();
    case 303:
      if (lookahead == 'd') ADVANCE(692);
      if (lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 304:
      if (lookahead == 'd') ADVANCE(647);
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 305:
      if (lookahead == 'd') ADVANCE(647);
      if (lookahead == 'i' ||
          lookahead == 'q') ADVANCE(1058);
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 's') ADVANCE(866);
      END_STATE();
    case 306:
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 307:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 308:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 310:
      if (lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 311:
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 313:
      if (lookahead == 'd') ADVANCE(793);
      END_STATE();
    case 314:
      if (lookahead == 'd') ADVANCE(793);
      if (lookahead == 'q') ADVANCE(59);
      END_STATE();
    case 315:
      if (lookahead == 'd') ADVANCE(793);
      if (lookahead == 'q') ADVANCE(121);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 317:
      if (lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 319:
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 320:
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 323:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 324:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'x') ADVANCE(695);
      END_STATE();
    case 326:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 327:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 328:
      if (lookahead == 'd') ADVANCE(708);
      END_STATE();
    case 329:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 330:
      if (lookahead == 'd') ADVANCE(687);
      END_STATE();
    case 331:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 332:
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'k') ADVANCE(342);
      END_STATE();
    case 333:
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 334:
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 335:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(847);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == 's') ADVANCE(876);
      if (lookahead == 't') ADVANCE(887);
      if (lookahead == 'z') ADVANCE(424);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(1058);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(1058);
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead == 'g') ADVANCE(875);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(823);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(842);
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 380:
      if (lookahead == 'f') ADVANCE(4);
      END_STATE();
    case 381:
      if (lookahead == 'f') ADVANCE(607);
      END_STATE();
    case 382:
      if (lookahead == 'f') ADVANCE(1058);
      END_STATE();
    case 383:
      if (lookahead == 'f') ADVANCE(870);
      END_STATE();
    case 384:
      if (lookahead == 'f') ADVANCE(886);
      END_STATE();
    case 385:
      if (lookahead == 'f') ADVANCE(387);
      END_STATE();
    case 386:
      if (lookahead == 'f') ADVANCE(858);
      END_STATE();
    case 387:
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 388:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(685);
      END_STATE();
    case 389:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 390:
      if (lookahead == 'f') ADVANCE(608);
      END_STATE();
    case 391:
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 392:
      if (lookahead == 'f') ADVANCE(578);
      END_STATE();
    case 393:
      if (lookahead == 'f') ADVANCE(722);
      if (lookahead == 'g') ADVANCE(722);
      END_STATE();
    case 394:
      if (lookahead == 'f') ADVANCE(722);
      if (lookahead == 'g') ADVANCE(722);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead == 't') ADVANCE(728);
      END_STATE();
    case 395:
      if (lookahead == 'f') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(713);
      if (lookahead == 'r') ADVANCE(1058);
      END_STATE();
    case 396:
      if (lookahead == 'f') ADVANCE(434);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(713);
      if (lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 397:
      if (lookahead == 'f') ADVANCE(493);
      END_STATE();
    case 398:
      if (lookahead == 'f') ADVANCE(761);
      END_STATE();
    case 399:
      if (lookahead == 'f') ADVANCE(778);
      END_STATE();
    case 400:
      if (lookahead == 'f') ADVANCE(367);
      END_STATE();
    case 401:
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 's') ADVANCE(866);
      END_STATE();
    case 402:
      if (lookahead == 'g') ADVANCE(1058);
      END_STATE();
    case 403:
      if (lookahead == 'g') ADVANCE(860);
      END_STATE();
    case 404:
      if (lookahead == 'g') ADVANCE(863);
      END_STATE();
    case 405:
      if (lookahead == 'g') ADVANCE(859);
      END_STATE();
    case 406:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 407:
      if (lookahead == 'g') ADVANCE(882);
      END_STATE();
    case 408:
      if (lookahead == 'g') ADVANCE(685);
      END_STATE();
    case 409:
      if (lookahead == 'g') ADVANCE(536);
      END_STATE();
    case 410:
      if (lookahead == 'g') ADVANCE(347);
      END_STATE();
    case 411:
      if (lookahead == 'g') ADVANCE(549);
      END_STATE();
    case 412:
      if (lookahead == 'g') ADVANCE(537);
      END_STATE();
    case 413:
      if (lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(1041);
      if (lookahead == 'x') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(607);
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(1058);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(402);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 421:
      if (lookahead == 'h') ADVANCE(566);
      END_STATE();
    case 422:
      if (lookahead == 'h') ADVANCE(382);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(382);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 424:
      if (lookahead == 'h') ADVANCE(435);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(685);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(592);
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(442);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(797);
      if (lookahead == 'l') ADVANCE(797);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(600);
      END_STATE();
    case 431:
      if (lookahead == 'h') ADVANCE(456);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(1058);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == 'p') ADVANCE(604);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(714);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(812);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == 'p') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(827);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(674);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead == 'v') ADVANCE(1058);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(748);
      if (lookahead == 'r') ADVANCE(772);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 460:
      if (lookahead == 'k') ADVANCE(607);
      END_STATE();
    case 461:
      if (lookahead == 'k') ADVANCE(1058);
      END_STATE();
    case 462:
      if (lookahead == 'k') ADVANCE(1058);
      if (lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 463:
      if (lookahead == 'k') ADVANCE(177);
      END_STATE();
    case 464:
      if (lookahead == 'k') ADVANCE(729);
      END_STATE();
    case 465:
      if (lookahead == 'k') ADVANCE(416);
      END_STATE();
    case 466:
      if (lookahead == 'k') ADVANCE(175);
      END_STATE();
    case 467:
      if (lookahead == 'k') ADVANCE(420);
      END_STATE();
    case 468:
      if (lookahead == 'k') ADVANCE(203);
      END_STATE();
    case 469:
      if (lookahead == 'k') ADVANCE(530);
      END_STATE();
    case 470:
      if (lookahead == 'k') ADVANCE(531);
      END_STATE();
    case 471:
      if (lookahead == 'k') ADVANCE(532);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(1058);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(893);
      if (lookahead == 'r') ADVANCE(893);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(865);
      if (lookahead == 'r') ADVANCE(865);
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(609);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(585);
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(616);
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(807);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 's') ADVANCE(760);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(648);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == 't') ADVANCE(787);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(1058);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(438);
      if (lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(893);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(893);
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(898);
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(897);
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 'v') ADVANCE(607);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(519);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(519);
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead == 'x') ADVANCE(770);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(604);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(608);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(440);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(447);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(685);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(844);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead == 'v') ADVANCE(751);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(620);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(710);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(723);
      if (lookahead == 's') ADVANCE(840);
      if (lookahead == 'z') ADVANCE(840);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(721);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(721);
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(808);
      END_STATE();
    case 530:
      if (lookahead == 'm') ADVANCE(596);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(598);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(599);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(1058);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(695);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(784);
      if (lookahead == 'x') ADVANCE(450);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(812);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(653);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == 's') ADVANCE(774);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(762);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(782);
      if (lookahead == 't') ADVANCE(891);
      if (lookahead == 'w') ADVANCE(748);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(634);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(634);
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(929);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(812);
      if (lookahead == 'p') ADVANCE(894);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(816);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(820);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(659);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(825);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(826);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(818);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 604:
      if (lookahead == 'p') ADVANCE(1058);
      END_STATE();
    case 605:
      if (lookahead == 'p') ADVANCE(1058);
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 606:
      if (lookahead == 'p') ADVANCE(1058);
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 607:
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 608:
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 's') ADVANCE(866);
      END_STATE();
    case 609:
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 's') ADVANCE(866);
      if (lookahead == 'x') ADVANCE(1058);
      END_STATE();
    case 610:
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 's') ADVANCE(868);
      END_STATE();
    case 611:
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 's') ADVANCE(904);
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 612:
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 'v') ADVANCE(607);
      END_STATE();
    case 613:
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(1058);
      END_STATE();
    case 614:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 615:
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 616:
      if (lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 617:
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 618:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 619:
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 620:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 621:
      if (lookahead == 'p') ADVANCE(451);
      END_STATE();
    case 622:
      if (lookahead == 'p') ADVANCE(608);
      END_STATE();
    case 623:
      if (lookahead == 'p') ADVANCE(720);
      END_STATE();
    case 624:
      if (lookahead == 'p') ADVANCE(408);
      END_STATE();
    case 625:
      if (lookahead == 'p') ADVANCE(685);
      END_STATE();
    case 626:
      if (lookahead == 'p') ADVANCE(685);
      if (lookahead == 'q') ADVANCE(1058);
      END_STATE();
    case 627:
      if (lookahead == 'p') ADVANCE(685);
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 628:
      if (lookahead == 'p') ADVANCE(745);
      END_STATE();
    case 629:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 630:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 631:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 632:
      if (lookahead == 'p') ADVANCE(449);
      END_STATE();
    case 633:
      if (lookahead == 'p') ADVANCE(601);
      END_STATE();
    case 634:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 635:
      if (lookahead == 'p') ADVANCE(638);
      END_STATE();
    case 636:
      if (lookahead == 'p') ADVANCE(765);
      END_STATE();
    case 637:
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 639:
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 640:
      if (lookahead == 'q') ADVANCE(1058);
      END_STATE();
    case 641:
      if (lookahead == 'q') ADVANCE(177);
      END_STATE();
    case 642:
      if (lookahead == 'q') ADVANCE(893);
      if (lookahead == 's') ADVANCE(781);
      END_STATE();
    case 643:
      if (lookahead == 'q') ADVANCE(452);
      END_STATE();
    case 644:
      if (lookahead == 'q') ADVANCE(338);
      END_STATE();
    case 645:
      if (lookahead == 'q') ADVANCE(32);
      END_STATE();
    case 646:
      if (lookahead == 'q') ADVANCE(792);
      END_STATE();
    case 647:
      if (lookahead == 'q') ADVANCE(102);
      END_STATE();
    case 648:
      if (lookahead == 'q') ADVANCE(291);
      END_STATE();
    case 649:
      if (lookahead == 'q') ADVANCE(672);
      END_STATE();
    case 650:
      if (lookahead == 'q') ADVANCE(676);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(607);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == 'u') ADVANCE(776);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(1058);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(900);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(893);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(683);
      if (lookahead == 'u') ADVANCE(830);
      if (lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(878);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == 'x') ADVANCE(639);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(755);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead == 's') ADVANCE(764);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(682);
      if (lookahead == 'u') ADVANCE(830);
      if (lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(830);
      if (lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(866);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == 'x') ADVANCE(608);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(893);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(893);
      if (lookahead == 'u') ADVANCE(893);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(884);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(884);
      if (lookahead == 'u') ADVANCE(884);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(863);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(859);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 699:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(879);
      END_STATE();
    case 701:
      if (lookahead == 's') ADVANCE(879);
      if (lookahead == 'u') ADVANCE(711);
      END_STATE();
    case 702:
      if (lookahead == 's') ADVANCE(862);
      END_STATE();
    case 703:
      if (lookahead == 's') ADVANCE(862);
      if (lookahead == 'u') ADVANCE(711);
      END_STATE();
    case 704:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(831);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(435);
      if (lookahead == 'u') ADVANCE(711);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(760);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 722:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 723:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 724:
      if (lookahead == 's') ADVANCE(749);
      END_STATE();
    case 725:
      if (lookahead == 's') ADVANCE(791);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 728:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(698);
      if (lookahead == 'u') ADVANCE(698);
      END_STATE();
    case 730:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 731:
      if (lookahead == 's') ADVANCE(744);
      END_STATE();
    case 732:
      if (lookahead == 's') ADVANCE(707);
      END_STATE();
    case 733:
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(757);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(758);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(785);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(781);
      END_STATE();
    case 741:
      if (lookahead == 's') ADVANCE(786);
      END_STATE();
    case 742:
      if (lookahead == 's') ADVANCE(470);
      if (lookahead == 'x') ADVANCE(608);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(863);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(882);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(895);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(606);
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(694);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(625);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 791:
      if (lookahead == 'u') ADVANCE(830);
      END_STATE();
    case 792:
      if (lookahead == 'u') ADVANCE(1058);
      END_STATE();
    case 793:
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 794:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 795:
      if (lookahead == 'u') ADVANCE(472);
      END_STATE();
    case 796:
      if (lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 797:
      if (lookahead == 'u') ADVANCE(640);
      END_STATE();
    case 798:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 799:
      if (lookahead == 'u') ADVANCE(481);
      END_STATE();
    case 800:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 801:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 802:
      if (lookahead == 'u') ADVANCE(385);
      END_STATE();
    case 803:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 804:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 805:
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 806:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 807:
      if (lookahead == 'u') ADVANCE(718);
      END_STATE();
    case 808:
      if (lookahead == 'u') ADVANCE(490);
      END_STATE();
    case 809:
      if (lookahead == 'u') ADVANCE(632);
      END_STATE();
    case 810:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 811:
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 812:
      if (lookahead == 'v') ADVANCE(1058);
      END_STATE();
    case 813:
      if (lookahead == 'v') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 814:
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 815:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 816:
      if (lookahead == 'v') ADVANCE(893);
      END_STATE();
    case 817:
      if (lookahead == 'v') ADVANCE(525);
      END_STATE();
    case 818:
      if (lookahead == 'v') ADVANCE(863);
      END_STATE();
    case 819:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 820:
      if (lookahead == 'v') ADVANCE(186);
      END_STATE();
    case 821:
      if (lookahead == 'v') ADVANCE(197);
      END_STATE();
    case 822:
      if (lookahead == 'v') ADVANCE(338);
      END_STATE();
    case 823:
      if (lookahead == 'v') ADVANCE(605);
      END_STATE();
    case 824:
      if (lookahead == 'v') ADVANCE(608);
      END_STATE();
    case 825:
      if (lookahead == 'v') ADVANCE(282);
      END_STATE();
    case 826:
      if (lookahead == 'v') ADVANCE(281);
      END_STATE();
    case 827:
      if (lookahead == 'v') ADVANCE(653);
      END_STATE();
    case 828:
      if (lookahead == 'v') ADVANCE(344);
      END_STATE();
    case 829:
      if (lookahead == 'v') ADVANCE(348);
      END_STATE();
    case 830:
      if (lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 831:
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 832:
      if (lookahead == 'x') ADVANCE(1058);
      END_STATE();
    case 833:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 834:
      if (lookahead == 'x') ADVANCE(617);
      END_STATE();
    case 835:
      if (lookahead == 'x') ADVANCE(856);
      END_STATE();
    case 836:
      if (lookahead == 'x') ADVANCE(854);
      END_STATE();
    case 837:
      if (lookahead == 'x') ADVANCE(883);
      END_STATE();
    case 838:
      if (lookahead == 'x') ADVANCE(850);
      END_STATE();
    case 839:
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 840:
      if (lookahead == 'x') ADVANCE(183);
      END_STATE();
    case 841:
      if (lookahead == 'x') ADVANCE(503);
      END_STATE();
    case 842:
      if (lookahead == 'x') ADVANCE(622);
      END_STATE();
    case 843:
      if (lookahead == 'x') ADVANCE(809);
      END_STATE();
    case 844:
      if (lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 845:
      if (lookahead == 'x') ADVANCE(614);
      END_STATE();
    case 846:
      if (lookahead == 'x') ADVANCE(759);
      END_STATE();
    case 847:
      if (lookahead == 'x') ADVANCE(777);
      END_STATE();
    case 848:
      if (lookahead == 'x') ADVANCE(775);
      END_STATE();
    case 849:
      if (lookahead == 'y') ADVANCE(413);
      END_STATE();
    case 850:
      if (lookahead == 'z') ADVANCE(1058);
      END_STATE();
    case 851:
      if (lookahead == 'z') ADVANCE(608);
      END_STATE();
    case 852:
      if (lookahead == 'z') ADVANCE(236);
      END_STATE();
    case 853:
      if (lookahead == '1' ||
          lookahead == 'z') ADVANCE(1058);
      if (lookahead == 'c') ADVANCE(830);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(435);
      END_STATE();
    case 854:
      if (lookahead == '2' ||
          lookahead == '4') ADVANCE(1058);
      END_STATE();
    case 855:
      if (lookahead == '3' ||
          lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 856:
      if (lookahead == '4' ||
          lookahead == '8') ADVANCE(1058);
      END_STATE();
    case 857:
      if (lookahead == 'a' ||
          lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 858:
      if (lookahead == 'b' ||
          lookahead == 'd') ADVANCE(1058);
      if (lookahead == 'h') ADVANCE(830);
      if (lookahead == 'l') ADVANCE(830);
      END_STATE();
    case 859:
      if (lookahead == 'b' ||
          lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 860:
      if (lookahead == 'b' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'u') ADVANCE(686);
      END_STATE();
    case 861:
      if (lookahead == 'd' ||
          lookahead == 'h') ADVANCE(1058);
      END_STATE();
    case 862:
      if (lookahead == 'd' ||
          lookahead == 'i') ADVANCE(1058);
      END_STATE();
    case 863:
      if (lookahead == 'd' ||
          lookahead == 'q') ADVANCE(1058);
      END_STATE();
    case 864:
      if (lookahead == 'd' ||
          lookahead == 'q') ADVANCE(1058);
      if (lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 865:
      if (lookahead == 'd' ||
          lookahead == 'q') ADVANCE(1058);
      if (lookahead == 'v') ADVANCE(863);
      END_STATE();
    case 866:
      if (lookahead == 'd' ||
          lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 867:
      if (lookahead == 'd' ||
          lookahead == 's') ADVANCE(1058);
      if (lookahead == 'h') ADVANCE(313);
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 868:
      if (lookahead == 'd' ||
          lookahead == 's') ADVANCE(1058);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 869:
      if (lookahead == 'd' ||
          lookahead == 's') ADVANCE(1058);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 870:
      if (lookahead == 'd' ||
          lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 871:
      if (lookahead == 'd' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 872:
      if (lookahead == 'd' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 873:
      if (lookahead == 'd' ||
          lookahead == 'x') ADVANCE(1058);
      END_STATE();
    case 874:
      if (lookahead == 'e' ||
          lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 875:
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 876:
      if (lookahead == 'f' ||
          lookahead == 'r') ADVANCE(1058);
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 877:
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(1058);
      END_STATE();
    case 878:
      if (lookahead == 'i' ||
          lookahead == 'm') ADVANCE(1058);
      END_STATE();
    case 879:
      if (lookahead == 'i' ||
          lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 880:
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(1058);
      if (lookahead == 'p') ADVANCE(627);
      END_STATE();
    case 881:
      if (lookahead == 'p' ||
          lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 882:
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1058);
      END_STATE();
    case 883:
      if (lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(1058);
      END_STATE();
    case 884:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 885:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 886:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'h') ADVANCE(830);
      if (lookahead == 'l') ADVANCE(830);
      END_STATE();
    case 887:
      if (lookahead == 'c' ||
          lookahead == 'r' ||
          lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 888:
      if (lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 889:
      if (lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'v') ADVANCE(888);
      END_STATE();
    case 890:
      if (lookahead == 'l' ||
          lookahead == 'n' ||
          lookahead == 'u') ADVANCE(1058);
      END_STATE();
    case 891:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1058);
      END_STATE();
    case 892:
      if (lookahead == 'a' ||
          lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 893:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 894:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead == 'u') ADVANCE(893);
      END_STATE();
    case 895:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 896:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 897:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'p') ADVANCE(866);
      END_STATE();
    case 898:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'p') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(893);
      END_STATE();
    case 899:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 's') ADVANCE(859);
      if (lookahead == 'u') ADVANCE(697);
      END_STATE();
    case 900:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 901:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(988);
      END_STATE();
    case 902:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(902)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(909);
      END_STATE();
    case 903:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(903)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 904:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 905:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'q' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(1058);
      if (lookahead == 'h') ADVANCE(313);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(252);
      END_STATE();
    case 906:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1026);
      END_STATE();
    case 907:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      END_STATE();
    case 908:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1045);
      END_STATE();
    case 909:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(959);
      END_STATE();
    case 910:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(906);
      END_STATE();
    case 911:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(910);
      END_STATE();
    case 912:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(911);
      END_STATE();
    case 913:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(912);
      END_STATE();
    case 914:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(913);
      END_STATE();
    case 915:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(914);
      END_STATE();
    case 916:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(915);
      END_STATE();
    case 917:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1059);
      END_STATE();
    case 918:
      if (eof) ADVANCE(920);
      if (lookahead == '\n') ADVANCE(1055);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(1029);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == ',') ADVANCE(1005);
      if (lookahead == '0') ADVANCE(1035);
      if (lookahead == '1') ADVANCE(1036);
      if (lookahead == '<') ADVANCE(938);
      if (lookahead == 'B') ADVANCE(1083);
      if (lookahead == 'D') ADVANCE(1080);
      if (lookahead == 'P') ADVANCE(1078);
      if (lookahead == 'Q') ADVANCE(1081);
      if (lookahead == 'W') ADVANCE(1069);
      if (lookahead == 'X') ADVANCE(1067);
      if (lookahead == '[') ADVANCE(1013);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(1103);
      if (lookahead == 'd') ADVANCE(1101);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == 'p') ADVANCE(1146);
      if (lookahead == 'q') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(1113);
      if (lookahead == 'w') ADVANCE(1129);
      if (lookahead == 'x') ADVANCE(1121);
      if (lookahead == 'y') ADVANCE(1123);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(918)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(921);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(1106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1038);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(1111);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(1037);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 919:
      if (eof) ADVANCE(920);
      if (lookahead == '\n') ADVANCE(1057);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(919)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(921);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_db);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_db);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_dw);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_dd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_dd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_dq);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_info);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_shell_cmd_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(934);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_shell_cmd_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_shell_prompt);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_objdump_section_label_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(940);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'W') ADVANCE(1070);
      if (lookahead == 'i') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'Y') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(958);
      if (lookahead == 'd') ADVANCE(958);
      if (lookahead == 'y') ADVANCE(1052);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(943);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(949);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(948);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(945);
      if (lookahead == 'd') ADVANCE(957);
      if (lookahead == 'y') ADVANCE(1051);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(1157);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1046);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(943);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(949);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(948);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == '_') ADVANCE(1054);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(945);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'b') ADVANCE(922);
      if (lookahead == 'd') ADVANCE(925);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'q') ADVANCE(927);
      if (lookahead == 's') ADVANCE(1021);
      if (lookahead == 'w') ADVANCE(924);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'b') ADVANCE(952);
      if (lookahead == 'd') ADVANCE(950);
      if (lookahead == 's') ADVANCE(1022);
      if (lookahead == 'x') ADVANCE(1149);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'd') ADVANCE(958);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(948);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'd') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(949);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == 'y') ADVANCE(1147);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 's') ADVANCE(1020);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 's') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(957);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(958);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(987);
      if (lookahead == 'd') ADVANCE(987);
      if (lookahead == 'y') ADVANCE(1052);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(973);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(980);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(979);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == '_') ADVANCE(1054);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(974);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'd') ADVANCE(987);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(979);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'd') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'W') ADVANCE(1070);
      if (lookahead == 'i') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'Y') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(961);
      if (lookahead == 'd') ADVANCE(967);
      if (lookahead == 'y') ADVANCE(1051);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(1157);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1046);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(960);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(963);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(962);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(968);
      if (lookahead == 'd') ADVANCE(968);
      if (lookahead == 'y') ADVANCE(1052);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(960);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(963);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(962);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(987);
      if (lookahead == 'd') ADVANCE(987);
      if (lookahead == 'y') ADVANCE(1052);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(973);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(980);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(979);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == '_') ADVANCE(1054);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(974);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'b') ADVANCE(965);
      if (lookahead == 'd') ADVANCE(964);
      if (lookahead == 's') ADVANCE(1022);
      if (lookahead == 'x') ADVANCE(1149);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'b') ADVANCE(923);
      if (lookahead == 'd') ADVANCE(926);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'q') ADVANCE(927);
      if (lookahead == 's') ADVANCE(1021);
      if (lookahead == 'w') ADVANCE(924);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'd') ADVANCE(968);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(962);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'd') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(963);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'd') ADVANCE(987);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(979);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'd') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(980);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == 'y') ADVANCE(1147);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 's') ADVANCE(1020);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 's') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(988);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_ins_token1);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead == '\r') ADVANCE(989);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(989);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_ins_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(990);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_ins_token1);
      if (eof) ADVANCE(920);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead == '\r') ADVANCE(989);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(989);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_ins_token1);
      if (eof) ADVANCE(920);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(990);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_xmmword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_XMMWORD);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_PTR);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_rip);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_cs);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_ds);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_fs);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_gs);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_ss);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1027);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1031);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1031);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1034);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token2);
      if (lookahead == 'h') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1034);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(1049);
      if (lookahead == 'd') ADVANCE(1032);
      if (lookahead == 'h') ADVANCE(1040);
      if (lookahead == 'x') ADVANCE(1157);
      if (lookahead == 'y') ADVANCE(1051);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1046);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1036);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1038);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(1154);
      if (lookahead == 'b') ADVANCE(1050);
      if (lookahead == 'd') ADVANCE(1033);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == 'y') ADVANCE(1052);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1036);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1038);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(1033);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(1047);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1037);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(1033);
      if (lookahead == 'h') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1045);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__hex_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__hex_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__hex_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1045);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1048);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__octal_literal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1048);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '_') ADVANCE(1054);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1053);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == 'h') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(1054);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '_') ADVANCE(1054);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1053);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(1054);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1055);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1056);
      if (lookahead == '\r') ADVANCE(989);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(989);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1057);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_ins_kw);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1059);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == ' ') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(1155);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(1010);
      if (lookahead == 'b') ADVANCE(1134);
      if (lookahead == 'd') ADVANCE(1114);
      if (lookahead == 'i') ADVANCE(1135);
      if (lookahead == 's') ADVANCE(1113);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(1152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(999);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(1000);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(1001);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(1002);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(998);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'M') ADVANCE(1068);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'M') ADVANCE(1082);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'O') ADVANCE(1074);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'O') ADVANCE(1075);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'O') ADVANCE(1076);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'O') ADVANCE(1077);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(1004);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(1062);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(1063);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(1064);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(1065);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'T') ADVANCE(1073);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'T') ADVANCE(1066);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'W') ADVANCE(1070);
      if (lookahead == 'h') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'W') ADVANCE(1071);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'W') ADVANCE(1072);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'Y') ADVANCE(1079);
      if (lookahead == 'h') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(1116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(1144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(1108);
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == 's') ADVANCE(1022);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(1108);
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == 's') ADVANCE(1113);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(1084);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(1117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(1148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(994);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(997);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(995);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(1090);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 's') ADVANCE(1025);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(993);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(1122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(1138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(1128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1006);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'l') ADVANCE(1006);
      if (lookahead == 's') ADVANCE(1021);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1006);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'l') ADVANCE(1006);
      if (lookahead == 'w') ADVANCE(1133);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1006);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'l') ADVANCE(1006);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(1006);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == 'y') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(1006);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(1006);
      if (lookahead == 's') ADVANCE(1020);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(1006);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == 's') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1042);
      if (lookahead == 'x') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 's') ADVANCE(1025);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(1153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(1127);
      if (lookahead == 's') ADVANCE(1024);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(1151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(1156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(1119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(1089);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(1099);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(931);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(928);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(1088);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(930);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(1137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(1126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(1139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(1140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(1141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(1012);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(1003);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(1091);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(1125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(1092);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(1093);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(1094);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(1024);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(1085);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(1145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(1097);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(1136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(1096);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(1115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(1098);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'w') ADVANCE(1131);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'w') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1011);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(1007);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'y') ADVANCE(1060);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(1052);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(1154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1010);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1011);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1059);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1159);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 992},
  [2] = {.lex_state = 918},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 992},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 992},
  [12] = {.lex_state = 991},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 992},
  [23] = {.lex_state = 992},
  [24] = {.lex_state = 991},
  [25] = {.lex_state = 991},
  [26] = {.lex_state = 918},
  [27] = {.lex_state = 918},
  [28] = {.lex_state = 918},
  [29] = {.lex_state = 991},
  [30] = {.lex_state = 918},
  [31] = {.lex_state = 918},
  [32] = {.lex_state = 918},
  [33] = {.lex_state = 918},
  [34] = {.lex_state = 918},
  [35] = {.lex_state = 918},
  [36] = {.lex_state = 918},
  [37] = {.lex_state = 918},
  [38] = {.lex_state = 919},
  [39] = {.lex_state = 918},
  [40] = {.lex_state = 918},
  [41] = {.lex_state = 918},
  [42] = {.lex_state = 918},
  [43] = {.lex_state = 918},
  [44] = {.lex_state = 918},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 918},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 918},
  [49] = {.lex_state = 918},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 918},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 918},
  [54] = {.lex_state = 918},
  [55] = {.lex_state = 918},
  [56] = {.lex_state = 918},
  [57] = {.lex_state = 918},
  [58] = {.lex_state = 918},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 918},
  [61] = {.lex_state = 918},
  [62] = {.lex_state = 902},
  [63] = {.lex_state = 918},
  [64] = {.lex_state = 903},
  [65] = {.lex_state = 903},
  [66] = {.lex_state = 903},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 940},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 903},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 933},
  [83] = {.lex_state = 94},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 903},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_db] = ACTIONS(1),
    [anon_sym_dw] = ACTIONS(1),
    [anon_sym_dd] = ACTIONS(1),
    [anon_sym_dq] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [sym_shell_prompt] = ACTIONS(1),
    [anon_sym_Disassemblyofsection] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_objdump_section_addr] = ACTIONS(1),
    [aux_sym_objdump_machine_code_bytes_token1] = ACTIONS(1),
    [aux_sym_objdump_offset_addr_token1] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_xmmword] = ACTIONS(1),
    [anon_sym_BYTE] = ACTIONS(1),
    [anon_sym_WORD] = ACTIONS(1),
    [anon_sym_DWORD] = ACTIONS(1),
    [anon_sym_QWORD] = ACTIONS(1),
    [anon_sym_XMMWORD] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_PTR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_register_token1] = ACTIONS(1),
    [aux_sym_register_token2] = ACTIONS(1),
    [aux_sym_register_token3] = ACTIONS(1),
    [aux_sym_register_token4] = ACTIONS(1),
    [aux_sym_register_token5] = ACTIONS(1),
    [aux_sym_register_token6] = ACTIONS(1),
    [anon_sym_rip] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_cs] = ACTIONS(1),
    [anon_sym_ds] = ACTIONS(1),
    [anon_sym_es] = ACTIONS(1),
    [anon_sym_fs] = ACTIONS(1),
    [anon_sym_gs] = ACTIONS(1),
    [anon_sym_ss] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__decimal_literal_token1] = ACTIONS(1),
    [aux_sym__decimal_literal_token2] = ACTIONS(1),
    [aux_sym__decimal_literal_token3] = ACTIONS(1),
    [aux_sym__hex_literal_token3] = ACTIONS(1),
    [aux_sym__octal_literal_token1] = ACTIONS(1),
    [aux_sym__octal_literal_token2] = ACTIONS(1),
    [aux_sym__binary_literal_token1] = ACTIONS(1),
    [aux_sym__binary_literal_token2] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
    [sym__IDENTIFIER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(70),
    [sym_toplevel_item] = STATE(80),
    [sym_statement] = STATE(11),
    [sym_directive] = STATE(46),
    [sym_builtin] = STATE(53),
    [sym_builtin_kw] = STATE(3),
    [sym_section] = STATE(53),
    [sym_extern] = STATE(53),
    [sym_global] = STATE(53),
    [sym_shell_cmd] = STATE(53),
    [sym_objdump_disas_of_section] = STATE(53),
    [sym_objdump_section_label] = STATE(53),
    [sym_objdump_offset_label] = STATE(53),
    [sym_objdump_offset_addr] = STATE(75),
    [sym_label] = STATE(53),
    [sym_ins] = STATE(53),
    [sym_identifier] = STATE(72),
    [aux_sym_toplevel_item_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_db] = ACTIONS(5),
    [anon_sym_dw] = ACTIONS(5),
    [anon_sym_dd] = ACTIONS(5),
    [anon_sym_dq] = ACTIONS(5),
    [anon_sym_section] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(9),
    [anon_sym_global] = ACTIONS(11),
    [sym_shell_prompt] = ACTIONS(13),
    [anon_sym_Disassemblyofsection] = ACTIONS(15),
    [sym_objdump_file_format] = ACTIONS(17),
    [sym_objdump_section_addr] = ACTIONS(19),
    [aux_sym_objdump_offset_addr_token1] = ACTIONS(21),
    [aux_sym_ins_token1] = ACTIONS(23),
    [sym__IDENTIFIER] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__IDENTIFIER,
    STATE(8), 1,
      sym_width,
    STATE(19), 1,
      sym_ptr,
    STATE(27), 1,
      sym_operand,
    STATE(51), 1,
      sym_operand_args,
    ACTIONS(33), 2,
      anon_sym_ptr,
      anon_sym_PTR,
    ACTIONS(29), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(26), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(41), 5,
      sym_register,
      sym_operand_ident,
      sym_effective_addr,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(35), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(31), 10,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_xmmword,
      anon_sym_BYTE,
      anon_sym_WORD,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_XMMWORD,
    ACTIONS(41), 10,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [80] = 14,
    ACTIONS(43), 1,
      sym__IDENTIFIER,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym__hex_literal_token2,
    STATE(8), 1,
      sym_width,
    STATE(19), 1,
      sym_ptr,
    STATE(27), 1,
      sym_operand,
    STATE(61), 1,
      sym_operand_args,
    ACTIONS(33), 2,
      anon_sym_ptr,
      anon_sym_PTR,
    STATE(26), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(41), 5,
      sym_register,
      sym_operand_ident,
      sym_effective_addr,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(35), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(41), 9,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
    ACTIONS(31), 10,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_xmmword,
      anon_sym_BYTE,
      anon_sym_WORD,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_XMMWORD,
  [154] = 13,
    ACTIONS(43), 1,
      sym__IDENTIFIER,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym__hex_literal_token2,
    STATE(8), 1,
      sym_width,
    STATE(19), 1,
      sym_ptr,
    STATE(34), 1,
      sym_operand,
    ACTIONS(33), 2,
      anon_sym_ptr,
      anon_sym_PTR,
    STATE(26), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(41), 5,
      sym_register,
      sym_operand_ident,
      sym_effective_addr,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(35), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(41), 9,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
    ACTIONS(31), 10,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_xmmword,
      anon_sym_BYTE,
      anon_sym_WORD,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_XMMWORD,
  [225] = 10,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(63), 1,
      aux_sym__hex_literal_token2,
    STATE(84), 1,
      sym_segment,
    ACTIONS(55), 2,
      anon_sym_DASH,
      sym__IDENTIFIER,
    ACTIONS(53), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 4,
      sym_register,
      sym_segment_prefix,
      sym_integer_literal,
      aux_sym_effective_addr_repeat1,
    STATE(10), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(59), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(51), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(61), 9,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [285] = 10,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    ACTIONS(82), 1,
      aux_sym__hex_literal_token2,
    STATE(84), 1,
      sym_segment,
    ACTIONS(71), 2,
      anon_sym_DASH,
      sym__IDENTIFIER,
    ACTIONS(68), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 4,
      sym_register,
      sym_segment_prefix,
      sym_integer_literal,
      aux_sym_effective_addr_repeat1,
    STATE(10), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(76), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(65), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(79), 9,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [345] = 9,
    ACTIONS(63), 1,
      aux_sym__hex_literal_token2,
    STATE(84), 1,
      sym_segment,
    ACTIONS(87), 2,
      anon_sym_DASH,
      sym__IDENTIFIER,
    ACTIONS(85), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(5), 4,
      sym_register,
      sym_segment_prefix,
      sym_integer_literal,
      aux_sym_effective_addr_repeat1,
    STATE(10), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(59), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(51), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(61), 9,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [402] = 10,
    ACTIONS(43), 1,
      sym__IDENTIFIER,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym__hex_literal_token2,
    STATE(18), 1,
      sym_ptr,
    ACTIONS(33), 2,
      anon_sym_ptr,
      anon_sym_PTR,
    STATE(26), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(32), 5,
      sym_register,
      sym_operand_ident,
      sym_effective_addr,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(35), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(41), 9,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [455] = 19,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_section,
    ACTIONS(100), 1,
      anon_sym_extern,
    ACTIONS(103), 1,
      anon_sym_global,
    ACTIONS(106), 1,
      sym_shell_prompt,
    ACTIONS(109), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(112), 1,
      sym_objdump_file_format,
    ACTIONS(115), 1,
      sym_objdump_section_addr,
    ACTIONS(118), 1,
      aux_sym_objdump_offset_addr_token1,
    ACTIONS(121), 1,
      aux_sym_ins_token1,
    ACTIONS(124), 1,
      sym__IDENTIFIER,
    STATE(3), 1,
      sym_builtin_kw,
    STATE(46), 1,
      sym_directive,
    STATE(72), 1,
      sym_identifier,
    STATE(75), 1,
      sym_objdump_offset_addr,
    STATE(9), 2,
      sym_statement,
      aux_sym_toplevel_item_repeat1,
    ACTIONS(94), 4,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
    STATE(53), 10,
      sym_builtin,
      sym_section,
      sym_extern,
      sym_global,
      sym_shell_cmd,
      sym_objdump_disas_of_section,
      sym_objdump_section_label,
      sym_objdump_offset_label,
      sym_label,
      sym_ins,
  [526] = 4,
    ACTIONS(127), 1,
      anon_sym_LT,
    STATE(17), 1,
      sym_literal_offset,
    ACTIONS(131), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      aux_sym__hex_literal_token2,
    ACTIONS(129), 24,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      anon_sym_DASH,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [567] = 19,
    ACTIONS(7), 1,
      anon_sym_section,
    ACTIONS(9), 1,
      anon_sym_extern,
    ACTIONS(11), 1,
      anon_sym_global,
    ACTIONS(13), 1,
      sym_shell_prompt,
    ACTIONS(15), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(17), 1,
      sym_objdump_file_format,
    ACTIONS(19), 1,
      sym_objdump_section_addr,
    ACTIONS(21), 1,
      aux_sym_objdump_offset_addr_token1,
    ACTIONS(23), 1,
      aux_sym_ins_token1,
    ACTIONS(25), 1,
      sym__IDENTIFIER,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_comment,
    STATE(3), 1,
      sym_builtin_kw,
    STATE(43), 1,
      sym_directive,
    STATE(72), 1,
      sym_identifier,
    STATE(75), 1,
      sym_objdump_offset_addr,
    STATE(9), 2,
      sym_statement,
      aux_sym_toplevel_item_repeat1,
    ACTIONS(5), 4,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
    STATE(53), 10,
      sym_builtin,
      sym_section,
      sym_extern,
      sym_global,
      sym_shell_cmd,
      sym_objdump_disas_of_section,
      sym_objdump_section_label,
      sym_objdump_offset_label,
      sym_label,
      sym_ins,
  [638] = 18,
    ACTIONS(7), 1,
      anon_sym_section,
    ACTIONS(9), 1,
      anon_sym_extern,
    ACTIONS(11), 1,
      anon_sym_global,
    ACTIONS(13), 1,
      sym_shell_prompt,
    ACTIONS(15), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(17), 1,
      sym_objdump_file_format,
    ACTIONS(19), 1,
      sym_objdump_section_addr,
    ACTIONS(21), 1,
      aux_sym_objdump_offset_addr_token1,
    ACTIONS(25), 1,
      sym__IDENTIFIER,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      aux_sym_ins_token1,
    STATE(3), 1,
      sym_builtin_kw,
    STATE(56), 1,
      sym_directive,
    STATE(72), 1,
      sym_identifier,
    STATE(75), 1,
      sym_objdump_offset_addr,
    ACTIONS(139), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(5), 4,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
    STATE(53), 10,
      sym_builtin,
      sym_section,
      sym_extern,
      sym_global,
      sym_shell_cmd,
      sym_objdump_disas_of_section,
      sym_objdump_section_label,
      sym_objdump_offset_label,
      sym_label,
      sym_ins,
  [707] = 2,
    ACTIONS(145), 3,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
    ACTIONS(143), 29,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_xmmword,
      anon_sym_BYTE,
      anon_sym_WORD,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_XMMWORD,
      anon_sym_ptr,
      anon_sym_PTR,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [744] = 2,
    ACTIONS(149), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      aux_sym__hex_literal_token2,
    ACTIONS(147), 24,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      anon_sym_DASH,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [779] = 2,
    ACTIONS(153), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      aux_sym__hex_literal_token2,
    ACTIONS(151), 24,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      anon_sym_DASH,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [814] = 2,
    ACTIONS(157), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      aux_sym__hex_literal_token2,
    ACTIONS(155), 24,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      anon_sym_DASH,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [849] = 2,
    ACTIONS(161), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      aux_sym__hex_literal_token2,
    ACTIONS(159), 24,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      anon_sym_DASH,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [884] = 8,
    ACTIONS(43), 1,
      sym__IDENTIFIER,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym__hex_literal_token2,
    STATE(26), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(31), 5,
      sym_register,
      sym_operand_ident,
      sym_effective_addr,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(35), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(41), 9,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [930] = 8,
    ACTIONS(43), 1,
      sym__IDENTIFIER,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym__hex_literal_token2,
    STATE(26), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(32), 5,
      sym_register,
      sym_operand_ident,
      sym_effective_addr,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(35), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(41), 9,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [976] = 2,
    ACTIONS(165), 3,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
    ACTIONS(163), 19,
      anon_sym_ptr,
      anon_sym_PTR,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [1003] = 2,
    ACTIONS(169), 3,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
    ACTIONS(167), 17,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
      sym__IDENTIFIER,
  [1028] = 2,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      aux_sym_ins_token1,
    ACTIONS(173), 14,
      sym_comment,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
      anon_sym_section,
      anon_sym_extern,
      anon_sym_global,
      sym_shell_prompt,
      anon_sym_Disassemblyofsection,
      sym_objdump_file_format,
      sym_objdump_section_addr,
      aux_sym_objdump_offset_addr_token1,
      sym__IDENTIFIER,
  [1049] = 2,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      aux_sym_ins_token1,
    ACTIONS(177), 14,
      sym_comment,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
      anon_sym_section,
      anon_sym_extern,
      anon_sym_global,
      sym_shell_prompt,
      anon_sym_Disassemblyofsection,
      sym_objdump_file_format,
      sym_objdump_section_addr,
      aux_sym_objdump_offset_addr_token1,
      sym__IDENTIFIER,
  [1070] = 4,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      aux_sym_objdump_machine_code_bytes_token1,
    STATE(24), 1,
      aux_sym_objdump_machine_code_bytes_repeat1,
    ACTIONS(181), 4,
      sym_comment,
      aux_sym_ins_token1,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1086] = 4,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      aux_sym_objdump_machine_code_bytes_token1,
    STATE(24), 1,
      aux_sym_objdump_machine_code_bytes_repeat1,
    ACTIONS(188), 4,
      sym_comment,
      aux_sym_ins_token1,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1102] = 4,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_literal_offset,
    ACTIONS(129), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1118] = 4,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(196), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1133] = 4,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(202), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1148] = 4,
    ACTIONS(141), 1,
      aux_sym_ins_token1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_ins,
    ACTIONS(209), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1163] = 4,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(213), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1178] = 2,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1188] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1198] = 2,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1208] = 2,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1218] = 2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1228] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1238] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1248] = 3,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      anon_sym_info,
    ACTIONS(233), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1260] = 2,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1270] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1280] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1290] = 2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1300] = 4,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 1,
      sym_comment,
    STATE(23), 1,
      sym__NEWLINE,
    ACTIONS(253), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1314] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1323] = 4,
    ACTIONS(259), 1,
      sym_escape_sequence,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_literal_token1,
    STATE(47), 1,
      aux_sym_string_literal_repeat1,
  [1336] = 3,
    ACTIONS(251), 1,
      sym_comment,
    STATE(23), 1,
      sym__NEWLINE,
    ACTIONS(253), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1347] = 4,
    ACTIONS(265), 1,
      sym_escape_sequence,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_string_literal_token1,
    STATE(47), 1,
      aux_sym_string_literal_repeat1,
  [1360] = 2,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1369] = 2,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1378] = 3,
    ACTIONS(281), 1,
      aux_sym__hex_literal_token1,
    STATE(86), 1,
      sym__hex_literal,
    ACTIONS(283), 2,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
  [1389] = 2,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1398] = 4,
    ACTIONS(289), 1,
      sym_escape_sequence,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      aux_sym_string_literal_token1,
    STATE(45), 1,
      aux_sym_string_literal_repeat1,
  [1411] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1420] = 2,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1429] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1438] = 2,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1447] = 2,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1456] = 2,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1465] = 3,
    ACTIONS(319), 1,
      aux_sym__hex_literal_token1,
    STATE(79), 1,
      sym__hex_literal,
    ACTIONS(321), 2,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
  [1476] = 2,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1485] = 2,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1494] = 3,
    ACTIONS(331), 1,
      aux_sym_objdump_machine_code_bytes_token1,
    STATE(25), 1,
      aux_sym_objdump_machine_code_bytes_repeat1,
    STATE(29), 1,
      sym_objdump_machine_code_bytes,
  [1504] = 1,
    ACTIONS(333), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1509] = 2,
    ACTIONS(335), 1,
      sym__IDENTIFIER,
    STATE(69), 1,
      sym_identifier,
  [1516] = 2,
    ACTIONS(337), 1,
      sym__IDENTIFIER,
    STATE(60), 1,
      sym_identifier,
  [1523] = 2,
    ACTIONS(337), 1,
      sym__IDENTIFIER,
    STATE(49), 1,
      sym_identifier,
  [1530] = 1,
    ACTIONS(299), 2,
      anon_sym_GT,
      aux_sym_label_token1,
  [1535] = 1,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [1539] = 1,
    ACTIONS(341), 1,
      anon_sym_GT,
  [1543] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [1547] = 1,
    ACTIONS(345), 1,
      anon_sym_COLON,
  [1551] = 1,
    ACTIONS(347), 1,
      aux_sym_label_token1,
  [1555] = 1,
    ACTIONS(349), 1,
      anon_sym_PLUS,
  [1559] = 1,
    ACTIONS(351), 1,
      sym_section_name,
  [1563] = 1,
    ACTIONS(353), 1,
      anon_sym_COLON,
  [1567] = 1,
    ACTIONS(355), 1,
      aux_sym_objdump_section_label_token1,
  [1571] = 1,
    ACTIONS(357), 1,
      anon_sym_COLON,
  [1575] = 1,
    ACTIONS(359), 1,
      sym__IDENTIFIER,
  [1579] = 1,
    ACTIONS(361), 1,
      anon_sym_GT,
  [1583] = 1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [1587] = 1,
    ACTIONS(365), 1,
      anon_sym_LT,
  [1591] = 1,
    ACTIONS(367), 1,
      aux_sym_shell_cmd_token1,
  [1595] = 1,
    ACTIONS(369), 1,
      sym_ins_kw,
  [1599] = 1,
    ACTIONS(371), 1,
      anon_sym_COLON,
  [1603] = 1,
    ACTIONS(373), 1,
      sym_section_name,
  [1607] = 1,
    ACTIONS(375), 1,
      anon_sym_GT,
  [1611] = 1,
    ACTIONS(377), 1,
      anon_sym_COLON,
  [1615] = 1,
    ACTIONS(379), 1,
      anon_sym_PLUS,
  [1619] = 1,
    ACTIONS(381), 1,
      sym__IDENTIFIER,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 225,
  [SMALL_STATE(6)] = 285,
  [SMALL_STATE(7)] = 345,
  [SMALL_STATE(8)] = 402,
  [SMALL_STATE(9)] = 455,
  [SMALL_STATE(10)] = 526,
  [SMALL_STATE(11)] = 567,
  [SMALL_STATE(12)] = 638,
  [SMALL_STATE(13)] = 707,
  [SMALL_STATE(14)] = 744,
  [SMALL_STATE(15)] = 779,
  [SMALL_STATE(16)] = 814,
  [SMALL_STATE(17)] = 849,
  [SMALL_STATE(18)] = 884,
  [SMALL_STATE(19)] = 930,
  [SMALL_STATE(20)] = 976,
  [SMALL_STATE(21)] = 1003,
  [SMALL_STATE(22)] = 1028,
  [SMALL_STATE(23)] = 1049,
  [SMALL_STATE(24)] = 1070,
  [SMALL_STATE(25)] = 1086,
  [SMALL_STATE(26)] = 1102,
  [SMALL_STATE(27)] = 1118,
  [SMALL_STATE(28)] = 1133,
  [SMALL_STATE(29)] = 1148,
  [SMALL_STATE(30)] = 1163,
  [SMALL_STATE(31)] = 1178,
  [SMALL_STATE(32)] = 1188,
  [SMALL_STATE(33)] = 1198,
  [SMALL_STATE(34)] = 1208,
  [SMALL_STATE(35)] = 1218,
  [SMALL_STATE(36)] = 1228,
  [SMALL_STATE(37)] = 1238,
  [SMALL_STATE(38)] = 1248,
  [SMALL_STATE(39)] = 1260,
  [SMALL_STATE(40)] = 1270,
  [SMALL_STATE(41)] = 1280,
  [SMALL_STATE(42)] = 1290,
  [SMALL_STATE(43)] = 1300,
  [SMALL_STATE(44)] = 1314,
  [SMALL_STATE(45)] = 1323,
  [SMALL_STATE(46)] = 1336,
  [SMALL_STATE(47)] = 1347,
  [SMALL_STATE(48)] = 1360,
  [SMALL_STATE(49)] = 1369,
  [SMALL_STATE(50)] = 1378,
  [SMALL_STATE(51)] = 1389,
  [SMALL_STATE(52)] = 1398,
  [SMALL_STATE(53)] = 1411,
  [SMALL_STATE(54)] = 1420,
  [SMALL_STATE(55)] = 1429,
  [SMALL_STATE(56)] = 1438,
  [SMALL_STATE(57)] = 1447,
  [SMALL_STATE(58)] = 1456,
  [SMALL_STATE(59)] = 1465,
  [SMALL_STATE(60)] = 1476,
  [SMALL_STATE(61)] = 1485,
  [SMALL_STATE(62)] = 1494,
  [SMALL_STATE(63)] = 1504,
  [SMALL_STATE(64)] = 1509,
  [SMALL_STATE(65)] = 1516,
  [SMALL_STATE(66)] = 1523,
  [SMALL_STATE(67)] = 1530,
  [SMALL_STATE(68)] = 1535,
  [SMALL_STATE(69)] = 1539,
  [SMALL_STATE(70)] = 1543,
  [SMALL_STATE(71)] = 1547,
  [SMALL_STATE(72)] = 1551,
  [SMALL_STATE(73)] = 1555,
  [SMALL_STATE(74)] = 1559,
  [SMALL_STATE(75)] = 1563,
  [SMALL_STATE(76)] = 1567,
  [SMALL_STATE(77)] = 1571,
  [SMALL_STATE(78)] = 1575,
  [SMALL_STATE(79)] = 1579,
  [SMALL_STATE(80)] = 1583,
  [SMALL_STATE(81)] = 1587,
  [SMALL_STATE(82)] = 1591,
  [SMALL_STATE(83)] = 1595,
  [SMALL_STATE(84)] = 1599,
  [SMALL_STATE(85)] = 1603,
  [SMALL_STATE(86)] = 1607,
  [SMALL_STATE(87)] = 1611,
  [SMALL_STATE(88)] = 1615,
  [SMALL_STATE(89)] = 1619,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(14),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(6),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_effective_addr_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(87),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(10),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_item_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(46),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(13),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(85),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(66),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(65),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(82),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(74),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(53),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(81),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(68),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(83),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(67),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_item, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_kw, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_kw, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_prefix, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_prefix, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptr, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__NEWLINE, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__NEWLINE, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_objdump_machine_code_bytes_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_objdump_machine_code_bytes_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_objdump_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(24),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_machine_code_bytes, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_machine_code_bytes, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2), SHIFT_REPEAT(4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_offset_label, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_offset_label, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_addr, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_addr, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_ident, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_ident, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_item, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_disas_of_section, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_disas_of_section, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(47),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(47),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_offset_label, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_offset_label, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_cmd, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_cmd, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_section_label, 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_section_label, 6),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_offset_addr, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [343] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_x86asm(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
