#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  sym__line_end = 2,
  anon_sym_BSLASH = 3,
  anon_sym_COLON = 4,
  anon_sym_format = 5,
  anon_sym_section = 6,
  aux_sym_section_directive_token1 = 7,
  anon_sym_segment = 8,
  sym_control_directive = 9,
  sym_prepoc_directive = 10,
  anon_sym_mov = 11,
  anon_sym_movsx = 12,
  anon_sym_movzx = 13,
  sym_identifier = 14,
  anon_sym_db = 15,
  anon_sym_dw = 16,
  anon_sym_dd = 17,
  anon_sym_dq = 18,
  anon_sym_dt = 19,
  aux_sym_value_token1 = 20,
  anon_sym_ELF = 21,
  anon_sym_ELF32 = 22,
  anon_sym_executable = 23,
  anon_sym_COFF = 24,
  anon_sym_readable = 25,
  anon_sym_writeable = 26,
  anon_sym_al = 27,
  anon_sym_ah = 28,
  anon_sym_bl = 29,
  anon_sym_bh = 30,
  sym_source_file = 31,
  sym_comment = 32,
  sym__source_line = 33,
  sym__statement = 34,
  sym__directive = 35,
  sym_instruction = 36,
  sym_data_definition = 37,
  sym_label = 38,
  sym_format_directive = 39,
  sym_section_directive = 40,
  sym_actual_instruction = 41,
  sym_operands = 42,
  sym_data_directive = 43,
  sym_value = 44,
  sym__valid_format = 45,
  sym__valid_format_suffix = 46,
  sym__segment_flags = 47,
  sym_identifier_or_registers = 48,
  sym__registers = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_section_directive_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__line_end] = "_line_end",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_COLON] = ":",
  [anon_sym_format] = "format",
  [anon_sym_section] = "section",
  [aux_sym_section_directive_token1] = "section_directive_token1",
  [anon_sym_segment] = "segment",
  [sym_control_directive] = "control_directive",
  [sym_prepoc_directive] = "prepoc_directive",
  [anon_sym_mov] = "mov",
  [anon_sym_movsx] = "movsx",
  [anon_sym_movzx] = "movzx",
  [sym_identifier] = "identifier",
  [anon_sym_db] = "db",
  [anon_sym_dw] = "dw",
  [anon_sym_dd] = "dd",
  [anon_sym_dq] = "dq",
  [anon_sym_dt] = "dt",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_ELF] = "ELF",
  [anon_sym_ELF32] = "ELF32",
  [anon_sym_executable] = "executable",
  [anon_sym_COFF] = "COFF",
  [anon_sym_readable] = "readable",
  [anon_sym_writeable] = "writeable",
  [anon_sym_al] = "al",
  [anon_sym_ah] = "ah",
  [anon_sym_bl] = "bl",
  [anon_sym_bh] = "bh",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym__source_line] = "_source_line",
  [sym__statement] = "_statement",
  [sym__directive] = "_directive",
  [sym_instruction] = "instruction",
  [sym_data_definition] = "data_definition",
  [sym_label] = "label",
  [sym_format_directive] = "format_directive",
  [sym_section_directive] = "section_directive",
  [sym_actual_instruction] = "actual_instruction",
  [sym_operands] = "operands",
  [sym_data_directive] = "data_directive",
  [sym_value] = "value",
  [sym__valid_format] = "_valid_format",
  [sym__valid_format_suffix] = "_valid_format_suffix",
  [sym__segment_flags] = "_segment_flags",
  [sym_identifier_or_registers] = "identifier_or_registers",
  [sym__registers] = "_registers",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_directive_repeat1] = "section_directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__line_end] = sym__line_end,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_section] = anon_sym_section,
  [aux_sym_section_directive_token1] = aux_sym_section_directive_token1,
  [anon_sym_segment] = anon_sym_segment,
  [sym_control_directive] = sym_control_directive,
  [sym_prepoc_directive] = sym_prepoc_directive,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_movsx] = anon_sym_movsx,
  [anon_sym_movzx] = anon_sym_movzx,
  [sym_identifier] = sym_identifier,
  [anon_sym_db] = anon_sym_db,
  [anon_sym_dw] = anon_sym_dw,
  [anon_sym_dd] = anon_sym_dd,
  [anon_sym_dq] = anon_sym_dq,
  [anon_sym_dt] = anon_sym_dt,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_ELF] = anon_sym_ELF,
  [anon_sym_ELF32] = anon_sym_ELF32,
  [anon_sym_executable] = anon_sym_executable,
  [anon_sym_COFF] = anon_sym_COFF,
  [anon_sym_readable] = anon_sym_readable,
  [anon_sym_writeable] = anon_sym_writeable,
  [anon_sym_al] = anon_sym_al,
  [anon_sym_ah] = anon_sym_ah,
  [anon_sym_bl] = anon_sym_bl,
  [anon_sym_bh] = anon_sym_bh,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym__source_line] = sym__source_line,
  [sym__statement] = sym__statement,
  [sym__directive] = sym__directive,
  [sym_instruction] = sym_instruction,
  [sym_data_definition] = sym_data_definition,
  [sym_label] = sym_label,
  [sym_format_directive] = sym_format_directive,
  [sym_section_directive] = sym_section_directive,
  [sym_actual_instruction] = sym_actual_instruction,
  [sym_operands] = sym_operands,
  [sym_data_directive] = sym_data_directive,
  [sym_value] = sym_value,
  [sym__valid_format] = sym__valid_format,
  [sym__valid_format_suffix] = sym__valid_format_suffix,
  [sym__segment_flags] = sym__segment_flags,
  [sym_identifier_or_registers] = sym_identifier_or_registers,
  [sym__registers] = sym__registers,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_directive_repeat1] = aux_sym_section_directive_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_segment] = {
    .visible = true,
    .named = false,
  },
  [sym_control_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_prepoc_directive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mov] = {
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
  [sym_identifier] = {
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
  [anon_sym_dt] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ELF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELF32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COFF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writeable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_al] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ah] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bh] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__source_line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_data_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_format_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_section_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_actual_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_data_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__valid_format] = {
    .visible = false,
    .named = true,
  },
  [sym__valid_format_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym__segment_flags] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier_or_registers] = {
    .visible = true,
    .named = true,
  },
  [sym__registers] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_directive_repeat1] = {
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 72,
        '\r', 2,
        ':', 74,
        ';', 70,
        'C', 10,
        '\\', 73,
        'd', 16,
        'e', 67,
        'r', 24,
        'w', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\r') SKIP(3);
      if (lookahead == ';') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(132);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == 'F') ADVANCE(134);
      END_STATE();
    case 8:
      if (lookahead == 'F') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'q') ADVANCE(128);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '\r') SKIP(68);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 's') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__line_end);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__line_end);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_format);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_section);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_section_directive_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_segment);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_segment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_control_directive);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_control_directive);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_prepoc_directive);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_prepoc_directive);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 'z') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(124);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'z') ADVANCE(66);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_movsx);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_movsx);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_movzx);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_movzx);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'g') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_db);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_dw);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_dd);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_dq);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_dt);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ELF);
      if (lookahead == '3') ADVANCE(5);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ELF32);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COFF);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_readable);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_writeable);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_al);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_al);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ah);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ah);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_bl);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_bl);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_bh);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_bh);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 68},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 68},
  [7] = {.lex_state = 68},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
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
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [aux_sym_section_directive_token1] = ACTIONS(1),
    [anon_sym_segment] = ACTIONS(1),
    [sym_control_directive] = ACTIONS(1),
    [sym_prepoc_directive] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_movsx] = ACTIONS(1),
    [anon_sym_movzx] = ACTIONS(1),
    [anon_sym_db] = ACTIONS(1),
    [anon_sym_dw] = ACTIONS(1),
    [anon_sym_dd] = ACTIONS(1),
    [anon_sym_dq] = ACTIONS(1),
    [anon_sym_dt] = ACTIONS(1),
    [aux_sym_value_token1] = ACTIONS(1),
    [anon_sym_ELF] = ACTIONS(1),
    [anon_sym_ELF32] = ACTIONS(1),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_COFF] = ACTIONS(1),
    [anon_sym_readable] = ACTIONS(1),
    [anon_sym_writeable] = ACTIONS(1),
    [anon_sym_al] = ACTIONS(1),
    [anon_sym_ah] = ACTIONS(1),
    [anon_sym_bl] = ACTIONS(1),
    [anon_sym_bh] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_comment] = STATE(1),
    [sym__source_line] = STATE(4),
    [sym__statement] = STATE(24),
    [sym__directive] = STATE(22),
    [sym_instruction] = STATE(22),
    [sym_data_definition] = STATE(22),
    [sym_label] = STATE(22),
    [sym_format_directive] = STATE(20),
    [sym_section_directive] = STATE(20),
    [sym_actual_instruction] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_format] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(9),
    [anon_sym_segment] = ACTIONS(11),
    [sym_control_directive] = ACTIONS(13),
    [sym_prepoc_directive] = ACTIONS(13),
    [anon_sym_mov] = ACTIONS(15),
    [anon_sym_movsx] = ACTIONS(15),
    [anon_sym_movzx] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_format,
    ACTIONS(9), 1,
      anon_sym_section,
    ACTIONS(11), 1,
      anon_sym_segment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(4), 1,
      sym__source_line,
    STATE(5), 1,
      sym_actual_instruction,
    STATE(24), 1,
      sym__statement,
    ACTIONS(13), 2,
      sym_control_directive,
      sym_prepoc_directive,
    STATE(20), 2,
      sym_format_directive,
      sym_section_directive,
    ACTIONS(15), 3,
      anon_sym_mov,
      anon_sym_movsx,
      anon_sym_movzx,
    STATE(22), 4,
      sym__directive,
      sym_instruction,
      sym_data_definition,
      sym_label,
  [53] = 14,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_format,
    ACTIONS(26), 1,
      anon_sym_section,
    ACTIONS(29), 1,
      anon_sym_segment,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(4), 1,
      sym__source_line,
    STATE(5), 1,
      sym_actual_instruction,
    STATE(24), 1,
      sym__statement,
    ACTIONS(32), 2,
      sym_control_directive,
      sym_prepoc_directive,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(20), 2,
      sym_format_directive,
      sym_section_directive,
    ACTIONS(35), 3,
      anon_sym_mov,
      anon_sym_movsx,
      anon_sym_movzx,
    STATE(22), 4,
      sym__directive,
      sym_instruction,
      sym_data_definition,
      sym_label,
  [104] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_comment,
    ACTIONS(43), 9,
      anon_sym_format,
      anon_sym_section,
      anon_sym_segment,
      sym_control_directive,
      sym_prepoc_directive,
      anon_sym_mov,
      anon_sym_movsx,
      anon_sym_movzx,
      sym_identifier,
  [125] = 9,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(47), 1,
      sym__line_end,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(5), 1,
      sym_comment,
    STATE(25), 1,
      sym__registers,
    STATE(27), 1,
      sym_operands,
    STATE(28), 1,
      sym_identifier_or_registers,
    ACTIONS(53), 4,
      anon_sym_al,
      anon_sym_ah,
      anon_sym_bl,
      anon_sym_bh,
  [156] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    ACTIONS(57), 9,
      anon_sym_format,
      anon_sym_section,
      anon_sym_segment,
      sym_control_directive,
      sym_prepoc_directive,
      anon_sym_mov,
      anon_sym_movsx,
      anon_sym_movzx,
      sym_identifier,
  [177] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
    ACTIONS(61), 9,
      anon_sym_format,
      anon_sym_section,
      anon_sym_segment,
      sym_control_directive,
      sym_prepoc_directive,
      anon_sym_mov,
      anon_sym_movsx,
      anon_sym_movzx,
      sym_identifier,
  [198] = 7,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 1,
      sym__line_end,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      anon_sym_COLON,
    STATE(8), 1,
      sym_comment,
    STATE(19), 1,
      sym_data_directive,
    ACTIONS(69), 5,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
      anon_sym_dt,
  [224] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      sym__line_end,
    STATE(9), 1,
      sym_comment,
    ACTIONS(73), 6,
      anon_sym_BSLASH,
      sym_identifier,
      anon_sym_al,
      anon_sym_ah,
      anon_sym_bl,
      anon_sym_bh,
  [242] = 7,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(75), 1,
      sym__line_end,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_section_directive_repeat1,
    STATE(16), 1,
      sym__segment_flags,
    ACTIONS(79), 3,
      anon_sym_executable,
      anon_sym_readable,
      anon_sym_writeable,
  [266] = 6,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(81), 1,
      sym__line_end,
    ACTIONS(83), 1,
      anon_sym_BSLASH,
    STATE(16), 1,
      sym__segment_flags,
    STATE(11), 2,
      sym_comment,
      aux_sym_section_directive_repeat1,
    ACTIONS(85), 3,
      anon_sym_executable,
      anon_sym_readable,
      anon_sym_writeable,
  [288] = 6,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(75), 1,
      sym__line_end,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      sym_comment,
    STATE(32), 1,
      sym__segment_flags,
    ACTIONS(79), 3,
      anon_sym_executable,
      anon_sym_readable,
      anon_sym_writeable,
  [309] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      aux_sym_section_directive_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(16), 1,
      sym__segment_flags,
    ACTIONS(88), 3,
      anon_sym_executable,
      anon_sym_readable,
      anon_sym_writeable,
  [327] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(90), 1,
      sym__line_end,
    STATE(14), 1,
      sym_comment,
    ACTIONS(92), 4,
      anon_sym_BSLASH,
      anon_sym_executable,
      anon_sym_readable,
      anon_sym_writeable,
  [343] = 6,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      sym__line_end,
    ACTIONS(96), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      sym_comment,
    STATE(31), 1,
      sym__valid_format_suffix,
    ACTIONS(98), 2,
      anon_sym_executable,
      anon_sym_COFF,
  [363] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(100), 1,
      sym__line_end,
    STATE(16), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_BSLASH,
      anon_sym_executable,
      anon_sym_readable,
      anon_sym_writeable,
  [379] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(104), 1,
      sym__line_end,
    STATE(17), 1,
      sym_comment,
    ACTIONS(106), 3,
      anon_sym_BSLASH,
      anon_sym_executable,
      anon_sym_COFF,
  [394] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(108), 1,
      anon_sym_ELF,
    ACTIONS(110), 1,
      anon_sym_ELF32,
    STATE(15), 1,
      sym__valid_format,
    STATE(18), 1,
      sym_comment,
  [410] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    STATE(33), 1,
      sym_value,
    ACTIONS(112), 2,
      sym_identifier,
      aux_sym_value_token1,
  [424] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      sym__line_end,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      sym_comment,
  [437] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(118), 2,
      sym_identifier,
      aux_sym_value_token1,
  [448] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(120), 1,
      sym__line_end,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    STATE(22), 1,
      sym_comment,
  [461] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(124), 1,
      sym__line_end,
    ACTIONS(126), 1,
      anon_sym_BSLASH,
    STATE(23), 1,
      sym_comment,
  [474] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      sym__line_end,
    ACTIONS(130), 1,
      anon_sym_BSLASH,
    STATE(24), 1,
      sym_comment,
  [487] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(132), 1,
      sym__line_end,
    ACTIONS(134), 1,
      anon_sym_BSLASH,
    STATE(25), 1,
      sym_comment,
  [500] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(136), 1,
      sym__line_end,
    ACTIONS(138), 1,
      anon_sym_BSLASH,
    STATE(26), 1,
      sym_comment,
  [513] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(140), 1,
      sym__line_end,
    ACTIONS(142), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      sym_comment,
  [526] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(144), 1,
      sym__line_end,
    ACTIONS(146), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      sym_comment,
  [539] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      sym__line_end,
    ACTIONS(150), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym_comment,
  [552] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      sym__line_end,
    ACTIONS(154), 1,
      anon_sym_BSLASH,
    STATE(30), 1,
      sym_comment,
  [565] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(156), 1,
      sym__line_end,
    ACTIONS(158), 1,
      anon_sym_BSLASH,
    STATE(31), 1,
      sym_comment,
  [578] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(160), 1,
      sym__line_end,
    ACTIONS(162), 1,
      anon_sym_BSLASH,
    STATE(32), 1,
      sym_comment,
  [591] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(164), 1,
      sym__line_end,
    ACTIONS(166), 1,
      anon_sym_BSLASH,
    STATE(33), 1,
      sym_comment,
  [604] = 3,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(168), 1,
      sym__line_end,
    STATE(34), 1,
      sym_comment,
  [614] = 3,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(170), 1,
      sym__line_end,
    STATE(35), 1,
      sym_comment,
  [624] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      aux_sym_section_directive_token1,
    STATE(36), 1,
      sym_comment,
  [634] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_comment,
  [644] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 224,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 266,
  [SMALL_STATE(12)] = 288,
  [SMALL_STATE(13)] = 309,
  [SMALL_STATE(14)] = 327,
  [SMALL_STATE(15)] = 343,
  [SMALL_STATE(16)] = 363,
  [SMALL_STATE(17)] = 379,
  [SMALL_STATE(18)] = 394,
  [SMALL_STATE(19)] = 410,
  [SMALL_STATE(20)] = 424,
  [SMALL_STATE(21)] = 437,
  [SMALL_STATE(22)] = 448,
  [SMALL_STATE(23)] = 461,
  [SMALL_STATE(24)] = 474,
  [SMALL_STATE(25)] = 487,
  [SMALL_STATE(26)] = 500,
  [SMALL_STATE(27)] = 513,
  [SMALL_STATE(28)] = 526,
  [SMALL_STATE(29)] = 539,
  [SMALL_STATE(30)] = 552,
  [SMALL_STATE(31)] = 565,
  [SMALL_STATE(32)] = 578,
  [SMALL_STATE(33)] = 591,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 614,
  [SMALL_STATE(36)] = 624,
  [SMALL_STATE(37)] = 634,
  [SMALL_STATE(38)] = 644,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_line, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__source_line, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_line, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__source_line, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_instruction, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actual_instruction, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_directive, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_directive, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_directive_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_directive_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__segment_flags, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__segment_flags, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_directive, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_directive_repeat1, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_directive_repeat1, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valid_format, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valid_format, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directive, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_directive, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_or_registers, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_or_registers, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__registers, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__registers, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valid_format_suffix, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__valid_format_suffix, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_directive, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_directive, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_directive, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_definition, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_definition, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_fasm(void) {
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
