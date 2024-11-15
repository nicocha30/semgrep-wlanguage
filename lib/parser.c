#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_estune = 1,
  anon_sym_estun = 2,
  anon_sym_est = 3,
  anon_sym_EQ = 4,
  anon_sym_SEMI = 5,
  anon_sym_DOT = 6,
  sym_identifier = 7,
  anon_sym_entier = 8,
  anon_sym_ru00e9el = 9,
  anon_sym_chaine = 10,
  anon_sym_monu00e9taire = 11,
  anon_sym_boolu00e9en = 12,
  anon_sym_date = 13,
  anon_sym_heure = 14,
  anon_sym_duru00e9e = 15,
  sym_number = 16,
  sym_string = 17,
  anon_sym_VRAI = 18,
  anon_sym_FAUX = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_LT_GT = 24,
  anon_sym_GT = 25,
  anon_sym_LT = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_COMMA = 31,
  anon_sym_SI = 32,
  anon_sym_ALORS = 33,
  anon_sym_FIN = 34,
  anon_sym_SINON = 35,
  anon_sym_POUR = 36,
  anon_sym_TANTQUE = 37,
  sym_line_comment = 38,
  sym_block_comment = 39,
  sym_program = 40,
  sym_statement = 41,
  sym_variable_declaration = 42,
  sym_assignment = 43,
  sym_expression = 44,
  sym_identifier_chain = 45,
  sym_type = 46,
  sym_boolean = 47,
  sym_binary_expression = 48,
  sym_function_call = 49,
  sym_argument_list = 50,
  sym_if_statement = 51,
  sym_else_clause = 52,
  sym_for_statement = 53,
  sym_while_statement = 54,
  sym_comment = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_identifier_chain_repeat1 = 57,
  aux_sym_argument_list_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_estune] = "est une",
  [anon_sym_estun] = "est un",
  [anon_sym_est] = "est",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [anon_sym_entier] = "entier",
  [anon_sym_ru00e9el] = "r\u00e9el",
  [anon_sym_chaine] = "chaine",
  [anon_sym_monu00e9taire] = "mon\u00e9taire",
  [anon_sym_boolu00e9en] = "bool\u00e9en",
  [anon_sym_date] = "date",
  [anon_sym_heure] = "heure",
  [anon_sym_duru00e9e] = "dur\u00e9e",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_VRAI] = "VRAI",
  [anon_sym_FAUX] = "FAUX",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_SI] = "SI",
  [anon_sym_ALORS] = "ALORS",
  [anon_sym_FIN] = "FIN",
  [anon_sym_SINON] = "SINON",
  [anon_sym_POUR] = "POUR",
  [anon_sym_TANTQUE] = "TANTQUE",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym_identifier_chain] = "identifier_chain",
  [sym_type] = "type",
  [sym_boolean] = "boolean",
  [sym_binary_expression] = "binary_expression",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_identifier_chain_repeat1] = "identifier_chain_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_estune] = anon_sym_estune,
  [anon_sym_estun] = anon_sym_estun,
  [anon_sym_est] = anon_sym_est,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [anon_sym_entier] = anon_sym_entier,
  [anon_sym_ru00e9el] = anon_sym_ru00e9el,
  [anon_sym_chaine] = anon_sym_chaine,
  [anon_sym_monu00e9taire] = anon_sym_monu00e9taire,
  [anon_sym_boolu00e9en] = anon_sym_boolu00e9en,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_heure] = anon_sym_heure,
  [anon_sym_duru00e9e] = anon_sym_duru00e9e,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_VRAI] = anon_sym_VRAI,
  [anon_sym_FAUX] = anon_sym_FAUX,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SI] = anon_sym_SI,
  [anon_sym_ALORS] = anon_sym_ALORS,
  [anon_sym_FIN] = anon_sym_FIN,
  [anon_sym_SINON] = anon_sym_SINON,
  [anon_sym_POUR] = anon_sym_POUR,
  [anon_sym_TANTQUE] = anon_sym_TANTQUE,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym_identifier_chain] = sym_identifier_chain,
  [sym_type] = sym_type,
  [sym_boolean] = sym_boolean,
  [sym_binary_expression] = sym_binary_expression,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_identifier_chain_repeat1] = aux_sym_identifier_chain_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_estune] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_estun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_est] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_entier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ru00e9el] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chaine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monu00e9taire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolu00e9en] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_heure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duru00e9e] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_VRAI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FAUX] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALORS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SINON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TANTQUE] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_chain] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_chain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
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
  [4] = 3,
  [5] = 3,
  [6] = 2,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 11,
  [17] = 13,
  [18] = 18,
  [19] = 9,
  [20] = 13,
  [21] = 14,
  [22] = 14,
  [23] = 18,
  [24] = 11,
  [25] = 18,
  [26] = 9,
  [27] = 15,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 28,
  [34] = 28,
  [35] = 15,
  [36] = 36,
  [37] = 37,
  [38] = 29,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 31,
  [44] = 44,
  [45] = 29,
  [46] = 31,
  [47] = 47,
  [48] = 32,
  [49] = 42,
  [50] = 39,
  [51] = 51,
  [52] = 40,
  [53] = 44,
  [54] = 37,
  [55] = 55,
  [56] = 37,
  [57] = 32,
  [58] = 40,
  [59] = 44,
  [60] = 55,
  [61] = 47,
  [62] = 42,
  [63] = 63,
  [64] = 51,
  [65] = 55,
  [66] = 39,
  [67] = 47,
  [68] = 51,
  [69] = 63,
  [70] = 63,
  [71] = 11,
  [72] = 9,
  [73] = 18,
  [74] = 15,
  [75] = 18,
  [76] = 76,
  [77] = 77,
  [78] = 37,
  [79] = 42,
  [80] = 32,
  [81] = 76,
  [82] = 76,
  [83] = 77,
  [84] = 77,
  [85] = 39,
  [86] = 86,
  [87] = 44,
  [88] = 40,
  [89] = 37,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
  [94] = 51,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 90,
  [106] = 90,
  [107] = 107,
  [108] = 98,
  [109] = 96,
  [110] = 98,
  [111] = 99,
  [112] = 101,
  [113] = 102,
  [114] = 103,
  [115] = 96,
  [116] = 104,
  [117] = 101,
  [118] = 102,
  [119] = 103,
  [120] = 104,
  [121] = 97,
  [122] = 107,
  [123] = 91,
  [124] = 92,
  [125] = 95,
  [126] = 99,
  [127] = 127,
  [128] = 97,
  [129] = 107,
  [130] = 91,
  [131] = 127,
  [132] = 92,
  [133] = 95,
  [134] = 127,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 138,
  [142] = 142,
  [143] = 135,
  [144] = 144,
  [145] = 139,
  [146] = 138,
  [147] = 147,
  [148] = 144,
  [149] = 136,
  [150] = 139,
  [151] = 142,
  [152] = 135,
  [153] = 142,
  [154] = 136,
  [155] = 147,
  [156] = 139,
  [157] = 142,
  [158] = 147,
  [159] = 144,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 161,
  [164] = 161,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 166,
  [169] = 165,
  [170] = 101,
  [171] = 171,
  [172] = 167,
  [173] = 173,
  [174] = 174,
  [175] = 165,
  [176] = 167,
  [177] = 171,
  [178] = 165,
  [179] = 179,
  [180] = 174,
  [181] = 171,
  [182] = 174,
  [183] = 166,
  [184] = 171,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        ')', 183,
        '*', 175,
        '+', 173,
        ',', 184,
        '-', 174,
        '.', 87,
        '/', 176,
        ';', 86,
        '<', 179,
        '=', 85,
        '>', 178,
        'A', 15,
        'F', 9,
        'P', 20,
        'S', 13,
        'T', 11,
        'V', 25,
        'b', 58,
        'c', 45,
        'd', 32,
        'e', 54,
        'h', 36,
        'm', 56,
        'r', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        ';', 86,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 88,
        'P', 99,
        'S', 93,
        'T', 90,
        'V', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        ';', 86,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 88,
        'P', 99,
        'S', 95,
        'T', 90,
        'V', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 88,
        'P', 99,
        'S', 93,
        'T', 90,
        'V', 103,
        'e', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 88,
        'P', 99,
        'S', 95,
        'T', 90,
        'V', 103,
        'e', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(186);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(169);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(189);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(191);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'Q') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(193);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'X') ADVANCE(171);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 0xe9) ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 0xe9) ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 0xe9) ADVANCE(66);
      END_STATE();
    case 72:
      if (lookahead == 0xe9) ADVANCE(44);
      END_STATE();
    case 73:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 78:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        ')', 183,
        '*', 175,
        '+', 173,
        ',', 184,
        '-', 174,
        '.', 87,
        '/', 176,
        ';', 86,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 89,
        'P', 99,
        'S', 93,
        'T', 90,
        'V', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '"', 6,
        '(', 182,
        '*', 175,
        '+', 173,
        '-', 174,
        '.', 87,
        '/', 176,
        '<', 179,
        '=', 85,
        '>', 178,
        'F', 89,
        'P', 99,
        'S', 93,
        'T', 90,
        'V', 103,
        'e', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_estune);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_estun);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_est);
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_est);
      if (lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0xe9) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0xe9) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0xe9) ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0xe9) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_entier);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_entier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ru00e9el);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ru00e9el);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_chaine);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_chaine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_monu00e9taire);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_monu00e9taire);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_boolu00e9en);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_boolu00e9en);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_date);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_heure);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_heure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_duru00e9e);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_duru00e9e);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_VRAI);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_VRAI);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_FAUX);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_FAUX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(197);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '>') ADVANCE(177);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == 'N') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SI);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ALORS);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_FIN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_FIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SINON);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SINON);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_POUR);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_POUR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_TANTQUE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_TANTQUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0xe0 ||
          lookahead == 0xe8 ||
          lookahead == 0xe9) ADVANCE(148);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 78},
  [10] = {.lex_state = 79},
  [11] = {.lex_state = 78},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 78},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 78},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 78},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 78},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 78},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 78},
  [40] = {.lex_state = 78},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 78},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 78},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 78},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 78},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 78},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 78},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 78},
  [83] = {.lex_state = 78},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 78},
  [109] = {.lex_state = 78},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 78},
  [114] = {.lex_state = 78},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 78},
  [117] = {.lex_state = 78},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 78},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 78},
  [129] = {.lex_state = 78},
  [130] = {.lex_state = 78},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 78},
  [133] = {.lex_state = 78},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 35},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 73},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 73},
  [164] = {.lex_state = 73},
  [165] = {.lex_state = 73},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 73},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 73},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 73},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_estune] = ACTIONS(1),
    [anon_sym_estun] = ACTIONS(1),
    [anon_sym_est] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_entier] = ACTIONS(1),
    [anon_sym_ru00e9el] = ACTIONS(1),
    [anon_sym_chaine] = ACTIONS(1),
    [anon_sym_monu00e9taire] = ACTIONS(1),
    [anon_sym_boolu00e9en] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_heure] = ACTIONS(1),
    [anon_sym_duru00e9e] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_VRAI] = ACTIONS(1),
    [anon_sym_FAUX] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SI] = ACTIONS(1),
    [anon_sym_ALORS] = ACTIONS(1),
    [anon_sym_FIN] = ACTIONS(1),
    [anon_sym_SINON] = ACTIONS(1),
    [anon_sym_POUR] = ACTIONS(1),
    [anon_sym_TANTQUE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(179),
    [sym_statement] = STATE(36),
    [sym_variable_declaration] = STATE(126),
    [sym_assignment] = STATE(126),
    [sym_expression] = STATE(70),
    [sym_identifier_chain] = STATE(60),
    [sym_boolean] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_if_statement] = STATE(126),
    [sym_for_statement] = STATE(126),
    [sym_while_statement] = STATE(126),
    [sym_comment] = STATE(36),
    [aux_sym_program_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [anon_sym_VRAI] = ACTIONS(9),
    [anon_sym_FAUX] = ACTIONS(9),
    [anon_sym_SI] = ACTIONS(11),
    [anon_sym_POUR] = ACTIONS(13),
    [anon_sym_TANTQUE] = ACTIONS(15),
    [sym_line_comment] = ACTIONS(17),
    [sym_block_comment] = ACTIONS(17),
  },
  [2] = {
    [sym_statement] = STATE(31),
    [sym_variable_declaration] = STATE(111),
    [sym_assignment] = STATE(111),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(65),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(111),
    [sym_for_statement] = STATE(111),
    [sym_while_statement] = STATE(111),
    [sym_comment] = STATE(31),
    [aux_sym_program_repeat1] = STATE(31),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(31),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [3] = {
    [sym_statement] = STATE(38),
    [sym_variable_declaration] = STATE(111),
    [sym_assignment] = STATE(111),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(65),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(111),
    [sym_for_statement] = STATE(111),
    [sym_while_statement] = STATE(111),
    [sym_comment] = STATE(38),
    [aux_sym_program_repeat1] = STATE(38),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(39),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [4] = {
    [sym_statement] = STATE(45),
    [sym_variable_declaration] = STATE(111),
    [sym_assignment] = STATE(111),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(65),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(111),
    [sym_for_statement] = STATE(111),
    [sym_while_statement] = STATE(111),
    [sym_comment] = STATE(45),
    [aux_sym_program_repeat1] = STATE(45),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(41),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [5] = {
    [sym_statement] = STATE(29),
    [sym_variable_declaration] = STATE(111),
    [sym_assignment] = STATE(111),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(65),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(111),
    [sym_for_statement] = STATE(111),
    [sym_while_statement] = STATE(111),
    [sym_comment] = STATE(29),
    [aux_sym_program_repeat1] = STATE(29),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(43),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [6] = {
    [sym_statement] = STATE(43),
    [sym_variable_declaration] = STATE(111),
    [sym_assignment] = STATE(111),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(65),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(111),
    [sym_for_statement] = STATE(111),
    [sym_while_statement] = STATE(111),
    [sym_comment] = STATE(43),
    [aux_sym_program_repeat1] = STATE(43),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(45),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
  [7] = {
    [sym_statement] = STATE(46),
    [sym_variable_declaration] = STATE(111),
    [sym_assignment] = STATE(111),
    [sym_expression] = STATE(69),
    [sym_identifier_chain] = STATE(65),
    [sym_boolean] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_if_statement] = STATE(111),
    [sym_for_statement] = STATE(111),
    [sym_while_statement] = STATE(111),
    [sym_comment] = STATE(46),
    [aux_sym_program_repeat1] = STATE(46),
    [anon_sym_EQ] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
    [anon_sym_VRAI] = ACTIONS(25),
    [anon_sym_FAUX] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_SI] = ACTIONS(29),
    [anon_sym_FIN] = ACTIONS(47),
    [anon_sym_POUR] = ACTIONS(33),
    [anon_sym_TANTQUE] = ACTIONS(35),
    [sym_line_comment] = ACTIONS(37),
    [sym_block_comment] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(49), 1,
      anon_sym_estune,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(51), 2,
      anon_sym_estun,
      anon_sym_est,
    ACTIONS(57), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 12,
      anon_sym_EQ,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [41] = 4,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(64), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 16,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [77] = 6,
    ACTIONS(66), 1,
      anon_sym_estune,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(68), 2,
      anon_sym_estun,
      anon_sym_est,
    ACTIONS(57), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [117] = 4,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(74), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(72), 16,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [153] = 6,
    ACTIONS(76), 1,
      anon_sym_estune,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(78), 2,
      anon_sym_estun,
      anon_sym_est,
    ACTIONS(57), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 12,
      anon_sym_EQ,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [193] = 15,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(90), 1,
      anon_sym_FIN,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(168), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(14), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(99), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [250] = 15,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(100), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(176), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(99), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [307] = 2,
    ACTIONS(64), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 17,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [338] = 4,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(74), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(72), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [373] = 15,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(102), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(183), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(22), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(99), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [430] = 4,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [465] = 4,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(64), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [500] = 15,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(107), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(166), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(21), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(99), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [557] = 15,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(109), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(172), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(99), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [614] = 15,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SI,
    ACTIONS(92), 1,
      anon_sym_SINON,
    ACTIONS(94), 1,
      anon_sym_POUR,
    ACTIONS(96), 1,
      anon_sym_TANTQUE,
    ACTIONS(111), 1,
      anon_sym_FIN,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    STATE(167), 1,
      sym_else_clause,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(98), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(99), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [671] = 4,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [705] = 4,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(74), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(72), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [739] = 4,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(53), 14,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [773] = 4,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(64), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [807] = 2,
    ACTIONS(64), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 14,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [837] = 13,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_SI,
    ACTIONS(130), 1,
      anon_sym_POUR,
    ACTIONS(133), 1,
      anon_sym_TANTQUE,
    STATE(55), 1,
      sym_identifier_chain,
    STATE(63), 1,
      sym_expression,
    ACTIONS(119), 2,
      sym_number,
      sym_string,
    ACTIONS(122), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(128), 2,
      anon_sym_FIN,
      anon_sym_SINON,
    ACTIONS(136), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(99), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [889] = 13,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(139), 1,
      anon_sym_FIN,
    STATE(65), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(111), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [940] = 13,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(141), 1,
      anon_sym_FIN,
    STATE(65), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(111), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [991] = 13,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(143), 1,
      anon_sym_FIN,
    STATE(65), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(111), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [1042] = 2,
    ACTIONS(147), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(145), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [1071] = 13,
    ACTIONS(128), 1,
      anon_sym_FIN,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_SI,
    ACTIONS(161), 1,
      anon_sym_POUR,
    ACTIONS(164), 1,
      anon_sym_TANTQUE,
    STATE(65), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(152), 2,
      sym_number,
      sym_string,
    ACTIONS(155), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(167), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(111), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [1122] = 13,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_SI,
    ACTIONS(184), 1,
      anon_sym_POUR,
    ACTIONS(187), 1,
      anon_sym_TANTQUE,
    STATE(60), 1,
      sym_identifier_chain,
    STATE(70), 1,
      sym_expression,
    ACTIONS(175), 2,
      sym_number,
      sym_string,
    ACTIONS(178), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(190), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(34), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(126), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [1173] = 2,
    ACTIONS(64), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(59), 14,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      sym_line_comment,
      sym_block_comment,
  [1202] = 13,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_SI,
    ACTIONS(13), 1,
      anon_sym_POUR,
    ACTIONS(15), 1,
      anon_sym_TANTQUE,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_identifier_chain,
    STATE(70), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(17), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(34), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(126), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [1253] = 3,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(145), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1284] = 13,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(197), 1,
      anon_sym_FIN,
    STATE(65), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(111), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [1335] = 2,
    ACTIONS(201), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(199), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [1364] = 2,
    ACTIONS(205), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(203), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [1393] = 13,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(207), 1,
      anon_sym_FIN,
    STATE(65), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(30), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(111), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [1444] = 2,
    ACTIONS(211), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(209), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [1473] = 13,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(213), 1,
      anon_sym_FIN,
    STATE(65), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(111), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [1524] = 2,
    ACTIONS(217), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(215), 15,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_line_comment,
      sym_block_comment,
  [1553] = 13,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(219), 1,
      anon_sym_FIN,
    STATE(65), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(111), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [1604] = 13,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SI,
    ACTIONS(33), 1,
      anon_sym_POUR,
    ACTIONS(35), 1,
      anon_sym_TANTQUE,
    ACTIONS(221), 1,
      anon_sym_FIN,
    STATE(65), 1,
      sym_identifier_chain,
    STATE(69), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    ACTIONS(37), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 3,
      sym_statement,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
    STATE(111), 5,
      sym_variable_declaration,
      sym_assignment,
      sym_if_statement,
      sym_for_statement,
      sym_while_statement,
  [1655] = 5,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(231), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [1689] = 2,
    ACTIONS(147), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(145), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1717] = 2,
    ACTIONS(211), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(209), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1745] = 2,
    ACTIONS(201), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(199), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1773] = 5,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(231), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(235), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [1807] = 2,
    ACTIONS(205), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(203), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1835] = 2,
    ACTIONS(217), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(215), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1863] = 3,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(145), 13,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1893] = 4,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(145), 10,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 11,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [1925] = 3,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(145), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1955] = 2,
    ACTIONS(147), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(145), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [1982] = 2,
    ACTIONS(205), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(203), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [2009] = 2,
    ACTIONS(217), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(215), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [2036] = 4,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_EQ,
    ACTIONS(147), 9,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(145), 11,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [2067] = 5,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    ACTIONS(27), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(19), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2100] = 2,
    ACTIONS(211), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(209), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [2127] = 4,
    ACTIONS(231), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(249), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2158] = 5,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(257), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(235), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(253), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2191] = 4,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(145), 10,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2222] = 2,
    ACTIONS(201), 10,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(199), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      sym_line_comment,
      sym_block_comment,
  [2249] = 5,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(257), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(227), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(253), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2282] = 5,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(27), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(19), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(235), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2315] = 4,
    ACTIONS(27), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(19), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(249), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2345] = 4,
    ACTIONS(257), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(253), 7,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2375] = 4,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(74), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(72), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2400] = 4,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(64), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2425] = 4,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2450] = 2,
    ACTIONS(64), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 13,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2470] = 4,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 11,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2494] = 2,
    ACTIONS(270), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2513] = 4,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(280), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2536] = 3,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2557] = 2,
    ACTIONS(211), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(209), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2575] = 2,
    ACTIONS(147), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2593] = 2,
    ACTIONS(270), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2611] = 2,
    ACTIONS(272), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
    ACTIONS(270), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [2629] = 4,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2651] = 4,
    ACTIONS(288), 1,
      anon_sym_EQ,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(280), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2673] = 2,
    ACTIONS(201), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2691] = 5,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(294), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2715] = 2,
    ACTIONS(217), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(215), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2733] = 2,
    ACTIONS(205), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(203), 11,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_ALORS,
      anon_sym_TANTQUE,
  [2751] = 3,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 10,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2771] = 8,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_expression,
    STATE(89), 1,
      sym_identifier_chain,
    STATE(181), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [2800] = 2,
    ACTIONS(306), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(304), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2817] = 2,
    ACTIONS(310), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2834] = 8,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_expression,
    STATE(89), 1,
      sym_identifier_chain,
    STATE(184), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [2863] = 4,
    ACTIONS(237), 1,
      anon_sym_TANTQUE,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2884] = 2,
    ACTIONS(322), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2901] = 2,
    ACTIONS(326), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2918] = 2,
    ACTIONS(330), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2935] = 2,
    ACTIONS(334), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(332), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2952] = 2,
    ACTIONS(251), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [2969] = 3,
    ACTIONS(294), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(292), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2988] = 2,
    ACTIONS(340), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3005] = 2,
    ACTIONS(344), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(342), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3022] = 2,
    ACTIONS(348), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3039] = 2,
    ACTIONS(352), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3056] = 8,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_expression,
    STATE(89), 1,
      sym_identifier_chain,
    STATE(177), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3085] = 8,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_expression,
    STATE(89), 1,
      sym_identifier_chain,
    STATE(171), 1,
      sym_argument_list,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3114] = 2,
    ACTIONS(360), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 8,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_SINON,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3131] = 2,
    ACTIONS(334), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(332), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3147] = 2,
    ACTIONS(326), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3163] = 2,
    ACTIONS(334), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(332), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3179] = 2,
    ACTIONS(251), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3195] = 2,
    ACTIONS(340), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3211] = 2,
    ACTIONS(344), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(342), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3227] = 2,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3243] = 2,
    ACTIONS(326), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3259] = 2,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3275] = 2,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3291] = 2,
    ACTIONS(344), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(342), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3307] = 2,
    ACTIONS(348), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3323] = 2,
    ACTIONS(352), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3339] = 2,
    ACTIONS(330), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3355] = 2,
    ACTIONS(360), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3371] = 2,
    ACTIONS(306), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(304), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3387] = 2,
    ACTIONS(310), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3403] = 2,
    ACTIONS(322), 4,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 7,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_FIN,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3419] = 2,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3435] = 3,
    ACTIONS(362), 1,
      anon_sym_ALORS,
    ACTIONS(318), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3453] = 2,
    ACTIONS(330), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3469] = 2,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3485] = 2,
    ACTIONS(306), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(304), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3501] = 3,
    ACTIONS(364), 1,
      anon_sym_ALORS,
    ACTIONS(318), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3519] = 2,
    ACTIONS(310), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3535] = 2,
    ACTIONS(322), 5,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 6,
      sym_identifier,
      anon_sym_VRAI,
      anon_sym_FAUX,
      anon_sym_SI,
      anon_sym_POUR,
      anon_sym_TANTQUE,
  [3551] = 3,
    ACTIONS(366), 1,
      anon_sym_ALORS,
    ACTIONS(318), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3569] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(4), 1,
      sym_expression,
    STATE(56), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3592] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(54), 1,
      sym_identifier_chain,
    STATE(67), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3615] = 6,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(89), 1,
      sym_identifier_chain,
    STATE(100), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3638] = 2,
    STATE(83), 1,
      sym_type,
    ACTIONS(372), 9,
      sym_identifier,
      anon_sym_entier,
      anon_sym_ru00e9el,
      anon_sym_chaine,
      anon_sym_monu00e9taire,
      anon_sym_boolu00e9en,
      anon_sym_date,
      anon_sym_heure,
      anon_sym_duru00e9e,
  [3653] = 6,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(85), 1,
      sym_expression,
    ACTIONS(376), 2,
      sym_number,
      sym_string,
    ACTIONS(378), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(80), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3676] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(37), 1,
      sym_identifier_chain,
    STATE(50), 1,
      sym_expression,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3699] = 2,
    STATE(84), 1,
      sym_type,
    ACTIONS(382), 9,
      sym_identifier,
      anon_sym_entier,
      anon_sym_ru00e9el,
      anon_sym_chaine,
      anon_sym_monu00e9taire,
      anon_sym_boolu00e9en,
      anon_sym_date,
      anon_sym_heure,
      anon_sym_duru00e9e,
  [3714] = 6,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(94), 1,
      sym_expression,
    ACTIONS(376), 2,
      sym_number,
      sym_string,
    ACTIONS(378), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(80), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3737] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(3), 1,
      sym_expression,
    STATE(56), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3760] = 6,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(127), 1,
      sym_expression,
    ACTIONS(376), 2,
      sym_number,
      sym_string,
    ACTIONS(378), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(80), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3783] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(39), 1,
      sym_expression,
    STATE(54), 1,
      sym_identifier_chain,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3806] = 2,
    STATE(77), 1,
      sym_type,
    ACTIONS(384), 9,
      sym_identifier,
      anon_sym_entier,
      anon_sym_ru00e9el,
      anon_sym_chaine,
      anon_sym_monu00e9taire,
      anon_sym_boolu00e9en,
      anon_sym_date,
      anon_sym_heure,
      anon_sym_duru00e9e,
  [3821] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expression,
    STATE(56), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3844] = 6,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(134), 1,
      sym_expression,
    ACTIONS(376), 2,
      sym_number,
      sym_string,
    ACTIONS(378), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(80), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3867] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(37), 1,
      sym_identifier_chain,
    STATE(47), 1,
      sym_expression,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3890] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(56), 1,
      sym_identifier_chain,
    STATE(66), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3913] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(56), 1,
      sym_identifier_chain,
    STATE(68), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3936] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expression,
    STATE(56), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3959] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(54), 1,
      sym_identifier_chain,
    STATE(64), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [3982] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(56), 1,
      sym_identifier_chain,
    STATE(61), 1,
      sym_expression,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [4005] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expression,
    STATE(56), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [4028] = 6,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(39), 1,
      sym_expression,
    STATE(89), 1,
      sym_identifier_chain,
    ACTIONS(7), 2,
      sym_number,
      sym_string,
    ACTIONS(9), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(32), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [4051] = 6,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(37), 1,
      sym_identifier_chain,
    STATE(51), 1,
      sym_expression,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(86), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(48), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [4074] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(7), 1,
      sym_expression,
    STATE(56), 1,
      sym_identifier_chain,
    ACTIONS(23), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(57), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [4097] = 6,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(78), 1,
      sym_identifier_chain,
    STATE(131), 1,
      sym_expression,
    ACTIONS(376), 2,
      sym_number,
      sym_string,
    ACTIONS(378), 2,
      anon_sym_VRAI,
      anon_sym_FAUX,
    STATE(80), 3,
      sym_boolean,
      sym_binary_expression,
      sym_function_call,
  [4120] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      aux_sym_argument_list_repeat1,
  [4130] = 3,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(173), 1,
      sym_identifier_chain,
    STATE(174), 1,
      sym_assignment,
  [4140] = 3,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_argument_list_repeat1,
  [4150] = 3,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(173), 1,
      sym_identifier_chain,
    STATE(180), 1,
      sym_assignment,
  [4160] = 3,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(173), 1,
      sym_identifier_chain,
    STATE(182), 1,
      sym_assignment,
  [4170] = 1,
    ACTIONS(393), 1,
      sym_identifier,
  [4174] = 1,
    ACTIONS(395), 1,
      anon_sym_FIN,
  [4178] = 1,
    ACTIONS(397), 1,
      anon_sym_FIN,
  [4182] = 1,
    ACTIONS(399), 1,
      anon_sym_FIN,
  [4186] = 1,
    ACTIONS(401), 1,
      sym_identifier,
  [4190] = 1,
    ACTIONS(340), 1,
      anon_sym_TANTQUE,
  [4194] = 1,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [4198] = 1,
    ACTIONS(405), 1,
      anon_sym_FIN,
  [4202] = 1,
    ACTIONS(407), 1,
      anon_sym_EQ,
  [4206] = 1,
    ACTIONS(409), 1,
      anon_sym_TANTQUE,
  [4210] = 1,
    ACTIONS(411), 1,
      sym_identifier,
  [4214] = 1,
    ACTIONS(413), 1,
      anon_sym_FIN,
  [4218] = 1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [4222] = 1,
    ACTIONS(417), 1,
      sym_identifier,
  [4226] = 1,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
  [4230] = 1,
    ACTIONS(421), 1,
      anon_sym_TANTQUE,
  [4234] = 1,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
  [4238] = 1,
    ACTIONS(425), 1,
      anon_sym_TANTQUE,
  [4242] = 1,
    ACTIONS(427), 1,
      anon_sym_FIN,
  [4246] = 1,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 153,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 307,
  [SMALL_STATE(16)] = 338,
  [SMALL_STATE(17)] = 373,
  [SMALL_STATE(18)] = 430,
  [SMALL_STATE(19)] = 465,
  [SMALL_STATE(20)] = 500,
  [SMALL_STATE(21)] = 557,
  [SMALL_STATE(22)] = 614,
  [SMALL_STATE(23)] = 671,
  [SMALL_STATE(24)] = 705,
  [SMALL_STATE(25)] = 739,
  [SMALL_STATE(26)] = 773,
  [SMALL_STATE(27)] = 807,
  [SMALL_STATE(28)] = 837,
  [SMALL_STATE(29)] = 889,
  [SMALL_STATE(30)] = 940,
  [SMALL_STATE(31)] = 991,
  [SMALL_STATE(32)] = 1042,
  [SMALL_STATE(33)] = 1071,
  [SMALL_STATE(34)] = 1122,
  [SMALL_STATE(35)] = 1173,
  [SMALL_STATE(36)] = 1202,
  [SMALL_STATE(37)] = 1253,
  [SMALL_STATE(38)] = 1284,
  [SMALL_STATE(39)] = 1335,
  [SMALL_STATE(40)] = 1364,
  [SMALL_STATE(41)] = 1393,
  [SMALL_STATE(42)] = 1444,
  [SMALL_STATE(43)] = 1473,
  [SMALL_STATE(44)] = 1524,
  [SMALL_STATE(45)] = 1553,
  [SMALL_STATE(46)] = 1604,
  [SMALL_STATE(47)] = 1655,
  [SMALL_STATE(48)] = 1689,
  [SMALL_STATE(49)] = 1717,
  [SMALL_STATE(50)] = 1745,
  [SMALL_STATE(51)] = 1773,
  [SMALL_STATE(52)] = 1807,
  [SMALL_STATE(53)] = 1835,
  [SMALL_STATE(54)] = 1863,
  [SMALL_STATE(55)] = 1893,
  [SMALL_STATE(56)] = 1925,
  [SMALL_STATE(57)] = 1955,
  [SMALL_STATE(58)] = 1982,
  [SMALL_STATE(59)] = 2009,
  [SMALL_STATE(60)] = 2036,
  [SMALL_STATE(61)] = 2067,
  [SMALL_STATE(62)] = 2100,
  [SMALL_STATE(63)] = 2127,
  [SMALL_STATE(64)] = 2158,
  [SMALL_STATE(65)] = 2191,
  [SMALL_STATE(66)] = 2222,
  [SMALL_STATE(67)] = 2249,
  [SMALL_STATE(68)] = 2282,
  [SMALL_STATE(69)] = 2315,
  [SMALL_STATE(70)] = 2345,
  [SMALL_STATE(71)] = 2375,
  [SMALL_STATE(72)] = 2400,
  [SMALL_STATE(73)] = 2425,
  [SMALL_STATE(74)] = 2450,
  [SMALL_STATE(75)] = 2470,
  [SMALL_STATE(76)] = 2494,
  [SMALL_STATE(77)] = 2513,
  [SMALL_STATE(78)] = 2536,
  [SMALL_STATE(79)] = 2557,
  [SMALL_STATE(80)] = 2575,
  [SMALL_STATE(81)] = 2593,
  [SMALL_STATE(82)] = 2611,
  [SMALL_STATE(83)] = 2629,
  [SMALL_STATE(84)] = 2651,
  [SMALL_STATE(85)] = 2673,
  [SMALL_STATE(86)] = 2691,
  [SMALL_STATE(87)] = 2715,
  [SMALL_STATE(88)] = 2733,
  [SMALL_STATE(89)] = 2751,
  [SMALL_STATE(90)] = 2771,
  [SMALL_STATE(91)] = 2800,
  [SMALL_STATE(92)] = 2817,
  [SMALL_STATE(93)] = 2834,
  [SMALL_STATE(94)] = 2863,
  [SMALL_STATE(95)] = 2884,
  [SMALL_STATE(96)] = 2901,
  [SMALL_STATE(97)] = 2918,
  [SMALL_STATE(98)] = 2935,
  [SMALL_STATE(99)] = 2952,
  [SMALL_STATE(100)] = 2969,
  [SMALL_STATE(101)] = 2988,
  [SMALL_STATE(102)] = 3005,
  [SMALL_STATE(103)] = 3022,
  [SMALL_STATE(104)] = 3039,
  [SMALL_STATE(105)] = 3056,
  [SMALL_STATE(106)] = 3085,
  [SMALL_STATE(107)] = 3114,
  [SMALL_STATE(108)] = 3131,
  [SMALL_STATE(109)] = 3147,
  [SMALL_STATE(110)] = 3163,
  [SMALL_STATE(111)] = 3179,
  [SMALL_STATE(112)] = 3195,
  [SMALL_STATE(113)] = 3211,
  [SMALL_STATE(114)] = 3227,
  [SMALL_STATE(115)] = 3243,
  [SMALL_STATE(116)] = 3259,
  [SMALL_STATE(117)] = 3275,
  [SMALL_STATE(118)] = 3291,
  [SMALL_STATE(119)] = 3307,
  [SMALL_STATE(120)] = 3323,
  [SMALL_STATE(121)] = 3339,
  [SMALL_STATE(122)] = 3355,
  [SMALL_STATE(123)] = 3371,
  [SMALL_STATE(124)] = 3387,
  [SMALL_STATE(125)] = 3403,
  [SMALL_STATE(126)] = 3419,
  [SMALL_STATE(127)] = 3435,
  [SMALL_STATE(128)] = 3453,
  [SMALL_STATE(129)] = 3469,
  [SMALL_STATE(130)] = 3485,
  [SMALL_STATE(131)] = 3501,
  [SMALL_STATE(132)] = 3519,
  [SMALL_STATE(133)] = 3535,
  [SMALL_STATE(134)] = 3551,
  [SMALL_STATE(135)] = 3569,
  [SMALL_STATE(136)] = 3592,
  [SMALL_STATE(137)] = 3615,
  [SMALL_STATE(138)] = 3638,
  [SMALL_STATE(139)] = 3653,
  [SMALL_STATE(140)] = 3676,
  [SMALL_STATE(141)] = 3699,
  [SMALL_STATE(142)] = 3714,
  [SMALL_STATE(143)] = 3737,
  [SMALL_STATE(144)] = 3760,
  [SMALL_STATE(145)] = 3783,
  [SMALL_STATE(146)] = 3806,
  [SMALL_STATE(147)] = 3821,
  [SMALL_STATE(148)] = 3844,
  [SMALL_STATE(149)] = 3867,
  [SMALL_STATE(150)] = 3890,
  [SMALL_STATE(151)] = 3913,
  [SMALL_STATE(152)] = 3936,
  [SMALL_STATE(153)] = 3959,
  [SMALL_STATE(154)] = 3982,
  [SMALL_STATE(155)] = 4005,
  [SMALL_STATE(156)] = 4028,
  [SMALL_STATE(157)] = 4051,
  [SMALL_STATE(158)] = 4074,
  [SMALL_STATE(159)] = 4097,
  [SMALL_STATE(160)] = 4120,
  [SMALL_STATE(161)] = 4130,
  [SMALL_STATE(162)] = 4140,
  [SMALL_STATE(163)] = 4150,
  [SMALL_STATE(164)] = 4160,
  [SMALL_STATE(165)] = 4170,
  [SMALL_STATE(166)] = 4174,
  [SMALL_STATE(167)] = 4178,
  [SMALL_STATE(168)] = 4182,
  [SMALL_STATE(169)] = 4186,
  [SMALL_STATE(170)] = 4190,
  [SMALL_STATE(171)] = 4194,
  [SMALL_STATE(172)] = 4198,
  [SMALL_STATE(173)] = 4202,
  [SMALL_STATE(174)] = 4206,
  [SMALL_STATE(175)] = 4210,
  [SMALL_STATE(176)] = 4214,
  [SMALL_STATE(177)] = 4218,
  [SMALL_STATE(178)] = 4222,
  [SMALL_STATE(179)] = 4226,
  [SMALL_STATE(180)] = 4230,
  [SMALL_STATE(181)] = 4234,
  [SMALL_STATE(182)] = 4238,
  [SMALL_STATE(183)] = 4242,
  [SMALL_STATE(184)] = 4246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_chain, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_chain, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_chain, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_chain, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [419] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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

TS_PUBLIC const TSLanguage *tree_sitter_wlanguage(void) {
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
