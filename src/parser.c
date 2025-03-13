#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_indent = 1,
  sym_identifier = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_BANG = 4,
  anon_sym_QMARK = 5,
  anon_sym_BSLASH = 6,
  aux_sym_string_literal_token1 = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_null = 10,
  aux_sym_primitive_literal_token1 = 11,
  sym_list_marker = 12,
  sym_dict_marker = 13,
  sym_null_value = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_EQ_GT = 16,
  anon_sym_LT_EQ_GT = 17,
  sym_localization_marker = 18,
  sym_source_file = 19,
  sym_component = 20,
  sym_component_name = 21,
  sym_property_name = 22,
  sym_parameter = 23,
  sym_string_literal = 24,
  sym_primitive_literal = 25,
  sym_binding = 26,
  sym_component_declaration = 27,
  sym_property = 28,
  sym_node = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_component_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_indent] = "indent",
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_BANG] = "parameter_marker",
  [anon_sym_QMARK] = "parameter_marker",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [aux_sym_primitive_literal_token1] = "primitive_literal_token1",
  [sym_list_marker] = "list_marker",
  [sym_dict_marker] = "dict_marker",
  [sym_null_value] = "null_value",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_EQ_GT] = "<=>",
  [sym_localization_marker] = "localization_marker",
  [sym_source_file] = "source_file",
  [sym_component] = "component",
  [sym_component_name] = "component_name",
  [sym_property_name] = "property_name",
  [sym_parameter] = "parameter",
  [sym_string_literal] = "string_literal",
  [sym_primitive_literal] = "primitive_literal",
  [sym_binding] = "binding",
  [sym_component_declaration] = "component_declaration",
  [sym_property] = "property",
  [sym_node] = "node",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_component_repeat1] = "component_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_indent] = sym_indent,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_BANG,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [aux_sym_primitive_literal_token1] = aux_sym_primitive_literal_token1,
  [sym_list_marker] = sym_list_marker,
  [sym_dict_marker] = sym_dict_marker,
  [sym_null_value] = sym_null_value,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [sym_localization_marker] = sym_localization_marker,
  [sym_source_file] = sym_source_file,
  [sym_component] = sym_component,
  [sym_component_name] = sym_component_name,
  [sym_property_name] = sym_property_name,
  [sym_parameter] = sym_parameter,
  [sym_string_literal] = sym_string_literal,
  [sym_primitive_literal] = sym_primitive_literal,
  [sym_binding] = sym_binding,
  [sym_component_declaration] = sym_component_declaration,
  [sym_property] = sym_property,
  [sym_node] = sym_node,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_component_repeat1] = aux_sym_component_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_list_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_null_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_localization_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_component_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_repeat1] = {
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
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\t', 19,
        '!', 22,
        '$', 21,
        '*', 33,
        '-', 34,
        '/', 32,
        '<', 2,
        '=', 4,
        '?', 23,
        '@', 39,
        '\\', 24,
        'f', 5,
        'n', 14,
        't', 11,
      );
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '<') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_indent);
      if (lookahead == '\t') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_primitive_literal_token1);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_primitive_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_list_marker);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_dict_marker);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_null_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_localization_marker);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 25},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [aux_sym_primitive_literal_token1] = ACTIONS(1),
    [sym_list_marker] = ACTIONS(1),
    [sym_dict_marker] = ACTIONS(1),
    [sym_null_value] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [sym_localization_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_component] = STATE(9),
    [sym_component_name] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(5),
  },
  [2] = {
    [sym_parameter] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_indent] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(9),
    [aux_sym_primitive_literal_token1] = ACTIONS(9),
    [sym_list_marker] = ACTIONS(9),
    [sym_dict_marker] = ACTIONS(9),
    [sym_null_value] = ACTIONS(9),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_EQ_GT] = ACTIONS(9),
    [anon_sym_LT_EQ_GT] = ACTIONS(9),
    [sym_localization_marker] = ACTIONS(9),
  },
  [3] = {
    [sym_string_literal] = STATE(19),
    [sym_primitive_literal] = STATE(19),
    [sym_binding] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_indent] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_null] = ACTIONS(19),
    [aux_sym_primitive_literal_token1] = ACTIONS(19),
    [sym_list_marker] = ACTIONS(21),
    [sym_dict_marker] = ACTIONS(21),
    [sym_null_value] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_EQ_GT] = ACTIONS(23),
    [anon_sym_LT_EQ_GT] = ACTIONS(23),
    [sym_localization_marker] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(27), 13,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_primitive_literal_token1,
      sym_list_marker,
      sym_dict_marker,
      sym_null_value,
      anon_sym_LT_EQ,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      sym_localization_marker,
  [20] = 2,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_indent,
    ACTIONS(31), 13,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_primitive_literal_token1,
      sym_list_marker,
      sym_dict_marker,
      sym_null_value,
      anon_sym_LT_EQ,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      sym_localization_marker,
  [40] = 4,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_BSLASH,
    STATE(21), 3,
      sym_component_name,
      sym_string_literal,
      sym_primitive_literal,
    ACTIONS(35), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_primitive_literal_token1,
  [58] = 1,
    ACTIONS(37), 6,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_primitive_literal_token1,
  [67] = 4,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(11), 1,
      sym_component_name,
    STATE(8), 2,
      sym_component,
      aux_sym_source_file_repeat1,
  [81] = 4,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_component_name,
    STATE(8), 2,
      sym_component,
      aux_sym_source_file_repeat1,
  [95] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym_indent,
    ACTIONS(50), 1,
      anon_sym_DOLLAR,
    STATE(14), 2,
      sym_node,
      aux_sym_component_repeat1,
  [109] = 4,
    ACTIONS(48), 1,
      sym_indent,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_DOLLAR,
    STATE(10), 2,
      sym_node,
      aux_sym_component_repeat1,
  [123] = 4,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_LT_EQ,
    STATE(3), 1,
      sym_property_name,
    STATE(13), 2,
      sym_component_declaration,
      sym_property,
  [137] = 4,
    ACTIONS(48), 1,
      sym_indent,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_DOLLAR,
    STATE(15), 2,
      sym_node,
      aux_sym_component_repeat1,
  [151] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_indent,
    ACTIONS(69), 1,
      anon_sym_DOLLAR,
    STATE(14), 2,
      sym_node,
      aux_sym_component_repeat1,
  [165] = 4,
    ACTIONS(48), 1,
      sym_indent,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    STATE(14), 2,
      sym_node,
      aux_sym_component_repeat1,
  [179] = 2,
    ACTIONS(77), 1,
      anon_sym_DOLLAR,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_indent,
  [187] = 2,
    ACTIONS(81), 1,
      anon_sym_DOLLAR,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_indent,
  [195] = 2,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_indent,
  [203] = 2,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_indent,
  [211] = 2,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_indent,
  [219] = 2,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_indent,
  [227] = 2,
    ACTIONS(5), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      sym_component_name,
  [234] = 1,
    ACTIONS(99), 1,
      sym_identifier,
  [238] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [242] = 1,
    ACTIONS(103), 1,
      sym_identifier,
  [246] = 1,
    ACTIONS(105), 1,
      sym_identifier,
  [250] = 1,
    ACTIONS(107), 1,
      aux_sym_string_literal_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 67,
  [SMALL_STATE(9)] = 81,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 123,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 151,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 187,
  [SMALL_STATE(18)] = 195,
  [SMALL_STATE(19)] = 203,
  [SMALL_STATE(20)] = 211,
  [SMALL_STATE(21)] = 219,
  [SMALL_STATE(22)] = 227,
  [SMALL_STATE(23)] = 234,
  [SMALL_STATE(24)] = 238,
  [SMALL_STATE(25)] = 242,
  [SMALL_STATE(26)] = 246,
  [SMALL_STATE(27)] = 250,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_name, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_name, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_literal, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_literal, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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

TS_PUBLIC const TSLanguage *tree_sitter_molviewtree(void) {
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
