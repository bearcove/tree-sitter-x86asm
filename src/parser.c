#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_section = 2,
  anon_sym_extern = 3,
  anon_sym_global = 4,
  anon_sym_COLON = 5,
  anon_sym_push = 6,
  anon_sym_pop = 7,
  anon_sym_add = 8,
  anon_sym_sub = 9,
  anon_sym_mov = 10,
  anon_sym_xor = 11,
  anon_sym_leave = 12,
  anon_sym_ret = 13,
  anon_sym_byte = 14,
  anon_sym_word = 15,
  anon_sym_dword = 16,
  anon_sym_qword = 17,
  anon_sym_COMMA = 18,
  anon_sym_ah = 19,
  anon_sym_bh = 20,
  anon_sym_ch = 21,
  anon_sym_dh = 22,
  anon_sym_al = 23,
  anon_sym_bl = 24,
  anon_sym_cl = 25,
  anon_sym_dl = 26,
  anon_sym_ax = 27,
  anon_sym_bx = 28,
  anon_sym_cx = 29,
  anon_sym_dx = 30,
  anon_sym_di = 31,
  anon_sym_si = 32,
  anon_sym_sp = 33,
  anon_sym_bp = 34,
  anon_sym_eax = 35,
  anon_sym_ebx = 36,
  anon_sym_ecx = 37,
  anon_sym_edx = 38,
  anon_sym_edi = 39,
  anon_sym_esi = 40,
  anon_sym_esp = 41,
  anon_sym_ebp = 42,
  anon_sym_rax = 43,
  anon_sym_rbx = 44,
  anon_sym_rcx = 45,
  anon_sym_rdx = 46,
  anon_sym_rdi = 47,
  anon_sym_rsi = 48,
  anon_sym_rsp = 49,
  anon_sym_rbp = 50,
  anon_sym_r8 = 51,
  anon_sym_r9 = 52,
  anon_sym_r10 = 53,
  anon_sym_r11 = 54,
  anon_sym_r12 = 55,
  anon_sym_r13 = 56,
  anon_sym_r14 = 57,
  anon_sym_r15 = 58,
  anon_sym_xmm0 = 59,
  anon_sym_xmm1 = 60,
  anon_sym_xmm2 = 61,
  anon_sym_xmm3 = 62,
  anon_sym_xmm4 = 63,
  anon_sym_xmm5 = 64,
  anon_sym_xmm6 = 65,
  anon_sym_xmm7 = 66,
  anon_sym_ymm0 = 67,
  anon_sym_ymm1 = 68,
  anon_sym_ymm2 = 69,
  anon_sym_ymm3 = 70,
  anon_sym_ymm4 = 71,
  anon_sym_ymm5 = 72,
  anon_sym_ymm6 = 73,
  anon_sym_ymm7 = 74,
  anon_sym_LBRACK = 75,
  aux_sym_effective_addr_token1 = 76,
  anon_sym_RBRACK = 77,
  sym__DECIMAL_NUMBER = 78,
  anon_sym_0o = 79,
  sym__OCTAL_NUMBER = 80,
  anon_sym_0x = 81,
  anon_sym_0h = 82,
  sym__HEX_NUMBER = 83,
  anon_sym_0b = 84,
  sym__BINARY_NUMBER = 85,
  sym_section_name = 86,
  sym__IDENTIFIER = 87,
  anon_sym_LF = 88,
  anon_sym_CR_LF = 89,
  sym_source_file = 90,
  sym_toplevel_item = 91,
  sym_statement = 92,
  sym_directive = 93,
  sym_section = 94,
  sym_extern = 95,
  sym_global = 96,
  sym_label = 97,
  sym_ins = 98,
  sym_ins_kw = 99,
  sym_width = 100,
  sym_operand_args = 101,
  sym_operand = 102,
  sym_register = 103,
  sym_register_8bit = 104,
  sym_register_16bit = 105,
  sym_register_32bit = 106,
  sym_register_64bit = 107,
  sym_register_simd = 108,
  sym_operand_ident = 109,
  sym_effective_addr = 110,
  sym_integer_literal = 111,
  sym__decimal_literal = 112,
  sym__octal_literal = 113,
  sym__hex_literal = 114,
  sym__binary_literal = 115,
  sym__NEWLINE = 116,
  aux_sym_toplevel_item_repeat1 = 117,
  aux_sym_operand_args_repeat1 = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_section] = "section",
  [anon_sym_extern] = "extern",
  [anon_sym_global] = "global",
  [anon_sym_COLON] = ":",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_mov] = "mov",
  [anon_sym_xor] = "xor",
  [anon_sym_leave] = "leave",
  [anon_sym_ret] = "ret",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_COMMA] = ",",
  [anon_sym_ah] = "ah",
  [anon_sym_bh] = "bh",
  [anon_sym_ch] = "ch",
  [anon_sym_dh] = "dh",
  [anon_sym_al] = "al",
  [anon_sym_bl] = "bl",
  [anon_sym_cl] = "cl",
  [anon_sym_dl] = "dl",
  [anon_sym_ax] = "ax",
  [anon_sym_bx] = "bx",
  [anon_sym_cx] = "cx",
  [anon_sym_dx] = "dx",
  [anon_sym_di] = "di",
  [anon_sym_si] = "si",
  [anon_sym_sp] = "sp",
  [anon_sym_bp] = "bp",
  [anon_sym_eax] = "eax",
  [anon_sym_ebx] = "ebx",
  [anon_sym_ecx] = "ecx",
  [anon_sym_edx] = "edx",
  [anon_sym_edi] = "edi",
  [anon_sym_esi] = "esi",
  [anon_sym_esp] = "esp",
  [anon_sym_ebp] = "ebp",
  [anon_sym_rax] = "rax",
  [anon_sym_rbx] = "rbx",
  [anon_sym_rcx] = "rcx",
  [anon_sym_rdx] = "rdx",
  [anon_sym_rdi] = "rdi",
  [anon_sym_rsi] = "rsi",
  [anon_sym_rsp] = "rsp",
  [anon_sym_rbp] = "rbp",
  [anon_sym_r8] = "r8",
  [anon_sym_r9] = "r9",
  [anon_sym_r10] = "r10",
  [anon_sym_r11] = "r11",
  [anon_sym_r12] = "r12",
  [anon_sym_r13] = "r13",
  [anon_sym_r14] = "r14",
  [anon_sym_r15] = "r15",
  [anon_sym_xmm0] = "xmm0",
  [anon_sym_xmm1] = "xmm1",
  [anon_sym_xmm2] = "xmm2",
  [anon_sym_xmm3] = "xmm3",
  [anon_sym_xmm4] = "xmm4",
  [anon_sym_xmm5] = "xmm5",
  [anon_sym_xmm6] = "xmm6",
  [anon_sym_xmm7] = "xmm7",
  [anon_sym_ymm0] = "ymm0",
  [anon_sym_ymm1] = "ymm1",
  [anon_sym_ymm2] = "ymm2",
  [anon_sym_ymm3] = "ymm3",
  [anon_sym_ymm4] = "ymm4",
  [anon_sym_ymm5] = "ymm5",
  [anon_sym_ymm6] = "ymm6",
  [anon_sym_ymm7] = "ymm7",
  [anon_sym_LBRACK] = "[",
  [aux_sym_effective_addr_token1] = "effective_addr_token1",
  [anon_sym_RBRACK] = "]",
  [sym__DECIMAL_NUMBER] = "_DECIMAL_NUMBER",
  [anon_sym_0o] = "0o",
  [sym__OCTAL_NUMBER] = "_OCTAL_NUMBER",
  [anon_sym_0x] = "0x",
  [anon_sym_0h] = "0h",
  [sym__HEX_NUMBER] = "_HEX_NUMBER",
  [anon_sym_0b] = "0b",
  [sym__BINARY_NUMBER] = "_BINARY_NUMBER",
  [sym_section_name] = "section_name",
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_source_file] = "source_file",
  [sym_toplevel_item] = "toplevel_item",
  [sym_statement] = "statement",
  [sym_directive] = "directive",
  [sym_section] = "section",
  [sym_extern] = "extern",
  [sym_global] = "global",
  [sym_label] = "label",
  [sym_ins] = "ins",
  [sym_ins_kw] = "ins_kw",
  [sym_width] = "width",
  [sym_operand_args] = "operand_args",
  [sym_operand] = "operand",
  [sym_register] = "register",
  [sym_register_8bit] = "register_8bit",
  [sym_register_16bit] = "register_16bit",
  [sym_register_32bit] = "register_32bit",
  [sym_register_64bit] = "register_64bit",
  [sym_register_simd] = "register_simd",
  [sym_operand_ident] = "operand_ident",
  [sym_effective_addr] = "effective_addr",
  [sym_integer_literal] = "integer_literal",
  [sym__decimal_literal] = "_decimal_literal",
  [sym__octal_literal] = "_octal_literal",
  [sym__hex_literal] = "_hex_literal",
  [sym__binary_literal] = "_binary_literal",
  [sym__NEWLINE] = "_NEWLINE",
  [aux_sym_toplevel_item_repeat1] = "toplevel_item_repeat1",
  [aux_sym_operand_args_repeat1] = "operand_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_leave] = anon_sym_leave,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ah] = anon_sym_ah,
  [anon_sym_bh] = anon_sym_bh,
  [anon_sym_ch] = anon_sym_ch,
  [anon_sym_dh] = anon_sym_dh,
  [anon_sym_al] = anon_sym_al,
  [anon_sym_bl] = anon_sym_bl,
  [anon_sym_cl] = anon_sym_cl,
  [anon_sym_dl] = anon_sym_dl,
  [anon_sym_ax] = anon_sym_ax,
  [anon_sym_bx] = anon_sym_bx,
  [anon_sym_cx] = anon_sym_cx,
  [anon_sym_dx] = anon_sym_dx,
  [anon_sym_di] = anon_sym_di,
  [anon_sym_si] = anon_sym_si,
  [anon_sym_sp] = anon_sym_sp,
  [anon_sym_bp] = anon_sym_bp,
  [anon_sym_eax] = anon_sym_eax,
  [anon_sym_ebx] = anon_sym_ebx,
  [anon_sym_ecx] = anon_sym_ecx,
  [anon_sym_edx] = anon_sym_edx,
  [anon_sym_edi] = anon_sym_edi,
  [anon_sym_esi] = anon_sym_esi,
  [anon_sym_esp] = anon_sym_esp,
  [anon_sym_ebp] = anon_sym_ebp,
  [anon_sym_rax] = anon_sym_rax,
  [anon_sym_rbx] = anon_sym_rbx,
  [anon_sym_rcx] = anon_sym_rcx,
  [anon_sym_rdx] = anon_sym_rdx,
  [anon_sym_rdi] = anon_sym_rdi,
  [anon_sym_rsi] = anon_sym_rsi,
  [anon_sym_rsp] = anon_sym_rsp,
  [anon_sym_rbp] = anon_sym_rbp,
  [anon_sym_r8] = anon_sym_r8,
  [anon_sym_r9] = anon_sym_r9,
  [anon_sym_r10] = anon_sym_r10,
  [anon_sym_r11] = anon_sym_r11,
  [anon_sym_r12] = anon_sym_r12,
  [anon_sym_r13] = anon_sym_r13,
  [anon_sym_r14] = anon_sym_r14,
  [anon_sym_r15] = anon_sym_r15,
  [anon_sym_xmm0] = anon_sym_xmm0,
  [anon_sym_xmm1] = anon_sym_xmm1,
  [anon_sym_xmm2] = anon_sym_xmm2,
  [anon_sym_xmm3] = anon_sym_xmm3,
  [anon_sym_xmm4] = anon_sym_xmm4,
  [anon_sym_xmm5] = anon_sym_xmm5,
  [anon_sym_xmm6] = anon_sym_xmm6,
  [anon_sym_xmm7] = anon_sym_xmm7,
  [anon_sym_ymm0] = anon_sym_ymm0,
  [anon_sym_ymm1] = anon_sym_ymm1,
  [anon_sym_ymm2] = anon_sym_ymm2,
  [anon_sym_ymm3] = anon_sym_ymm3,
  [anon_sym_ymm4] = anon_sym_ymm4,
  [anon_sym_ymm5] = anon_sym_ymm5,
  [anon_sym_ymm6] = anon_sym_ymm6,
  [anon_sym_ymm7] = anon_sym_ymm7,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_effective_addr_token1] = aux_sym_effective_addr_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__DECIMAL_NUMBER] = sym__DECIMAL_NUMBER,
  [anon_sym_0o] = anon_sym_0o,
  [sym__OCTAL_NUMBER] = sym__OCTAL_NUMBER,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0h] = anon_sym_0h,
  [sym__HEX_NUMBER] = sym__HEX_NUMBER,
  [anon_sym_0b] = anon_sym_0b,
  [sym__BINARY_NUMBER] = sym__BINARY_NUMBER,
  [sym_section_name] = sym_section_name,
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_source_file] = sym_source_file,
  [sym_toplevel_item] = sym_toplevel_item,
  [sym_statement] = sym_statement,
  [sym_directive] = sym_directive,
  [sym_section] = sym_section,
  [sym_extern] = sym_extern,
  [sym_global] = sym_global,
  [sym_label] = sym_label,
  [sym_ins] = sym_ins,
  [sym_ins_kw] = sym_ins_kw,
  [sym_width] = sym_width,
  [sym_operand_args] = sym_operand_args,
  [sym_operand] = sym_operand,
  [sym_register] = sym_register,
  [sym_register_8bit] = sym_register_8bit,
  [sym_register_16bit] = sym_register_16bit,
  [sym_register_32bit] = sym_register_32bit,
  [sym_register_64bit] = sym_register_64bit,
  [sym_register_simd] = sym_register_simd,
  [sym_operand_ident] = sym_operand_ident,
  [sym_effective_addr] = sym_effective_addr,
  [sym_integer_literal] = sym_integer_literal,
  [sym__decimal_literal] = sym__decimal_literal,
  [sym__octal_literal] = sym__octal_literal,
  [sym__hex_literal] = sym__hex_literal,
  [sym__binary_literal] = sym__binary_literal,
  [sym__NEWLINE] = sym__NEWLINE,
  [aux_sym_toplevel_item_repeat1] = aux_sym_toplevel_item_repeat1,
  [aux_sym_operand_args_repeat1] = aux_sym_operand_args_repeat1,
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
  [anon_sym_section] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ah] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_al] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_di] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ebx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ecx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ebp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rbx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rcx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rsi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rsp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rbp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_effective_addr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__DECIMAL_NUMBER] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [sym__OCTAL_NUMBER] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0h] = {
    .visible = true,
    .named = false,
  },
  [sym__HEX_NUMBER] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [sym__BINARY_NUMBER] = {
    .visible = false,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
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
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_ins] = {
    .visible = true,
    .named = true,
  },
  [sym_ins_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
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
  [sym_register_8bit] = {
    .visible = true,
    .named = true,
  },
  [sym_register_16bit] = {
    .visible = true,
    .named = true,
  },
  [sym_register_32bit] = {
    .visible = true,
    .named = true,
  },
  [sym_register_64bit] = {
    .visible = true,
    .named = true,
  },
  [sym_register_simd] = {
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
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_literal] = {
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
  [aux_sym_toplevel_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_args_repeat1] = {
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
      if (eof) ADVANCE(10);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'q') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(146);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'q') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(129);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 'x') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(101);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_leave);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_ah);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_bh);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_ch);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_dh);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_al);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_bl);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_cl);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_dl);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_ax);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_bx);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_cx);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_dx);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_di);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_si);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_sp);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_bp);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_eax);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ebx);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_ecx);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_edx);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_edi);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_esi);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_esp);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ebp);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_rax);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_rbx);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_rcx);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_rdx);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_rdi);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_rsi);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_rsp);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_rbp);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_r8);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_r9);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_r10);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_r11);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_r12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_r13);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_r14);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_r15);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_xmm0);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_xmm1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_xmm2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_xmm3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_xmm4);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_xmm5);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_xmm6);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_xmm7);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ymm0);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ymm1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ymm2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ymm3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ymm4);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ymm5);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ymm6);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ymm7);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_effective_addr_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_effective_addr_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(96);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_0o);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_0x);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_0h);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_0b);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__BINARY_NUMBER);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '1') ADVANCE(64);
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '3') ADVANCE(66);
      if (lookahead == '4') ADVANCE(67);
      if (lookahead == '5') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '0') ADVANCE(69);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == '3') ADVANCE(72);
      if (lookahead == '4') ADVANCE(73);
      if (lookahead == '5') ADVANCE(74);
      if (lookahead == '6') ADVANCE(75);
      if (lookahead == '7') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(78);
      if (lookahead == '2') ADVANCE(79);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '4') ADVANCE(81);
      if (lookahead == '5') ADVANCE(82);
      if (lookahead == '6') ADVANCE(83);
      if (lookahead == '7') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '8') ADVANCE(61);
      if (lookahead == '9') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '8') ADVANCE(61);
      if (lookahead == '9') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'v') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'w') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(45);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 86},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_leave] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ah] = ACTIONS(1),
    [anon_sym_bh] = ACTIONS(1),
    [anon_sym_ch] = ACTIONS(1),
    [anon_sym_dh] = ACTIONS(1),
    [anon_sym_al] = ACTIONS(1),
    [anon_sym_bl] = ACTIONS(1),
    [anon_sym_cl] = ACTIONS(1),
    [anon_sym_dl] = ACTIONS(1),
    [anon_sym_ax] = ACTIONS(1),
    [anon_sym_bx] = ACTIONS(1),
    [anon_sym_cx] = ACTIONS(1),
    [anon_sym_dx] = ACTIONS(1),
    [anon_sym_di] = ACTIONS(1),
    [anon_sym_si] = ACTIONS(1),
    [anon_sym_sp] = ACTIONS(1),
    [anon_sym_bp] = ACTIONS(1),
    [anon_sym_eax] = ACTIONS(1),
    [anon_sym_ebx] = ACTIONS(1),
    [anon_sym_ecx] = ACTIONS(1),
    [anon_sym_edx] = ACTIONS(1),
    [anon_sym_edi] = ACTIONS(1),
    [anon_sym_esi] = ACTIONS(1),
    [anon_sym_esp] = ACTIONS(1),
    [anon_sym_ebp] = ACTIONS(1),
    [anon_sym_rax] = ACTIONS(1),
    [anon_sym_rbx] = ACTIONS(1),
    [anon_sym_rcx] = ACTIONS(1),
    [anon_sym_rdx] = ACTIONS(1),
    [anon_sym_rdi] = ACTIONS(1),
    [anon_sym_rsi] = ACTIONS(1),
    [anon_sym_rsp] = ACTIONS(1),
    [anon_sym_rbp] = ACTIONS(1),
    [anon_sym_r8] = ACTIONS(1),
    [anon_sym_r9] = ACTIONS(1),
    [anon_sym_r10] = ACTIONS(1),
    [anon_sym_r11] = ACTIONS(1),
    [anon_sym_r12] = ACTIONS(1),
    [anon_sym_r13] = ACTIONS(1),
    [anon_sym_r14] = ACTIONS(1),
    [anon_sym_r15] = ACTIONS(1),
    [anon_sym_xmm0] = ACTIONS(1),
    [anon_sym_xmm1] = ACTIONS(1),
    [anon_sym_xmm2] = ACTIONS(1),
    [anon_sym_xmm3] = ACTIONS(1),
    [anon_sym_xmm4] = ACTIONS(1),
    [anon_sym_xmm5] = ACTIONS(1),
    [anon_sym_xmm6] = ACTIONS(1),
    [anon_sym_xmm7] = ACTIONS(1),
    [anon_sym_ymm0] = ACTIONS(1),
    [anon_sym_ymm1] = ACTIONS(1),
    [anon_sym_ymm2] = ACTIONS(1),
    [anon_sym_ymm3] = ACTIONS(1),
    [anon_sym_ymm4] = ACTIONS(1),
    [anon_sym_ymm5] = ACTIONS(1),
    [anon_sym_ymm6] = ACTIONS(1),
    [anon_sym_ymm7] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__DECIMAL_NUMBER] = ACTIONS(1),
    [anon_sym_0o] = ACTIONS(1),
    [sym__OCTAL_NUMBER] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_0h] = ACTIONS(1),
    [anon_sym_0b] = ACTIONS(1),
    [sym__BINARY_NUMBER] = ACTIONS(1),
    [sym__IDENTIFIER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym_toplevel_item] = STATE(47),
    [sym_statement] = STATE(8),
    [sym_directive] = STATE(30),
    [sym_section] = STATE(36),
    [sym_extern] = STATE(36),
    [sym_global] = STATE(36),
    [sym_label] = STATE(36),
    [sym_ins] = STATE(36),
    [sym_ins_kw] = STATE(2),
    [aux_sym_toplevel_item_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_global] = ACTIONS(9),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_add] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_mov] = ACTIONS(11),
    [anon_sym_xor] = ACTIONS(11),
    [anon_sym_leave] = ACTIONS(11),
    [anon_sym_ret] = ACTIONS(11),
    [sym__IDENTIFIER] = ACTIONS(13),
  },
  [2] = {
    [sym_width] = STATE(4),
    [sym_operand_args] = STATE(32),
    [sym_operand] = STATE(14),
    [sym_register] = STATE(28),
    [sym_register_8bit] = STATE(27),
    [sym_register_16bit] = STATE(27),
    [sym_register_32bit] = STATE(27),
    [sym_register_64bit] = STATE(27),
    [sym_register_simd] = STATE(27),
    [sym_operand_ident] = STATE(28),
    [sym_effective_addr] = STATE(28),
    [sym_integer_literal] = STATE(28),
    [sym__decimal_literal] = STATE(26),
    [sym__octal_literal] = STATE(26),
    [sym__hex_literal] = STATE(26),
    [sym__binary_literal] = STATE(26),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_ah] = ACTIONS(17),
    [anon_sym_bh] = ACTIONS(17),
    [anon_sym_ch] = ACTIONS(17),
    [anon_sym_dh] = ACTIONS(17),
    [anon_sym_al] = ACTIONS(17),
    [anon_sym_bl] = ACTIONS(17),
    [anon_sym_cl] = ACTIONS(17),
    [anon_sym_dl] = ACTIONS(17),
    [anon_sym_ax] = ACTIONS(19),
    [anon_sym_bx] = ACTIONS(19),
    [anon_sym_cx] = ACTIONS(19),
    [anon_sym_dx] = ACTIONS(19),
    [anon_sym_di] = ACTIONS(19),
    [anon_sym_si] = ACTIONS(19),
    [anon_sym_sp] = ACTIONS(19),
    [anon_sym_bp] = ACTIONS(19),
    [anon_sym_eax] = ACTIONS(21),
    [anon_sym_ebx] = ACTIONS(21),
    [anon_sym_ecx] = ACTIONS(21),
    [anon_sym_edx] = ACTIONS(21),
    [anon_sym_edi] = ACTIONS(21),
    [anon_sym_esi] = ACTIONS(21),
    [anon_sym_esp] = ACTIONS(21),
    [anon_sym_ebp] = ACTIONS(21),
    [anon_sym_rax] = ACTIONS(23),
    [anon_sym_rbx] = ACTIONS(23),
    [anon_sym_rcx] = ACTIONS(23),
    [anon_sym_rdx] = ACTIONS(23),
    [anon_sym_rdi] = ACTIONS(23),
    [anon_sym_rsi] = ACTIONS(23),
    [anon_sym_rsp] = ACTIONS(23),
    [anon_sym_rbp] = ACTIONS(23),
    [anon_sym_r8] = ACTIONS(23),
    [anon_sym_r9] = ACTIONS(23),
    [anon_sym_r10] = ACTIONS(23),
    [anon_sym_r11] = ACTIONS(23),
    [anon_sym_r12] = ACTIONS(23),
    [anon_sym_r13] = ACTIONS(23),
    [anon_sym_r14] = ACTIONS(23),
    [anon_sym_r15] = ACTIONS(23),
    [anon_sym_xmm0] = ACTIONS(25),
    [anon_sym_xmm1] = ACTIONS(25),
    [anon_sym_xmm2] = ACTIONS(25),
    [anon_sym_xmm3] = ACTIONS(25),
    [anon_sym_xmm4] = ACTIONS(25),
    [anon_sym_xmm5] = ACTIONS(25),
    [anon_sym_xmm6] = ACTIONS(25),
    [anon_sym_xmm7] = ACTIONS(25),
    [anon_sym_ymm0] = ACTIONS(25),
    [anon_sym_ymm1] = ACTIONS(25),
    [anon_sym_ymm2] = ACTIONS(25),
    [anon_sym_ymm3] = ACTIONS(25),
    [anon_sym_ymm4] = ACTIONS(25),
    [anon_sym_ymm5] = ACTIONS(25),
    [anon_sym_ymm6] = ACTIONS(25),
    [anon_sym_ymm7] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym__DECIMAL_NUMBER] = ACTIONS(29),
    [anon_sym_0o] = ACTIONS(31),
    [anon_sym_0x] = ACTIONS(33),
    [anon_sym_0h] = ACTIONS(33),
    [anon_sym_0b] = ACTIONS(35),
    [sym__IDENTIFIER] = ACTIONS(37),
  },
  [3] = {
    [sym_width] = STATE(4),
    [sym_operand] = STATE(18),
    [sym_register] = STATE(28),
    [sym_register_8bit] = STATE(27),
    [sym_register_16bit] = STATE(27),
    [sym_register_32bit] = STATE(27),
    [sym_register_64bit] = STATE(27),
    [sym_register_simd] = STATE(27),
    [sym_operand_ident] = STATE(28),
    [sym_effective_addr] = STATE(28),
    [sym_integer_literal] = STATE(28),
    [sym__decimal_literal] = STATE(26),
    [sym__octal_literal] = STATE(26),
    [sym__hex_literal] = STATE(26),
    [sym__binary_literal] = STATE(26),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_ah] = ACTIONS(17),
    [anon_sym_bh] = ACTIONS(17),
    [anon_sym_ch] = ACTIONS(17),
    [anon_sym_dh] = ACTIONS(17),
    [anon_sym_al] = ACTIONS(17),
    [anon_sym_bl] = ACTIONS(17),
    [anon_sym_cl] = ACTIONS(17),
    [anon_sym_dl] = ACTIONS(17),
    [anon_sym_ax] = ACTIONS(19),
    [anon_sym_bx] = ACTIONS(19),
    [anon_sym_cx] = ACTIONS(19),
    [anon_sym_dx] = ACTIONS(19),
    [anon_sym_di] = ACTIONS(19),
    [anon_sym_si] = ACTIONS(19),
    [anon_sym_sp] = ACTIONS(19),
    [anon_sym_bp] = ACTIONS(19),
    [anon_sym_eax] = ACTIONS(21),
    [anon_sym_ebx] = ACTIONS(21),
    [anon_sym_ecx] = ACTIONS(21),
    [anon_sym_edx] = ACTIONS(21),
    [anon_sym_edi] = ACTIONS(21),
    [anon_sym_esi] = ACTIONS(21),
    [anon_sym_esp] = ACTIONS(21),
    [anon_sym_ebp] = ACTIONS(21),
    [anon_sym_rax] = ACTIONS(23),
    [anon_sym_rbx] = ACTIONS(23),
    [anon_sym_rcx] = ACTIONS(23),
    [anon_sym_rdx] = ACTIONS(23),
    [anon_sym_rdi] = ACTIONS(23),
    [anon_sym_rsi] = ACTIONS(23),
    [anon_sym_rsp] = ACTIONS(23),
    [anon_sym_rbp] = ACTIONS(23),
    [anon_sym_r8] = ACTIONS(23),
    [anon_sym_r9] = ACTIONS(23),
    [anon_sym_r10] = ACTIONS(23),
    [anon_sym_r11] = ACTIONS(23),
    [anon_sym_r12] = ACTIONS(23),
    [anon_sym_r13] = ACTIONS(23),
    [anon_sym_r14] = ACTIONS(23),
    [anon_sym_r15] = ACTIONS(23),
    [anon_sym_xmm0] = ACTIONS(25),
    [anon_sym_xmm1] = ACTIONS(25),
    [anon_sym_xmm2] = ACTIONS(25),
    [anon_sym_xmm3] = ACTIONS(25),
    [anon_sym_xmm4] = ACTIONS(25),
    [anon_sym_xmm5] = ACTIONS(25),
    [anon_sym_xmm6] = ACTIONS(25),
    [anon_sym_xmm7] = ACTIONS(25),
    [anon_sym_ymm0] = ACTIONS(25),
    [anon_sym_ymm1] = ACTIONS(25),
    [anon_sym_ymm2] = ACTIONS(25),
    [anon_sym_ymm3] = ACTIONS(25),
    [anon_sym_ymm4] = ACTIONS(25),
    [anon_sym_ymm5] = ACTIONS(25),
    [anon_sym_ymm6] = ACTIONS(25),
    [anon_sym_ymm7] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym__DECIMAL_NUMBER] = ACTIONS(29),
    [anon_sym_0o] = ACTIONS(31),
    [anon_sym_0x] = ACTIONS(33),
    [anon_sym_0h] = ACTIONS(33),
    [anon_sym_0b] = ACTIONS(35),
    [sym__IDENTIFIER] = ACTIONS(37),
  },
  [4] = {
    [sym_register] = STATE(19),
    [sym_register_8bit] = STATE(27),
    [sym_register_16bit] = STATE(27),
    [sym_register_32bit] = STATE(27),
    [sym_register_64bit] = STATE(27),
    [sym_register_simd] = STATE(27),
    [sym_operand_ident] = STATE(19),
    [sym_effective_addr] = STATE(19),
    [sym_integer_literal] = STATE(19),
    [sym__decimal_literal] = STATE(26),
    [sym__octal_literal] = STATE(26),
    [sym__hex_literal] = STATE(26),
    [sym__binary_literal] = STATE(26),
    [anon_sym_ah] = ACTIONS(17),
    [anon_sym_bh] = ACTIONS(17),
    [anon_sym_ch] = ACTIONS(17),
    [anon_sym_dh] = ACTIONS(17),
    [anon_sym_al] = ACTIONS(17),
    [anon_sym_bl] = ACTIONS(17),
    [anon_sym_cl] = ACTIONS(17),
    [anon_sym_dl] = ACTIONS(17),
    [anon_sym_ax] = ACTIONS(19),
    [anon_sym_bx] = ACTIONS(19),
    [anon_sym_cx] = ACTIONS(19),
    [anon_sym_dx] = ACTIONS(19),
    [anon_sym_di] = ACTIONS(19),
    [anon_sym_si] = ACTIONS(19),
    [anon_sym_sp] = ACTIONS(19),
    [anon_sym_bp] = ACTIONS(19),
    [anon_sym_eax] = ACTIONS(21),
    [anon_sym_ebx] = ACTIONS(21),
    [anon_sym_ecx] = ACTIONS(21),
    [anon_sym_edx] = ACTIONS(21),
    [anon_sym_edi] = ACTIONS(21),
    [anon_sym_esi] = ACTIONS(21),
    [anon_sym_esp] = ACTIONS(21),
    [anon_sym_ebp] = ACTIONS(21),
    [anon_sym_rax] = ACTIONS(23),
    [anon_sym_rbx] = ACTIONS(23),
    [anon_sym_rcx] = ACTIONS(23),
    [anon_sym_rdx] = ACTIONS(23),
    [anon_sym_rdi] = ACTIONS(23),
    [anon_sym_rsi] = ACTIONS(23),
    [anon_sym_rsp] = ACTIONS(23),
    [anon_sym_rbp] = ACTIONS(23),
    [anon_sym_r8] = ACTIONS(23),
    [anon_sym_r9] = ACTIONS(23),
    [anon_sym_r10] = ACTIONS(23),
    [anon_sym_r11] = ACTIONS(23),
    [anon_sym_r12] = ACTIONS(23),
    [anon_sym_r13] = ACTIONS(23),
    [anon_sym_r14] = ACTIONS(23),
    [anon_sym_r15] = ACTIONS(23),
    [anon_sym_xmm0] = ACTIONS(25),
    [anon_sym_xmm1] = ACTIONS(25),
    [anon_sym_xmm2] = ACTIONS(25),
    [anon_sym_xmm3] = ACTIONS(25),
    [anon_sym_xmm4] = ACTIONS(25),
    [anon_sym_xmm5] = ACTIONS(25),
    [anon_sym_xmm6] = ACTIONS(25),
    [anon_sym_xmm7] = ACTIONS(25),
    [anon_sym_ymm0] = ACTIONS(25),
    [anon_sym_ymm1] = ACTIONS(25),
    [anon_sym_ymm2] = ACTIONS(25),
    [anon_sym_ymm3] = ACTIONS(25),
    [anon_sym_ymm4] = ACTIONS(25),
    [anon_sym_ymm5] = ACTIONS(25),
    [anon_sym_ymm6] = ACTIONS(25),
    [anon_sym_ymm7] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym__DECIMAL_NUMBER] = ACTIONS(29),
    [anon_sym_0o] = ACTIONS(31),
    [anon_sym_0x] = ACTIONS(33),
    [anon_sym_0h] = ACTIONS(33),
    [anon_sym_0b] = ACTIONS(35),
    [sym__IDENTIFIER] = ACTIONS(37),
  },
  [5] = {
    [anon_sym_byte] = ACTIONS(39),
    [anon_sym_word] = ACTIONS(39),
    [anon_sym_dword] = ACTIONS(39),
    [anon_sym_qword] = ACTIONS(39),
    [anon_sym_ah] = ACTIONS(39),
    [anon_sym_bh] = ACTIONS(39),
    [anon_sym_ch] = ACTIONS(39),
    [anon_sym_dh] = ACTIONS(39),
    [anon_sym_al] = ACTIONS(39),
    [anon_sym_bl] = ACTIONS(39),
    [anon_sym_cl] = ACTIONS(39),
    [anon_sym_dl] = ACTIONS(39),
    [anon_sym_ax] = ACTIONS(39),
    [anon_sym_bx] = ACTIONS(39),
    [anon_sym_cx] = ACTIONS(39),
    [anon_sym_dx] = ACTIONS(39),
    [anon_sym_di] = ACTIONS(39),
    [anon_sym_si] = ACTIONS(39),
    [anon_sym_sp] = ACTIONS(39),
    [anon_sym_bp] = ACTIONS(39),
    [anon_sym_eax] = ACTIONS(39),
    [anon_sym_ebx] = ACTIONS(39),
    [anon_sym_ecx] = ACTIONS(39),
    [anon_sym_edx] = ACTIONS(39),
    [anon_sym_edi] = ACTIONS(39),
    [anon_sym_esi] = ACTIONS(39),
    [anon_sym_esp] = ACTIONS(39),
    [anon_sym_ebp] = ACTIONS(39),
    [anon_sym_rax] = ACTIONS(39),
    [anon_sym_rbx] = ACTIONS(39),
    [anon_sym_rcx] = ACTIONS(39),
    [anon_sym_rdx] = ACTIONS(39),
    [anon_sym_rdi] = ACTIONS(39),
    [anon_sym_rsi] = ACTIONS(39),
    [anon_sym_rsp] = ACTIONS(39),
    [anon_sym_rbp] = ACTIONS(39),
    [anon_sym_r8] = ACTIONS(39),
    [anon_sym_r9] = ACTIONS(39),
    [anon_sym_r10] = ACTIONS(39),
    [anon_sym_r11] = ACTIONS(39),
    [anon_sym_r12] = ACTIONS(39),
    [anon_sym_r13] = ACTIONS(39),
    [anon_sym_r14] = ACTIONS(39),
    [anon_sym_r15] = ACTIONS(39),
    [anon_sym_xmm0] = ACTIONS(39),
    [anon_sym_xmm1] = ACTIONS(39),
    [anon_sym_xmm2] = ACTIONS(39),
    [anon_sym_xmm3] = ACTIONS(39),
    [anon_sym_xmm4] = ACTIONS(39),
    [anon_sym_xmm5] = ACTIONS(39),
    [anon_sym_xmm6] = ACTIONS(39),
    [anon_sym_xmm7] = ACTIONS(39),
    [anon_sym_ymm0] = ACTIONS(39),
    [anon_sym_ymm1] = ACTIONS(39),
    [anon_sym_ymm2] = ACTIONS(39),
    [anon_sym_ymm3] = ACTIONS(39),
    [anon_sym_ymm4] = ACTIONS(39),
    [anon_sym_ymm5] = ACTIONS(39),
    [anon_sym_ymm6] = ACTIONS(39),
    [anon_sym_ymm7] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym__DECIMAL_NUMBER] = ACTIONS(39),
    [anon_sym_0o] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(39),
    [anon_sym_0h] = ACTIONS(39),
    [anon_sym_0b] = ACTIONS(39),
    [sym__IDENTIFIER] = ACTIONS(39),
  },
  [6] = {
    [anon_sym_ah] = ACTIONS(43),
    [anon_sym_bh] = ACTIONS(43),
    [anon_sym_ch] = ACTIONS(43),
    [anon_sym_dh] = ACTIONS(43),
    [anon_sym_al] = ACTIONS(43),
    [anon_sym_bl] = ACTIONS(43),
    [anon_sym_cl] = ACTIONS(43),
    [anon_sym_dl] = ACTIONS(43),
    [anon_sym_ax] = ACTIONS(43),
    [anon_sym_bx] = ACTIONS(43),
    [anon_sym_cx] = ACTIONS(43),
    [anon_sym_dx] = ACTIONS(43),
    [anon_sym_di] = ACTIONS(43),
    [anon_sym_si] = ACTIONS(43),
    [anon_sym_sp] = ACTIONS(43),
    [anon_sym_bp] = ACTIONS(43),
    [anon_sym_eax] = ACTIONS(43),
    [anon_sym_ebx] = ACTIONS(43),
    [anon_sym_ecx] = ACTIONS(43),
    [anon_sym_edx] = ACTIONS(43),
    [anon_sym_edi] = ACTIONS(43),
    [anon_sym_esi] = ACTIONS(43),
    [anon_sym_esp] = ACTIONS(43),
    [anon_sym_ebp] = ACTIONS(43),
    [anon_sym_rax] = ACTIONS(43),
    [anon_sym_rbx] = ACTIONS(43),
    [anon_sym_rcx] = ACTIONS(43),
    [anon_sym_rdx] = ACTIONS(43),
    [anon_sym_rdi] = ACTIONS(43),
    [anon_sym_rsi] = ACTIONS(43),
    [anon_sym_rsp] = ACTIONS(43),
    [anon_sym_rbp] = ACTIONS(43),
    [anon_sym_r8] = ACTIONS(43),
    [anon_sym_r9] = ACTIONS(43),
    [anon_sym_r10] = ACTIONS(43),
    [anon_sym_r11] = ACTIONS(43),
    [anon_sym_r12] = ACTIONS(43),
    [anon_sym_r13] = ACTIONS(43),
    [anon_sym_r14] = ACTIONS(43),
    [anon_sym_r15] = ACTIONS(43),
    [anon_sym_xmm0] = ACTIONS(43),
    [anon_sym_xmm1] = ACTIONS(43),
    [anon_sym_xmm2] = ACTIONS(43),
    [anon_sym_xmm3] = ACTIONS(43),
    [anon_sym_xmm4] = ACTIONS(43),
    [anon_sym_xmm5] = ACTIONS(43),
    [anon_sym_xmm6] = ACTIONS(43),
    [anon_sym_xmm7] = ACTIONS(43),
    [anon_sym_ymm0] = ACTIONS(43),
    [anon_sym_ymm1] = ACTIONS(43),
    [anon_sym_ymm2] = ACTIONS(43),
    [anon_sym_ymm3] = ACTIONS(43),
    [anon_sym_ymm4] = ACTIONS(43),
    [anon_sym_ymm5] = ACTIONS(43),
    [anon_sym_ymm6] = ACTIONS(43),
    [anon_sym_ymm7] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [sym__DECIMAL_NUMBER] = ACTIONS(43),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0x] = ACTIONS(43),
    [anon_sym_0h] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(43),
    [sym__IDENTIFIER] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_section,
    ACTIONS(55), 1,
      anon_sym_extern,
    ACTIONS(58), 1,
      anon_sym_global,
    ACTIONS(64), 1,
      sym__IDENTIFIER,
    STATE(2), 1,
      sym_ins_kw,
    STATE(30), 1,
      sym_directive,
    STATE(7), 2,
      sym_statement,
      aux_sym_toplevel_item_repeat1,
    STATE(36), 5,
      sym_section,
      sym_extern,
      sym_global,
      sym_label,
      sym_ins,
    ACTIONS(61), 8,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mov,
      anon_sym_xor,
      anon_sym_leave,
      anon_sym_ret,
  [46] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_section,
    ACTIONS(7), 1,
      anon_sym_extern,
    ACTIONS(9), 1,
      anon_sym_global,
    ACTIONS(13), 1,
      sym__IDENTIFIER,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_ins_kw,
    STATE(30), 1,
      sym_directive,
    STATE(7), 2,
      sym_statement,
      aux_sym_toplevel_item_repeat1,
    STATE(36), 5,
      sym_section,
      sym_extern,
      sym_global,
      sym_label,
      sym_ins,
    ACTIONS(11), 8,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mov,
      anon_sym_xor,
      anon_sym_leave,
      anon_sym_ret,
  [92] = 9,
    ACTIONS(5), 1,
      anon_sym_section,
    ACTIONS(7), 1,
      anon_sym_extern,
    ACTIONS(9), 1,
      anon_sym_global,
    ACTIONS(13), 1,
      sym__IDENTIFIER,
    STATE(2), 1,
      sym_ins_kw,
    STATE(31), 1,
      sym_directive,
    ACTIONS(69), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(36), 5,
      sym_section,
      sym_extern,
      sym_global,
      sym_label,
      sym_ins,
    ACTIONS(11), 8,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mov,
      anon_sym_xor,
      anon_sym_leave,
      anon_sym_ret,
  [133] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(73), 12,
      anon_sym_section,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mov,
      anon_sym_xor,
      anon_sym_leave,
      anon_sym_ret,
      sym__IDENTIFIER,
  [152] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(77), 12,
      anon_sym_section,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mov,
      anon_sym_xor,
      anon_sym_leave,
      anon_sym_ret,
      sym__IDENTIFIER,
  [171] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(79), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [183] = 3,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(84), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [195] = 3,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(88), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [207] = 1,
    ACTIONS(90), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [214] = 1,
    ACTIONS(92), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [221] = 1,
    ACTIONS(94), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [228] = 1,
    ACTIONS(79), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [235] = 1,
    ACTIONS(96), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [242] = 1,
    ACTIONS(98), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [249] = 1,
    ACTIONS(100), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [256] = 1,
    ACTIONS(102), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [263] = 1,
    ACTIONS(104), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [270] = 1,
    ACTIONS(106), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [277] = 1,
    ACTIONS(108), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [284] = 1,
    ACTIONS(110), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [291] = 1,
    ACTIONS(112), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [298] = 1,
    ACTIONS(114), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [305] = 1,
    ACTIONS(116), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [312] = 3,
    ACTIONS(118), 1,
      sym_comment,
    STATE(10), 1,
      sym__NEWLINE,
    ACTIONS(120), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [323] = 1,
    ACTIONS(122), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [329] = 1,
    ACTIONS(124), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [335] = 1,
    ACTIONS(126), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [341] = 1,
    ACTIONS(128), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [347] = 1,
    ACTIONS(130), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [353] = 1,
    ACTIONS(132), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [359] = 1,
    ACTIONS(134), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [364] = 1,
    ACTIONS(136), 1,
      anon_sym_COLON,
  [368] = 1,
    ACTIONS(138), 1,
      sym__BINARY_NUMBER,
  [372] = 1,
    ACTIONS(140), 1,
      sym__HEX_NUMBER,
  [376] = 1,
    ACTIONS(142), 1,
      sym__IDENTIFIER,
  [380] = 1,
    ACTIONS(144), 1,
      sym__OCTAL_NUMBER,
  [384] = 1,
    ACTIONS(146), 1,
      sym__IDENTIFIER,
  [388] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
  [392] = 1,
    ACTIONS(150), 1,
      aux_sym_effective_addr_token1,
  [396] = 1,
    ACTIONS(152), 1,
      sym_section_name,
  [400] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [404] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 46,
  [SMALL_STATE(9)] = 92,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 152,
  [SMALL_STATE(12)] = 171,
  [SMALL_STATE(13)] = 183,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 228,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 242,
  [SMALL_STATE(21)] = 249,
  [SMALL_STATE(22)] = 256,
  [SMALL_STATE(23)] = 263,
  [SMALL_STATE(24)] = 270,
  [SMALL_STATE(25)] = 277,
  [SMALL_STATE(26)] = 284,
  [SMALL_STATE(27)] = 291,
  [SMALL_STATE(28)] = 298,
  [SMALL_STATE(29)] = 305,
  [SMALL_STATE(30)] = 312,
  [SMALL_STATE(31)] = 323,
  [SMALL_STATE(32)] = 329,
  [SMALL_STATE(33)] = 335,
  [SMALL_STATE(34)] = 341,
  [SMALL_STATE(35)] = 347,
  [SMALL_STATE(36)] = 353,
  [SMALL_STATE(37)] = 359,
  [SMALL_STATE(38)] = 364,
  [SMALL_STATE(39)] = 368,
  [SMALL_STATE(40)] = 372,
  [SMALL_STATE(41)] = 376,
  [SMALL_STATE(42)] = 380,
  [SMALL_STATE(43)] = 384,
  [SMALL_STATE(44)] = 388,
  [SMALL_STATE(45)] = 392,
  [SMALL_STATE(46)] = 396,
  [SMALL_STATE(47)] = 400,
  [SMALL_STATE(48)] = 404,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins_kw, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins_kw, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_item_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(30),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(46),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(43),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(5),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_item, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__NEWLINE, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__NEWLINE, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal_literal, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_literal, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex_literal, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_8bit, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_16bit, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_32bit, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_64bit, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_simd, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_addr, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_ident, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
