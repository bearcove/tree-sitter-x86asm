#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_section = 2,
  sym_section_name = 3,
  anon_sym_LF = 4,
  anon_sym_CR_LF = 5,
  sym_source_file = 6,
  sym_toplevel_item = 7,
  sym_statement = 8,
  sym_directive = 9,
  sym_section = 10,
  sym__NEWLINE = 11,
  aux_sym_toplevel_item_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_section] = "section",
  [sym_section_name] = "section_name",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_source_file] = "source_file",
  [sym_toplevel_item] = "toplevel_item",
  [sym_statement] = "statement",
  [sym_directive] = "directive",
  [sym_section] = "section",
  [sym__NEWLINE] = "_NEWLINE",
  [aux_sym_toplevel_item_repeat1] = "toplevel_item_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_section] = anon_sym_section,
  [sym_section_name] = sym_section_name,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_source_file] = sym_source_file,
  [sym_toplevel_item] = sym_toplevel_item,
  [sym_statement] = sym_statement,
  [sym_directive] = sym_directive,
  [sym_section] = sym_section,
  [sym__NEWLINE] = sym__NEWLINE,
  [aux_sym_toplevel_item_repeat1] = aux_sym_toplevel_item_repeat1,
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
  [sym_section_name] = {
    .visible = true,
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
  [sym__NEWLINE] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_toplevel_item_repeat1] = {
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
      if (eof) ADVANCE(9);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 8:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_section_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_toplevel_item] = STATE(12),
    [sym_statement] = STATE(2),
    [sym_directive] = STATE(4),
    [sym_section] = STATE(5),
    [aux_sym_toplevel_item_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(5),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_directive] = STATE(4),
    [sym_section] = STATE(5),
    [aux_sym_toplevel_item_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(5),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_directive] = STATE(4),
    [sym_section] = STATE(5),
    [aux_sym_toplevel_item_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_section] = ACTIONS(14),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(17), 1,
      sym_comment,
    STATE(6), 1,
      sym__NEWLINE,
    ACTIONS(19), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [11] = 1,
    ACTIONS(21), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [17] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_section,
  [23] = 1,
    ACTIONS(25), 3,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [29] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_section,
  [35] = 1,
    ACTIONS(29), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [40] = 1,
    ACTIONS(31), 1,
      sym_section_name,
  [44] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [48] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 17,
  [SMALL_STATE(7)] = 23,
  [SMALL_STATE(8)] = 29,
  [SMALL_STATE(9)] = 35,
  [SMALL_STATE(10)] = 40,
  [SMALL_STATE(11)] = 44,
  [SMALL_STATE(12)] = 48,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_item, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_toplevel_item_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_toplevel_item_repeat1, 2), SHIFT_REPEAT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__NEWLINE, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
