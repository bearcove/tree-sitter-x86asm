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
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 410
#define ALIAS_COUNT 0
#define TOKEN_COUNT 368
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
  anon_sym_aam = 71,
  anon_sym_aas = 72,
  anon_sym_and = 73,
  anon_sym_call = 74,
  anon_sym_cbw = 75,
  anon_sym_cmc = 76,
  anon_sym_cmp = 77,
  anon_sym_cmpsb = 78,
  anon_sym_cmpsw = 79,
  anon_sym_cwd = 80,
  anon_sym_das = 81,
  anon_sym_esc = 82,
  anon_sym_hlt = 83,
  anon_sym_idiv = 84,
  anon_sym_imul = 85,
  anon_sym_in = 86,
  anon_sym_inc = 87,
  anon_sym_int = 88,
  anon_sym_into = 89,
  anon_sym_iret = 90,
  anon_sym_jo = 91,
  anon_sym_jno = 92,
  anon_sym_js = 93,
  anon_sym_jns = 94,
  anon_sym_je = 95,
  anon_sym_jz = 96,
  anon_sym_jne = 97,
  anon_sym_jnz = 98,
  anon_sym_jb = 99,
  anon_sym_jnae = 100,
  anon_sym_jc = 101,
  anon_sym_jnb = 102,
  anon_sym_jae = 103,
  anon_sym_jnc = 104,
  anon_sym_jbe = 105,
  anon_sym_jna = 106,
  anon_sym_ja = 107,
  anon_sym_jnbe = 108,
  anon_sym_jl = 109,
  anon_sym_jjnge = 110,
  anon_sym_jge = 111,
  anon_sym_jnl = 112,
  anon_sym_jle = 113,
  anon_sym_jng = 114,
  anon_sym_jg = 115,
  anon_sym_jnle = 116,
  anon_sym_jp = 117,
  anon_sym_jpe = 118,
  anon_sym_jpo = 119,
  anon_sym_jcxz = 120,
  anon_sym_jmp = 121,
  anon_sym_lahf = 122,
  anon_sym_lds = 123,
  anon_sym_lea = 124,
  anon_sym_les = 125,
  anon_sym_lock = 126,
  anon_sym_lodsb = 127,
  anon_sym_lodsw = 128,
  anon_sym_loop = 129,
  anon_sym_loope = 130,
  anon_sym_loopne = 131,
  anon_sym_loopnz = 132,
  anon_sym_loopz = 133,
  anon_sym_mov = 134,
  anon_sym_movsb = 135,
  anon_sym_movsw = 136,
  anon_sym_mul = 137,
  anon_sym_neg = 138,
  anon_sym_nop = 139,
  anon_sym_not = 140,
  anon_sym_or = 141,
  anon_sym_out = 142,
  anon_sym_pop = 143,
  anon_sym_popf = 144,
  anon_sym_push = 145,
  anon_sym_pushf = 146,
  anon_sym_rcl = 147,
  anon_sym_rcr = 148,
  anon_sym_rep = 149,
  anon_sym_repe = 150,
  anon_sym_repne = 151,
  anon_sym_repnz = 152,
  anon_sym_repz = 153,
  anon_sym_ret = 154,
  anon_sym_retn = 155,
  anon_sym_retf = 156,
  anon_sym_rol = 157,
  anon_sym_ror = 158,
  anon_sym_sahf = 159,
  anon_sym_sal = 160,
  anon_sym_sar = 161,
  anon_sym_sbb = 162,
  anon_sym_scasb = 163,
  anon_sym_scasw = 164,
  anon_sym_shl = 165,
  anon_sym_shr = 166,
  anon_sym_stc = 167,
  anon_sym_std = 168,
  anon_sym_sti = 169,
  anon_sym_stosb = 170,
  anon_sym_stosw = 171,
  anon_sym_sub = 172,
  anon_sym_test = 173,
  anon_sym_wait = 174,
  anon_sym_xchg = 175,
  anon_sym_xlat = 176,
  anon_sym_xor = 177,
  anon_sym_bound = 178,
  anon_sym_enter = 179,
  anon_sym_insb = 180,
  anon_sym_insw = 181,
  anon_sym_leave = 182,
  anon_sym_outsb = 183,
  anon_sym_outsw = 184,
  anon_sym_popa = 185,
  anon_sym_pusha = 186,
  anon_sym_arpl = 187,
  anon_sym_lar = 188,
  anon_sym_lsl = 189,
  anon_sym_lgdt = 190,
  anon_sym_lidt = 191,
  anon_sym_lldt = 192,
  anon_sym_ltr = 193,
  anon_sym_lmsw = 194,
  anon_sym_sgdt = 195,
  anon_sym_sldt = 196,
  anon_sym_smsw = 197,
  anon_sym_str = 198,
  anon_sym_verr = 199,
  anon_sym_verw = 200,
  anon_sym_loadall = 201,
  anon_sym_bsf = 202,
  anon_sym_bsr = 203,
  anon_sym_bt = 204,
  anon_sym_btc = 205,
  anon_sym_btr = 206,
  anon_sym_bts = 207,
  anon_sym_cdq = 208,
  anon_sym_cmpsd = 209,
  anon_sym_cwde = 210,
  anon_sym_ibts = 211,
  anon_sym_insd = 212,
  anon_sym_iretd = 213,
  anon_sym_lfs = 214,
  anon_sym_lgs = 215,
  anon_sym_lss = 216,
  anon_sym_lodsd = 217,
  anon_sym_loopw = 218,
  anon_sym_loopd = 219,
  anon_sym_movsd = 220,
  anon_sym_movsx = 221,
  anon_sym_movzx = 222,
  anon_sym_outsd = 223,
  anon_sym_popad = 224,
  anon_sym_popfd = 225,
  anon_sym_pushad = 226,
  anon_sym_pushfd = 227,
  anon_sym_pushd = 228,
  anon_sym_scasd = 229,
  anon_sym_seta = 230,
  anon_sym_setae = 231,
  anon_sym_setb = 232,
  anon_sym_setbe = 233,
  anon_sym_setc = 234,
  anon_sym_sete = 235,
  anon_sym_setg = 236,
  anon_sym_setge = 237,
  anon_sym_setl = 238,
  anon_sym_setle = 239,
  anon_sym_setna = 240,
  anon_sym_setnae = 241,
  anon_sym_setnb = 242,
  anon_sym_setnbe = 243,
  anon_sym_setnc = 244,
  anon_sym_setne = 245,
  anon_sym_setng = 246,
  anon_sym_setnge = 247,
  anon_sym_setnl = 248,
  anon_sym_setnle = 249,
  anon_sym_setno = 250,
  anon_sym_setnp = 251,
  anon_sym_setns = 252,
  anon_sym_setnz = 253,
  anon_sym_seto = 254,
  anon_sym_setp = 255,
  anon_sym_setpe = 256,
  anon_sym_setpo = 257,
  anon_sym_sets = 258,
  anon_sym_setz = 259,
  anon_sym_shld = 260,
  anon_sym_shrd = 261,
  anon_sym_stosd = 262,
  anon_sym_xbts = 263,
  anon_sym_bswap = 264,
  anon_sym_cmpxchg = 265,
  anon_sym_invd = 266,
  anon_sym_invlpg = 267,
  anon_sym_wbinvd = 268,
  anon_sym_xadd = 269,
  anon_sym_cpuid = 270,
  anon_sym_cmpxchg8b = 271,
  anon_sym_rdmsr = 272,
  anon_sym_rdtsc = 273,
  anon_sym_wrmsr = 274,
  anon_sym_rsm = 275,
  anon_sym_rdpmc = 276,
  anon_sym_syscall = 277,
  anon_sym_sysret = 278,
  anon_sym_cmova = 279,
  anon_sym_cmovae = 280,
  anon_sym_cmovb = 281,
  anon_sym_cmovbe = 282,
  anon_sym_cmovc = 283,
  anon_sym_cmove = 284,
  anon_sym_cmovg = 285,
  anon_sym_cmovge = 286,
  anon_sym_cmovl = 287,
  anon_sym_cmovle = 288,
  anon_sym_cmovna = 289,
  anon_sym_cmovnae = 290,
  anon_sym_cmovnb = 291,
  anon_sym_cmovnbe = 292,
  anon_sym_cmovnc = 293,
  anon_sym_cmovne = 294,
  anon_sym_cmovng = 295,
  anon_sym_cmovnge = 296,
  anon_sym_cmovnl = 297,
  anon_sym_cmovnle = 298,
  anon_sym_cmovno = 299,
  anon_sym_cmovnp = 300,
  anon_sym_cmovns = 301,
  anon_sym_cmovnz = 302,
  anon_sym_cmovo = 303,
  anon_sym_cmovp = 304,
  anon_sym_cmovpe = 305,
  anon_sym_cmovpo = 306,
  anon_sym_cmovs = 307,
  anon_sym_cmovz = 308,
  anon_sym_ud2 = 309,
  anon_sym_sysenter = 310,
  anon_sym_sysexit = 311,
  anon_sym_prefetcht0 = 312,
  anon_sym_prefetcht1 = 313,
  anon_sym_prefetcht2 = 314,
  anon_sym_prefetchnta = 315,
  anon_sym_sfence = 316,
  anon_sym_lfence = 317,
  anon_sym_mfence = 318,
  anon_sym_movnti = 319,
  anon_sym_pause = 320,
  anon_sym_monitor = 321,
  anon_sym_mwait = 322,
  anon_sym_crc32 = 323,
  anon_sym_cdqe = 324,
  anon_sym_cqo = 325,
  anon_sym_cmpsq = 326,
  anon_sym_cmpxchg16b = 327,
  anon_sym_iretq = 328,
  anon_sym_jrcxz = 329,
  anon_sym_lodsq = 330,
  anon_sym_movxsd = 331,
  anon_sym_popfq = 332,
  anon_sym_pushfq = 333,
  anon_sym_rdtscp = 334,
  anon_sym_scasq = 335,
  anon_sym_stosq = 336,
  anon_sym_swapgs = 337,
  anon_sym_lzcnt = 338,
  anon_sym_popcnt = 339,
  anon_sym_andn = 340,
  anon_sym_bextr = 341,
  anon_sym_tzcnt = 342,
  anon_sym_bzhi = 343,
  anon_sym_mulx = 344,
  anon_sym_pdep = 345,
  anon_sym_pext = 346,
  anon_sym_rorx = 347,
  anon_sym_sarx = 348,
  anon_sym_shrx = 349,
  anon_sym_shlx = 350,
  anon_sym_t1mskc = 351,
  anon_sym_tzmsk = 352,
  aux_sym__ins_sse2_pentium4_token1 = 353,
  aux_sym__ins_sse2_pentium4_token2 = 354,
  aux_sym__ins_sse2_pentium4_token3 = 355,
  aux_sym__ins_sse2_pentium4_token4 = 356,
  aux_sym__ins_sse2_pentium4_token5 = 357,
  aux_sym__ins_sse2_pentium4_token6 = 358,
  anon_sym_pmuludq = 359,
  anon_sym_punpckhbw = 360,
  anon_sym_maskmovdqu = 361,
  aux_sym__ins_sse2_pentium4_token7 = 362,
  aux_sym__ins_sse2_pentium4_token8 = 363,
  aux_sym__ins_sse2_pentium4_token9 = 364,
  aux_sym__ins_sse2_pentium4_token10 = 365,
  sym_section_name = 366,
  sym__IDENTIFIER = 367,
  sym_source_file = 368,
  sym_toplevel_item = 369,
  sym_statement = 370,
  sym_directive = 371,
  sym_builtin = 372,
  sym_builtin_kw = 373,
  sym_section = 374,
  sym_extern = 375,
  sym_global = 376,
  sym_shell_cmd = 377,
  sym_objdump_disas_of_section = 378,
  sym_objdump_section_label = 379,
  sym_objdump_offset_label = 380,
  sym_objdump_machine_code_bytes = 381,
  sym_objdump_offset_addr = 382,
  sym_label = 383,
  sym_ins = 384,
  sym_width = 385,
  sym_ptr = 386,
  sym_operand_args = 387,
  sym_operand = 388,
  sym_register = 389,
  sym_operand_ident = 390,
  sym_effective_addr = 391,
  sym_segment_prefix = 392,
  sym_segment = 393,
  sym_string_literal = 394,
  sym_integer_literal = 395,
  sym_literal_offset = 396,
  sym__decimal_literal = 397,
  sym__hex_literal = 398,
  sym__octal_literal = 399,
  sym__binary_literal = 400,
  sym__NEWLINE = 401,
  sym_ins_kw = 402,
  sym__ins_sse2_pentium4 = 403,
  sym_identifier = 404,
  aux_sym_toplevel_item_repeat1 = 405,
  aux_sym_objdump_machine_code_bytes_repeat1 = 406,
  aux_sym_operand_args_repeat1 = 407,
  aux_sym_effective_addr_repeat1 = 408,
  aux_sym_string_literal_repeat1 = 409,
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
  [anon_sym_aam] = "aam",
  [anon_sym_aas] = "aas",
  [anon_sym_and] = "and",
  [anon_sym_call] = "call",
  [anon_sym_cbw] = "cbw",
  [anon_sym_cmc] = "cmc",
  [anon_sym_cmp] = "cmp",
  [anon_sym_cmpsb] = "cmpsb",
  [anon_sym_cmpsw] = "cmpsw",
  [anon_sym_cwd] = "cwd",
  [anon_sym_das] = "das",
  [anon_sym_esc] = "esc",
  [anon_sym_hlt] = "hlt",
  [anon_sym_idiv] = "idiv",
  [anon_sym_imul] = "imul",
  [anon_sym_in] = "in",
  [anon_sym_inc] = "inc",
  [anon_sym_int] = "int",
  [anon_sym_into] = "into",
  [anon_sym_iret] = "iret",
  [anon_sym_jo] = "jo",
  [anon_sym_jno] = "jno",
  [anon_sym_js] = "js",
  [anon_sym_jns] = "jns",
  [anon_sym_je] = "je",
  [anon_sym_jz] = "jz",
  [anon_sym_jne] = "jne",
  [anon_sym_jnz] = "jnz",
  [anon_sym_jb] = "jb",
  [anon_sym_jnae] = "jnae",
  [anon_sym_jc] = "jc",
  [anon_sym_jnb] = "jnb",
  [anon_sym_jae] = "jae",
  [anon_sym_jnc] = "jnc",
  [anon_sym_jbe] = "jbe",
  [anon_sym_jna] = "jna",
  [anon_sym_ja] = "ja",
  [anon_sym_jnbe] = "jnbe",
  [anon_sym_jl] = "jl",
  [anon_sym_jjnge] = "jjnge",
  [anon_sym_jge] = "jge",
  [anon_sym_jnl] = "jnl",
  [anon_sym_jle] = "jle",
  [anon_sym_jng] = "jng",
  [anon_sym_jg] = "jg",
  [anon_sym_jnle] = "jnle",
  [anon_sym_jp] = "jp",
  [anon_sym_jpe] = "jpe",
  [anon_sym_jpo] = "jpo",
  [anon_sym_jcxz] = "jcxz",
  [anon_sym_jmp] = "jmp",
  [anon_sym_lahf] = "lahf",
  [anon_sym_lds] = "lds",
  [anon_sym_lea] = "lea",
  [anon_sym_les] = "les",
  [anon_sym_lock] = "lock",
  [anon_sym_lodsb] = "lodsb",
  [anon_sym_lodsw] = "lodsw",
  [anon_sym_loop] = "loop",
  [anon_sym_loope] = "loope",
  [anon_sym_loopne] = "loopne",
  [anon_sym_loopnz] = "loopnz",
  [anon_sym_loopz] = "loopz",
  [anon_sym_mov] = "mov",
  [anon_sym_movsb] = "movsb",
  [anon_sym_movsw] = "movsw",
  [anon_sym_mul] = "mul",
  [anon_sym_neg] = "neg",
  [anon_sym_nop] = "nop",
  [anon_sym_not] = "not",
  [anon_sym_or] = "or",
  [anon_sym_out] = "out",
  [anon_sym_pop] = "pop",
  [anon_sym_popf] = "popf",
  [anon_sym_push] = "push",
  [anon_sym_pushf] = "pushf",
  [anon_sym_rcl] = "rcl",
  [anon_sym_rcr] = "rcr",
  [anon_sym_rep] = "rep",
  [anon_sym_repe] = "repe",
  [anon_sym_repne] = "repne",
  [anon_sym_repnz] = "repnz",
  [anon_sym_repz] = "repz",
  [anon_sym_ret] = "ret",
  [anon_sym_retn] = "retn",
  [anon_sym_retf] = "retf",
  [anon_sym_rol] = "rol",
  [anon_sym_ror] = "ror",
  [anon_sym_sahf] = "sahf",
  [anon_sym_sal] = "sal",
  [anon_sym_sar] = "sar",
  [anon_sym_sbb] = "sbb",
  [anon_sym_scasb] = "scasb",
  [anon_sym_scasw] = "scasw",
  [anon_sym_shl] = "shl",
  [anon_sym_shr] = "shr",
  [anon_sym_stc] = "stc",
  [anon_sym_std] = "std",
  [anon_sym_sti] = "sti",
  [anon_sym_stosb] = "stosb",
  [anon_sym_stosw] = "stosw",
  [anon_sym_sub] = "sub",
  [anon_sym_test] = "test",
  [anon_sym_wait] = "wait",
  [anon_sym_xchg] = "xchg",
  [anon_sym_xlat] = "xlat",
  [anon_sym_xor] = "xor",
  [anon_sym_bound] = "bound",
  [anon_sym_enter] = "enter",
  [anon_sym_insb] = "insb",
  [anon_sym_insw] = "insw",
  [anon_sym_leave] = "leave",
  [anon_sym_outsb] = "outsb",
  [anon_sym_outsw] = "outsw",
  [anon_sym_popa] = "popa",
  [anon_sym_pusha] = "pusha",
  [anon_sym_arpl] = "arpl",
  [anon_sym_lar] = "lar",
  [anon_sym_lsl] = "lsl",
  [anon_sym_lgdt] = "lgdt",
  [anon_sym_lidt] = "lidt",
  [anon_sym_lldt] = "lldt",
  [anon_sym_ltr] = "ltr",
  [anon_sym_lmsw] = "lmsw",
  [anon_sym_sgdt] = "sgdt",
  [anon_sym_sldt] = "sldt",
  [anon_sym_smsw] = "smsw",
  [anon_sym_str] = "str",
  [anon_sym_verr] = "verr",
  [anon_sym_verw] = "verw",
  [anon_sym_loadall] = "loadall",
  [anon_sym_bsf] = "bsf",
  [anon_sym_bsr] = "bsr",
  [anon_sym_bt] = "bt",
  [anon_sym_btc] = "btc",
  [anon_sym_btr] = "btr",
  [anon_sym_bts] = "bts",
  [anon_sym_cdq] = "cdq",
  [anon_sym_cmpsd] = "cmpsd",
  [anon_sym_cwde] = "cwde",
  [anon_sym_ibts] = "ibts",
  [anon_sym_insd] = "insd",
  [anon_sym_iretd] = "iretd",
  [anon_sym_lfs] = "lfs",
  [anon_sym_lgs] = "lgs",
  [anon_sym_lss] = "lss",
  [anon_sym_lodsd] = "lodsd",
  [anon_sym_loopw] = "loopw",
  [anon_sym_loopd] = "loopd",
  [anon_sym_movsd] = "movsd",
  [anon_sym_movsx] = "movsx",
  [anon_sym_movzx] = "movzx",
  [anon_sym_outsd] = "outsd",
  [anon_sym_popad] = "popad",
  [anon_sym_popfd] = "popfd",
  [anon_sym_pushad] = "pushad",
  [anon_sym_pushfd] = "pushfd",
  [anon_sym_pushd] = "pushd",
  [anon_sym_scasd] = "scasd",
  [anon_sym_seta] = "seta",
  [anon_sym_setae] = "setae",
  [anon_sym_setb] = "setb",
  [anon_sym_setbe] = "setbe",
  [anon_sym_setc] = "setc",
  [anon_sym_sete] = "sete",
  [anon_sym_setg] = "setg",
  [anon_sym_setge] = "setge",
  [anon_sym_setl] = "setl",
  [anon_sym_setle] = "setle",
  [anon_sym_setna] = "setna",
  [anon_sym_setnae] = "setnae",
  [anon_sym_setnb] = "setnb",
  [anon_sym_setnbe] = "setnbe",
  [anon_sym_setnc] = "setnc",
  [anon_sym_setne] = "setne",
  [anon_sym_setng] = "setng",
  [anon_sym_setnge] = "setnge",
  [anon_sym_setnl] = "setnl",
  [anon_sym_setnle] = "setnle",
  [anon_sym_setno] = "setno",
  [anon_sym_setnp] = "setnp",
  [anon_sym_setns] = "setns",
  [anon_sym_setnz] = "setnz",
  [anon_sym_seto] = "seto",
  [anon_sym_setp] = "setp",
  [anon_sym_setpe] = "setpe",
  [anon_sym_setpo] = "setpo",
  [anon_sym_sets] = "sets",
  [anon_sym_setz] = "setz",
  [anon_sym_shld] = "shld",
  [anon_sym_shrd] = "shrd",
  [anon_sym_stosd] = "stosd",
  [anon_sym_xbts] = "xbts",
  [anon_sym_bswap] = "bswap",
  [anon_sym_cmpxchg] = "cmpxchg",
  [anon_sym_invd] = "invd",
  [anon_sym_invlpg] = "invlpg",
  [anon_sym_wbinvd] = "wbinvd",
  [anon_sym_xadd] = "xadd",
  [anon_sym_cpuid] = "cpuid",
  [anon_sym_cmpxchg8b] = "cmpxchg8b",
  [anon_sym_rdmsr] = "rdmsr",
  [anon_sym_rdtsc] = "rdtsc",
  [anon_sym_wrmsr] = "wrmsr",
  [anon_sym_rsm] = "rsm",
  [anon_sym_rdpmc] = "rdpmc",
  [anon_sym_syscall] = "syscall",
  [anon_sym_sysret] = "sysret",
  [anon_sym_cmova] = "cmova",
  [anon_sym_cmovae] = "cmovae",
  [anon_sym_cmovb] = "cmovb",
  [anon_sym_cmovbe] = "cmovbe",
  [anon_sym_cmovc] = "cmovc",
  [anon_sym_cmove] = "cmove",
  [anon_sym_cmovg] = "cmovg",
  [anon_sym_cmovge] = "cmovge",
  [anon_sym_cmovl] = "cmovl",
  [anon_sym_cmovle] = "cmovle",
  [anon_sym_cmovna] = "cmovna",
  [anon_sym_cmovnae] = "cmovnae",
  [anon_sym_cmovnb] = "cmovnb",
  [anon_sym_cmovnbe] = "cmovnbe",
  [anon_sym_cmovnc] = "cmovnc",
  [anon_sym_cmovne] = "cmovne",
  [anon_sym_cmovng] = "cmovng",
  [anon_sym_cmovnge] = "cmovnge",
  [anon_sym_cmovnl] = "cmovnl",
  [anon_sym_cmovnle] = "cmovnle",
  [anon_sym_cmovno] = "cmovno",
  [anon_sym_cmovnp] = "cmovnp",
  [anon_sym_cmovns] = "cmovns",
  [anon_sym_cmovnz] = "cmovnz",
  [anon_sym_cmovo] = "cmovo",
  [anon_sym_cmovp] = "cmovp",
  [anon_sym_cmovpe] = "cmovpe",
  [anon_sym_cmovpo] = "cmovpo",
  [anon_sym_cmovs] = "cmovs",
  [anon_sym_cmovz] = "cmovz",
  [anon_sym_ud2] = "ud2",
  [anon_sym_sysenter] = "sysenter",
  [anon_sym_sysexit] = "sysexit",
  [anon_sym_prefetcht0] = "prefetcht0",
  [anon_sym_prefetcht1] = "prefetcht1",
  [anon_sym_prefetcht2] = "prefetcht2",
  [anon_sym_prefetchnta] = "prefetchnta",
  [anon_sym_sfence] = "sfence",
  [anon_sym_lfence] = "lfence",
  [anon_sym_mfence] = "mfence",
  [anon_sym_movnti] = "movnti",
  [anon_sym_pause] = "pause",
  [anon_sym_monitor] = "monitor",
  [anon_sym_mwait] = "mwait",
  [anon_sym_crc32] = "crc32",
  [anon_sym_cdqe] = "cdqe",
  [anon_sym_cqo] = "cqo",
  [anon_sym_cmpsq] = "cmpsq",
  [anon_sym_cmpxchg16b] = "cmpxchg16b",
  [anon_sym_iretq] = "iretq",
  [anon_sym_jrcxz] = "jrcxz",
  [anon_sym_lodsq] = "lodsq",
  [anon_sym_movxsd] = "movxsd",
  [anon_sym_popfq] = "popfq",
  [anon_sym_pushfq] = "pushfq",
  [anon_sym_rdtscp] = "rdtscp",
  [anon_sym_scasq] = "scasq",
  [anon_sym_stosq] = "stosq",
  [anon_sym_swapgs] = "swapgs",
  [anon_sym_lzcnt] = "lzcnt",
  [anon_sym_popcnt] = "popcnt",
  [anon_sym_andn] = "andn",
  [anon_sym_bextr] = "bextr",
  [anon_sym_tzcnt] = "tzcnt",
  [anon_sym_bzhi] = "bzhi",
  [anon_sym_mulx] = "mulx",
  [anon_sym_pdep] = "pdep",
  [anon_sym_pext] = "pext",
  [anon_sym_rorx] = "rorx",
  [anon_sym_sarx] = "sarx",
  [anon_sym_shrx] = "shrx",
  [anon_sym_shlx] = "shlx",
  [anon_sym_t1mskc] = "t1mskc",
  [anon_sym_tzmsk] = "tzmsk",
  [aux_sym__ins_sse2_pentium4_token1] = "_ins_sse2_pentium4_token1",
  [aux_sym__ins_sse2_pentium4_token2] = "_ins_sse2_pentium4_token2",
  [aux_sym__ins_sse2_pentium4_token3] = "_ins_sse2_pentium4_token3",
  [aux_sym__ins_sse2_pentium4_token4] = "_ins_sse2_pentium4_token4",
  [aux_sym__ins_sse2_pentium4_token5] = "_ins_sse2_pentium4_token5",
  [aux_sym__ins_sse2_pentium4_token6] = "_ins_sse2_pentium4_token6",
  [anon_sym_pmuludq] = "pmuludq",
  [anon_sym_punpckhbw] = "punpckhbw",
  [anon_sym_maskmovdqu] = "maskmovdqu",
  [aux_sym__ins_sse2_pentium4_token7] = "_ins_sse2_pentium4_token7",
  [aux_sym__ins_sse2_pentium4_token8] = "_ins_sse2_pentium4_token8",
  [aux_sym__ins_sse2_pentium4_token9] = "_ins_sse2_pentium4_token9",
  [aux_sym__ins_sse2_pentium4_token10] = "_ins_sse2_pentium4_token10",
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
  [sym_ins_kw] = "ins_kw",
  [sym__ins_sse2_pentium4] = "_ins_sse2_pentium4",
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
  [anon_sym_aam] = anon_sym_aam,
  [anon_sym_aas] = anon_sym_aas,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_cbw] = anon_sym_cbw,
  [anon_sym_cmc] = anon_sym_cmc,
  [anon_sym_cmp] = anon_sym_cmp,
  [anon_sym_cmpsb] = anon_sym_cmpsb,
  [anon_sym_cmpsw] = anon_sym_cmpsw,
  [anon_sym_cwd] = anon_sym_cwd,
  [anon_sym_das] = anon_sym_das,
  [anon_sym_esc] = anon_sym_esc,
  [anon_sym_hlt] = anon_sym_hlt,
  [anon_sym_idiv] = anon_sym_idiv,
  [anon_sym_imul] = anon_sym_imul,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_inc] = anon_sym_inc,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_into] = anon_sym_into,
  [anon_sym_iret] = anon_sym_iret,
  [anon_sym_jo] = anon_sym_jo,
  [anon_sym_jno] = anon_sym_jno,
  [anon_sym_js] = anon_sym_js,
  [anon_sym_jns] = anon_sym_jns,
  [anon_sym_je] = anon_sym_je,
  [anon_sym_jz] = anon_sym_jz,
  [anon_sym_jne] = anon_sym_jne,
  [anon_sym_jnz] = anon_sym_jnz,
  [anon_sym_jb] = anon_sym_jb,
  [anon_sym_jnae] = anon_sym_jnae,
  [anon_sym_jc] = anon_sym_jc,
  [anon_sym_jnb] = anon_sym_jnb,
  [anon_sym_jae] = anon_sym_jae,
  [anon_sym_jnc] = anon_sym_jnc,
  [anon_sym_jbe] = anon_sym_jbe,
  [anon_sym_jna] = anon_sym_jna,
  [anon_sym_ja] = anon_sym_ja,
  [anon_sym_jnbe] = anon_sym_jnbe,
  [anon_sym_jl] = anon_sym_jl,
  [anon_sym_jjnge] = anon_sym_jjnge,
  [anon_sym_jge] = anon_sym_jge,
  [anon_sym_jnl] = anon_sym_jnl,
  [anon_sym_jle] = anon_sym_jle,
  [anon_sym_jng] = anon_sym_jng,
  [anon_sym_jg] = anon_sym_jg,
  [anon_sym_jnle] = anon_sym_jnle,
  [anon_sym_jp] = anon_sym_jp,
  [anon_sym_jpe] = anon_sym_jpe,
  [anon_sym_jpo] = anon_sym_jpo,
  [anon_sym_jcxz] = anon_sym_jcxz,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_lahf] = anon_sym_lahf,
  [anon_sym_lds] = anon_sym_lds,
  [anon_sym_lea] = anon_sym_lea,
  [anon_sym_les] = anon_sym_les,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_lodsb] = anon_sym_lodsb,
  [anon_sym_lodsw] = anon_sym_lodsw,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_loope] = anon_sym_loope,
  [anon_sym_loopne] = anon_sym_loopne,
  [anon_sym_loopnz] = anon_sym_loopnz,
  [anon_sym_loopz] = anon_sym_loopz,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_movsb] = anon_sym_movsb,
  [anon_sym_movsw] = anon_sym_movsw,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_popf] = anon_sym_popf,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pushf] = anon_sym_pushf,
  [anon_sym_rcl] = anon_sym_rcl,
  [anon_sym_rcr] = anon_sym_rcr,
  [anon_sym_rep] = anon_sym_rep,
  [anon_sym_repe] = anon_sym_repe,
  [anon_sym_repne] = anon_sym_repne,
  [anon_sym_repnz] = anon_sym_repnz,
  [anon_sym_repz] = anon_sym_repz,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_retn] = anon_sym_retn,
  [anon_sym_retf] = anon_sym_retf,
  [anon_sym_rol] = anon_sym_rol,
  [anon_sym_ror] = anon_sym_ror,
  [anon_sym_sahf] = anon_sym_sahf,
  [anon_sym_sal] = anon_sym_sal,
  [anon_sym_sar] = anon_sym_sar,
  [anon_sym_sbb] = anon_sym_sbb,
  [anon_sym_scasb] = anon_sym_scasb,
  [anon_sym_scasw] = anon_sym_scasw,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_shr] = anon_sym_shr,
  [anon_sym_stc] = anon_sym_stc,
  [anon_sym_std] = anon_sym_std,
  [anon_sym_sti] = anon_sym_sti,
  [anon_sym_stosb] = anon_sym_stosb,
  [anon_sym_stosw] = anon_sym_stosw,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_wait] = anon_sym_wait,
  [anon_sym_xchg] = anon_sym_xchg,
  [anon_sym_xlat] = anon_sym_xlat,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_bound] = anon_sym_bound,
  [anon_sym_enter] = anon_sym_enter,
  [anon_sym_insb] = anon_sym_insb,
  [anon_sym_insw] = anon_sym_insw,
  [anon_sym_leave] = anon_sym_leave,
  [anon_sym_outsb] = anon_sym_outsb,
  [anon_sym_outsw] = anon_sym_outsw,
  [anon_sym_popa] = anon_sym_popa,
  [anon_sym_pusha] = anon_sym_pusha,
  [anon_sym_arpl] = anon_sym_arpl,
  [anon_sym_lar] = anon_sym_lar,
  [anon_sym_lsl] = anon_sym_lsl,
  [anon_sym_lgdt] = anon_sym_lgdt,
  [anon_sym_lidt] = anon_sym_lidt,
  [anon_sym_lldt] = anon_sym_lldt,
  [anon_sym_ltr] = anon_sym_ltr,
  [anon_sym_lmsw] = anon_sym_lmsw,
  [anon_sym_sgdt] = anon_sym_sgdt,
  [anon_sym_sldt] = anon_sym_sldt,
  [anon_sym_smsw] = anon_sym_smsw,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_verr] = anon_sym_verr,
  [anon_sym_verw] = anon_sym_verw,
  [anon_sym_loadall] = anon_sym_loadall,
  [anon_sym_bsf] = anon_sym_bsf,
  [anon_sym_bsr] = anon_sym_bsr,
  [anon_sym_bt] = anon_sym_bt,
  [anon_sym_btc] = anon_sym_btc,
  [anon_sym_btr] = anon_sym_btr,
  [anon_sym_bts] = anon_sym_bts,
  [anon_sym_cdq] = anon_sym_cdq,
  [anon_sym_cmpsd] = anon_sym_cmpsd,
  [anon_sym_cwde] = anon_sym_cwde,
  [anon_sym_ibts] = anon_sym_ibts,
  [anon_sym_insd] = anon_sym_insd,
  [anon_sym_iretd] = anon_sym_iretd,
  [anon_sym_lfs] = anon_sym_lfs,
  [anon_sym_lgs] = anon_sym_lgs,
  [anon_sym_lss] = anon_sym_lss,
  [anon_sym_lodsd] = anon_sym_lodsd,
  [anon_sym_loopw] = anon_sym_loopw,
  [anon_sym_loopd] = anon_sym_loopd,
  [anon_sym_movsd] = anon_sym_movsd,
  [anon_sym_movsx] = anon_sym_movsx,
  [anon_sym_movzx] = anon_sym_movzx,
  [anon_sym_outsd] = anon_sym_outsd,
  [anon_sym_popad] = anon_sym_popad,
  [anon_sym_popfd] = anon_sym_popfd,
  [anon_sym_pushad] = anon_sym_pushad,
  [anon_sym_pushfd] = anon_sym_pushfd,
  [anon_sym_pushd] = anon_sym_pushd,
  [anon_sym_scasd] = anon_sym_scasd,
  [anon_sym_seta] = anon_sym_seta,
  [anon_sym_setae] = anon_sym_setae,
  [anon_sym_setb] = anon_sym_setb,
  [anon_sym_setbe] = anon_sym_setbe,
  [anon_sym_setc] = anon_sym_setc,
  [anon_sym_sete] = anon_sym_sete,
  [anon_sym_setg] = anon_sym_setg,
  [anon_sym_setge] = anon_sym_setge,
  [anon_sym_setl] = anon_sym_setl,
  [anon_sym_setle] = anon_sym_setle,
  [anon_sym_setna] = anon_sym_setna,
  [anon_sym_setnae] = anon_sym_setnae,
  [anon_sym_setnb] = anon_sym_setnb,
  [anon_sym_setnbe] = anon_sym_setnbe,
  [anon_sym_setnc] = anon_sym_setnc,
  [anon_sym_setne] = anon_sym_setne,
  [anon_sym_setng] = anon_sym_setng,
  [anon_sym_setnge] = anon_sym_setnge,
  [anon_sym_setnl] = anon_sym_setnl,
  [anon_sym_setnle] = anon_sym_setnle,
  [anon_sym_setno] = anon_sym_setno,
  [anon_sym_setnp] = anon_sym_setnp,
  [anon_sym_setns] = anon_sym_setns,
  [anon_sym_setnz] = anon_sym_setnz,
  [anon_sym_seto] = anon_sym_seto,
  [anon_sym_setp] = anon_sym_setp,
  [anon_sym_setpe] = anon_sym_setpe,
  [anon_sym_setpo] = anon_sym_setpo,
  [anon_sym_sets] = anon_sym_sets,
  [anon_sym_setz] = anon_sym_setz,
  [anon_sym_shld] = anon_sym_shld,
  [anon_sym_shrd] = anon_sym_shrd,
  [anon_sym_stosd] = anon_sym_stosd,
  [anon_sym_xbts] = anon_sym_xbts,
  [anon_sym_bswap] = anon_sym_bswap,
  [anon_sym_cmpxchg] = anon_sym_cmpxchg,
  [anon_sym_invd] = anon_sym_invd,
  [anon_sym_invlpg] = anon_sym_invlpg,
  [anon_sym_wbinvd] = anon_sym_wbinvd,
  [anon_sym_xadd] = anon_sym_xadd,
  [anon_sym_cpuid] = anon_sym_cpuid,
  [anon_sym_cmpxchg8b] = anon_sym_cmpxchg8b,
  [anon_sym_rdmsr] = anon_sym_rdmsr,
  [anon_sym_rdtsc] = anon_sym_rdtsc,
  [anon_sym_wrmsr] = anon_sym_wrmsr,
  [anon_sym_rsm] = anon_sym_rsm,
  [anon_sym_rdpmc] = anon_sym_rdpmc,
  [anon_sym_syscall] = anon_sym_syscall,
  [anon_sym_sysret] = anon_sym_sysret,
  [anon_sym_cmova] = anon_sym_cmova,
  [anon_sym_cmovae] = anon_sym_cmovae,
  [anon_sym_cmovb] = anon_sym_cmovb,
  [anon_sym_cmovbe] = anon_sym_cmovbe,
  [anon_sym_cmovc] = anon_sym_cmovc,
  [anon_sym_cmove] = anon_sym_cmove,
  [anon_sym_cmovg] = anon_sym_cmovg,
  [anon_sym_cmovge] = anon_sym_cmovge,
  [anon_sym_cmovl] = anon_sym_cmovl,
  [anon_sym_cmovle] = anon_sym_cmovle,
  [anon_sym_cmovna] = anon_sym_cmovna,
  [anon_sym_cmovnae] = anon_sym_cmovnae,
  [anon_sym_cmovnb] = anon_sym_cmovnb,
  [anon_sym_cmovnbe] = anon_sym_cmovnbe,
  [anon_sym_cmovnc] = anon_sym_cmovnc,
  [anon_sym_cmovne] = anon_sym_cmovne,
  [anon_sym_cmovng] = anon_sym_cmovng,
  [anon_sym_cmovnge] = anon_sym_cmovnge,
  [anon_sym_cmovnl] = anon_sym_cmovnl,
  [anon_sym_cmovnle] = anon_sym_cmovnle,
  [anon_sym_cmovno] = anon_sym_cmovno,
  [anon_sym_cmovnp] = anon_sym_cmovnp,
  [anon_sym_cmovns] = anon_sym_cmovns,
  [anon_sym_cmovnz] = anon_sym_cmovnz,
  [anon_sym_cmovo] = anon_sym_cmovo,
  [anon_sym_cmovp] = anon_sym_cmovp,
  [anon_sym_cmovpe] = anon_sym_cmovpe,
  [anon_sym_cmovpo] = anon_sym_cmovpo,
  [anon_sym_cmovs] = anon_sym_cmovs,
  [anon_sym_cmovz] = anon_sym_cmovz,
  [anon_sym_ud2] = anon_sym_ud2,
  [anon_sym_sysenter] = anon_sym_sysenter,
  [anon_sym_sysexit] = anon_sym_sysexit,
  [anon_sym_prefetcht0] = anon_sym_prefetcht0,
  [anon_sym_prefetcht1] = anon_sym_prefetcht1,
  [anon_sym_prefetcht2] = anon_sym_prefetcht2,
  [anon_sym_prefetchnta] = anon_sym_prefetchnta,
  [anon_sym_sfence] = anon_sym_sfence,
  [anon_sym_lfence] = anon_sym_lfence,
  [anon_sym_mfence] = anon_sym_mfence,
  [anon_sym_movnti] = anon_sym_movnti,
  [anon_sym_pause] = anon_sym_pause,
  [anon_sym_monitor] = anon_sym_monitor,
  [anon_sym_mwait] = anon_sym_mwait,
  [anon_sym_crc32] = anon_sym_crc32,
  [anon_sym_cdqe] = anon_sym_cdqe,
  [anon_sym_cqo] = anon_sym_cqo,
  [anon_sym_cmpsq] = anon_sym_cmpsq,
  [anon_sym_cmpxchg16b] = anon_sym_cmpxchg16b,
  [anon_sym_iretq] = anon_sym_iretq,
  [anon_sym_jrcxz] = anon_sym_jrcxz,
  [anon_sym_lodsq] = anon_sym_lodsq,
  [anon_sym_movxsd] = anon_sym_movxsd,
  [anon_sym_popfq] = anon_sym_popfq,
  [anon_sym_pushfq] = anon_sym_pushfq,
  [anon_sym_rdtscp] = anon_sym_rdtscp,
  [anon_sym_scasq] = anon_sym_scasq,
  [anon_sym_stosq] = anon_sym_stosq,
  [anon_sym_swapgs] = anon_sym_swapgs,
  [anon_sym_lzcnt] = anon_sym_lzcnt,
  [anon_sym_popcnt] = anon_sym_popcnt,
  [anon_sym_andn] = anon_sym_andn,
  [anon_sym_bextr] = anon_sym_bextr,
  [anon_sym_tzcnt] = anon_sym_tzcnt,
  [anon_sym_bzhi] = anon_sym_bzhi,
  [anon_sym_mulx] = anon_sym_mulx,
  [anon_sym_pdep] = anon_sym_pdep,
  [anon_sym_pext] = anon_sym_pext,
  [anon_sym_rorx] = anon_sym_rorx,
  [anon_sym_sarx] = anon_sym_sarx,
  [anon_sym_shrx] = anon_sym_shrx,
  [anon_sym_shlx] = anon_sym_shlx,
  [anon_sym_t1mskc] = anon_sym_t1mskc,
  [anon_sym_tzmsk] = anon_sym_tzmsk,
  [aux_sym__ins_sse2_pentium4_token1] = aux_sym__ins_sse2_pentium4_token1,
  [aux_sym__ins_sse2_pentium4_token2] = aux_sym__ins_sse2_pentium4_token2,
  [aux_sym__ins_sse2_pentium4_token3] = aux_sym__ins_sse2_pentium4_token3,
  [aux_sym__ins_sse2_pentium4_token4] = aux_sym__ins_sse2_pentium4_token4,
  [aux_sym__ins_sse2_pentium4_token5] = aux_sym__ins_sse2_pentium4_token5,
  [aux_sym__ins_sse2_pentium4_token6] = aux_sym__ins_sse2_pentium4_token6,
  [anon_sym_pmuludq] = anon_sym_pmuludq,
  [anon_sym_punpckhbw] = anon_sym_punpckhbw,
  [anon_sym_maskmovdqu] = anon_sym_maskmovdqu,
  [aux_sym__ins_sse2_pentium4_token7] = aux_sym__ins_sse2_pentium4_token7,
  [aux_sym__ins_sse2_pentium4_token8] = aux_sym__ins_sse2_pentium4_token8,
  [aux_sym__ins_sse2_pentium4_token9] = aux_sym__ins_sse2_pentium4_token9,
  [aux_sym__ins_sse2_pentium4_token10] = aux_sym__ins_sse2_pentium4_token10,
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
  [sym_ins_kw] = sym_ins_kw,
  [sym__ins_sse2_pentium4] = sym__ins_sse2_pentium4,
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
  [anon_sym_aam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_das] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hlt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_into] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jno] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_js] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_je] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jnz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jnae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jnb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jnc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ja] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jnbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jjnge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jnl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jng] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jnle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jpe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jpo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jcxz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lahf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lea] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_les] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lodsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lodsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loopne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loopnz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loopz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rcl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rcr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repnz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sahf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scasb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scasw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_std] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stosb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stosw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xchg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xlat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pusha] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lgdt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lidt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lldt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ltr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lmsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgdt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sldt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loadall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cwde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ibts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iretd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lfs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lgs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lodsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loopw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loopd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scasd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setng] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setno] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setpe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setpo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stosd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xbts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bswap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpxchg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invlpg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wbinvd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xadd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cpuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpxchg8b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdmsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdtsc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wrmsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rsm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdpmc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syscall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sysret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmova] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovnae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovnb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovnbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovnc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovng] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovnge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovnl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovnle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovno] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovnp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovnz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovpe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovpo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ud2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sysenter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sysexit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefetcht0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefetcht1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefetcht2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefetchnta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lfence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mfence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movnti] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pause] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monitor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mwait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crc32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cdqe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cqo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpsq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpxchg16b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iretq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jrcxz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lodsq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movxsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popfq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushfq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdtscp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scasq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stosq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapgs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lzcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bextr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tzcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bzhi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pdep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rorx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sarx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shlx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t1mskc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tzmsk] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_pmuludq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckhbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maskmovdqu] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ins_sse2_pentium4_token10] = {
    .visible = false,
    .named = false,
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
  [sym_ins_kw] = {
    .visible = true,
    .named = true,
  },
  [sym__ins_sse2_pentium4] = {
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
      if (eof) ADVANCE(446);
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '$') ADVANCE(460);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '+') ADVANCE(572);
      if (lookahead == ',') ADVANCE(553);
      if (lookahead == '-') ADVANCE(573);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '0') ADVANCE(469);
      if (lookahead == '1') ADVANCE(468);
      if (lookahead == ':') ADVANCE(462);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == 'B') ADVANCE(467);
      if (lookahead == 'D') ADVANCE(466);
      if (lookahead == 'P') ADVANCE(41);
      if (lookahead == 'Q') ADVANCE(44);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == 'X') ADVANCE(30);
      if (lookahead == '[') ADVANCE(568);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(575);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'b') ADVANCE(477);
      if (lookahead == 'c') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(483);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'j') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'q') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == 'v') ADVANCE(162);
      if (lookahead == 'w') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(447);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(475);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == ',') ADVANCE(553);
      if (lookahead == '0') ADVANCE(597);
      if (lookahead == '1') ADVANCE(598);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == 'B') ADVANCE(944);
      if (lookahead == 'D') ADVANCE(941);
      if (lookahead == 'P') ADVANCE(939);
      if (lookahead == 'Q') ADVANCE(942);
      if (lookahead == 'W') ADVANCE(930);
      if (lookahead == 'X') ADVANCE(928);
      if (lookahead == '[') ADVANCE(568);
      if (lookahead == '_') ADVANCE(988);
      if (lookahead == 'b') ADVANCE(960);
      if (lookahead == 'd') ADVANCE(958);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead == 'p') ADVANCE(983);
      if (lookahead == 'q') ADVANCE(985);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead == 's') ADVANCE(965);
      if (lookahead == 'w') ADVANCE(971);
      if (lookahead == 'x') ADVANCE(969);
      if (lookahead == 'y') ADVANCE(970);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(447);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(963);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(956);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(592);
      if (lookahead != 0) ADVANCE(593);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(625);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(447);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(461);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(352);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '$') ADVANCE(460);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '+') ADVANCE(572);
      if (lookahead == ',') ADVANCE(553);
      if (lookahead == '-') ADVANCE(573);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == '0') ADVANCE(508);
      if (lookahead == '1') ADVANCE(509);
      if (lookahead == ':') ADVANCE(462);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == 'B') ADVANCE(507);
      if (lookahead == 'D') ADVANCE(506);
      if (lookahead == 'P') ADVANCE(41);
      if (lookahead == 'Q') ADVANCE(44);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == 'X') ADVANCE(30);
      if (lookahead == '[') ADVANCE(568);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(575);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(514);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == 'f') ADVANCE(521);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'j') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'q') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == 'v') ADVANCE(162);
      if (lookahead == 'w') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(447);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(516);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '0') ADVANCE(597);
      if (lookahead == '1') ADVANCE(598);
      if (lookahead == ':') ADVANCE(427);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == 'B') ADVANCE(944);
      if (lookahead == 'D') ADVANCE(941);
      if (lookahead == 'P') ADVANCE(939);
      if (lookahead == 'Q') ADVANCE(942);
      if (lookahead == 'W') ADVANCE(930);
      if (lookahead == 'X') ADVANCE(928);
      if (lookahead == '[') ADVANCE(568);
      if (lookahead == '_') ADVANCE(988);
      if (lookahead == 'b') ADVANCE(960);
      if (lookahead == 'd') ADVANCE(958);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead == 'p') ADVANCE(983);
      if (lookahead == 'q') ADVANCE(985);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead == 's') ADVANCE(965);
      if (lookahead == 'w') ADVANCE(971);
      if (lookahead == 'x') ADVANCE(969);
      if (lookahead == 'y') ADVANCE(970);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(963);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(956);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '0') ADVANCE(597);
      if (lookahead == '1') ADVANCE(598);
      if (lookahead == 'P') ADVANCE(939);
      if (lookahead == '[') ADVANCE(568);
      if (lookahead == '_') ADVANCE(988);
      if (lookahead == 'b') ADVANCE(961);
      if (lookahead == 'd') ADVANCE(959);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead == 'p') ADVANCE(983);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead == 's') ADVANCE(965);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(963);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(600);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(970);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '0') ADVANCE(597);
      if (lookahead == '1') ADVANCE(598);
      if (lookahead == '[') ADVANCE(568);
      if (lookahead == '_') ADVANCE(988);
      if (lookahead == 'b') ADVANCE(961);
      if (lookahead == 'd') ADVANCE(959);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead == 's') ADVANCE(965);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(963);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(600);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(970);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(569);
      if (lookahead == ')') ADVANCE(570);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '+') ADVANCE(572);
      if (lookahead == '-') ADVANCE(574);
      if (lookahead == '0') ADVANCE(597);
      if (lookahead == '1') ADVANCE(598);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == ']') ADVANCE(575);
      if (lookahead == '_') ADVANCE(988);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'b') ADVANCE(961);
      if (lookahead == 'c') ADVANCE(962);
      if (lookahead == 'd') ADVANCE(957);
      if (lookahead == 'e') ADVANCE(946);
      if (lookahead == 'f') ADVANCE(954);
      if (lookahead == 'g') ADVANCE(982);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead == 's') ADVANCE(964);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(600);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(970);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(956);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '0') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == 'v') ADVANCE(246);
      if (lookahead == 'x') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(867);
      if (lookahead == '1') ADVANCE(868);
      if (lookahead == '2') ADVANCE(869);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(434);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(430);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(562);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'b') ADVANCE(285);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'z') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(864);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(878);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(140);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(304);
      if (lookahead == 'a' ||
          lookahead == 'u') ADVANCE(917);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(134);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(541);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(543);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(545);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(547);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(539);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(551);
      END_STATE();
    case 37:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'U') ADVANCE(442);
      if (lookahead == 'u') ADVANCE(438);
      if (lookahead == 'x') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (lookahead != 0) ADVANCE(588);
      END_STATE();
    case 44:
      if (lookahead == 'W') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'W') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(662);
      if (lookahead == 'b') ADVANCE(654);
      if (lookahead == 'c') ADVANCE(656);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == 'g') ADVANCE(670);
      if (lookahead == 'j') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(664);
      if (lookahead == 'm') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead == 'p') ADVANCE(672);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == 'z') ADVANCE(651);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == 'z') ADVANCE(99);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == 'm') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(63);
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead == 'b') ADVANCE(657);
      if (lookahead == 'c') ADVANCE(659);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead == 'g') ADVANCE(669);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == 'z') ADVANCE(653);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(785);
      if (lookahead == 'b') ADVANCE(787);
      if (lookahead == 'c') ADVANCE(789);
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead == 'g') ADVANCE(791);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead == 'p') ADVANCE(810);
      if (lookahead == 's') ADVANCE(813);
      if (lookahead == 'z') ADVANCE(814);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'b') ADVANCE(836);
      if (lookahead == 'c') ADVANCE(838);
      if (lookahead == 'e') ADVANCE(839);
      if (lookahead == 'g') ADVANCE(840);
      if (lookahead == 'l') ADVANCE(842);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(858);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == 's') ADVANCE(862);
      if (lookahead == 'z') ADVANCE(863);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == 'b') ADVANCE(797);
      if (lookahead == 'c') ADVANCE(799);
      if (lookahead == 'e') ADVANCE(800);
      if (lookahead == 'g') ADVANCE(801);
      if (lookahead == 'l') ADVANCE(803);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead == 'p') ADVANCE(806);
      if (lookahead == 's') ADVANCE(807);
      if (lookahead == 'z') ADVANCE(808);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(844);
      if (lookahead == 'b') ADVANCE(846);
      if (lookahead == 'c') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(849);
      if (lookahead == 'g') ADVANCE(850);
      if (lookahead == 'l') ADVANCE(852);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead == 'p') ADVANCE(855);
      if (lookahead == 's') ADVANCE(856);
      if (lookahead == 'z') ADVANCE(857);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(870);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'd') ADVANCE(303);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == 'q') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(397);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(717);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(727);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(735);
      if (lookahead == 'd') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(736);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(633);
      if (lookahead == 'd') ADVANCE(764);
      if (lookahead == 'q') ADVANCE(881);
      if (lookahead == 'w') ADVANCE(634);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(682);
      if (lookahead == 'd') ADVANCE(772);
      if (lookahead == 'q') ADVANCE(885);
      if (lookahead == 'w') ADVANCE(683);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(690);
      if (lookahead == 'd') ADVANCE(775);
      if (lookahead == 'w') ADVANCE(691);
      if (lookahead == 'x') ADVANCE(776);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(738);
      if (lookahead == 'd') ADVANCE(778);
      if (lookahead == 'w') ADVANCE(739);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(718);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'q') ADVANCE(890);
      if (lookahead == 'w') ADVANCE(719);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(725);
      if (lookahead == 'd') ADVANCE(817);
      if (lookahead == 'q') ADVANCE(891);
      if (lookahead == 'w') ADVANCE(726);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(826);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(882);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(301);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == 'q') ADVANCE(146);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(234);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead == 'p') ADVANCE(632);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(722);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(831);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(828);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(906);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(416);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(635);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(821);
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(824);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(733);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(825);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(911);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(908);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(886);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(918);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(823);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(537);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'h') ADVANCE(601);
      if (lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'h') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(909);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(874);
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(307);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'p') ADVANCE(425);
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 's') ADVANCE(770);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(706);
      if (lookahead == 'z') ADVANCE(707);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead == 'z') ADVANCE(687);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 's') ADVANCE(769);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(276);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 174:
      if (lookahead == 'f') ADVANCE(757);
      if (lookahead == 'r') ADVANCE(758);
      if (lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 175:
      if (lookahead == 'f') ADVANCE(677);
      END_STATE();
    case 176:
      if (lookahead == 'f') ADVANCE(714);
      END_STATE();
    case 177:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(273);
      END_STATE();
    case 180:
      if (lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 181:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(693);
      END_STATE();
    case 183:
      if (lookahead == 'g') ADVANCE(730);
      END_STATE();
    case 184:
      if (lookahead == 'g') ADVANCE(822);
      END_STATE();
    case 185:
      if (lookahead == 'g') ADVANCE(820);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 187:
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 188:
      if (lookahead == 'h') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 189:
      if (lookahead == 'h') ADVANCE(700);
      END_STATE();
    case 190:
      if (lookahead == 'h') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(264);
      END_STATE();
    case 192:
      if (lookahead == 'h') ADVANCE(602);
      if (lookahead == 'x') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 193:
      if (lookahead == 'h') ADVANCE(601);
      if (lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 194:
      if (lookahead == 'h') ADVANCE(601);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead == 'v') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 195:
      if (lookahead == 'h') ADVANCE(601);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(715);
      if (lookahead == 'r') ADVANCE(716);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(396);
      if (lookahead == 'l' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(394);
      if (lookahead == 'q') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(830);
      if (lookahead == 'p') ADVANCE(560);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(248);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == 'x') ADVANCE(556);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(898);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 216:
      if (lookahead == 'k') ADVANCE(681);
      END_STATE();
    case 217:
      if (lookahead == 'k') ADVANCE(907);
      END_STATE();
    case 218:
      if (lookahead == 'k') ADVANCE(424);
      END_STATE();
    case 219:
      if (lookahead == 'k') ADVANCE(190);
      END_STATE();
    case 220:
      if (lookahead == 'k') ADVANCE(251);
      END_STATE();
    case 221:
      if (lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 222:
      if (lookahead == 'k') ADVANCE(300);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(744);
      if (lookahead == 's') ADVANCE(771);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(703);
      if (lookahead == 'x') ADVANCE(556);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(712);
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(742);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(756);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(832);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 242:
      if (lookahead == 'm') ADVANCE(413);
      END_STATE();
    case 243:
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 245:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(276);
      END_STATE();
    case 247:
      if (lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'v') ADVANCE(689);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(880);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 285:
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 'x') ADVANCE(556);
      END_STATE();
    case 286:
      if (lookahead == 'p') ADVANCE(676);
      END_STATE();
    case 287:
      if (lookahead == 'p') ADVANCE(694);
      if (lookahead == 't') ADVANCE(695);
      END_STATE();
    case 288:
      if (lookahead == 'p') ADVANCE(698);
      END_STATE();
    case 289:
      if (lookahead == 'p') ADVANCE(704);
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 290:
      if (lookahead == 'p') ADVANCE(566);
      END_STATE();
    case 291:
      if (lookahead == 'p') ADVANCE(684);
      END_STATE();
    case 292:
      if (lookahead == 'p') ADVANCE(900);
      END_STATE();
    case 293:
      if (lookahead == 'p') ADVANCE(819);
      END_STATE();
    case 294:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 295:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 296:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 297:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 298:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 299:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 300:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 301:
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 302:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 303:
      if (lookahead == 'q') ADVANCE(21);
      END_STATE();
    case 304:
      if (lookahead == 'q') ADVANCE(908);
      END_STATE();
    case 305:
      if (lookahead == 'q') ADVANCE(919);
      END_STATE();
    case 306:
      if (lookahead == 'q') ADVANCE(421);
      END_STATE();
    case 307:
      if (lookahead == 'q') ADVANCE(914);
      END_STATE();
    case 308:
      if (lookahead == 'q') ADVANCE(912);
      END_STATE();
    case 309:
      if (lookahead == 'q') ADVANCE(920);
      END_STATE();
    case 310:
      if (lookahead == 'q') ADVANCE(20);
      END_STATE();
    case 311:
      if (lookahead == 'q') ADVANCE(392);
      END_STATE();
    case 312:
      if (lookahead == 'q') ADVANCE(146);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(696);
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead == 'w') ADVANCE(755);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(829);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(678);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(766);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(818);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(892);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(301);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 351:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 352:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 353:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 355:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 356:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(697);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(745);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(750);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(728);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(877);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(897);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(894);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(866);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 392:
      if (lookahead == 'u') ADVANCE(916);
      END_STATE();
    case 393:
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 394:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 395:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 397:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 398:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 399:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 400:
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 401:
      if (lookahead == 'v') ADVANCE(639);
      END_STATE();
    case 402:
      if (lookahead == 'v') ADVANCE(301);
      END_STATE();
    case 403:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 404:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 405:
      if (lookahead == 'v') ADVANCE(132);
      END_STATE();
    case 406:
      if (lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 407:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 408:
      if (lookahead == 'w') ADVANCE(749);
      END_STATE();
    case 409:
      if (lookahead == 'w') ADVANCE(752);
      END_STATE();
    case 410:
      if (lookahead == 'w') ADVANCE(918);
      END_STATE();
    case 411:
      if (lookahead == 'w') ADVANCE(915);
      END_STATE();
    case 412:
      if (lookahead == 'w') ADVANCE(282);
      END_STATE();
    case 413:
      if (lookahead == 'w') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(564);
      END_STATE();
    case 414:
      if (lookahead == 'x') ADVANCE(556);
      END_STATE();
    case 415:
      if (lookahead == 'x') ADVANCE(777);
      END_STATE();
    case 416:
      if (lookahead == 'x') ADVANCE(420);
      END_STATE();
    case 417:
      if (lookahead == 'x') ADVANCE(365);
      END_STATE();
    case 418:
      if (lookahead == 'y') ADVANCE(5);
      END_STATE();
    case 419:
      if (lookahead == 'z') ADVANCE(675);
      END_STATE();
    case 420:
      if (lookahead == 'z') ADVANCE(884);
      END_STATE();
    case 421:
      if (lookahead == 'a' ||
          lookahead == 'u') ADVANCE(917);
      END_STATE();
    case 422:
      if (lookahead == 'b' ||
          lookahead == 'w') ADVANCE(913);
      END_STATE();
    case 423:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(614);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(423);
      END_STATE();
    case 424:
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 425:
      if (lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(912);
      END_STATE();
    case 426:
      if (lookahead == 'd' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(20);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(525);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(435);
      END_STATE();
    case 429:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(429)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 430:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(562);
      END_STATE();
    case 431:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(564);
      END_STATE();
    case 432:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(588);
      END_STATE();
    case 433:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(606);
      END_STATE();
    case 434:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      END_STATE();
    case 435:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 436:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      END_STATE();
    case 437:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 438:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 439:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      END_STATE();
    case 440:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 441:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      END_STATE();
    case 442:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      END_STATE();
    case 443:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 444:
      if (eof) ADVANCE(446);
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(591);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == ',') ADVANCE(553);
      if (lookahead == '0') ADVANCE(597);
      if (lookahead == '1') ADVANCE(598);
      if (lookahead == '<') ADVANCE(463);
      if (lookahead == 'B') ADVANCE(944);
      if (lookahead == 'D') ADVANCE(941);
      if (lookahead == 'P') ADVANCE(939);
      if (lookahead == 'Q') ADVANCE(942);
      if (lookahead == 'W') ADVANCE(930);
      if (lookahead == 'X') ADVANCE(928);
      if (lookahead == '[') ADVANCE(568);
      if (lookahead == '_') ADVANCE(988);
      if (lookahead == 'b') ADVANCE(960);
      if (lookahead == 'd') ADVANCE(958);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead == 'p') ADVANCE(983);
      if (lookahead == 'q') ADVANCE(985);
      if (lookahead == 'r') ADVANCE(922);
      if (lookahead == 's') ADVANCE(965);
      if (lookahead == 'w') ADVANCE(971);
      if (lookahead == 'x') ADVANCE(969);
      if (lookahead == 'y') ADVANCE(970);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(444)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(447);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(963);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(956);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 445:
      if (eof) ADVANCE(446);
      if (lookahead == '\n') ADVANCE(625);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(445)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(447);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_db);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_db);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_dw);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_dd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_dd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_dq);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_shell_cmd_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_shell_cmd_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_shell_prompt);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_objdump_section_label_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'W') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'Y') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == 'b') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead == 'y') ADVANCE(614);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(608);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(468);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(476);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == 'b') ADVANCE(470);
      if (lookahead == 'd') ADVANCE(488);
      if (lookahead == 'y') ADVANCE(617);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(433);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(609);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(468);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(476);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == '_') ADVANCE(621);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(470);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(398);
      if (lookahead == 'q') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead == 'v') ADVANCE(358);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'b') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'q') ADVANCE(453);
      if (lookahead == 's') ADVANCE(578);
      if (lookahead == 'w') ADVANCE(450);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'b') ADVANCE(481);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 's') ADVANCE(580);
      if (lookahead == 'x') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(489);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(608);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'd') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(759);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == 'y') ADVANCE(380);
      if (lookahead == 'z') ADVANCE(200);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'x') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'm') ADVANCE(626);
      if (lookahead == 's') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 'x') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'q') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 's') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 's') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'w') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'x') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (lookahead == 'x') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_objdump_section_addr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == 'b') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == 'y') ADVANCE(614);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(608);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(510);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(519);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == '_') ADVANCE(621);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(608);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'd') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'x') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'm') ADVANCE(626);
      if (lookahead == 's') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 'x') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'q') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 's') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'w') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'x') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (lookahead == 'x') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_objdump_machine_code_bytes_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'W') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'Y') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == 'b') ADVANCE(492);
      if (lookahead == 'd') ADVANCE(504);
      if (lookahead == 'y') ADVANCE(617);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(433);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(609);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(491);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(494);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == 'b') ADVANCE(505);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'y') ADVANCE(614);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(608);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(491);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(494);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == '_') ADVANCE(423);
      if (lookahead == 'b') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == 'y') ADVANCE(614);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(608);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(510);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(519);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == '_') ADVANCE(621);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'b') ADVANCE(501);
      if (lookahead == 'd') ADVANCE(499);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(398);
      if (lookahead == 'q') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead == 'v') ADVANCE(358);
      if (lookahead == 'w') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'b') ADVANCE(449);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'q') ADVANCE(453);
      if (lookahead == 's') ADVANCE(578);
      if (lookahead == 'w') ADVANCE(450);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'b') ADVANCE(498);
      if (lookahead == 'd') ADVANCE(495);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 's') ADVANCE(580);
      if (lookahead == 'x') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(505);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(608);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'd') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(608);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'd') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(759);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == 'y') ADVANCE(380);
      if (lookahead == 'z') ADVANCE(200);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (lookahead == 's') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_objdump_offset_addr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_ins_token1);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\r') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_ins_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_ins_token1);
      if (eof) ADVANCE(446);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\r') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(526);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_ins_token1);
      if (eof) ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(527);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_xmmword);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_xmmword);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_XMMWORD);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_XMMWORD);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_PTR);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_register_token5);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_register_token6);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_rip);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_rip);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_cs);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_cs);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ds);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_ds);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(560);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_fs);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_fs);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_gs);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_ss);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(593);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token1);
      if (lookahead == 'h') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token2);
      if (lookahead == 'h') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(988);
      if (lookahead == 'b') ADVANCE(615);
      if (lookahead == 'd') ADVANCE(594);
      if (lookahead == 'h') ADVANCE(603);
      if (lookahead == 'x') ADVANCE(991);
      if (lookahead == 'y') ADVANCE(618);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(610);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(598);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(600);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == '_') ADVANCE(988);
      if (lookahead == 'b') ADVANCE(616);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == 'y') ADVANCE(619);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(611);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(598);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(600);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(611);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__decimal_literal_token3);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == 'h') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(606);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__hex_literal_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__hex_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__hex_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__hex_literal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(612);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__octal_literal_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__octal_literal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__octal_literal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '_') ADVANCE(622);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(620);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == 'h') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(621);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(622);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__binary_literal_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '_') ADVANCE(622);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(620);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__binary_literal_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(622);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\r') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(526);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(625);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_aam);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_aas);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == 'n') ADVANCE(895);
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_cbw);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_cmc);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_cmpsb);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_cmpsw);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_cwd);
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_das);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_esc);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_hlt);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_idiv);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_imul);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(642);
      if (lookahead == 'f') ADVANCE(273);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == 'v') ADVANCE(114);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_inc);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_iret);
      if (lookahead == 'd') ADVANCE(768);
      if (lookahead == 'q') ADVANCE(883);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_jo);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_jno);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_jns);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_je);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_jz);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_jne);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_jnz);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_jb);
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_jnae);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_jc);
      if (lookahead == 'x') ADVANCE(419);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_jnb);
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_jae);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_jnc);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_jbe);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_jna);
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_ja);
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_jnbe);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_jl);
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_jjnge);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_jge);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_jnl);
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_jle);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_jng);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_jg);
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_jnle);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_jp);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_jpe);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_jpo);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_jcxz);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_lahf);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_lds);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_lea);
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_les);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_lodsb);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_lodsw);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_loop);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'w') ADVANCE(773);
      if (lookahead == 'z') ADVANCE(688);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_loope);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_loopne);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_loopnz);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_loopz);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'd') ADVANCE(303);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'q') ADVANCE(22);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == 'x') ADVANCE(355);
      if (lookahead == 'z') ADVANCE(415);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_movsb);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_movsw);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'x') ADVANCE(899);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 'f') ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_popf);
      if (lookahead == 'd') ADVANCE(780);
      if (lookahead == 'q') ADVANCE(887);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == 'd') ADVANCE(783);
      if (lookahead == 'f') ADVANCE(701);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_pushf);
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == 'q') ADVANCE(888);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_rcl);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_rcr);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_rep);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'z') ADVANCE(708);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_repe);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_repne);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_repnz);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_repz);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == 'f') ADVANCE(711);
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_retn);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_retf);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_rol);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'x') ADVANCE(902);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_sahf);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_sal);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_sar);
      if (lookahead == 'x') ADVANCE(903);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_sbb);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_scasb);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_scasw);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == 'd') ADVANCE(815);
      if (lookahead == 'x') ADVANCE(905);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == 'd') ADVANCE(816);
      if (lookahead == 'x') ADVANCE(904);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_stc);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_std);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_sti);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_stosb);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_stosw);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_wait);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_xchg);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_xlat);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_bound);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_enter);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_insb);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_insw);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_leave);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_outsb);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_outsw);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_popa);
      if (lookahead == 'd') ADVANCE(779);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_pusha);
      if (lookahead == 'd') ADVANCE(781);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_arpl);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_lar);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_lsl);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_lgdt);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_lidt);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_lldt);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_ltr);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_lmsw);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_sgdt);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_sldt);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_smsw);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_verr);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_verw);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_loadall);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_bsf);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_bsr);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_bt);
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == 'r') ADVANCE(761);
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_btc);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_btr);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_bts);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_cdq);
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_cmpsd);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_cwde);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_ibts);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_insd);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_iretd);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_lfs);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_lgs);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_lss);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_lodsd);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_loopw);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_loopd);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_movsd);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_movsx);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_movzx);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_outsd);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_popad);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_popfd);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_pushad);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_pushfd);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_pushd);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_scasd);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_seta);
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_setae);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_setb);
      if (lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_setbe);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_setc);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_sete);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_setg);
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_setge);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_setl);
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_setle);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_setna);
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_setnae);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_setnb);
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_setnbe);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_setnc);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_setne);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_setng);
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_setnge);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_setnl);
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_setnle);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_setno);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_setnp);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_setns);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_setnz);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_seto);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_setp);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_setpe);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_setpo);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_sets);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_setz);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_shld);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_shrd);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_stosd);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_xbts);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_bswap);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_cmpxchg);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '8') ADVANCE(82);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_invd);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_invlpg);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_wbinvd);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_xadd);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_cpuid);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_cmpxchg8b);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_rdmsr);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_rdtsc);
      if (lookahead == 'p') ADVANCE(889);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_wrmsr);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_rsm);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_rdpmc);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_syscall);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_sysret);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_cmova);
      if (lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_cmovae);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_cmovb);
      if (lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_cmovbe);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_cmovc);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_cmove);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_cmovg);
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_cmovge);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_cmovl);
      if (lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_cmovle);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_cmovna);
      if (lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_cmovnae);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_cmovnb);
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_cmovnbe);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_cmovnc);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_cmovne);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_cmovng);
      if (lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_cmovnge);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_cmovnl);
      if (lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_cmovnle);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_cmovno);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_cmovnp);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_cmovns);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_cmovnz);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_cmovo);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_cmovp);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead == 'o') ADVANCE(861);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_cmovpe);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_cmovpo);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_cmovs);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_cmovz);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_ud2);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_sysenter);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_sysexit);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_prefetcht0);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_prefetcht1);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_prefetcht2);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_prefetchnta);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_sfence);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_lfence);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_mfence);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_movnti);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_pause);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_monitor);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_mwait);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_crc32);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_cdqe);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_cqo);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_cmpsq);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_cmpxchg16b);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_iretq);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_jrcxz);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_lodsq);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_movxsd);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_popfq);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_pushfq);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_rdtscp);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_scasq);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_stosq);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_swapgs);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_lzcnt);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_popcnt);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_andn);
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_bextr);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_tzcnt);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_bzhi);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_mulx);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_pdep);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_pext);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_rorx);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_sarx);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_shrx);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_shlx);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_t1mskc);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_tzmsk);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token1);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token2);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token3);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token4);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token5);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token6);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_pmuludq);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_punpckhbw);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_maskmovdqu);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token7);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token8);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token9);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym__ins_sse2_pentium4_token10);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '1') ADVANCE(989);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(563);
      if (lookahead == 'b') ADVANCE(975);
      if (lookahead == 'd') ADVANCE(966);
      if (lookahead == 'i') ADVANCE(976);
      if (lookahead == 's') ADVANCE(965);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(987);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '7') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'D') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'E') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'M') ADVANCE(929);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'M') ADVANCE(943);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'O') ADVANCE(935);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'O') ADVANCE(936);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'O') ADVANCE(937);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'O') ADVANCE(938);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(923);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(924);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(925);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'R') ADVANCE(926);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'T') ADVANCE(934);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'T') ADVANCE(927);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'W') ADVANCE(931);
      if (lookahead == 'h') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'W') ADVANCE(932);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'W') ADVANCE(933);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'Y') ADVANCE(940);
      if (lookahead == 'h') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(953);
      if (lookahead == 'd') ADVANCE(952);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == 's') ADVANCE(965);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b') ADVANCE(953);
      if (lookahead == 'd') ADVANCE(952);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == 's') ADVANCE(581);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(538);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'x') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == 'x') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == 's') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead == 'x') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead == 'x') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 'w') ADVANCE(972);
      if (lookahead == 'x') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 'x') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(555);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == 'x') ADVANCE(557);
      if (lookahead == 'y') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(555);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == 'x') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(555);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 's') ADVANCE(577);
      if (lookahead == 'x') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(555);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 'x') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(956);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'x') ADVANCE(557);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(986);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(990);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(967);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'm') ADVANCE(968);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(978);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(981);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == 'x') ADVANCE(557);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'p') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(947);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(948);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(949);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(950);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(977);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(951);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'w') ADVANCE(973);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'w') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'x') ADVANCE(557);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(619);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(988);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('6' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 529},
  [2] = {.lex_state = 444},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 444},
  [9] = {.lex_state = 444},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 528},
  [13] = {.lex_state = 529},
  [14] = {.lex_state = 529},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 529},
  [25] = {.lex_state = 529},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 528},
  [29] = {.lex_state = 528},
  [30] = {.lex_state = 444},
  [31] = {.lex_state = 444},
  [32] = {.lex_state = 444},
  [33] = {.lex_state = 444},
  [34] = {.lex_state = 528},
  [35] = {.lex_state = 445},
  [36] = {.lex_state = 444},
  [37] = {.lex_state = 444},
  [38] = {.lex_state = 444},
  [39] = {.lex_state = 444},
  [40] = {.lex_state = 444},
  [41] = {.lex_state = 444},
  [42] = {.lex_state = 444},
  [43] = {.lex_state = 444},
  [44] = {.lex_state = 444},
  [45] = {.lex_state = 444},
  [46] = {.lex_state = 444},
  [47] = {.lex_state = 444},
  [48] = {.lex_state = 444},
  [49] = {.lex_state = 444},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 444},
  [53] = {.lex_state = 444},
  [54] = {.lex_state = 444},
  [55] = {.lex_state = 444},
  [56] = {.lex_state = 444},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 444},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 444},
  [61] = {.lex_state = 444},
  [62] = {.lex_state = 444},
  [63] = {.lex_state = 444},
  [64] = {.lex_state = 444},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 428},
  [67] = {.lex_state = 444},
  [68] = {.lex_state = 429},
  [69] = {.lex_state = 429},
  [70] = {.lex_state = 429},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 429},
  [79] = {.lex_state = 465},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 458},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 429},
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
    [anon_sym_aam] = ACTIONS(1),
    [anon_sym_aas] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_cbw] = ACTIONS(1),
    [anon_sym_cmc] = ACTIONS(1),
    [anon_sym_cmp] = ACTIONS(1),
    [anon_sym_cmpsb] = ACTIONS(1),
    [anon_sym_cmpsw] = ACTIONS(1),
    [anon_sym_cwd] = ACTIONS(1),
    [anon_sym_das] = ACTIONS(1),
    [anon_sym_esc] = ACTIONS(1),
    [anon_sym_hlt] = ACTIONS(1),
    [anon_sym_idiv] = ACTIONS(1),
    [anon_sym_imul] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_inc] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_into] = ACTIONS(1),
    [anon_sym_iret] = ACTIONS(1),
    [anon_sym_jo] = ACTIONS(1),
    [anon_sym_jno] = ACTIONS(1),
    [anon_sym_js] = ACTIONS(1),
    [anon_sym_jns] = ACTIONS(1),
    [anon_sym_je] = ACTIONS(1),
    [anon_sym_jz] = ACTIONS(1),
    [anon_sym_jne] = ACTIONS(1),
    [anon_sym_jnz] = ACTIONS(1),
    [anon_sym_jb] = ACTIONS(1),
    [anon_sym_jnae] = ACTIONS(1),
    [anon_sym_jc] = ACTIONS(1),
    [anon_sym_jnb] = ACTIONS(1),
    [anon_sym_jae] = ACTIONS(1),
    [anon_sym_jnc] = ACTIONS(1),
    [anon_sym_jbe] = ACTIONS(1),
    [anon_sym_jna] = ACTIONS(1),
    [anon_sym_ja] = ACTIONS(1),
    [anon_sym_jnbe] = ACTIONS(1),
    [anon_sym_jl] = ACTIONS(1),
    [anon_sym_jjnge] = ACTIONS(1),
    [anon_sym_jge] = ACTIONS(1),
    [anon_sym_jnl] = ACTIONS(1),
    [anon_sym_jle] = ACTIONS(1),
    [anon_sym_jng] = ACTIONS(1),
    [anon_sym_jg] = ACTIONS(1),
    [anon_sym_jnle] = ACTIONS(1),
    [anon_sym_jp] = ACTIONS(1),
    [anon_sym_jpe] = ACTIONS(1),
    [anon_sym_jpo] = ACTIONS(1),
    [anon_sym_jcxz] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_lahf] = ACTIONS(1),
    [anon_sym_lds] = ACTIONS(1),
    [anon_sym_lea] = ACTIONS(1),
    [anon_sym_les] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_lodsb] = ACTIONS(1),
    [anon_sym_lodsw] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_loope] = ACTIONS(1),
    [anon_sym_loopne] = ACTIONS(1),
    [anon_sym_loopnz] = ACTIONS(1),
    [anon_sym_loopz] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_movsb] = ACTIONS(1),
    [anon_sym_movsw] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_popf] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pushf] = ACTIONS(1),
    [anon_sym_rcl] = ACTIONS(1),
    [anon_sym_rcr] = ACTIONS(1),
    [anon_sym_rep] = ACTIONS(1),
    [anon_sym_repe] = ACTIONS(1),
    [anon_sym_repne] = ACTIONS(1),
    [anon_sym_repnz] = ACTIONS(1),
    [anon_sym_repz] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_retn] = ACTIONS(1),
    [anon_sym_retf] = ACTIONS(1),
    [anon_sym_rol] = ACTIONS(1),
    [anon_sym_ror] = ACTIONS(1),
    [anon_sym_sahf] = ACTIONS(1),
    [anon_sym_sal] = ACTIONS(1),
    [anon_sym_sar] = ACTIONS(1),
    [anon_sym_sbb] = ACTIONS(1),
    [anon_sym_scasb] = ACTIONS(1),
    [anon_sym_scasw] = ACTIONS(1),
    [anon_sym_shl] = ACTIONS(1),
    [anon_sym_shr] = ACTIONS(1),
    [anon_sym_stc] = ACTIONS(1),
    [anon_sym_std] = ACTIONS(1),
    [anon_sym_sti] = ACTIONS(1),
    [anon_sym_stosb] = ACTIONS(1),
    [anon_sym_stosw] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_wait] = ACTIONS(1),
    [anon_sym_xchg] = ACTIONS(1),
    [anon_sym_xlat] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_bound] = ACTIONS(1),
    [anon_sym_enter] = ACTIONS(1),
    [anon_sym_insb] = ACTIONS(1),
    [anon_sym_insw] = ACTIONS(1),
    [anon_sym_leave] = ACTIONS(1),
    [anon_sym_outsb] = ACTIONS(1),
    [anon_sym_outsw] = ACTIONS(1),
    [anon_sym_popa] = ACTIONS(1),
    [anon_sym_pusha] = ACTIONS(1),
    [anon_sym_arpl] = ACTIONS(1),
    [anon_sym_lar] = ACTIONS(1),
    [anon_sym_lsl] = ACTIONS(1),
    [anon_sym_lgdt] = ACTIONS(1),
    [anon_sym_lidt] = ACTIONS(1),
    [anon_sym_lldt] = ACTIONS(1),
    [anon_sym_ltr] = ACTIONS(1),
    [anon_sym_lmsw] = ACTIONS(1),
    [anon_sym_sgdt] = ACTIONS(1),
    [anon_sym_sldt] = ACTIONS(1),
    [anon_sym_smsw] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_verr] = ACTIONS(1),
    [anon_sym_verw] = ACTIONS(1),
    [anon_sym_loadall] = ACTIONS(1),
    [anon_sym_bsf] = ACTIONS(1),
    [anon_sym_bsr] = ACTIONS(1),
    [anon_sym_bt] = ACTIONS(1),
    [anon_sym_btc] = ACTIONS(1),
    [anon_sym_btr] = ACTIONS(1),
    [anon_sym_bts] = ACTIONS(1),
    [anon_sym_cdq] = ACTIONS(1),
    [anon_sym_cmpsd] = ACTIONS(1),
    [anon_sym_cwde] = ACTIONS(1),
    [anon_sym_ibts] = ACTIONS(1),
    [anon_sym_insd] = ACTIONS(1),
    [anon_sym_iretd] = ACTIONS(1),
    [anon_sym_lfs] = ACTIONS(1),
    [anon_sym_lgs] = ACTIONS(1),
    [anon_sym_lss] = ACTIONS(1),
    [anon_sym_lodsd] = ACTIONS(1),
    [anon_sym_loopw] = ACTIONS(1),
    [anon_sym_loopd] = ACTIONS(1),
    [anon_sym_movsd] = ACTIONS(1),
    [anon_sym_movsx] = ACTIONS(1),
    [anon_sym_movzx] = ACTIONS(1),
    [anon_sym_outsd] = ACTIONS(1),
    [anon_sym_popad] = ACTIONS(1),
    [anon_sym_popfd] = ACTIONS(1),
    [anon_sym_pushad] = ACTIONS(1),
    [anon_sym_pushfd] = ACTIONS(1),
    [anon_sym_pushd] = ACTIONS(1),
    [anon_sym_scasd] = ACTIONS(1),
    [anon_sym_seta] = ACTIONS(1),
    [anon_sym_setae] = ACTIONS(1),
    [anon_sym_setb] = ACTIONS(1),
    [anon_sym_setbe] = ACTIONS(1),
    [anon_sym_setc] = ACTIONS(1),
    [anon_sym_sete] = ACTIONS(1),
    [anon_sym_setg] = ACTIONS(1),
    [anon_sym_setge] = ACTIONS(1),
    [anon_sym_setl] = ACTIONS(1),
    [anon_sym_setle] = ACTIONS(1),
    [anon_sym_setna] = ACTIONS(1),
    [anon_sym_setnae] = ACTIONS(1),
    [anon_sym_setnb] = ACTIONS(1),
    [anon_sym_setnbe] = ACTIONS(1),
    [anon_sym_setnc] = ACTIONS(1),
    [anon_sym_setne] = ACTIONS(1),
    [anon_sym_setng] = ACTIONS(1),
    [anon_sym_setnge] = ACTIONS(1),
    [anon_sym_setnl] = ACTIONS(1),
    [anon_sym_setnle] = ACTIONS(1),
    [anon_sym_setno] = ACTIONS(1),
    [anon_sym_setnp] = ACTIONS(1),
    [anon_sym_setns] = ACTIONS(1),
    [anon_sym_setnz] = ACTIONS(1),
    [anon_sym_seto] = ACTIONS(1),
    [anon_sym_setp] = ACTIONS(1),
    [anon_sym_setpe] = ACTIONS(1),
    [anon_sym_setpo] = ACTIONS(1),
    [anon_sym_sets] = ACTIONS(1),
    [anon_sym_setz] = ACTIONS(1),
    [anon_sym_shld] = ACTIONS(1),
    [anon_sym_shrd] = ACTIONS(1),
    [anon_sym_stosd] = ACTIONS(1),
    [anon_sym_xbts] = ACTIONS(1),
    [anon_sym_bswap] = ACTIONS(1),
    [anon_sym_cmpxchg] = ACTIONS(1),
    [anon_sym_invd] = ACTIONS(1),
    [anon_sym_invlpg] = ACTIONS(1),
    [anon_sym_wbinvd] = ACTIONS(1),
    [anon_sym_xadd] = ACTIONS(1),
    [anon_sym_cpuid] = ACTIONS(1),
    [anon_sym_cmpxchg8b] = ACTIONS(1),
    [anon_sym_rdmsr] = ACTIONS(1),
    [anon_sym_rdtsc] = ACTIONS(1),
    [anon_sym_wrmsr] = ACTIONS(1),
    [anon_sym_rsm] = ACTIONS(1),
    [anon_sym_rdpmc] = ACTIONS(1),
    [anon_sym_syscall] = ACTIONS(1),
    [anon_sym_sysret] = ACTIONS(1),
    [anon_sym_cmova] = ACTIONS(1),
    [anon_sym_cmovae] = ACTIONS(1),
    [anon_sym_cmovb] = ACTIONS(1),
    [anon_sym_cmovbe] = ACTIONS(1),
    [anon_sym_cmovc] = ACTIONS(1),
    [anon_sym_cmove] = ACTIONS(1),
    [anon_sym_cmovg] = ACTIONS(1),
    [anon_sym_cmovge] = ACTIONS(1),
    [anon_sym_cmovl] = ACTIONS(1),
    [anon_sym_cmovle] = ACTIONS(1),
    [anon_sym_cmovna] = ACTIONS(1),
    [anon_sym_cmovnae] = ACTIONS(1),
    [anon_sym_cmovnb] = ACTIONS(1),
    [anon_sym_cmovnbe] = ACTIONS(1),
    [anon_sym_cmovnc] = ACTIONS(1),
    [anon_sym_cmovne] = ACTIONS(1),
    [anon_sym_cmovng] = ACTIONS(1),
    [anon_sym_cmovnge] = ACTIONS(1),
    [anon_sym_cmovnl] = ACTIONS(1),
    [anon_sym_cmovnle] = ACTIONS(1),
    [anon_sym_cmovno] = ACTIONS(1),
    [anon_sym_cmovnp] = ACTIONS(1),
    [anon_sym_cmovns] = ACTIONS(1),
    [anon_sym_cmovnz] = ACTIONS(1),
    [anon_sym_cmovo] = ACTIONS(1),
    [anon_sym_cmovp] = ACTIONS(1),
    [anon_sym_cmovpe] = ACTIONS(1),
    [anon_sym_cmovpo] = ACTIONS(1),
    [anon_sym_cmovs] = ACTIONS(1),
    [anon_sym_cmovz] = ACTIONS(1),
    [anon_sym_ud2] = ACTIONS(1),
    [anon_sym_sysenter] = ACTIONS(1),
    [anon_sym_sysexit] = ACTIONS(1),
    [anon_sym_prefetcht0] = ACTIONS(1),
    [anon_sym_prefetcht1] = ACTIONS(1),
    [anon_sym_prefetcht2] = ACTIONS(1),
    [anon_sym_prefetchnta] = ACTIONS(1),
    [anon_sym_sfence] = ACTIONS(1),
    [anon_sym_lfence] = ACTIONS(1),
    [anon_sym_mfence] = ACTIONS(1),
    [anon_sym_movnti] = ACTIONS(1),
    [anon_sym_pause] = ACTIONS(1),
    [anon_sym_monitor] = ACTIONS(1),
    [anon_sym_mwait] = ACTIONS(1),
    [anon_sym_crc32] = ACTIONS(1),
    [anon_sym_cdqe] = ACTIONS(1),
    [anon_sym_cqo] = ACTIONS(1),
    [anon_sym_cmpsq] = ACTIONS(1),
    [anon_sym_cmpxchg16b] = ACTIONS(1),
    [anon_sym_iretq] = ACTIONS(1),
    [anon_sym_jrcxz] = ACTIONS(1),
    [anon_sym_lodsq] = ACTIONS(1),
    [anon_sym_movxsd] = ACTIONS(1),
    [anon_sym_popfq] = ACTIONS(1),
    [anon_sym_pushfq] = ACTIONS(1),
    [anon_sym_rdtscp] = ACTIONS(1),
    [anon_sym_scasq] = ACTIONS(1),
    [anon_sym_stosq] = ACTIONS(1),
    [anon_sym_swapgs] = ACTIONS(1),
    [anon_sym_lzcnt] = ACTIONS(1),
    [anon_sym_popcnt] = ACTIONS(1),
    [anon_sym_andn] = ACTIONS(1),
    [anon_sym_bextr] = ACTIONS(1),
    [anon_sym_tzcnt] = ACTIONS(1),
    [anon_sym_bzhi] = ACTIONS(1),
    [anon_sym_mulx] = ACTIONS(1),
    [anon_sym_pdep] = ACTIONS(1),
    [anon_sym_pext] = ACTIONS(1),
    [anon_sym_rorx] = ACTIONS(1),
    [anon_sym_sarx] = ACTIONS(1),
    [anon_sym_shrx] = ACTIONS(1),
    [anon_sym_shlx] = ACTIONS(1),
    [anon_sym_t1mskc] = ACTIONS(1),
    [anon_sym_tzmsk] = ACTIONS(1),
    [aux_sym__ins_sse2_pentium4_token1] = ACTIONS(1),
    [aux_sym__ins_sse2_pentium4_token3] = ACTIONS(1),
    [aux_sym__ins_sse2_pentium4_token4] = ACTIONS(1),
    [aux_sym__ins_sse2_pentium4_token5] = ACTIONS(1),
    [aux_sym__ins_sse2_pentium4_token6] = ACTIONS(1),
    [anon_sym_pmuludq] = ACTIONS(1),
    [anon_sym_punpckhbw] = ACTIONS(1),
    [anon_sym_maskmovdqu] = ACTIONS(1),
    [aux_sym__ins_sse2_pentium4_token7] = ACTIONS(1),
    [aux_sym__ins_sse2_pentium4_token8] = ACTIONS(1),
    [aux_sym__ins_sse2_pentium4_token9] = ACTIONS(1),
    [aux_sym__ins_sse2_pentium4_token10] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(81),
    [sym_toplevel_item] = STATE(77),
    [sym_statement] = STATE(13),
    [sym_directive] = STATE(61),
    [sym_builtin] = STATE(54),
    [sym_builtin_kw] = STATE(3),
    [sym_section] = STATE(54),
    [sym_extern] = STATE(54),
    [sym_global] = STATE(54),
    [sym_shell_cmd] = STATE(54),
    [sym_objdump_disas_of_section] = STATE(54),
    [sym_objdump_section_label] = STATE(54),
    [sym_objdump_offset_label] = STATE(54),
    [sym_objdump_offset_addr] = STATE(86),
    [sym_label] = STATE(54),
    [sym_ins] = STATE(54),
    [sym_identifier] = STATE(83),
    [aux_sym_toplevel_item_repeat1] = STATE(13),
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
    STATE(15), 1,
      sym_width,
    STATE(20), 1,
      sym_ptr,
    STATE(33), 1,
      sym_operand,
    STATE(52), 1,
      sym_operand_args,
    ACTIONS(33), 2,
      anon_sym_ptr,
      anon_sym_PTR,
    ACTIONS(29), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(30), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(42), 5,
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
    STATE(15), 1,
      sym_width,
    STATE(20), 1,
      sym_ptr,
    STATE(33), 1,
      sym_operand,
    STATE(49), 1,
      sym_operand_args,
    ACTIONS(33), 2,
      anon_sym_ptr,
      anon_sym_PTR,
    STATE(30), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(42), 5,
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
    STATE(15), 1,
      sym_width,
    STATE(20), 1,
      sym_ptr,
    STATE(44), 1,
      sym_operand,
    ACTIONS(33), 2,
      anon_sym_ptr,
      anon_sym_PTR,
    STATE(30), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(42), 5,
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
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    ACTIONS(68), 1,
      aux_sym__hex_literal_token2,
    STATE(87), 1,
      sym_segment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      sym__IDENTIFIER,
    ACTIONS(54), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(5), 4,
      sym_register,
      sym_segment_prefix,
      sym_integer_literal,
      aux_sym_effective_addr_repeat1,
    STATE(11), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(62), 6,
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
    ACTIONS(65), 9,
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
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(83), 1,
      aux_sym__hex_literal_token2,
    STATE(87), 1,
      sym_segment,
    ACTIONS(75), 2,
      anon_sym_DASH,
      sym__IDENTIFIER,
    ACTIONS(73), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(5), 4,
      sym_register,
      sym_segment_prefix,
      sym_integer_literal,
      aux_sym_effective_addr_repeat1,
    STATE(11), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(79), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(71), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(81), 9,
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
    ACTIONS(83), 1,
      aux_sym__hex_literal_token2,
    STATE(87), 1,
      sym_segment,
    ACTIONS(87), 2,
      anon_sym_DASH,
      sym__IDENTIFIER,
    ACTIONS(85), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
    STATE(6), 4,
      sym_register,
      sym_segment_prefix,
      sym_integer_literal,
      aux_sym_effective_addr_repeat1,
    STATE(11), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    ACTIONS(79), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(71), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    ACTIONS(81), 9,
      aux_sym__decimal_literal_token1,
      aux_sym__decimal_literal_token2,
      aux_sym__decimal_literal_token3,
      aux_sym__hex_literal_token1,
      aux_sym__hex_literal_token3,
      aux_sym__octal_literal_token1,
      aux_sym__octal_literal_token2,
      aux_sym__binary_literal_token1,
      aux_sym__binary_literal_token2,
  [402] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 35,
      sym_comment,
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
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
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
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__IDENTIFIER,
  [443] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 35,
      sym_comment,
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
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
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
      anon_sym_LF,
      anon_sym_CR_LF,
      sym__IDENTIFIER,
  [484] = 2,
    ACTIONS(99), 3,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
    ACTIONS(97), 29,
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
  [521] = 4,
    ACTIONS(101), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_literal_offset,
    ACTIONS(105), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      aux_sym__hex_literal_token2,
    ACTIONS(103), 24,
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
  [562] = 18,
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
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_ins_token1,
    STATE(3), 1,
      sym_builtin_kw,
    STATE(63), 1,
      sym_directive,
    STATE(83), 1,
      sym_identifier,
    STATE(86), 1,
      sym_objdump_offset_addr,
    ACTIONS(109), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(5), 4,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
    STATE(54), 10,
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
  [631] = 19,
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
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      sym_comment,
    STATE(3), 1,
      sym_builtin_kw,
    STATE(45), 1,
      sym_directive,
    STATE(83), 1,
      sym_identifier,
    STATE(86), 1,
      sym_objdump_offset_addr,
    STATE(14), 2,
      sym_statement,
      aux_sym_toplevel_item_repeat1,
    ACTIONS(5), 4,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
    STATE(54), 10,
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
  [702] = 19,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_section,
    ACTIONS(128), 1,
      anon_sym_extern,
    ACTIONS(131), 1,
      anon_sym_global,
    ACTIONS(134), 1,
      sym_shell_prompt,
    ACTIONS(137), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(140), 1,
      sym_objdump_file_format,
    ACTIONS(143), 1,
      sym_objdump_section_addr,
    ACTIONS(146), 1,
      aux_sym_objdump_offset_addr_token1,
    ACTIONS(149), 1,
      aux_sym_ins_token1,
    ACTIONS(152), 1,
      sym__IDENTIFIER,
    STATE(3), 1,
      sym_builtin_kw,
    STATE(61), 1,
      sym_directive,
    STATE(83), 1,
      sym_identifier,
    STATE(86), 1,
      sym_objdump_offset_addr,
    STATE(14), 2,
      sym_statement,
      aux_sym_toplevel_item_repeat1,
    ACTIONS(122), 4,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
    STATE(54), 10,
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
  [773] = 10,
    ACTIONS(43), 1,
      sym__IDENTIFIER,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym__hex_literal_token2,
    STATE(21), 1,
      sym_ptr,
    ACTIONS(33), 2,
      anon_sym_ptr,
      anon_sym_PTR,
    STATE(30), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(46), 5,
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
  [826] = 2,
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
  [861] = 2,
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
  [896] = 2,
    ACTIONS(165), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      aux_sym__hex_literal_token2,
    ACTIONS(163), 24,
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
  [931] = 2,
    ACTIONS(169), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RBRACK,
      aux_sym__hex_literal_token2,
    ACTIONS(167), 24,
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
  [966] = 8,
    ACTIONS(43), 1,
      sym__IDENTIFIER,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym__hex_literal_token2,
    STATE(30), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(46), 5,
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
  [1012] = 8,
    ACTIONS(43), 1,
      sym__IDENTIFIER,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym__hex_literal_token2,
    STATE(30), 4,
      sym__decimal_literal,
      sym__hex_literal,
      sym__octal_literal,
      sym__binary_literal,
    STATE(43), 5,
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
  [1058] = 2,
    ACTIONS(173), 3,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
    ACTIONS(171), 19,
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
  [1085] = 2,
    ACTIONS(177), 3,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym__hex_literal_token2,
    ACTIONS(175), 17,
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
  [1110] = 2,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      aux_sym_ins_token1,
    ACTIONS(181), 14,
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
  [1131] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      aux_sym_ins_token1,
    ACTIONS(185), 14,
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
  [1152] = 4,
    ACTIONS(187), 1,
      anon_sym_cs,
    STATE(2), 1,
      sym_ins_kw,
    STATE(8), 1,
      sym__ins_sse2_pentium4,
    ACTIONS(189), 13,
      aux_sym__ins_sse2_pentium4_token1,
      aux_sym__ins_sse2_pentium4_token2,
      aux_sym__ins_sse2_pentium4_token3,
      aux_sym__ins_sse2_pentium4_token4,
      aux_sym__ins_sse2_pentium4_token5,
      aux_sym__ins_sse2_pentium4_token6,
      anon_sym_pmuludq,
      anon_sym_punpckhbw,
      anon_sym_maskmovdqu,
      aux_sym__ins_sse2_pentium4_token7,
      aux_sym__ins_sse2_pentium4_token8,
      aux_sym__ins_sse2_pentium4_token9,
      aux_sym__ins_sse2_pentium4_token10,
  [1177] = 2,
    STATE(9), 1,
      sym__ins_sse2_pentium4,
    ACTIONS(191), 13,
      aux_sym__ins_sse2_pentium4_token1,
      aux_sym__ins_sse2_pentium4_token2,
      aux_sym__ins_sse2_pentium4_token3,
      aux_sym__ins_sse2_pentium4_token4,
      aux_sym__ins_sse2_pentium4_token5,
      aux_sym__ins_sse2_pentium4_token6,
      anon_sym_pmuludq,
      anon_sym_punpckhbw,
      anon_sym_maskmovdqu,
      aux_sym__ins_sse2_pentium4_token7,
      aux_sym__ins_sse2_pentium4_token8,
      aux_sym__ins_sse2_pentium4_token9,
      aux_sym__ins_sse2_pentium4_token10,
  [1196] = 4,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      aux_sym_objdump_machine_code_bytes_token1,
    STATE(29), 1,
      aux_sym_objdump_machine_code_bytes_repeat1,
    ACTIONS(195), 4,
      sym_comment,
      aux_sym_ins_token1,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1212] = 4,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      aux_sym_objdump_machine_code_bytes_token1,
    STATE(29), 1,
      aux_sym_objdump_machine_code_bytes_repeat1,
    ACTIONS(201), 4,
      sym_comment,
      aux_sym_ins_token1,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1228] = 4,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_literal_offset,
    ACTIONS(103), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1244] = 4,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(210), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1259] = 4,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(216), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1274] = 4,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_operand_args_repeat1,
    ACTIONS(223), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1289] = 4,
    ACTIONS(111), 1,
      aux_sym_ins_token1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_ins,
    ACTIONS(227), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1304] = 3,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      anon_sym_info,
    ACTIONS(231), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1316] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1326] = 2,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1336] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1346] = 2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1356] = 2,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1366] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1376] = 2,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1386] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1396] = 2,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1406] = 4,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      sym_comment,
    STATE(25), 1,
      sym__NEWLINE,
    ACTIONS(259), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1420] = 2,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1430] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 4,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1440] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1449] = 2,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1458] = 3,
    ACTIONS(277), 1,
      aux_sym__hex_literal_token1,
    STATE(89), 1,
      sym__hex_literal,
    ACTIONS(279), 2,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
  [1469] = 4,
    ACTIONS(281), 1,
      sym_escape_sequence,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      aux_sym_string_literal_token1,
    STATE(51), 1,
      aux_sym_string_literal_repeat1,
  [1482] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1491] = 2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1500] = 2,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1509] = 2,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1518] = 2,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1527] = 4,
    ACTIONS(309), 1,
      sym_escape_sequence,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      aux_sym_string_literal_token1,
    STATE(51), 1,
      aux_sym_string_literal_repeat1,
  [1540] = 2,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1549] = 3,
    ACTIONS(319), 1,
      aux_sym__hex_literal_token1,
    STATE(82), 1,
      sym__hex_literal,
    ACTIONS(321), 2,
      aux_sym__hex_literal_token2,
      aux_sym__hex_literal_token3,
  [1560] = 2,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1569] = 3,
    ACTIONS(257), 1,
      sym_comment,
    STATE(25), 1,
      sym__NEWLINE,
    ACTIONS(259), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1580] = 2,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1589] = 2,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1598] = 2,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1607] = 4,
    ACTIONS(339), 1,
      sym_escape_sequence,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      aux_sym_string_literal_token1,
    STATE(57), 1,
      aux_sym_string_literal_repeat1,
  [1620] = 3,
    ACTIONS(345), 1,
      aux_sym_objdump_machine_code_bytes_token1,
    STATE(28), 1,
      aux_sym_objdump_machine_code_bytes_repeat1,
    STATE(34), 1,
      sym_objdump_machine_code_bytes,
  [1630] = 1,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1635] = 2,
    ACTIONS(349), 1,
      sym__IDENTIFIER,
    STATE(60), 1,
      sym_identifier,
  [1642] = 2,
    ACTIONS(351), 1,
      sym__IDENTIFIER,
    STATE(74), 1,
      sym_identifier,
  [1649] = 2,
    ACTIONS(349), 1,
      sym__IDENTIFIER,
    STATE(62), 1,
      sym_identifier,
  [1656] = 1,
    ACTIONS(301), 2,
      anon_sym_GT,
      aux_sym_label_token1,
  [1661] = 1,
    ACTIONS(353), 1,
      anon_sym_COLON,
  [1665] = 1,
    ACTIONS(355), 1,
      sym_section_name,
  [1669] = 1,
    ACTIONS(357), 1,
      anon_sym_GT,
  [1673] = 1,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [1677] = 1,
    ACTIONS(361), 1,
      anon_sym_PLUS,
  [1681] = 1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [1685] = 1,
    ACTIONS(365), 1,
      sym__IDENTIFIER,
  [1689] = 1,
    ACTIONS(367), 1,
      aux_sym_objdump_section_label_token1,
  [1693] = 1,
    ACTIONS(369), 1,
      anon_sym_LT,
  [1697] = 1,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
  [1701] = 1,
    ACTIONS(373), 1,
      anon_sym_GT,
  [1705] = 1,
    ACTIONS(375), 1,
      aux_sym_label_token1,
  [1709] = 1,
    ACTIONS(377), 1,
      anon_sym_COLON,
  [1713] = 1,
    ACTIONS(379), 1,
      aux_sym_shell_cmd_token1,
  [1717] = 1,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [1721] = 1,
    ACTIONS(383), 1,
      anon_sym_COLON,
  [1725] = 1,
    ACTIONS(385), 1,
      sym_section_name,
  [1729] = 1,
    ACTIONS(387), 1,
      anon_sym_GT,
  [1733] = 1,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [1737] = 1,
    ACTIONS(391), 1,
      anon_sym_PLUS,
  [1741] = 1,
    ACTIONS(393), 1,
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
  [SMALL_STATE(9)] = 443,
  [SMALL_STATE(10)] = 484,
  [SMALL_STATE(11)] = 521,
  [SMALL_STATE(12)] = 562,
  [SMALL_STATE(13)] = 631,
  [SMALL_STATE(14)] = 702,
  [SMALL_STATE(15)] = 773,
  [SMALL_STATE(16)] = 826,
  [SMALL_STATE(17)] = 861,
  [SMALL_STATE(18)] = 896,
  [SMALL_STATE(19)] = 931,
  [SMALL_STATE(20)] = 966,
  [SMALL_STATE(21)] = 1012,
  [SMALL_STATE(22)] = 1058,
  [SMALL_STATE(23)] = 1085,
  [SMALL_STATE(24)] = 1110,
  [SMALL_STATE(25)] = 1131,
  [SMALL_STATE(26)] = 1152,
  [SMALL_STATE(27)] = 1177,
  [SMALL_STATE(28)] = 1196,
  [SMALL_STATE(29)] = 1212,
  [SMALL_STATE(30)] = 1228,
  [SMALL_STATE(31)] = 1244,
  [SMALL_STATE(32)] = 1259,
  [SMALL_STATE(33)] = 1274,
  [SMALL_STATE(34)] = 1289,
  [SMALL_STATE(35)] = 1304,
  [SMALL_STATE(36)] = 1316,
  [SMALL_STATE(37)] = 1326,
  [SMALL_STATE(38)] = 1336,
  [SMALL_STATE(39)] = 1346,
  [SMALL_STATE(40)] = 1356,
  [SMALL_STATE(41)] = 1366,
  [SMALL_STATE(42)] = 1376,
  [SMALL_STATE(43)] = 1386,
  [SMALL_STATE(44)] = 1396,
  [SMALL_STATE(45)] = 1406,
  [SMALL_STATE(46)] = 1420,
  [SMALL_STATE(47)] = 1430,
  [SMALL_STATE(48)] = 1440,
  [SMALL_STATE(49)] = 1449,
  [SMALL_STATE(50)] = 1458,
  [SMALL_STATE(51)] = 1469,
  [SMALL_STATE(52)] = 1482,
  [SMALL_STATE(53)] = 1491,
  [SMALL_STATE(54)] = 1500,
  [SMALL_STATE(55)] = 1509,
  [SMALL_STATE(56)] = 1518,
  [SMALL_STATE(57)] = 1527,
  [SMALL_STATE(58)] = 1540,
  [SMALL_STATE(59)] = 1549,
  [SMALL_STATE(60)] = 1560,
  [SMALL_STATE(61)] = 1569,
  [SMALL_STATE(62)] = 1580,
  [SMALL_STATE(63)] = 1589,
  [SMALL_STATE(64)] = 1598,
  [SMALL_STATE(65)] = 1607,
  [SMALL_STATE(66)] = 1620,
  [SMALL_STATE(67)] = 1630,
  [SMALL_STATE(68)] = 1635,
  [SMALL_STATE(69)] = 1642,
  [SMALL_STATE(70)] = 1649,
  [SMALL_STATE(71)] = 1656,
  [SMALL_STATE(72)] = 1661,
  [SMALL_STATE(73)] = 1665,
  [SMALL_STATE(74)] = 1669,
  [SMALL_STATE(75)] = 1673,
  [SMALL_STATE(76)] = 1677,
  [SMALL_STATE(77)] = 1681,
  [SMALL_STATE(78)] = 1685,
  [SMALL_STATE(79)] = 1689,
  [SMALL_STATE(80)] = 1693,
  [SMALL_STATE(81)] = 1697,
  [SMALL_STATE(82)] = 1701,
  [SMALL_STATE(83)] = 1705,
  [SMALL_STATE(84)] = 1709,
  [SMALL_STATE(85)] = 1713,
  [SMALL_STATE(86)] = 1717,
  [SMALL_STATE(87)] = 1721,
  [SMALL_STATE(88)] = 1725,
  [SMALL_STATE(89)] = 1729,
  [SMALL_STATE(90)] = 1733,
  [SMALL_STATE(91)] = 1737,
  [SMALL_STATE(92)] = 1741,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(5),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_effective_addr_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(90),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(11),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_effective_addr_repeat1, 2), SHIFT_REPEAT(11),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins_kw, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins_kw, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins_kw, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins_kw, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_kw, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_kw, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_item, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_item_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(61),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(10),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(88),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(70),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(68),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(85),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(73),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(54),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(80),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(84),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(26),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(71),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_offset, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_offset, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_prefix, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_prefix, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptr, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__NEWLINE, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__NEWLINE, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_machine_code_bytes, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_machine_code_bytes, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_objdump_machine_code_bytes_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_objdump_machine_code_bytes_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_objdump_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(29),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_args_repeat1, 2), SHIFT_REPEAT(4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_args, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_args, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_offset_label, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_offset_label, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_addr, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effective_addr, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_ident, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_ident, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_item, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_offset_label, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_offset_label, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(51),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(51),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ins, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ins, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_disas_of_section, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_disas_of_section, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_section_label, 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_section_label, 6),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_cmd, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_cmd, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [371] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_offset_addr, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
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
