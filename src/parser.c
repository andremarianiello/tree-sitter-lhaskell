#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 3
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_bird_track = 1,
  sym_line_content = 2,
  sym_source_file = 3,
  sym__block = 4,
  sym_comment_block = 5,
  sym_comment_line = 6,
  sym_code_block = 7,
  sym_code_line = 8,
  aux_sym_source_file_repeat1 = 9,
  aux_sym_comment_block_repeat1 = 10,
  aux_sym_code_block_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_bird_track] = "bird_track",
  [sym_line_content] = "line_content",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_comment_block] = "comment_block",
  [sym_comment_line] = "comment_line",
  [sym_code_block] = "code_block",
  [sym_code_line] = "code_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_comment_block_repeat1] = "comment_block_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_bird_track] = sym_bird_track,
  [sym_line_content] = sym_line_content,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_comment_block] = sym_comment_block,
  [sym_comment_line] = sym_comment_line,
  [sym_code_block] = sym_code_block,
  [sym_code_line] = sym_code_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_comment_block_repeat1] = aux_sym_comment_block_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_bird_track] = {
    .visible = true,
    .named = true,
  },
  [sym_line_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_code_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '>') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_bird_track);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_line_content);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_bird_track] = ACTIONS(1),
    [sym_line_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__block] = STATE(2),
    [sym_comment_block] = STATE(2),
    [sym_comment_line] = STATE(4),
    [sym_code_block] = STATE(2),
    [sym_code_line] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_comment_block_repeat1] = STATE(4),
    [aux_sym_code_block_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_bird_track] = ACTIONS(5),
    [sym_line_content] = ACTIONS(7),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym_comment_block] = STATE(3),
    [sym_comment_line] = STATE(4),
    [sym_code_block] = STATE(3),
    [sym_code_line] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_comment_block_repeat1] = STATE(4),
    [aux_sym_code_block_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_bird_track] = ACTIONS(5),
    [sym_line_content] = ACTIONS(7),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym_comment_block] = STATE(3),
    [sym_comment_line] = STATE(4),
    [sym_code_block] = STATE(3),
    [sym_code_line] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_comment_block_repeat1] = STATE(4),
    [aux_sym_code_block_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_bird_track] = ACTIONS(13),
    [sym_line_content] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      sym_line_content,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_bird_track,
    STATE(6), 2,
      sym_comment_line,
      aux_sym_comment_block_repeat1,
  [12] = 4,
    ACTIONS(5), 1,
      sym_bird_track,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_line_content,
    STATE(7), 2,
      sym_code_line,
      aux_sym_code_block_repeat1,
  [26] = 3,
    ACTIONS(27), 1,
      sym_line_content,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_bird_track,
    STATE(6), 2,
      sym_comment_line,
      aux_sym_comment_block_repeat1,
  [38] = 4,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_bird_track,
    ACTIONS(35), 1,
      sym_line_content,
    STATE(7), 2,
      sym_code_line,
      aux_sym_code_block_repeat1,
  [52] = 2,
    ACTIONS(39), 1,
      sym_line_content,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_bird_track,
  [60] = 2,
    ACTIONS(43), 1,
      sym_line_content,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_bird_track,
  [68] = 1,
    ACTIONS(45), 1,
      sym_line_content,
  [72] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 68,
  [SMALL_STATE(11)] = 72,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_line, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_line, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_line, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lhaskell(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
