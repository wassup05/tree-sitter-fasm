#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 384
#define ALIAS_COUNT 0
#define TOKEN_COUNT 363
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym__line_end = 2,
  anon_sym_BSLASH = 3,
  anon_sym_byte = 4,
  anon_sym_word = 5,
  anon_sym_dword = 6,
  anon_sym_qword = 7,
  anon_sym_tbyte = 8,
  anon_sym_tword = 9,
  anon_sym_dqword = 10,
  anon_sym_xword = 11,
  anon_sym_qqword = 12,
  anon_sym_yword = 13,
  anon_sym_dqqword = 14,
  anon_sym_zword = 15,
  anon_sym_BYTE = 16,
  anon_sym_WORD = 17,
  anon_sym_DWORD = 18,
  anon_sym_QWORD = 19,
  anon_sym_TBYTE = 20,
  anon_sym_TWORD = 21,
  anon_sym_DQWORD = 22,
  anon_sym_XWORD = 23,
  anon_sym_QQWORD = 24,
  anon_sym_YWORD = 25,
  anon_sym_DQQWORD = 26,
  anon_sym_ZWORD = 27,
  anon_sym_COLON = 28,
  anon_sym_format = 29,
  anon_sym_FORMAT = 30,
  anon_sym_section = 31,
  anon_sym_SECTION = 32,
  aux_sym_section_directive_token1 = 33,
  aux_sym_section_directive_token2 = 34,
  anon_sym_segment = 35,
  anon_sym_SEGMENT = 36,
  sym_control_directive = 37,
  sym_prepoc_directive = 38,
  anon_sym_syscall = 39,
  anon_sym_aaa = 40,
  anon_sym_aad = 41,
  anon_sym_aam = 42,
  anon_sym_add = 43,
  anon_sym_sub = 44,
  anon_sym_mul = 45,
  anon_sym_imul = 46,
  anon_sym_div = 47,
  anon_sym_idiv = 48,
  anon_sym_mov = 49,
  anon_sym_movb = 50,
  anon_sym_movw = 51,
  anon_sym_movd = 52,
  anon_sym_movq = 53,
  anon_sym_movt = 54,
  anon_sym_movzx = 55,
  anon_sym_movsx = 56,
  anon_sym_movdir64b = 57,
  anon_sym_shufps = 58,
  anon_sym_or = 59,
  anon_sym_and = 60,
  anon_sym_not = 61,
  anon_sym_xor = 62,
  anon_sym_pxor = 63,
  anon_sym_addps = 64,
  anon_sym_mulps = 65,
  anon_sym_SYSCALL = 66,
  anon_sym_AAA = 67,
  anon_sym_AAD = 68,
  anon_sym_AAM = 69,
  anon_sym_ADD = 70,
  anon_sym_SUB = 71,
  anon_sym_MUL = 72,
  anon_sym_IMUL = 73,
  anon_sym_DIV = 74,
  anon_sym_IDIV = 75,
  anon_sym_MOV = 76,
  anon_sym_MOVB = 77,
  anon_sym_MOVW = 78,
  anon_sym_MOVD = 79,
  anon_sym_MOVQ = 80,
  anon_sym_MOVT = 81,
  anon_sym_MOVZX = 82,
  anon_sym_MOVSX = 83,
  anon_sym_MOVDIR64B = 84,
  anon_sym_SHUFPS = 85,
  anon_sym_OR = 86,
  anon_sym_AND = 87,
  anon_sym_NOT = 88,
  anon_sym_XOR = 89,
  anon_sym_PXOR = 90,
  anon_sym_ADDPS = 91,
  anon_sym_MULPS = 92,
  sym_identifier = 93,
  anon_sym_db = 94,
  anon_sym_dw = 95,
  anon_sym_dd = 96,
  anon_sym_dq = 97,
  anon_sym_dt = 98,
  anon_sym_DB = 99,
  anon_sym_DW = 100,
  anon_sym_DD = 101,
  anon_sym_DQ = 102,
  anon_sym_DT = 103,
  sym__floats = 104,
  sym__integer = 105,
  anon_sym_elf = 106,
  anon_sym_elf64 = 107,
  anon_sym_bin = 108,
  anon_sym_mscoff = 109,
  anon_sym_ELF = 110,
  anon_sym_ELF64 = 111,
  anon_sym_BIN = 112,
  anon_sym_MSCOFF = 113,
  anon_sym_executable = 114,
  anon_sym_EXECUTABLE = 115,
  anon_sym_readable = 116,
  anon_sym_writeable = 117,
  anon_sym_READABLE = 118,
  anon_sym_WRITEABLE = 119,
  anon_sym_si = 120,
  anon_sym_di = 121,
  anon_sym_sp = 122,
  anon_sym_bp = 123,
  anon_sym_eax = 124,
  anon_sym_ebx = 125,
  anon_sym_ecx = 126,
  anon_sym_edx = 127,
  anon_sym_esi = 128,
  anon_sym_edi = 129,
  anon_sym_esp = 130,
  anon_sym_ebp = 131,
  anon_sym_rax = 132,
  anon_sym_rbx = 133,
  anon_sym_rcx = 134,
  anon_sym_rdx = 135,
  anon_sym_rsi = 136,
  anon_sym_rdi = 137,
  anon_sym_rsp = 138,
  anon_sym_rbp = 139,
  anon_sym_flags = 140,
  anon_sym_eflags = 141,
  anon_sym_rflags = 142,
  anon_sym_cs = 143,
  anon_sym_ds = 144,
  anon_sym_ss = 145,
  anon_sym_es = 146,
  anon_sym_fs = 147,
  anon_sym_gs = 148,
  anon_sym_al = 149,
  anon_sym_ah = 150,
  anon_sym_ax = 151,
  anon_sym_AL = 152,
  anon_sym_AH = 153,
  anon_sym_AX = 154,
  anon_sym_bl = 155,
  anon_sym_bh = 156,
  anon_sym_bx = 157,
  anon_sym_BL = 158,
  anon_sym_BH = 159,
  anon_sym_BX = 160,
  anon_sym_cl = 161,
  anon_sym_ch = 162,
  anon_sym_cx = 163,
  anon_sym_CL = 164,
  anon_sym_CH = 165,
  anon_sym_CX = 166,
  anon_sym_dl = 167,
  anon_sym_dh = 168,
  anon_sym_dx = 169,
  anon_sym_DL = 170,
  anon_sym_DH = 171,
  anon_sym_DX = 172,
  anon_sym_mm0 = 173,
  anon_sym_mm1 = 174,
  anon_sym_mm2 = 175,
  anon_sym_mm3 = 176,
  anon_sym_mm4 = 177,
  anon_sym_mm5 = 178,
  anon_sym_mm6 = 179,
  anon_sym_mm7 = 180,
  anon_sym_mm8 = 181,
  anon_sym_mm9 = 182,
  anon_sym_mm10 = 183,
  anon_sym_mm11 = 184,
  anon_sym_mm12 = 185,
  anon_sym_mm13 = 186,
  anon_sym_mm14 = 187,
  anon_sym_mm15 = 188,
  anon_sym_MM0 = 189,
  anon_sym_MM1 = 190,
  anon_sym_MM2 = 191,
  anon_sym_MM3 = 192,
  anon_sym_MM4 = 193,
  anon_sym_MM5 = 194,
  anon_sym_MM6 = 195,
  anon_sym_MM7 = 196,
  anon_sym_MM8 = 197,
  anon_sym_MM9 = 198,
  anon_sym_MM10 = 199,
  anon_sym_MM11 = 200,
  anon_sym_MM12 = 201,
  anon_sym_MM13 = 202,
  anon_sym_MM14 = 203,
  anon_sym_MM15 = 204,
  anon_sym_xmm0 = 205,
  anon_sym_xmm1 = 206,
  anon_sym_xmm2 = 207,
  anon_sym_xmm3 = 208,
  anon_sym_xmm4 = 209,
  anon_sym_xmm5 = 210,
  anon_sym_xmm6 = 211,
  anon_sym_xmm7 = 212,
  anon_sym_xmm8 = 213,
  anon_sym_xmm9 = 214,
  anon_sym_xmm10 = 215,
  anon_sym_xmm11 = 216,
  anon_sym_xmm12 = 217,
  anon_sym_xmm13 = 218,
  anon_sym_xmm14 = 219,
  anon_sym_xmm15 = 220,
  anon_sym_XMM0 = 221,
  anon_sym_XMM1 = 222,
  anon_sym_XMM2 = 223,
  anon_sym_XMM3 = 224,
  anon_sym_XMM4 = 225,
  anon_sym_XMM5 = 226,
  anon_sym_XMM6 = 227,
  anon_sym_XMM7 = 228,
  anon_sym_XMM8 = 229,
  anon_sym_XMM9 = 230,
  anon_sym_XMM10 = 231,
  anon_sym_XMM11 = 232,
  anon_sym_XMM12 = 233,
  anon_sym_XMM13 = 234,
  anon_sym_XMM14 = 235,
  anon_sym_XMM15 = 236,
  anon_sym_ymm0 = 237,
  anon_sym_ymm1 = 238,
  anon_sym_ymm2 = 239,
  anon_sym_ymm3 = 240,
  anon_sym_ymm4 = 241,
  anon_sym_ymm5 = 242,
  anon_sym_ymm6 = 243,
  anon_sym_ymm7 = 244,
  anon_sym_ymm8 = 245,
  anon_sym_ymm9 = 246,
  anon_sym_ymm10 = 247,
  anon_sym_ymm11 = 248,
  anon_sym_ymm12 = 249,
  anon_sym_ymm13 = 250,
  anon_sym_ymm14 = 251,
  anon_sym_ymm15 = 252,
  anon_sym_YMM0 = 253,
  anon_sym_YMM1 = 254,
  anon_sym_YMM2 = 255,
  anon_sym_YMM3 = 256,
  anon_sym_YMM4 = 257,
  anon_sym_YMM5 = 258,
  anon_sym_YMM6 = 259,
  anon_sym_YMM7 = 260,
  anon_sym_YMM8 = 261,
  anon_sym_YMM9 = 262,
  anon_sym_YMM10 = 263,
  anon_sym_YMM11 = 264,
  anon_sym_YMM12 = 265,
  anon_sym_YMM13 = 266,
  anon_sym_YMM14 = 267,
  anon_sym_YMM15 = 268,
  anon_sym_zmm0 = 269,
  anon_sym_zmm1 = 270,
  anon_sym_zmm2 = 271,
  anon_sym_zmm3 = 272,
  anon_sym_zmm4 = 273,
  anon_sym_zmm5 = 274,
  anon_sym_zmm6 = 275,
  anon_sym_zmm7 = 276,
  anon_sym_zmm8 = 277,
  anon_sym_zmm9 = 278,
  anon_sym_zmm10 = 279,
  anon_sym_zmm11 = 280,
  anon_sym_zmm12 = 281,
  anon_sym_zmm13 = 282,
  anon_sym_zmm14 = 283,
  anon_sym_zmm15 = 284,
  anon_sym_ZMM0 = 285,
  anon_sym_ZMM1 = 286,
  anon_sym_ZMM2 = 287,
  anon_sym_ZMM3 = 288,
  anon_sym_ZMM4 = 289,
  anon_sym_ZMM5 = 290,
  anon_sym_ZMM6 = 291,
  anon_sym_ZMM7 = 292,
  anon_sym_ZMM8 = 293,
  anon_sym_ZMM9 = 294,
  anon_sym_ZMM10 = 295,
  anon_sym_ZMM11 = 296,
  anon_sym_ZMM12 = 297,
  anon_sym_ZMM13 = 298,
  anon_sym_ZMM14 = 299,
  anon_sym_ZMM15 = 300,
  anon_sym_dr0 = 301,
  anon_sym_dr1 = 302,
  anon_sym_dr2 = 303,
  anon_sym_dr3 = 304,
  anon_sym_DR0 = 305,
  anon_sym_DR1 = 306,
  anon_sym_DR2 = 307,
  anon_sym_DR3 = 308,
  anon_sym_dr6 = 309,
  anon_sym_dr7 = 310,
  anon_sym_DR6 = 311,
  anon_sym_DR7 = 312,
  anon_sym_st0 = 313,
  anon_sym_st1 = 314,
  anon_sym_st2 = 315,
  anon_sym_st3 = 316,
  anon_sym_st4 = 317,
  anon_sym_st5 = 318,
  anon_sym_st6 = 319,
  anon_sym_st7 = 320,
  anon_sym_ST0 = 321,
  anon_sym_ST1 = 322,
  anon_sym_ST2 = 323,
  anon_sym_ST3 = 324,
  anon_sym_ST4 = 325,
  anon_sym_ST5 = 326,
  anon_sym_ST6 = 327,
  anon_sym_ST7 = 328,
  anon_sym_cr0 = 329,
  anon_sym_CR0 = 330,
  anon_sym_cr2 = 331,
  anon_sym_cr3 = 332,
  anon_sym_cr4 = 333,
  anon_sym_CR2 = 334,
  anon_sym_CR3 = 335,
  anon_sym_CR4 = 336,
  anon_sym_k0 = 337,
  anon_sym_k1 = 338,
  anon_sym_k2 = 339,
  anon_sym_k3 = 340,
  anon_sym_k4 = 341,
  anon_sym_k5 = 342,
  anon_sym_k6 = 343,
  anon_sym_k7 = 344,
  anon_sym_K0 = 345,
  anon_sym_K1 = 346,
  anon_sym_K2 = 347,
  anon_sym_K3 = 348,
  anon_sym_K4 = 349,
  anon_sym_K5 = 350,
  anon_sym_K6 = 351,
  anon_sym_K7 = 352,
  anon_sym_bnd0 = 353,
  anon_sym_bnd1 = 354,
  anon_sym_bnd2 = 355,
  anon_sym_bnd3 = 356,
  anon_sym_bnd4 = 357,
  anon_sym_BND0 = 358,
  anon_sym_BND1 = 359,
  anon_sym_BND2 = 360,
  anon_sym_BND3 = 361,
  anon_sym_BND4 = 362,
  sym_source_file = 363,
  sym__source_line = 364,
  sym__statement = 365,
  sym__directive = 366,
  sym_instruction = 367,
  sym__size_indicators = 368,
  sym_data_definition = 369,
  sym_label = 370,
  sym_format_directive = 371,
  sym_section_directive = 372,
  sym_actual_instruction = 373,
  sym_operands = 374,
  sym_data_directive = 375,
  sym_value = 376,
  sym__valid_format = 377,
  sym__valid_format_suffix = 378,
  sym__segment_flags = 379,
  sym_identifier_or_registers = 380,
  sym__registers = 381,
  aux_sym_source_file_repeat1 = 382,
  aux_sym_section_directive_repeat1 = 383,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__line_end] = "_line_end",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_tbyte] = "tbyte",
  [anon_sym_tword] = "tword",
  [anon_sym_dqword] = "dqword",
  [anon_sym_xword] = "xword",
  [anon_sym_qqword] = "qqword",
  [anon_sym_yword] = "yword",
  [anon_sym_dqqword] = "dqqword",
  [anon_sym_zword] = "zword",
  [anon_sym_BYTE] = "BYTE",
  [anon_sym_WORD] = "WORD",
  [anon_sym_DWORD] = "DWORD",
  [anon_sym_QWORD] = "QWORD",
  [anon_sym_TBYTE] = "TBYTE",
  [anon_sym_TWORD] = "TWORD",
  [anon_sym_DQWORD] = "DQWORD",
  [anon_sym_XWORD] = "XWORD",
  [anon_sym_QQWORD] = "QQWORD",
  [anon_sym_YWORD] = "YWORD",
  [anon_sym_DQQWORD] = "DQQWORD",
  [anon_sym_ZWORD] = "ZWORD",
  [anon_sym_COLON] = ":",
  [anon_sym_format] = "format",
  [anon_sym_FORMAT] = "FORMAT",
  [anon_sym_section] = "section",
  [anon_sym_SECTION] = "SECTION",
  [aux_sym_section_directive_token1] = "section_directive_token1",
  [aux_sym_section_directive_token2] = "section_directive_token2",
  [anon_sym_segment] = "segment",
  [anon_sym_SEGMENT] = "SEGMENT",
  [sym_control_directive] = "control_directive",
  [sym_prepoc_directive] = "prepoc_directive",
  [anon_sym_syscall] = "syscall",
  [anon_sym_aaa] = "aaa",
  [anon_sym_aad] = "aad",
  [anon_sym_aam] = "aam",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_mul] = "mul",
  [anon_sym_imul] = "imul",
  [anon_sym_div] = "div",
  [anon_sym_idiv] = "idiv",
  [anon_sym_mov] = "mov",
  [anon_sym_movb] = "movb",
  [anon_sym_movw] = "movw",
  [anon_sym_movd] = "movd",
  [anon_sym_movq] = "movq",
  [anon_sym_movt] = "movt",
  [anon_sym_movzx] = "movzx",
  [anon_sym_movsx] = "movsx",
  [anon_sym_movdir64b] = "movdir64b",
  [anon_sym_shufps] = "shufps",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_xor] = "xor",
  [anon_sym_pxor] = "pxor",
  [anon_sym_addps] = "addps",
  [anon_sym_mulps] = "mulps",
  [anon_sym_SYSCALL] = "SYSCALL",
  [anon_sym_AAA] = "AAA",
  [anon_sym_AAD] = "AAD",
  [anon_sym_AAM] = "AAM",
  [anon_sym_ADD] = "ADD",
  [anon_sym_SUB] = "SUB",
  [anon_sym_MUL] = "MUL",
  [anon_sym_IMUL] = "IMUL",
  [anon_sym_DIV] = "DIV",
  [anon_sym_IDIV] = "IDIV",
  [anon_sym_MOV] = "MOV",
  [anon_sym_MOVB] = "MOVB",
  [anon_sym_MOVW] = "MOVW",
  [anon_sym_MOVD] = "MOVD",
  [anon_sym_MOVQ] = "MOVQ",
  [anon_sym_MOVT] = "MOVT",
  [anon_sym_MOVZX] = "MOVZX",
  [anon_sym_MOVSX] = "MOVSX",
  [anon_sym_MOVDIR64B] = "MOVDIR64B",
  [anon_sym_SHUFPS] = "SHUFPS",
  [anon_sym_OR] = "OR",
  [anon_sym_AND] = "AND",
  [anon_sym_NOT] = "NOT",
  [anon_sym_XOR] = "XOR",
  [anon_sym_PXOR] = "PXOR",
  [anon_sym_ADDPS] = "ADDPS",
  [anon_sym_MULPS] = "MULPS",
  [sym_identifier] = "identifier",
  [anon_sym_db] = "db",
  [anon_sym_dw] = "dw",
  [anon_sym_dd] = "dd",
  [anon_sym_dq] = "dq",
  [anon_sym_dt] = "dt",
  [anon_sym_DB] = "DB",
  [anon_sym_DW] = "DW",
  [anon_sym_DD] = "DD",
  [anon_sym_DQ] = "DQ",
  [anon_sym_DT] = "DT",
  [sym__floats] = "_floats",
  [sym__integer] = "_integer",
  [anon_sym_elf] = "elf",
  [anon_sym_elf64] = "elf64",
  [anon_sym_bin] = "bin",
  [anon_sym_mscoff] = "ms coff",
  [anon_sym_ELF] = "ELF",
  [anon_sym_ELF64] = "ELF64",
  [anon_sym_BIN] = "BIN",
  [anon_sym_MSCOFF] = "MS COFF",
  [anon_sym_executable] = "executable",
  [anon_sym_EXECUTABLE] = "EXECUTABLE",
  [anon_sym_readable] = "readable",
  [anon_sym_writeable] = "writeable",
  [anon_sym_READABLE] = "READABLE",
  [anon_sym_WRITEABLE] = "WRITEABLE",
  [anon_sym_si] = "si",
  [anon_sym_di] = "di",
  [anon_sym_sp] = "sp",
  [anon_sym_bp] = "bp",
  [anon_sym_eax] = "eax",
  [anon_sym_ebx] = "ebx",
  [anon_sym_ecx] = "ecx",
  [anon_sym_edx] = "edx",
  [anon_sym_esi] = "esi",
  [anon_sym_edi] = "edi",
  [anon_sym_esp] = "esp",
  [anon_sym_ebp] = "ebp",
  [anon_sym_rax] = "rax",
  [anon_sym_rbx] = "rbx",
  [anon_sym_rcx] = "rcx",
  [anon_sym_rdx] = "rdx",
  [anon_sym_rsi] = "rsi",
  [anon_sym_rdi] = "rdi",
  [anon_sym_rsp] = "rsp",
  [anon_sym_rbp] = "rbp",
  [anon_sym_flags] = "flags",
  [anon_sym_eflags] = "eflags",
  [anon_sym_rflags] = "rflags",
  [anon_sym_cs] = "cs",
  [anon_sym_ds] = "ds",
  [anon_sym_ss] = "ss",
  [anon_sym_es] = "es",
  [anon_sym_fs] = "fs",
  [anon_sym_gs] = "gs",
  [anon_sym_al] = "al",
  [anon_sym_ah] = "ah",
  [anon_sym_ax] = "ax",
  [anon_sym_AL] = "AL",
  [anon_sym_AH] = "AH",
  [anon_sym_AX] = "AX",
  [anon_sym_bl] = "bl",
  [anon_sym_bh] = "bh",
  [anon_sym_bx] = "bx",
  [anon_sym_BL] = "BL",
  [anon_sym_BH] = "BH",
  [anon_sym_BX] = "BX",
  [anon_sym_cl] = "cl",
  [anon_sym_ch] = "ch",
  [anon_sym_cx] = "cx",
  [anon_sym_CL] = "CL",
  [anon_sym_CH] = "CH",
  [anon_sym_CX] = "CX",
  [anon_sym_dl] = "dl",
  [anon_sym_dh] = "dh",
  [anon_sym_dx] = "dx",
  [anon_sym_DL] = "DL",
  [anon_sym_DH] = "DH",
  [anon_sym_DX] = "DX",
  [anon_sym_mm0] = "mm0",
  [anon_sym_mm1] = "mm1",
  [anon_sym_mm2] = "mm2",
  [anon_sym_mm3] = "mm3",
  [anon_sym_mm4] = "mm4",
  [anon_sym_mm5] = "mm5",
  [anon_sym_mm6] = "mm6",
  [anon_sym_mm7] = "mm7",
  [anon_sym_mm8] = "mm8",
  [anon_sym_mm9] = "mm9",
  [anon_sym_mm10] = "mm10",
  [anon_sym_mm11] = "mm11",
  [anon_sym_mm12] = "mm12",
  [anon_sym_mm13] = "mm13",
  [anon_sym_mm14] = "mm14",
  [anon_sym_mm15] = "mm15",
  [anon_sym_MM0] = "MM0",
  [anon_sym_MM1] = "MM1",
  [anon_sym_MM2] = "MM2",
  [anon_sym_MM3] = "MM3",
  [anon_sym_MM4] = "MM4",
  [anon_sym_MM5] = "MM5",
  [anon_sym_MM6] = "MM6",
  [anon_sym_MM7] = "MM7",
  [anon_sym_MM8] = "MM8",
  [anon_sym_MM9] = "MM9",
  [anon_sym_MM10] = "MM10",
  [anon_sym_MM11] = "MM11",
  [anon_sym_MM12] = "MM12",
  [anon_sym_MM13] = "MM13",
  [anon_sym_MM14] = "MM14",
  [anon_sym_MM15] = "MM15",
  [anon_sym_xmm0] = "xmm0",
  [anon_sym_xmm1] = "xmm1",
  [anon_sym_xmm2] = "xmm2",
  [anon_sym_xmm3] = "xmm3",
  [anon_sym_xmm4] = "xmm4",
  [anon_sym_xmm5] = "xmm5",
  [anon_sym_xmm6] = "xmm6",
  [anon_sym_xmm7] = "xmm7",
  [anon_sym_xmm8] = "xmm8",
  [anon_sym_xmm9] = "xmm9",
  [anon_sym_xmm10] = "xmm10",
  [anon_sym_xmm11] = "xmm11",
  [anon_sym_xmm12] = "xmm12",
  [anon_sym_xmm13] = "xmm13",
  [anon_sym_xmm14] = "xmm14",
  [anon_sym_xmm15] = "xmm15",
  [anon_sym_XMM0] = "XMM0",
  [anon_sym_XMM1] = "XMM1",
  [anon_sym_XMM2] = "XMM2",
  [anon_sym_XMM3] = "XMM3",
  [anon_sym_XMM4] = "XMM4",
  [anon_sym_XMM5] = "XMM5",
  [anon_sym_XMM6] = "XMM6",
  [anon_sym_XMM7] = "XMM7",
  [anon_sym_XMM8] = "XMM8",
  [anon_sym_XMM9] = "XMM9",
  [anon_sym_XMM10] = "XMM10",
  [anon_sym_XMM11] = "XMM11",
  [anon_sym_XMM12] = "XMM12",
  [anon_sym_XMM13] = "XMM13",
  [anon_sym_XMM14] = "XMM14",
  [anon_sym_XMM15] = "XMM15",
  [anon_sym_ymm0] = "ymm0",
  [anon_sym_ymm1] = "ymm1",
  [anon_sym_ymm2] = "ymm2",
  [anon_sym_ymm3] = "ymm3",
  [anon_sym_ymm4] = "ymm4",
  [anon_sym_ymm5] = "ymm5",
  [anon_sym_ymm6] = "ymm6",
  [anon_sym_ymm7] = "ymm7",
  [anon_sym_ymm8] = "ymm8",
  [anon_sym_ymm9] = "ymm9",
  [anon_sym_ymm10] = "ymm10",
  [anon_sym_ymm11] = "ymm11",
  [anon_sym_ymm12] = "ymm12",
  [anon_sym_ymm13] = "ymm13",
  [anon_sym_ymm14] = "ymm14",
  [anon_sym_ymm15] = "ymm15",
  [anon_sym_YMM0] = "YMM0",
  [anon_sym_YMM1] = "YMM1",
  [anon_sym_YMM2] = "YMM2",
  [anon_sym_YMM3] = "YMM3",
  [anon_sym_YMM4] = "YMM4",
  [anon_sym_YMM5] = "YMM5",
  [anon_sym_YMM6] = "YMM6",
  [anon_sym_YMM7] = "YMM7",
  [anon_sym_YMM8] = "YMM8",
  [anon_sym_YMM9] = "YMM9",
  [anon_sym_YMM10] = "YMM10",
  [anon_sym_YMM11] = "YMM11",
  [anon_sym_YMM12] = "YMM12",
  [anon_sym_YMM13] = "YMM13",
  [anon_sym_YMM14] = "YMM14",
  [anon_sym_YMM15] = "YMM15",
  [anon_sym_zmm0] = "zmm0",
  [anon_sym_zmm1] = "zmm1",
  [anon_sym_zmm2] = "zmm2",
  [anon_sym_zmm3] = "zmm3",
  [anon_sym_zmm4] = "zmm4",
  [anon_sym_zmm5] = "zmm5",
  [anon_sym_zmm6] = "zmm6",
  [anon_sym_zmm7] = "zmm7",
  [anon_sym_zmm8] = "zmm8",
  [anon_sym_zmm9] = "zmm9",
  [anon_sym_zmm10] = "zmm10",
  [anon_sym_zmm11] = "zmm11",
  [anon_sym_zmm12] = "zmm12",
  [anon_sym_zmm13] = "zmm13",
  [anon_sym_zmm14] = "zmm14",
  [anon_sym_zmm15] = "zmm15",
  [anon_sym_ZMM0] = "ZMM0",
  [anon_sym_ZMM1] = "ZMM1",
  [anon_sym_ZMM2] = "ZMM2",
  [anon_sym_ZMM3] = "ZMM3",
  [anon_sym_ZMM4] = "ZMM4",
  [anon_sym_ZMM5] = "ZMM5",
  [anon_sym_ZMM6] = "ZMM6",
  [anon_sym_ZMM7] = "ZMM7",
  [anon_sym_ZMM8] = "ZMM8",
  [anon_sym_ZMM9] = "ZMM9",
  [anon_sym_ZMM10] = "ZMM10",
  [anon_sym_ZMM11] = "ZMM11",
  [anon_sym_ZMM12] = "ZMM12",
  [anon_sym_ZMM13] = "ZMM13",
  [anon_sym_ZMM14] = "ZMM14",
  [anon_sym_ZMM15] = "ZMM15",
  [anon_sym_dr0] = "dr0",
  [anon_sym_dr1] = "dr1",
  [anon_sym_dr2] = "dr2",
  [anon_sym_dr3] = "dr3",
  [anon_sym_DR0] = "DR0",
  [anon_sym_DR1] = "DR1",
  [anon_sym_DR2] = "DR2",
  [anon_sym_DR3] = "DR3",
  [anon_sym_dr6] = "dr6",
  [anon_sym_dr7] = "dr7",
  [anon_sym_DR6] = "DR6",
  [anon_sym_DR7] = "DR7",
  [anon_sym_st0] = "st0",
  [anon_sym_st1] = "st1",
  [anon_sym_st2] = "st2",
  [anon_sym_st3] = "st3",
  [anon_sym_st4] = "st4",
  [anon_sym_st5] = "st5",
  [anon_sym_st6] = "st6",
  [anon_sym_st7] = "st7",
  [anon_sym_ST0] = "ST0",
  [anon_sym_ST1] = "ST1",
  [anon_sym_ST2] = "ST2",
  [anon_sym_ST3] = "ST3",
  [anon_sym_ST4] = "ST4",
  [anon_sym_ST5] = "ST5",
  [anon_sym_ST6] = "ST6",
  [anon_sym_ST7] = "ST7",
  [anon_sym_cr0] = "cr0",
  [anon_sym_CR0] = "CR0",
  [anon_sym_cr2] = "cr2",
  [anon_sym_cr3] = "cr3",
  [anon_sym_cr4] = "cr4",
  [anon_sym_CR2] = "CR2",
  [anon_sym_CR3] = "CR3",
  [anon_sym_CR4] = "CR4",
  [anon_sym_k0] = "k0",
  [anon_sym_k1] = "k1",
  [anon_sym_k2] = "k2",
  [anon_sym_k3] = "k3",
  [anon_sym_k4] = "k4",
  [anon_sym_k5] = "k5",
  [anon_sym_k6] = "k6",
  [anon_sym_k7] = "k7",
  [anon_sym_K0] = "K0",
  [anon_sym_K1] = "K1",
  [anon_sym_K2] = "K2",
  [anon_sym_K3] = "K3",
  [anon_sym_K4] = "K4",
  [anon_sym_K5] = "K5",
  [anon_sym_K6] = "K6",
  [anon_sym_K7] = "K7",
  [anon_sym_bnd0] = "bnd0",
  [anon_sym_bnd1] = "bnd1",
  [anon_sym_bnd2] = "bnd2",
  [anon_sym_bnd3] = "bnd3",
  [anon_sym_bnd4] = "bnd4",
  [anon_sym_BND0] = "BND0",
  [anon_sym_BND1] = "BND1",
  [anon_sym_BND2] = "BND2",
  [anon_sym_BND3] = "BND3",
  [anon_sym_BND4] = "BND4",
  [sym_source_file] = "source_file",
  [sym__source_line] = "_source_line",
  [sym__statement] = "_statement",
  [sym__directive] = "_directive",
  [sym_instruction] = "instruction",
  [sym__size_indicators] = "_size_indicators",
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
  [sym_comment] = sym_comment,
  [sym__line_end] = sym__line_end,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_tbyte] = anon_sym_tbyte,
  [anon_sym_tword] = anon_sym_tword,
  [anon_sym_dqword] = anon_sym_dqword,
  [anon_sym_xword] = anon_sym_xword,
  [anon_sym_qqword] = anon_sym_qqword,
  [anon_sym_yword] = anon_sym_yword,
  [anon_sym_dqqword] = anon_sym_dqqword,
  [anon_sym_zword] = anon_sym_zword,
  [anon_sym_BYTE] = anon_sym_BYTE,
  [anon_sym_WORD] = anon_sym_WORD,
  [anon_sym_DWORD] = anon_sym_DWORD,
  [anon_sym_QWORD] = anon_sym_QWORD,
  [anon_sym_TBYTE] = anon_sym_TBYTE,
  [anon_sym_TWORD] = anon_sym_TWORD,
  [anon_sym_DQWORD] = anon_sym_DQWORD,
  [anon_sym_XWORD] = anon_sym_XWORD,
  [anon_sym_QQWORD] = anon_sym_QQWORD,
  [anon_sym_YWORD] = anon_sym_YWORD,
  [anon_sym_DQQWORD] = anon_sym_DQQWORD,
  [anon_sym_ZWORD] = anon_sym_ZWORD,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_FORMAT] = anon_sym_FORMAT,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_SECTION] = anon_sym_SECTION,
  [aux_sym_section_directive_token1] = aux_sym_section_directive_token1,
  [aux_sym_section_directive_token2] = aux_sym_section_directive_token2,
  [anon_sym_segment] = anon_sym_segment,
  [anon_sym_SEGMENT] = anon_sym_SEGMENT,
  [sym_control_directive] = sym_control_directive,
  [sym_prepoc_directive] = sym_prepoc_directive,
  [anon_sym_syscall] = anon_sym_syscall,
  [anon_sym_aaa] = anon_sym_aaa,
  [anon_sym_aad] = anon_sym_aad,
  [anon_sym_aam] = anon_sym_aam,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_imul] = anon_sym_imul,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_idiv] = anon_sym_idiv,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_movb] = anon_sym_movb,
  [anon_sym_movw] = anon_sym_movw,
  [anon_sym_movd] = anon_sym_movd,
  [anon_sym_movq] = anon_sym_movq,
  [anon_sym_movt] = anon_sym_movt,
  [anon_sym_movzx] = anon_sym_movzx,
  [anon_sym_movsx] = anon_sym_movsx,
  [anon_sym_movdir64b] = anon_sym_movdir64b,
  [anon_sym_shufps] = anon_sym_shufps,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_pxor] = anon_sym_pxor,
  [anon_sym_addps] = anon_sym_addps,
  [anon_sym_mulps] = anon_sym_mulps,
  [anon_sym_SYSCALL] = anon_sym_SYSCALL,
  [anon_sym_AAA] = anon_sym_AAA,
  [anon_sym_AAD] = anon_sym_AAD,
  [anon_sym_AAM] = anon_sym_AAM,
  [anon_sym_ADD] = anon_sym_ADD,
  [anon_sym_SUB] = anon_sym_SUB,
  [anon_sym_MUL] = anon_sym_MUL,
  [anon_sym_IMUL] = anon_sym_IMUL,
  [anon_sym_DIV] = anon_sym_DIV,
  [anon_sym_IDIV] = anon_sym_IDIV,
  [anon_sym_MOV] = anon_sym_MOV,
  [anon_sym_MOVB] = anon_sym_MOVB,
  [anon_sym_MOVW] = anon_sym_MOVW,
  [anon_sym_MOVD] = anon_sym_MOVD,
  [anon_sym_MOVQ] = anon_sym_MOVQ,
  [anon_sym_MOVT] = anon_sym_MOVT,
  [anon_sym_MOVZX] = anon_sym_MOVZX,
  [anon_sym_MOVSX] = anon_sym_MOVSX,
  [anon_sym_MOVDIR64B] = anon_sym_MOVDIR64B,
  [anon_sym_SHUFPS] = anon_sym_SHUFPS,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_XOR] = anon_sym_XOR,
  [anon_sym_PXOR] = anon_sym_PXOR,
  [anon_sym_ADDPS] = anon_sym_ADDPS,
  [anon_sym_MULPS] = anon_sym_MULPS,
  [sym_identifier] = sym_identifier,
  [anon_sym_db] = anon_sym_db,
  [anon_sym_dw] = anon_sym_dw,
  [anon_sym_dd] = anon_sym_dd,
  [anon_sym_dq] = anon_sym_dq,
  [anon_sym_dt] = anon_sym_dt,
  [anon_sym_DB] = anon_sym_DB,
  [anon_sym_DW] = anon_sym_DW,
  [anon_sym_DD] = anon_sym_DD,
  [anon_sym_DQ] = anon_sym_DQ,
  [anon_sym_DT] = anon_sym_DT,
  [sym__floats] = sym__floats,
  [sym__integer] = sym__integer,
  [anon_sym_elf] = anon_sym_elf,
  [anon_sym_elf64] = anon_sym_elf64,
  [anon_sym_bin] = anon_sym_bin,
  [anon_sym_mscoff] = anon_sym_mscoff,
  [anon_sym_ELF] = anon_sym_ELF,
  [anon_sym_ELF64] = anon_sym_ELF64,
  [anon_sym_BIN] = anon_sym_BIN,
  [anon_sym_MSCOFF] = anon_sym_MSCOFF,
  [anon_sym_executable] = anon_sym_executable,
  [anon_sym_EXECUTABLE] = anon_sym_EXECUTABLE,
  [anon_sym_readable] = anon_sym_readable,
  [anon_sym_writeable] = anon_sym_writeable,
  [anon_sym_READABLE] = anon_sym_READABLE,
  [anon_sym_WRITEABLE] = anon_sym_WRITEABLE,
  [anon_sym_si] = anon_sym_si,
  [anon_sym_di] = anon_sym_di,
  [anon_sym_sp] = anon_sym_sp,
  [anon_sym_bp] = anon_sym_bp,
  [anon_sym_eax] = anon_sym_eax,
  [anon_sym_ebx] = anon_sym_ebx,
  [anon_sym_ecx] = anon_sym_ecx,
  [anon_sym_edx] = anon_sym_edx,
  [anon_sym_esi] = anon_sym_esi,
  [anon_sym_edi] = anon_sym_edi,
  [anon_sym_esp] = anon_sym_esp,
  [anon_sym_ebp] = anon_sym_ebp,
  [anon_sym_rax] = anon_sym_rax,
  [anon_sym_rbx] = anon_sym_rbx,
  [anon_sym_rcx] = anon_sym_rcx,
  [anon_sym_rdx] = anon_sym_rdx,
  [anon_sym_rsi] = anon_sym_rsi,
  [anon_sym_rdi] = anon_sym_rdi,
  [anon_sym_rsp] = anon_sym_rsp,
  [anon_sym_rbp] = anon_sym_rbp,
  [anon_sym_flags] = anon_sym_flags,
  [anon_sym_eflags] = anon_sym_eflags,
  [anon_sym_rflags] = anon_sym_rflags,
  [anon_sym_cs] = anon_sym_cs,
  [anon_sym_ds] = anon_sym_ds,
  [anon_sym_ss] = anon_sym_ss,
  [anon_sym_es] = anon_sym_es,
  [anon_sym_fs] = anon_sym_fs,
  [anon_sym_gs] = anon_sym_gs,
  [anon_sym_al] = anon_sym_al,
  [anon_sym_ah] = anon_sym_ah,
  [anon_sym_ax] = anon_sym_ax,
  [anon_sym_AL] = anon_sym_AL,
  [anon_sym_AH] = anon_sym_AH,
  [anon_sym_AX] = anon_sym_AX,
  [anon_sym_bl] = anon_sym_bl,
  [anon_sym_bh] = anon_sym_bh,
  [anon_sym_bx] = anon_sym_bx,
  [anon_sym_BL] = anon_sym_BL,
  [anon_sym_BH] = anon_sym_BH,
  [anon_sym_BX] = anon_sym_BX,
  [anon_sym_cl] = anon_sym_cl,
  [anon_sym_ch] = anon_sym_ch,
  [anon_sym_cx] = anon_sym_cx,
  [anon_sym_CL] = anon_sym_CL,
  [anon_sym_CH] = anon_sym_CH,
  [anon_sym_CX] = anon_sym_CX,
  [anon_sym_dl] = anon_sym_dl,
  [anon_sym_dh] = anon_sym_dh,
  [anon_sym_dx] = anon_sym_dx,
  [anon_sym_DL] = anon_sym_DL,
  [anon_sym_DH] = anon_sym_DH,
  [anon_sym_DX] = anon_sym_DX,
  [anon_sym_mm0] = anon_sym_mm0,
  [anon_sym_mm1] = anon_sym_mm1,
  [anon_sym_mm2] = anon_sym_mm2,
  [anon_sym_mm3] = anon_sym_mm3,
  [anon_sym_mm4] = anon_sym_mm4,
  [anon_sym_mm5] = anon_sym_mm5,
  [anon_sym_mm6] = anon_sym_mm6,
  [anon_sym_mm7] = anon_sym_mm7,
  [anon_sym_mm8] = anon_sym_mm8,
  [anon_sym_mm9] = anon_sym_mm9,
  [anon_sym_mm10] = anon_sym_mm10,
  [anon_sym_mm11] = anon_sym_mm11,
  [anon_sym_mm12] = anon_sym_mm12,
  [anon_sym_mm13] = anon_sym_mm13,
  [anon_sym_mm14] = anon_sym_mm14,
  [anon_sym_mm15] = anon_sym_mm15,
  [anon_sym_MM0] = anon_sym_MM0,
  [anon_sym_MM1] = anon_sym_MM1,
  [anon_sym_MM2] = anon_sym_MM2,
  [anon_sym_MM3] = anon_sym_MM3,
  [anon_sym_MM4] = anon_sym_MM4,
  [anon_sym_MM5] = anon_sym_MM5,
  [anon_sym_MM6] = anon_sym_MM6,
  [anon_sym_MM7] = anon_sym_MM7,
  [anon_sym_MM8] = anon_sym_MM8,
  [anon_sym_MM9] = anon_sym_MM9,
  [anon_sym_MM10] = anon_sym_MM10,
  [anon_sym_MM11] = anon_sym_MM11,
  [anon_sym_MM12] = anon_sym_MM12,
  [anon_sym_MM13] = anon_sym_MM13,
  [anon_sym_MM14] = anon_sym_MM14,
  [anon_sym_MM15] = anon_sym_MM15,
  [anon_sym_xmm0] = anon_sym_xmm0,
  [anon_sym_xmm1] = anon_sym_xmm1,
  [anon_sym_xmm2] = anon_sym_xmm2,
  [anon_sym_xmm3] = anon_sym_xmm3,
  [anon_sym_xmm4] = anon_sym_xmm4,
  [anon_sym_xmm5] = anon_sym_xmm5,
  [anon_sym_xmm6] = anon_sym_xmm6,
  [anon_sym_xmm7] = anon_sym_xmm7,
  [anon_sym_xmm8] = anon_sym_xmm8,
  [anon_sym_xmm9] = anon_sym_xmm9,
  [anon_sym_xmm10] = anon_sym_xmm10,
  [anon_sym_xmm11] = anon_sym_xmm11,
  [anon_sym_xmm12] = anon_sym_xmm12,
  [anon_sym_xmm13] = anon_sym_xmm13,
  [anon_sym_xmm14] = anon_sym_xmm14,
  [anon_sym_xmm15] = anon_sym_xmm15,
  [anon_sym_XMM0] = anon_sym_XMM0,
  [anon_sym_XMM1] = anon_sym_XMM1,
  [anon_sym_XMM2] = anon_sym_XMM2,
  [anon_sym_XMM3] = anon_sym_XMM3,
  [anon_sym_XMM4] = anon_sym_XMM4,
  [anon_sym_XMM5] = anon_sym_XMM5,
  [anon_sym_XMM6] = anon_sym_XMM6,
  [anon_sym_XMM7] = anon_sym_XMM7,
  [anon_sym_XMM8] = anon_sym_XMM8,
  [anon_sym_XMM9] = anon_sym_XMM9,
  [anon_sym_XMM10] = anon_sym_XMM10,
  [anon_sym_XMM11] = anon_sym_XMM11,
  [anon_sym_XMM12] = anon_sym_XMM12,
  [anon_sym_XMM13] = anon_sym_XMM13,
  [anon_sym_XMM14] = anon_sym_XMM14,
  [anon_sym_XMM15] = anon_sym_XMM15,
  [anon_sym_ymm0] = anon_sym_ymm0,
  [anon_sym_ymm1] = anon_sym_ymm1,
  [anon_sym_ymm2] = anon_sym_ymm2,
  [anon_sym_ymm3] = anon_sym_ymm3,
  [anon_sym_ymm4] = anon_sym_ymm4,
  [anon_sym_ymm5] = anon_sym_ymm5,
  [anon_sym_ymm6] = anon_sym_ymm6,
  [anon_sym_ymm7] = anon_sym_ymm7,
  [anon_sym_ymm8] = anon_sym_ymm8,
  [anon_sym_ymm9] = anon_sym_ymm9,
  [anon_sym_ymm10] = anon_sym_ymm10,
  [anon_sym_ymm11] = anon_sym_ymm11,
  [anon_sym_ymm12] = anon_sym_ymm12,
  [anon_sym_ymm13] = anon_sym_ymm13,
  [anon_sym_ymm14] = anon_sym_ymm14,
  [anon_sym_ymm15] = anon_sym_ymm15,
  [anon_sym_YMM0] = anon_sym_YMM0,
  [anon_sym_YMM1] = anon_sym_YMM1,
  [anon_sym_YMM2] = anon_sym_YMM2,
  [anon_sym_YMM3] = anon_sym_YMM3,
  [anon_sym_YMM4] = anon_sym_YMM4,
  [anon_sym_YMM5] = anon_sym_YMM5,
  [anon_sym_YMM6] = anon_sym_YMM6,
  [anon_sym_YMM7] = anon_sym_YMM7,
  [anon_sym_YMM8] = anon_sym_YMM8,
  [anon_sym_YMM9] = anon_sym_YMM9,
  [anon_sym_YMM10] = anon_sym_YMM10,
  [anon_sym_YMM11] = anon_sym_YMM11,
  [anon_sym_YMM12] = anon_sym_YMM12,
  [anon_sym_YMM13] = anon_sym_YMM13,
  [anon_sym_YMM14] = anon_sym_YMM14,
  [anon_sym_YMM15] = anon_sym_YMM15,
  [anon_sym_zmm0] = anon_sym_zmm0,
  [anon_sym_zmm1] = anon_sym_zmm1,
  [anon_sym_zmm2] = anon_sym_zmm2,
  [anon_sym_zmm3] = anon_sym_zmm3,
  [anon_sym_zmm4] = anon_sym_zmm4,
  [anon_sym_zmm5] = anon_sym_zmm5,
  [anon_sym_zmm6] = anon_sym_zmm6,
  [anon_sym_zmm7] = anon_sym_zmm7,
  [anon_sym_zmm8] = anon_sym_zmm8,
  [anon_sym_zmm9] = anon_sym_zmm9,
  [anon_sym_zmm10] = anon_sym_zmm10,
  [anon_sym_zmm11] = anon_sym_zmm11,
  [anon_sym_zmm12] = anon_sym_zmm12,
  [anon_sym_zmm13] = anon_sym_zmm13,
  [anon_sym_zmm14] = anon_sym_zmm14,
  [anon_sym_zmm15] = anon_sym_zmm15,
  [anon_sym_ZMM0] = anon_sym_ZMM0,
  [anon_sym_ZMM1] = anon_sym_ZMM1,
  [anon_sym_ZMM2] = anon_sym_ZMM2,
  [anon_sym_ZMM3] = anon_sym_ZMM3,
  [anon_sym_ZMM4] = anon_sym_ZMM4,
  [anon_sym_ZMM5] = anon_sym_ZMM5,
  [anon_sym_ZMM6] = anon_sym_ZMM6,
  [anon_sym_ZMM7] = anon_sym_ZMM7,
  [anon_sym_ZMM8] = anon_sym_ZMM8,
  [anon_sym_ZMM9] = anon_sym_ZMM9,
  [anon_sym_ZMM10] = anon_sym_ZMM10,
  [anon_sym_ZMM11] = anon_sym_ZMM11,
  [anon_sym_ZMM12] = anon_sym_ZMM12,
  [anon_sym_ZMM13] = anon_sym_ZMM13,
  [anon_sym_ZMM14] = anon_sym_ZMM14,
  [anon_sym_ZMM15] = anon_sym_ZMM15,
  [anon_sym_dr0] = anon_sym_dr0,
  [anon_sym_dr1] = anon_sym_dr1,
  [anon_sym_dr2] = anon_sym_dr2,
  [anon_sym_dr3] = anon_sym_dr3,
  [anon_sym_DR0] = anon_sym_DR0,
  [anon_sym_DR1] = anon_sym_DR1,
  [anon_sym_DR2] = anon_sym_DR2,
  [anon_sym_DR3] = anon_sym_DR3,
  [anon_sym_dr6] = anon_sym_dr6,
  [anon_sym_dr7] = anon_sym_dr7,
  [anon_sym_DR6] = anon_sym_DR6,
  [anon_sym_DR7] = anon_sym_DR7,
  [anon_sym_st0] = anon_sym_st0,
  [anon_sym_st1] = anon_sym_st1,
  [anon_sym_st2] = anon_sym_st2,
  [anon_sym_st3] = anon_sym_st3,
  [anon_sym_st4] = anon_sym_st4,
  [anon_sym_st5] = anon_sym_st5,
  [anon_sym_st6] = anon_sym_st6,
  [anon_sym_st7] = anon_sym_st7,
  [anon_sym_ST0] = anon_sym_ST0,
  [anon_sym_ST1] = anon_sym_ST1,
  [anon_sym_ST2] = anon_sym_ST2,
  [anon_sym_ST3] = anon_sym_ST3,
  [anon_sym_ST4] = anon_sym_ST4,
  [anon_sym_ST5] = anon_sym_ST5,
  [anon_sym_ST6] = anon_sym_ST6,
  [anon_sym_ST7] = anon_sym_ST7,
  [anon_sym_cr0] = anon_sym_cr0,
  [anon_sym_CR0] = anon_sym_CR0,
  [anon_sym_cr2] = anon_sym_cr2,
  [anon_sym_cr3] = anon_sym_cr3,
  [anon_sym_cr4] = anon_sym_cr4,
  [anon_sym_CR2] = anon_sym_CR2,
  [anon_sym_CR3] = anon_sym_CR3,
  [anon_sym_CR4] = anon_sym_CR4,
  [anon_sym_k0] = anon_sym_k0,
  [anon_sym_k1] = anon_sym_k1,
  [anon_sym_k2] = anon_sym_k2,
  [anon_sym_k3] = anon_sym_k3,
  [anon_sym_k4] = anon_sym_k4,
  [anon_sym_k5] = anon_sym_k5,
  [anon_sym_k6] = anon_sym_k6,
  [anon_sym_k7] = anon_sym_k7,
  [anon_sym_K0] = anon_sym_K0,
  [anon_sym_K1] = anon_sym_K1,
  [anon_sym_K2] = anon_sym_K2,
  [anon_sym_K3] = anon_sym_K3,
  [anon_sym_K4] = anon_sym_K4,
  [anon_sym_K5] = anon_sym_K5,
  [anon_sym_K6] = anon_sym_K6,
  [anon_sym_K7] = anon_sym_K7,
  [anon_sym_bnd0] = anon_sym_bnd0,
  [anon_sym_bnd1] = anon_sym_bnd1,
  [anon_sym_bnd2] = anon_sym_bnd2,
  [anon_sym_bnd3] = anon_sym_bnd3,
  [anon_sym_bnd4] = anon_sym_bnd4,
  [anon_sym_BND0] = anon_sym_BND0,
  [anon_sym_BND1] = anon_sym_BND1,
  [anon_sym_BND2] = anon_sym_BND2,
  [anon_sym_BND3] = anon_sym_BND3,
  [anon_sym_BND4] = anon_sym_BND4,
  [sym_source_file] = sym_source_file,
  [sym__source_line] = sym__source_line,
  [sym__statement] = sym__statement,
  [sym__directive] = sym__directive,
  [sym_instruction] = sym_instruction,
  [sym__size_indicators] = sym__size_indicators,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__line_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
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
  [anon_sym_tbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dqword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qqword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dqqword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zword] = {
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
  [anon_sym_TBYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QQWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQQWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZWORD] = {
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
  [anon_sym_FORMAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SECTION] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_segment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEGMENT] = {
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
  [anon_sym_syscall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aaa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aam] = {
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
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movdir64b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shufps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSCALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AAA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IDIV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVZX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVSX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVDIR64B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHUFPS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PXOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADDPS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MULPS] = {
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
  [anon_sym_DB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DT] = {
    .visible = true,
    .named = false,
  },
  [sym__floats] = {
    .visible = false,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_elf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elf64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mscoff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELF64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MSCOFF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXECUTABLE] = {
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
  [anon_sym_READABLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WRITEABLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_si] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_di] = {
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
  [anon_sym_esi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edi] = {
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
  [anon_sym_rsi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdi] = {
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
  [anon_sym_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eflags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rflags] = {
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
  [anon_sym_ss] = {
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
  [anon_sym_al] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ah] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AX] = {
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
  [anon_sym_bx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mm15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM15] = {
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
  [anon_sym_xmm8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmm15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XMM15] = {
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
  [anon_sym_ymm8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ymm15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YMM15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zmm15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZMM15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dr0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dr1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dr2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dr3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DR0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DR1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DR3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dr6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dr7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DR6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DR7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_st0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_st1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_st2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_st3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_st4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_st5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_st6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_st7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ST0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ST1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ST2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ST3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ST4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ST5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ST6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ST7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cr0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cr2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cr3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cr4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnd0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnd1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnd2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnd3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnd4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BND0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BND1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BND2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BND3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BND4] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
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
  [sym__size_indicators] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(309);
      ADVANCE_MAP(
        '"', 6,
        '\'', 7,
        '.', 307,
        ':', 357,
        ';', 310,
        'A', 33,
        'B', 79,
        'C', 80,
        'D', 41,
        'E', 84,
        'F', 104,
        'I', 53,
        'K', 9,
        'M', 92,
        'N', 105,
        'O', 118,
        'P', 153,
        'Q', 117,
        'R', 65,
        'S', 66,
        'T', 43,
        'W', 106,
        'X', 93,
        'Y', 99,
        'Z', 100,
        '\\', 314,
        'a', 155,
        'b', 211,
        'c', 212,
        'd', 168,
        'e', 156,
        'f', 219,
        'g', 276,
        'i', 181,
        'k', 10,
        'm', 231,
        'n', 243,
        'o', 261,
        'p', 264,
        'q', 260,
        'r', 160,
        's', 193,
        't', 170,
        'w', 244,
        'x', 230,
        'y', 237,
        'z', 238,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 311,
        '\r', 1,
        ';', 310,
        'A', 534,
        'B', 535,
        'C', 537,
        'D', 538,
        'K', 484,
        'M', 549,
        'Q', 578,
        'S', 605,
        'T', 512,
        'W', 567,
        'X', 551,
        'Y', 554,
        'Z', 557,
        '\\', 314,
        'a', 655,
        'b', 656,
        'c', 658,
        'd', 659,
        'e', 621,
        'f', 672,
        'g', 737,
        'k', 485,
        'm', 678,
        'q', 714,
        'r', 623,
        's', 662,
        't', 628,
        'w', 700,
        'x', 679,
        'y', 684,
        'z', 686,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      if (('E' <= lookahead && lookahead <= 'V') ||
          ('h' <= lookahead && lookahead <= 'v')) ADVANCE(762);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 312,
        '\r', 2,
        ';', 310,
        'A', 534,
        'B', 536,
        'C', 537,
        'D', 539,
        'K', 484,
        'M', 549,
        'S', 605,
        'X', 552,
        'Y', 555,
        'Z', 558,
        '\\', 314,
        'a', 655,
        'b', 657,
        'c', 658,
        'd', 660,
        'e', 621,
        'f', 672,
        'g', 737,
        'k', 485,
        'm', 678,
        'r', 623,
        's', 662,
        'x', 680,
        'y', 685,
        'z', 687,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      if (('E' <= lookahead && lookahead <= 'W') ||
          ('h' <= lookahead && lookahead <= 'w')) ADVANCE(762);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 313,
        '\r', 3,
        ':', 357,
        ';', 310,
        'D', 42,
        'E', 152,
        'R', 65,
        'W', 122,
        '\\', 314,
        'd', 169,
        'e', 299,
        'r', 201,
        'w', 265,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == ';') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '0', 1240,
        '1', 1242,
        '2', 1244,
        '3', 1246,
        '4', 1248,
        '5', 1250,
        '6', 1252,
        '7', 1254,
      );
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '0', 1224,
        '1', 1226,
        '2', 1228,
        '3', 1230,
        '4', 1232,
        '5', 1234,
        '6', 1236,
        '7', 1238,
      );
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(1210);
      if (lookahead == '2') ADVANCE(1218);
      if (lookahead == '3') ADVANCE(1220);
      if (lookahead == '4') ADVANCE(1222);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(1160);
      if (lookahead == '1') ADVANCE(1162);
      if (lookahead == '2') ADVANCE(1164);
      if (lookahead == '3') ADVANCE(1166);
      if (lookahead == '6') ADVANCE(1172);
      if (lookahead == '7') ADVANCE(1174);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '0', 928,
        '1', 930,
        '2', 932,
        '3', 934,
        '4', 936,
        '5', 938,
        '6', 940,
        '7', 942,
        '8', 944,
        '9', 946,
      );
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '0', 1192,
        '1', 1194,
        '2', 1196,
        '3', 1198,
        '4', 1200,
        '5', 1202,
        '6', 1204,
        '7', 1206,
      );
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(1208);
      if (lookahead == '2') ADVANCE(1212);
      if (lookahead == '3') ADVANCE(1214);
      if (lookahead == '4') ADVANCE(1216);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(1152);
      if (lookahead == '1') ADVANCE(1154);
      if (lookahead == '2') ADVANCE(1156);
      if (lookahead == '3') ADVANCE(1158);
      if (lookahead == '6') ADVANCE(1168);
      if (lookahead == '7') ADVANCE(1170);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '0', 896,
        '1', 898,
        '2', 900,
        '3', 902,
        '4', 904,
        '5', 906,
        '6', 908,
        '7', 910,
        '8', 912,
        '9', 914,
      );
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '0', 1176,
        '1', 1178,
        '2', 1180,
        '3', 1182,
        '4', 1184,
        '5', 1186,
        '6', 1188,
        '7', 1190,
      );
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(1266);
      if (lookahead == '1') ADVANCE(1268);
      if (lookahead == '2') ADVANCE(1270);
      if (lookahead == '3') ADVANCE(1272);
      if (lookahead == '4') ADVANCE(1274);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '0', 992,
        '1', 994,
        '2', 996,
        '3', 998,
        '4', 1000,
        '5', 1002,
        '6', 1004,
        '7', 1006,
        '8', 1008,
        '9', 1010,
      );
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '0', 1056,
        '1', 1058,
        '2', 1060,
        '3', 1062,
        '4', 1064,
        '5', 1066,
        '6', 1068,
        '7', 1070,
        '8', 1072,
        '9', 1074,
      );
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '0', 1120,
        '1', 1122,
        '2', 1124,
        '3', 1126,
        '4', 1128,
        '5', 1130,
        '6', 1132,
        '7', 1134,
        '8', 1136,
        '9', 1138,
      );
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(1256);
      if (lookahead == '1') ADVANCE(1258);
      if (lookahead == '2') ADVANCE(1260);
      if (lookahead == '3') ADVANCE(1262);
      if (lookahead == '4') ADVANCE(1264);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '0', 960,
        '1', 962,
        '2', 964,
        '3', 966,
        '4', 968,
        '5', 970,
        '6', 972,
        '7', 974,
        '8', 976,
        '9', 978,
      );
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '0', 1024,
        '1', 1026,
        '2', 1028,
        '3', 1030,
        '4', 1032,
        '5', 1034,
        '6', 1036,
        '7', 1038,
        '8', 1040,
        '9', 1042,
      );
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '0', 1088,
        '1', 1090,
        '2', 1092,
        '3', 1094,
        '4', 1096,
        '5', 1098,
        '6', 1100,
        '7', 1102,
        '8', 1104,
        '9', 1106,
      );
      END_STATE();
    case 27:
      if (lookahead == '4') ADVANCE(781);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(777);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(172);
      END_STATE();
    case 31:
      if (lookahead == '6') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'H') ADVANCE(856);
      if (lookahead == 'L') ADVANCE(854);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == 'X') ADVANCE(858);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(432);
      if (lookahead == 'D') ADVANCE(434);
      if (lookahead == 'M') ADVANCE(436);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        'B', 768,
        'D', 770,
        'H', 892,
        'I', 146,
        'L', 890,
        'Q', 771,
        'R', 12,
        'T', 772,
        'W', 769,
        'X', 894,
      );
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(768);
      if (lookahead == 'D') ADVANCE(770);
      if (lookahead == 'Q') ADVANCE(771);
      if (lookahead == 'T') ADVANCE(772);
      if (lookahead == 'W') ADVANCE(769);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'W') ADVANCE(111);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(440);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(466);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'G') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'C') ADVANCE(145);
      END_STATE();
    case 52:
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'M') ADVANCE(144);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(438);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(472);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(338);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(341);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(345);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(348);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(352);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(355);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(350);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(50);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(44);
      if (lookahead == 'Y') ADVANCE(134);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(788);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(789);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(785);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(103);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(780);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(116);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(783);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(868);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'L') ADVANCE(866);
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'X') ADVANCE(870);
      if (lookahead == 'Y') ADVANCE(138);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(880);
      if (lookahead == 'L') ADVANCE(878);
      if (lookahead == 'R') ADVANCE(11);
      if (lookahead == 'X') ADVANCE(882);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(141);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'X') ADVANCE(67);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(442);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(444);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(430);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(71);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 92:
      if (lookahead == 'M') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(147);
      if (lookahead == 'S') ADVANCE(4);
      if (lookahead == 'U') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'W') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(38);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 96:
      if (lookahead == 'M') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 98:
      if (lookahead == 'M') ADVANCE(22);
      END_STATE();
    case 99:
      if (lookahead == 'M') ADVANCE(97);
      if (lookahead == 'W') ADVANCE(113);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(98);
      if (lookahead == 'W') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(782);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(364);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(137);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(126);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'Q') ADVANCE(149);
      if (lookahead == 'W') ADVANCE(110);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(470);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(476);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(478);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 131:
      if (lookahead == 'S') ADVANCE(480);
      END_STATE();
    case 132:
      if (lookahead == 'S') ADVANCE(482);
      END_STATE();
    case 133:
      if (lookahead == 'S') ADVANCE(468);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(474);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(360);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(370);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 143:
      if (lookahead == 'U') ADVANCE(76);
      END_STATE();
    case 144:
      if (lookahead == 'U') ADVANCE(86);
      END_STATE();
    case 145:
      if (lookahead == 'U') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == 'V') ADVANCE(446);
      END_STATE();
    case 147:
      if (lookahead == 'V') ADVANCE(450);
      END_STATE();
    case 148:
      if (lookahead == 'V') ADVANCE(448);
      END_STATE();
    case 149:
      if (lookahead == 'W') ADVANCE(115);
      END_STATE();
    case 150:
      if (lookahead == 'X') ADVANCE(464);
      END_STATE();
    case 151:
      if (lookahead == 'X') ADVANCE(462);
      END_STATE();
    case 152:
      if (lookahead == 'X') ADVANCE(67);
      END_STATE();
    case 153:
      if (lookahead == 'X') ADVANCE(109);
      END_STATE();
    case 154:
      if (lookahead == 'Y') ADVANCE(140);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'h') ADVANCE(850);
      if (lookahead == 'l') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'x') ADVANCE(852);
      END_STATE();
    case 156:
      ADVANCE_MAP(
        'a', 300,
        'b', 256,
        'c', 301,
        'd', 213,
        'f', 228,
        'l', 204,
        's', 842,
        'x', 194,
      );
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'm') ADVANCE(382);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'b') ADVANCE(257);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 168:
      ADVANCE_MAP(
        'b', 763,
        'd', 765,
        'h', 886,
        'i', 792,
        'l', 884,
        'q', 766,
        'r', 16,
        's', 838,
        't', 767,
        'w', 764,
        'x', 888,
      );
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(763);
      if (lookahead == 'd') ADVANCE(765);
      if (lookahead == 'q') ADVANCE(766);
      if (lookahead == 't') ADVANCE(767);
      if (lookahead == 'w') ADVANCE(764);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'w') ADVANCE(251);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(386);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(412);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(225);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(226);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 193:
      ADVANCE_MAP(
        'e', 179,
        'h', 293,
        'i', 790,
        'p', 794,
        's', 840,
        't', 18,
        'u', 171,
        'y', 283,
      );
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 204:
      if (lookahead == 'f') ADVANCE(776);
      END_STATE();
    case 205:
      if (lookahead == 'f') ADVANCE(779);
      END_STATE();
    case 206:
      if (lookahead == 'f') ADVANCE(259);
      END_STATE();
    case 207:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 209:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 210:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 211:
      if (lookahead == 'h') ADVANCE(862);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'l') ADVANCE(860);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(796);
      if (lookahead == 'x') ADVANCE(864);
      if (lookahead == 'y') ADVANCE(287);
      END_STATE();
    case 212:
      if (lookahead == 'h') ADVANCE(874);
      if (lookahead == 'l') ADVANCE(872);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(836);
      if (lookahead == 'x') ADVANCE(876);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'x') ADVANCE(804);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(824);
      if (lookahead == 'x') ADVANCE(820);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(822);
      if (lookahead == 'p') ADVANCE(826);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 's') ADVANCE(844);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 233:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == 'w') ADVANCE(253);
      END_STATE();
    case 238:
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == 'w') ADVANCE(254);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(778);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 256:
      if (lookahead == 'p') ADVANCE(812);
      if (lookahead == 'x') ADVANCE(800);
      END_STATE();
    case 257:
      if (lookahead == 'p') ADVANCE(828);
      if (lookahead == 'x') ADVANCE(816);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 259:
      if (lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 260:
      if (lookahead == 'q') ADVANCE(298);
      if (lookahead == 'w') ADVANCE(250);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(846);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(832);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(834);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 296:
      if (lookahead == 'v') ADVANCE(396);
      END_STATE();
    case 297:
      if (lookahead == 'v') ADVANCE(394);
      END_STATE();
    case 298:
      if (lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 299:
      if (lookahead == 'x') ADVANCE(194);
      END_STATE();
    case 300:
      if (lookahead == 'x') ADVANCE(798);
      END_STATE();
    case 301:
      if (lookahead == 'x') ADVANCE(802);
      END_STATE();
    case 302:
      if (lookahead == 'x') ADVANCE(814);
      END_STATE();
    case 303:
      if (lookahead == 'x') ADVANCE(818);
      END_STATE();
    case 304:
      if (lookahead == 'x') ADVANCE(410);
      END_STATE();
    case 305:
      if (lookahead == 'x') ADVANCE(408);
      END_STATE();
    case 306:
      if (lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(774);
      END_STATE();
    case 308:
      if (eof) ADVANCE(309);
      ADVANCE_MAP(
        ';', 310,
        'A', 506,
        'D', 540,
        'F', 562,
        'I', 528,
        'M', 563,
        'N', 561,
        'O', 580,
        'P', 615,
        'S', 529,
        'X', 565,
        'a', 617,
        'c', 691,
        'd', 661,
        'f', 693,
        'i', 645,
        'm', 695,
        'n', 692,
        'o', 716,
        'p', 717,
        's', 646,
        'x', 697,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(308);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__line_end);
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__line_end);
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__line_end);
      if (lookahead == '\n') ADVANCE(313);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_dword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_qword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_tbyte);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_tbyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_tword);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_tword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_dqword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_xword);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_xword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_qqword);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_qqword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_yword);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_yword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_dqqword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_zword);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_zword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_TBYTE);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_TBYTE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_TWORD);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_TWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DQWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_XWORD);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_XWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_QQWORD);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_QQWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_YWORD);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_YWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_DQQWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_ZWORD);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_ZWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_format);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_FORMAT);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_FORMAT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SECTION);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SECTION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_section_directive_token1);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_section_directive_token2);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_segment);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_segment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_SEGMENT);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_SEGMENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_control_directive);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_control_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_prepoc_directive);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_prepoc_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_syscall);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_aaa);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_aaa);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_aad);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_aad);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_aam);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_aam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'p') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'p') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_imul);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_imul);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_div);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_idiv);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_idiv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == 'd') ADVANCE(403);
      if (lookahead == 'q') ADVANCE(404);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead == 'w') ADVANCE(400);
      if (lookahead == 'z') ADVANCE(305);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'b') ADVANCE(399);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead == 'q') ADVANCE(405);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == 'w') ADVANCE(401);
      if (lookahead == 'z') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(762);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_movb);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_movb);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_movw);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_movw);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_movd);
      if (lookahead == 'i') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_movd);
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_movq);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_movq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_movt);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_movt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_movzx);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_movzx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_movsx);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_movsx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_movdir64b);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_movdir64b);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_shufps);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_shufps);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_pxor);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_pxor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_addps);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_addps);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_mulps);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_mulps);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_SYSCALL);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_SYSCALL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_AAA);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_AAA);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_AAD);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_AAD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_AAM);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_AAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (lookahead == 'P') ADVANCE(131);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (lookahead == 'P') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_MUL);
      if (lookahead == 'P') ADVANCE(132);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_MUL);
      if (lookahead == 'P') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_IMUL);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_IMUL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DIV);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DIV);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_IDIV);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_IDIV);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_MOV);
      if (lookahead == 'B') ADVANCE(452);
      if (lookahead == 'D') ADVANCE(457);
      if (lookahead == 'Q') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(150);
      if (lookahead == 'T') ADVANCE(460);
      if (lookahead == 'W') ADVANCE(454);
      if (lookahead == 'Z') ADVANCE(151);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_MOV);
      if (lookahead == 'B') ADVANCE(453);
      if (lookahead == 'D') ADVANCE(456);
      if (lookahead == 'Q') ADVANCE(459);
      if (lookahead == 'S') ADVANCE(613);
      if (lookahead == 'T') ADVANCE(461);
      if (lookahead == 'W') ADVANCE(455);
      if (lookahead == 'Z') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_MOVB);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_MOVB);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_MOVW);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_MOVW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_MOVD);
      if (lookahead == 'I') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_MOVD);
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_MOVQ);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_MOVQ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_MOVT);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_MOVT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_MOVZX);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_MOVZX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_MOVSX);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_MOVSX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_MOVDIR64B);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_MOVDIR64B);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SHUFPS);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_SHUFPS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_OR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_XOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_PXOR);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_PXOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_ADDPS);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_ADDPS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_MULPS);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_MULPS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 1241,
        '1', 1243,
        '2', 1245,
        '3', 1247,
        '4', 1249,
        '5', 1251,
        '6', 1253,
        '7', 1255,
      );
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 1225,
        '1', 1227,
        '2', 1229,
        '3', 1231,
        '4', 1233,
        '5', 1235,
        '6', 1237,
        '7', 1239,
      );
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(1211);
      if (lookahead == '2') ADVANCE(1219);
      if (lookahead == '3') ADVANCE(1221);
      if (lookahead == '4') ADVANCE(1223);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(1161);
      if (lookahead == '1') ADVANCE(1163);
      if (lookahead == '2') ADVANCE(1165);
      if (lookahead == '3') ADVANCE(1167);
      if (lookahead == '6') ADVANCE(1173);
      if (lookahead == '7') ADVANCE(1175);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 929,
        '1', 931,
        '2', 933,
        '3', 935,
        '4', 937,
        '5', 939,
        '6', 941,
        '7', 943,
        '8', 945,
        '9', 947,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 1193,
        '1', 1195,
        '2', 1197,
        '3', 1199,
        '4', 1201,
        '5', 1203,
        '6', 1205,
        '7', 1207,
      );
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(1209);
      if (lookahead == '2') ADVANCE(1213);
      if (lookahead == '3') ADVANCE(1215);
      if (lookahead == '4') ADVANCE(1217);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(1153);
      if (lookahead == '1') ADVANCE(1155);
      if (lookahead == '2') ADVANCE(1157);
      if (lookahead == '3') ADVANCE(1159);
      if (lookahead == '6') ADVANCE(1169);
      if (lookahead == '7') ADVANCE(1171);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 897,
        '1', 899,
        '2', 901,
        '3', 903,
        '4', 905,
        '5', 907,
        '6', 909,
        '7', 911,
        '8', 913,
        '9', 915,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 1177,
        '1', 1179,
        '2', 1181,
        '3', 1183,
        '4', 1185,
        '5', 1187,
        '6', 1189,
        '7', 1191,
      );
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(1267);
      if (lookahead == '1') ADVANCE(1269);
      if (lookahead == '2') ADVANCE(1271);
      if (lookahead == '3') ADVANCE(1273);
      if (lookahead == '4') ADVANCE(1275);
      if (('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 993,
        '1', 995,
        '2', 997,
        '3', 999,
        '4', 1001,
        '5', 1003,
        '6', 1005,
        '7', 1007,
        '8', 1009,
        '9', 1011,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 1057,
        '1', 1059,
        '2', 1061,
        '3', 1063,
        '4', 1065,
        '5', 1067,
        '6', 1069,
        '7', 1071,
        '8', 1073,
        '9', 1075,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 1121,
        '1', 1123,
        '2', 1125,
        '3', 1127,
        '4', 1129,
        '5', 1131,
        '6', 1133,
        '7', 1135,
        '8', 1137,
        '9', 1139,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(1257);
      if (lookahead == '1') ADVANCE(1259);
      if (lookahead == '2') ADVANCE(1261);
      if (lookahead == '3') ADVANCE(1263);
      if (lookahead == '4') ADVANCE(1265);
      if (('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 961,
        '1', 963,
        '2', 965,
        '3', 967,
        '4', 969,
        '5', 971,
        '6', 973,
        '7', 975,
        '8', 977,
        '9', 979,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 1025,
        '1', 1027,
        '2', 1029,
        '3', 1031,
        '4', 1033,
        '5', 1035,
        '6', 1037,
        '7', 1039,
        '8', 1041,
        '9', 1043,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '0', 1089,
        '1', 1091,
        '2', 1093,
        '3', 1095,
        '4', 1097,
        '5', 1099,
        '6', 1101,
        '7', 1103,
        '8', 1105,
        '9', 1107,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(507);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'N') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(433);
      if (lookahead == 'D') ADVANCE(435);
      if (lookahead == 'M') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(616);
      if (lookahead == 'W') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(602);
      if (lookahead == 'G') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(542);
      if (lookahead == 'M') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(513);
      if (lookahead == 'H') ADVANCE(606);
      if (lookahead == 'U') ADVANCE(510);
      if (lookahead == 'Y') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(857);
      if (lookahead == 'L') ADVANCE(855);
      if (lookahead == 'X') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(869);
      if (lookahead == 'L') ADVANCE(867);
      if (lookahead == 'N') ADVANCE(517);
      if (lookahead == 'X') ADVANCE(871);
      if (lookahead == 'Y') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(869);
      if (lookahead == 'L') ADVANCE(867);
      if (lookahead == 'N') ADVANCE(517);
      if (lookahead == 'X') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(881);
      if (lookahead == 'L') ADVANCE(879);
      if (lookahead == 'R') ADVANCE(486);
      if (lookahead == 'X') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(893);
      if (lookahead == 'L') ADVANCE(891);
      if (lookahead == 'Q') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(487);
      if (lookahead == 'W') ADVANCE(568);
      if (lookahead == 'X') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(893);
      if (lookahead == 'L') ADVANCE(891);
      if (lookahead == 'R') ADVANCE(487);
      if (lookahead == 'X') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(550);
      if (lookahead == 'W') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(553);
      if (lookahead == 'W') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(556);
      if (lookahead == 'W') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(609);
      if (lookahead == 'U') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(611);
      if (lookahead == 'W') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(612);
      if (lookahead == 'W') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'd') ADVANCE(632);
      if (lookahead == 'n') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead == 'm') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead == 'b') ADVANCE(710);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead == 'f') ADVANCE(674);
      if (lookahead == 's') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'b') ADVANCE(711);
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == 'd') ADVANCE(664);
      if (lookahead == 'f') ADVANCE(675);
      if (lookahead == 's') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'w') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(744);
      if (lookahead == 'g') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(666);
      if (lookahead == 'm') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == 'h') ADVANCE(748);
      if (lookahead == 'u') ADVANCE(626);
      if (lookahead == 'y') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(851);
      if (lookahead == 'l') ADVANCE(849);
      if (lookahead == 'x') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(863);
      if (lookahead == 'l') ADVANCE(861);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 'x') ADVANCE(865);
      if (lookahead == 'y') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(863);
      if (lookahead == 'l') ADVANCE(861);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == 'x') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(875);
      if (lookahead == 'l') ADVANCE(873);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == 's') ADVANCE(837);
      if (lookahead == 'x') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'h', 887,
        'i', 793,
        'l', 885,
        'q', 715,
        'r', 491,
        's', 839,
        'w', 701,
        'x', 889,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(887);
      if (lookahead == 'i') ADVANCE(793);
      if (lookahead == 'l') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 's') ADVANCE(839);
      if (lookahead == 'x') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(791);
      if (lookahead == 'p') ADVANCE(795);
      if (lookahead == 's') ADVANCE(841);
      if (lookahead == 't') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(809);
      if (lookahead == 'x') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == 'x') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'p') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == 's') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(681);
      if (lookahead == 'w') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(682);
      if (lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(683);
      if (lookahead == 'w') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(751);
      if (lookahead == 'u') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(813);
      if (lookahead == 'x') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(829);
      if (lookahead == 'x') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(753);
      if (lookahead == 'w') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(754);
      if (lookahead == 'w') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(647);
      if (lookahead == 'x') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_db);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_dw);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_dd);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_dq);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_dt);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_DB);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_DW);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_DD);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_DQ);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_DT);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__floats);
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__floats);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(774);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_elf);
      if (lookahead == '6') ADVANCE(28);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_elf64);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_bin);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_mscoff);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_ELF);
      if (lookahead == '6') ADVANCE(27);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_ELF64);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_BIN);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_MSCOFF);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_EXECUTABLE);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_readable);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_writeable);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_READABLE);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_WRITEABLE);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_si);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_si);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_di);
      if (lookahead == 'v') ADVANCE(392);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_di);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_sp);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_sp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_bp);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_bp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_eax);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_eax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_ebx);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_ebx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_ecx);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_ecx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_edx);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_edx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_esi);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_esi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_edi);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_edi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_esp);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_esp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_ebp);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_ebp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_rax);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_rax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_rbx);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_rbx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_rcx);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_rcx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_rdx);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_rdx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_rsi);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_rsi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_rdi);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_rdi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_rsp);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_rsp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_rbp);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_rbp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_flags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_eflags);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_eflags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_rflags);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_rflags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_cs);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_cs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_ds);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_ds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_ss);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'i') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(810);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'i') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_fs);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_fs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_gs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_al);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_al);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_ah);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_ah);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_ax);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_ax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_AL);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_AL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_AH);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_AH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_AX);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_AX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_bl);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_bl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_bh);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_bh);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_bx);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_bx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_BL);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_BL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_BH);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_BH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_BX);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_BX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_cl);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_cl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_ch);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_ch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_cx);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_cx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_CL);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_CL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_CH);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_CH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_CX);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_CX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_dl);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_dl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_dh);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_dh);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_dx);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_dx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_DL);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_DL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_DH);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_DH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_DX);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_DX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_mm0);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_mm0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_mm1);
      if (lookahead == '0') ADVANCE(916);
      if (lookahead == '1') ADVANCE(918);
      if (lookahead == '2') ADVANCE(920);
      if (lookahead == '3') ADVANCE(922);
      if (lookahead == '4') ADVANCE(924);
      if (lookahead == '5') ADVANCE(926);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_mm1);
      if (lookahead == '0') ADVANCE(917);
      if (lookahead == '1') ADVANCE(919);
      if (lookahead == '2') ADVANCE(921);
      if (lookahead == '3') ADVANCE(923);
      if (lookahead == '4') ADVANCE(925);
      if (lookahead == '5') ADVANCE(927);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_mm2);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_mm2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_mm3);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_mm3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_mm4);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_mm4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_mm5);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_mm5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_mm6);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_mm6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_mm7);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_mm7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_mm8);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_mm8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_mm9);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_mm9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_mm10);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_mm10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_mm11);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_mm11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_mm12);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_mm12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_mm13);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_mm13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_mm14);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_mm14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_mm15);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_mm15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_MM0);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_MM0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_MM1);
      if (lookahead == '0') ADVANCE(948);
      if (lookahead == '1') ADVANCE(950);
      if (lookahead == '2') ADVANCE(952);
      if (lookahead == '3') ADVANCE(954);
      if (lookahead == '4') ADVANCE(956);
      if (lookahead == '5') ADVANCE(958);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_MM1);
      if (lookahead == '0') ADVANCE(949);
      if (lookahead == '1') ADVANCE(951);
      if (lookahead == '2') ADVANCE(953);
      if (lookahead == '3') ADVANCE(955);
      if (lookahead == '4') ADVANCE(957);
      if (lookahead == '5') ADVANCE(959);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_MM2);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_MM2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_MM3);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_MM3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_MM4);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_MM4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_MM5);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_MM5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_MM6);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_MM6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_MM7);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_MM7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_MM8);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_MM8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_MM9);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_MM9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_MM10);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_MM10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_MM11);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_MM11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_MM12);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_MM12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_MM13);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_MM13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_MM14);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_MM14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_MM15);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_MM15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_xmm0);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_xmm0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_xmm1);
      if (lookahead == '0') ADVANCE(980);
      if (lookahead == '1') ADVANCE(982);
      if (lookahead == '2') ADVANCE(984);
      if (lookahead == '3') ADVANCE(986);
      if (lookahead == '4') ADVANCE(988);
      if (lookahead == '5') ADVANCE(990);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_xmm1);
      if (lookahead == '0') ADVANCE(981);
      if (lookahead == '1') ADVANCE(983);
      if (lookahead == '2') ADVANCE(985);
      if (lookahead == '3') ADVANCE(987);
      if (lookahead == '4') ADVANCE(989);
      if (lookahead == '5') ADVANCE(991);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_xmm2);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_xmm2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_xmm3);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_xmm3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_xmm4);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_xmm4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_xmm5);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_xmm5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_xmm6);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_xmm6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_xmm7);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_xmm7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_xmm8);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_xmm8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_xmm9);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_xmm9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_xmm10);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_xmm10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_xmm11);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_xmm11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_xmm12);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_xmm12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_xmm13);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_xmm13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_xmm14);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_xmm14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_xmm15);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_xmm15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_XMM0);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_XMM0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_XMM1);
      if (lookahead == '0') ADVANCE(1012);
      if (lookahead == '1') ADVANCE(1014);
      if (lookahead == '2') ADVANCE(1016);
      if (lookahead == '3') ADVANCE(1018);
      if (lookahead == '4') ADVANCE(1020);
      if (lookahead == '5') ADVANCE(1022);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_XMM1);
      if (lookahead == '0') ADVANCE(1013);
      if (lookahead == '1') ADVANCE(1015);
      if (lookahead == '2') ADVANCE(1017);
      if (lookahead == '3') ADVANCE(1019);
      if (lookahead == '4') ADVANCE(1021);
      if (lookahead == '5') ADVANCE(1023);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_XMM2);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_XMM2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_XMM3);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_XMM3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_XMM4);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_XMM4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_XMM5);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_XMM5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_XMM6);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_XMM6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_XMM7);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_XMM7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_XMM8);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_XMM8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_XMM9);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_XMM9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_XMM10);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_XMM10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_XMM11);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_XMM11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_XMM12);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_XMM12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_XMM13);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_XMM13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_XMM14);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_XMM14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_XMM15);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_XMM15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_ymm0);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_ymm0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_ymm1);
      if (lookahead == '0') ADVANCE(1044);
      if (lookahead == '1') ADVANCE(1046);
      if (lookahead == '2') ADVANCE(1048);
      if (lookahead == '3') ADVANCE(1050);
      if (lookahead == '4') ADVANCE(1052);
      if (lookahead == '5') ADVANCE(1054);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_ymm1);
      if (lookahead == '0') ADVANCE(1045);
      if (lookahead == '1') ADVANCE(1047);
      if (lookahead == '2') ADVANCE(1049);
      if (lookahead == '3') ADVANCE(1051);
      if (lookahead == '4') ADVANCE(1053);
      if (lookahead == '5') ADVANCE(1055);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_ymm2);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_ymm2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_ymm3);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_ymm3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_ymm4);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_ymm4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_ymm5);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_ymm5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_ymm6);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_ymm6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_ymm7);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_ymm7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_ymm8);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_ymm8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_ymm9);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_ymm9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_ymm10);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_ymm10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_ymm11);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_ymm11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_ymm12);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_ymm12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_ymm13);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_ymm13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_ymm14);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_ymm14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_ymm15);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_ymm15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_YMM0);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_YMM0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_YMM1);
      if (lookahead == '0') ADVANCE(1076);
      if (lookahead == '1') ADVANCE(1078);
      if (lookahead == '2') ADVANCE(1080);
      if (lookahead == '3') ADVANCE(1082);
      if (lookahead == '4') ADVANCE(1084);
      if (lookahead == '5') ADVANCE(1086);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_YMM1);
      if (lookahead == '0') ADVANCE(1077);
      if (lookahead == '1') ADVANCE(1079);
      if (lookahead == '2') ADVANCE(1081);
      if (lookahead == '3') ADVANCE(1083);
      if (lookahead == '4') ADVANCE(1085);
      if (lookahead == '5') ADVANCE(1087);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_YMM2);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_YMM2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_YMM3);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_YMM3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_YMM4);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_YMM4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_YMM5);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_YMM5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_YMM6);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_YMM6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_YMM7);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_YMM7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_YMM8);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_YMM8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_YMM9);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_YMM9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_YMM10);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_YMM10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_YMM11);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_YMM11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_YMM12);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_YMM12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_YMM13);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_YMM13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_YMM14);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_YMM14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_YMM15);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_YMM15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_zmm0);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_zmm0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_zmm1);
      if (lookahead == '0') ADVANCE(1108);
      if (lookahead == '1') ADVANCE(1110);
      if (lookahead == '2') ADVANCE(1112);
      if (lookahead == '3') ADVANCE(1114);
      if (lookahead == '4') ADVANCE(1116);
      if (lookahead == '5') ADVANCE(1118);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_zmm1);
      if (lookahead == '0') ADVANCE(1109);
      if (lookahead == '1') ADVANCE(1111);
      if (lookahead == '2') ADVANCE(1113);
      if (lookahead == '3') ADVANCE(1115);
      if (lookahead == '4') ADVANCE(1117);
      if (lookahead == '5') ADVANCE(1119);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_zmm2);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_zmm2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_zmm3);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_zmm3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_zmm4);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_zmm4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_zmm5);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_zmm5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_zmm6);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_zmm6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_zmm7);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_zmm7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_zmm8);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_zmm8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_zmm9);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_zmm9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_zmm10);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_zmm10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_zmm11);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_zmm11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_zmm12);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_zmm12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_zmm13);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_zmm13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_zmm14);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_zmm14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_zmm15);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_zmm15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_ZMM0);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_ZMM0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_ZMM1);
      if (lookahead == '0') ADVANCE(1140);
      if (lookahead == '1') ADVANCE(1142);
      if (lookahead == '2') ADVANCE(1144);
      if (lookahead == '3') ADVANCE(1146);
      if (lookahead == '4') ADVANCE(1148);
      if (lookahead == '5') ADVANCE(1150);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_ZMM1);
      if (lookahead == '0') ADVANCE(1141);
      if (lookahead == '1') ADVANCE(1143);
      if (lookahead == '2') ADVANCE(1145);
      if (lookahead == '3') ADVANCE(1147);
      if (lookahead == '4') ADVANCE(1149);
      if (lookahead == '5') ADVANCE(1151);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_ZMM2);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_ZMM2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_ZMM3);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_ZMM3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_ZMM4);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_ZMM4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_ZMM5);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_ZMM5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_ZMM6);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_ZMM6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_ZMM7);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_ZMM7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_ZMM8);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_ZMM8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_ZMM9);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_ZMM9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_ZMM10);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_ZMM10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_ZMM11);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_ZMM11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_ZMM12);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_ZMM12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_ZMM13);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_ZMM13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_ZMM14);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_ZMM14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_ZMM15);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_ZMM15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_dr0);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_dr0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_dr1);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_dr1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_dr2);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_dr2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_dr3);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_dr3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_DR0);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_DR0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_DR1);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_DR1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_DR2);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_DR2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_DR3);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_DR3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_dr6);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_dr6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_dr7);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_dr7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_DR6);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_DR6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_DR7);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_DR7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_st0);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_st0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_st1);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_st1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_st2);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_st2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_st3);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_st3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_st4);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_st4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_st5);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_st5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_st6);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_st6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_st7);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_st7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_ST0);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_ST0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_ST1);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_ST1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_ST2);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_ST2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_ST3);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_ST3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_ST4);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_ST4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_ST5);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_ST5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_ST6);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_ST6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_ST7);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_ST7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_cr0);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_cr0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_CR0);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_CR0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_cr2);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_cr2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_cr3);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_cr3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_cr4);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_cr4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_CR2);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_CR2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_CR3);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_CR3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_CR4);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_CR4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_k0);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_k0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_k1);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_k1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_k2);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_k2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_k3);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_k3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_k4);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_k4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_k5);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_k5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_k6);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_k6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_k7);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_k7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_K0);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_K0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_K1);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_K1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_K2);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_K2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_K3);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_K3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_K4);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_K4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_K5);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_K5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_K6);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_K6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_K7);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(anon_sym_K7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_bnd0);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_bnd0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(anon_sym_bnd1);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(anon_sym_bnd1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(anon_sym_bnd2);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(anon_sym_bnd2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(anon_sym_bnd3);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_bnd3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_bnd4);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(anon_sym_bnd4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(anon_sym_BND0);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(anon_sym_BND0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(anon_sym_BND1);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(anon_sym_BND1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_BND2);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_BND2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_BND3);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_BND3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_BND4);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_BND4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 308},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 308},
  [6] = {.lex_state = 308},
  [7] = {.lex_state = 308},
  [8] = {.lex_state = 308},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_tbyte] = ACTIONS(1),
    [anon_sym_tword] = ACTIONS(1),
    [anon_sym_xword] = ACTIONS(1),
    [anon_sym_qqword] = ACTIONS(1),
    [anon_sym_yword] = ACTIONS(1),
    [anon_sym_zword] = ACTIONS(1),
    [anon_sym_BYTE] = ACTIONS(1),
    [anon_sym_WORD] = ACTIONS(1),
    [anon_sym_QWORD] = ACTIONS(1),
    [anon_sym_TBYTE] = ACTIONS(1),
    [anon_sym_TWORD] = ACTIONS(1),
    [anon_sym_XWORD] = ACTIONS(1),
    [anon_sym_QQWORD] = ACTIONS(1),
    [anon_sym_YWORD] = ACTIONS(1),
    [anon_sym_ZWORD] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_FORMAT] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_SECTION] = ACTIONS(1),
    [aux_sym_section_directive_token1] = ACTIONS(1),
    [aux_sym_section_directive_token2] = ACTIONS(1),
    [anon_sym_segment] = ACTIONS(1),
    [anon_sym_SEGMENT] = ACTIONS(1),
    [sym_control_directive] = ACTIONS(1),
    [sym_prepoc_directive] = ACTIONS(1),
    [anon_sym_syscall] = ACTIONS(1),
    [anon_sym_aaa] = ACTIONS(1),
    [anon_sym_aad] = ACTIONS(1),
    [anon_sym_aam] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_imul] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_idiv] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_movb] = ACTIONS(1),
    [anon_sym_movw] = ACTIONS(1),
    [anon_sym_movd] = ACTIONS(1),
    [anon_sym_movq] = ACTIONS(1),
    [anon_sym_movt] = ACTIONS(1),
    [anon_sym_movzx] = ACTIONS(1),
    [anon_sym_movsx] = ACTIONS(1),
    [anon_sym_movdir64b] = ACTIONS(1),
    [anon_sym_shufps] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_pxor] = ACTIONS(1),
    [anon_sym_addps] = ACTIONS(1),
    [anon_sym_mulps] = ACTIONS(1),
    [anon_sym_SYSCALL] = ACTIONS(1),
    [anon_sym_AAA] = ACTIONS(1),
    [anon_sym_AAD] = ACTIONS(1),
    [anon_sym_AAM] = ACTIONS(1),
    [anon_sym_ADD] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_MUL] = ACTIONS(1),
    [anon_sym_IMUL] = ACTIONS(1),
    [anon_sym_DIV] = ACTIONS(1),
    [anon_sym_IDIV] = ACTIONS(1),
    [anon_sym_MOV] = ACTIONS(1),
    [anon_sym_MOVB] = ACTIONS(1),
    [anon_sym_MOVW] = ACTIONS(1),
    [anon_sym_MOVD] = ACTIONS(1),
    [anon_sym_MOVQ] = ACTIONS(1),
    [anon_sym_MOVT] = ACTIONS(1),
    [anon_sym_MOVZX] = ACTIONS(1),
    [anon_sym_MOVSX] = ACTIONS(1),
    [anon_sym_MOVDIR64B] = ACTIONS(1),
    [anon_sym_SHUFPS] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_PXOR] = ACTIONS(1),
    [anon_sym_ADDPS] = ACTIONS(1),
    [anon_sym_MULPS] = ACTIONS(1),
    [anon_sym_db] = ACTIONS(1),
    [anon_sym_dw] = ACTIONS(1),
    [anon_sym_dd] = ACTIONS(1),
    [anon_sym_dq] = ACTIONS(1),
    [anon_sym_dt] = ACTIONS(1),
    [anon_sym_DB] = ACTIONS(1),
    [anon_sym_DW] = ACTIONS(1),
    [anon_sym_DD] = ACTIONS(1),
    [anon_sym_DQ] = ACTIONS(1),
    [anon_sym_DT] = ACTIONS(1),
    [sym__floats] = ACTIONS(1),
    [sym__integer] = ACTIONS(1),
    [anon_sym_elf] = ACTIONS(1),
    [anon_sym_elf64] = ACTIONS(1),
    [anon_sym_bin] = ACTIONS(1),
    [anon_sym_mscoff] = ACTIONS(1),
    [anon_sym_ELF] = ACTIONS(1),
    [anon_sym_ELF64] = ACTIONS(1),
    [anon_sym_BIN] = ACTIONS(1),
    [anon_sym_MSCOFF] = ACTIONS(1),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_EXECUTABLE] = ACTIONS(1),
    [anon_sym_readable] = ACTIONS(1),
    [anon_sym_writeable] = ACTIONS(1),
    [anon_sym_READABLE] = ACTIONS(1),
    [anon_sym_WRITEABLE] = ACTIONS(1),
    [anon_sym_si] = ACTIONS(1),
    [anon_sym_di] = ACTIONS(1),
    [anon_sym_sp] = ACTIONS(1),
    [anon_sym_bp] = ACTIONS(1),
    [anon_sym_eax] = ACTIONS(1),
    [anon_sym_ebx] = ACTIONS(1),
    [anon_sym_ecx] = ACTIONS(1),
    [anon_sym_edx] = ACTIONS(1),
    [anon_sym_esi] = ACTIONS(1),
    [anon_sym_edi] = ACTIONS(1),
    [anon_sym_esp] = ACTIONS(1),
    [anon_sym_ebp] = ACTIONS(1),
    [anon_sym_rax] = ACTIONS(1),
    [anon_sym_rbx] = ACTIONS(1),
    [anon_sym_rcx] = ACTIONS(1),
    [anon_sym_rdx] = ACTIONS(1),
    [anon_sym_rsi] = ACTIONS(1),
    [anon_sym_rdi] = ACTIONS(1),
    [anon_sym_rsp] = ACTIONS(1),
    [anon_sym_rbp] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_eflags] = ACTIONS(1),
    [anon_sym_rflags] = ACTIONS(1),
    [anon_sym_cs] = ACTIONS(1),
    [anon_sym_ds] = ACTIONS(1),
    [anon_sym_ss] = ACTIONS(1),
    [anon_sym_es] = ACTIONS(1),
    [anon_sym_fs] = ACTIONS(1),
    [anon_sym_gs] = ACTIONS(1),
    [anon_sym_al] = ACTIONS(1),
    [anon_sym_ah] = ACTIONS(1),
    [anon_sym_ax] = ACTIONS(1),
    [anon_sym_AL] = ACTIONS(1),
    [anon_sym_AH] = ACTIONS(1),
    [anon_sym_AX] = ACTIONS(1),
    [anon_sym_bl] = ACTIONS(1),
    [anon_sym_bh] = ACTIONS(1),
    [anon_sym_bx] = ACTIONS(1),
    [anon_sym_BL] = ACTIONS(1),
    [anon_sym_BH] = ACTIONS(1),
    [anon_sym_BX] = ACTIONS(1),
    [anon_sym_cl] = ACTIONS(1),
    [anon_sym_ch] = ACTIONS(1),
    [anon_sym_cx] = ACTIONS(1),
    [anon_sym_CL] = ACTIONS(1),
    [anon_sym_CH] = ACTIONS(1),
    [anon_sym_CX] = ACTIONS(1),
    [anon_sym_dl] = ACTIONS(1),
    [anon_sym_dh] = ACTIONS(1),
    [anon_sym_dx] = ACTIONS(1),
    [anon_sym_DL] = ACTIONS(1),
    [anon_sym_DH] = ACTIONS(1),
    [anon_sym_DX] = ACTIONS(1),
    [anon_sym_mm0] = ACTIONS(1),
    [anon_sym_mm1] = ACTIONS(1),
    [anon_sym_mm2] = ACTIONS(1),
    [anon_sym_mm3] = ACTIONS(1),
    [anon_sym_mm4] = ACTIONS(1),
    [anon_sym_mm5] = ACTIONS(1),
    [anon_sym_mm6] = ACTIONS(1),
    [anon_sym_mm7] = ACTIONS(1),
    [anon_sym_mm8] = ACTIONS(1),
    [anon_sym_mm9] = ACTIONS(1),
    [anon_sym_mm10] = ACTIONS(1),
    [anon_sym_mm11] = ACTIONS(1),
    [anon_sym_mm12] = ACTIONS(1),
    [anon_sym_mm13] = ACTIONS(1),
    [anon_sym_mm14] = ACTIONS(1),
    [anon_sym_mm15] = ACTIONS(1),
    [anon_sym_MM0] = ACTIONS(1),
    [anon_sym_MM1] = ACTIONS(1),
    [anon_sym_MM2] = ACTIONS(1),
    [anon_sym_MM3] = ACTIONS(1),
    [anon_sym_MM4] = ACTIONS(1),
    [anon_sym_MM5] = ACTIONS(1),
    [anon_sym_MM6] = ACTIONS(1),
    [anon_sym_MM7] = ACTIONS(1),
    [anon_sym_MM8] = ACTIONS(1),
    [anon_sym_MM9] = ACTIONS(1),
    [anon_sym_MM10] = ACTIONS(1),
    [anon_sym_MM11] = ACTIONS(1),
    [anon_sym_MM12] = ACTIONS(1),
    [anon_sym_MM13] = ACTIONS(1),
    [anon_sym_MM14] = ACTIONS(1),
    [anon_sym_MM15] = ACTIONS(1),
    [anon_sym_xmm0] = ACTIONS(1),
    [anon_sym_xmm1] = ACTIONS(1),
    [anon_sym_xmm2] = ACTIONS(1),
    [anon_sym_xmm3] = ACTIONS(1),
    [anon_sym_xmm4] = ACTIONS(1),
    [anon_sym_xmm5] = ACTIONS(1),
    [anon_sym_xmm6] = ACTIONS(1),
    [anon_sym_xmm7] = ACTIONS(1),
    [anon_sym_xmm8] = ACTIONS(1),
    [anon_sym_xmm9] = ACTIONS(1),
    [anon_sym_xmm10] = ACTIONS(1),
    [anon_sym_xmm11] = ACTIONS(1),
    [anon_sym_xmm12] = ACTIONS(1),
    [anon_sym_xmm13] = ACTIONS(1),
    [anon_sym_xmm14] = ACTIONS(1),
    [anon_sym_xmm15] = ACTIONS(1),
    [anon_sym_XMM0] = ACTIONS(1),
    [anon_sym_XMM1] = ACTIONS(1),
    [anon_sym_XMM2] = ACTIONS(1),
    [anon_sym_XMM3] = ACTIONS(1),
    [anon_sym_XMM4] = ACTIONS(1),
    [anon_sym_XMM5] = ACTIONS(1),
    [anon_sym_XMM6] = ACTIONS(1),
    [anon_sym_XMM7] = ACTIONS(1),
    [anon_sym_XMM8] = ACTIONS(1),
    [anon_sym_XMM9] = ACTIONS(1),
    [anon_sym_XMM10] = ACTIONS(1),
    [anon_sym_XMM11] = ACTIONS(1),
    [anon_sym_XMM12] = ACTIONS(1),
    [anon_sym_XMM13] = ACTIONS(1),
    [anon_sym_XMM14] = ACTIONS(1),
    [anon_sym_XMM15] = ACTIONS(1),
    [anon_sym_ymm0] = ACTIONS(1),
    [anon_sym_ymm1] = ACTIONS(1),
    [anon_sym_ymm2] = ACTIONS(1),
    [anon_sym_ymm3] = ACTIONS(1),
    [anon_sym_ymm4] = ACTIONS(1),
    [anon_sym_ymm5] = ACTIONS(1),
    [anon_sym_ymm6] = ACTIONS(1),
    [anon_sym_ymm7] = ACTIONS(1),
    [anon_sym_ymm8] = ACTIONS(1),
    [anon_sym_ymm9] = ACTIONS(1),
    [anon_sym_ymm10] = ACTIONS(1),
    [anon_sym_ymm11] = ACTIONS(1),
    [anon_sym_ymm12] = ACTIONS(1),
    [anon_sym_ymm13] = ACTIONS(1),
    [anon_sym_ymm14] = ACTIONS(1),
    [anon_sym_ymm15] = ACTIONS(1),
    [anon_sym_YMM0] = ACTIONS(1),
    [anon_sym_YMM1] = ACTIONS(1),
    [anon_sym_YMM2] = ACTIONS(1),
    [anon_sym_YMM3] = ACTIONS(1),
    [anon_sym_YMM4] = ACTIONS(1),
    [anon_sym_YMM5] = ACTIONS(1),
    [anon_sym_YMM6] = ACTIONS(1),
    [anon_sym_YMM7] = ACTIONS(1),
    [anon_sym_YMM8] = ACTIONS(1),
    [anon_sym_YMM9] = ACTIONS(1),
    [anon_sym_YMM10] = ACTIONS(1),
    [anon_sym_YMM11] = ACTIONS(1),
    [anon_sym_YMM12] = ACTIONS(1),
    [anon_sym_YMM13] = ACTIONS(1),
    [anon_sym_YMM14] = ACTIONS(1),
    [anon_sym_YMM15] = ACTIONS(1),
    [anon_sym_zmm0] = ACTIONS(1),
    [anon_sym_zmm1] = ACTIONS(1),
    [anon_sym_zmm2] = ACTIONS(1),
    [anon_sym_zmm3] = ACTIONS(1),
    [anon_sym_zmm4] = ACTIONS(1),
    [anon_sym_zmm5] = ACTIONS(1),
    [anon_sym_zmm6] = ACTIONS(1),
    [anon_sym_zmm7] = ACTIONS(1),
    [anon_sym_zmm8] = ACTIONS(1),
    [anon_sym_zmm9] = ACTIONS(1),
    [anon_sym_zmm10] = ACTIONS(1),
    [anon_sym_zmm11] = ACTIONS(1),
    [anon_sym_zmm12] = ACTIONS(1),
    [anon_sym_zmm13] = ACTIONS(1),
    [anon_sym_zmm14] = ACTIONS(1),
    [anon_sym_zmm15] = ACTIONS(1),
    [anon_sym_ZMM0] = ACTIONS(1),
    [anon_sym_ZMM1] = ACTIONS(1),
    [anon_sym_ZMM2] = ACTIONS(1),
    [anon_sym_ZMM3] = ACTIONS(1),
    [anon_sym_ZMM4] = ACTIONS(1),
    [anon_sym_ZMM5] = ACTIONS(1),
    [anon_sym_ZMM6] = ACTIONS(1),
    [anon_sym_ZMM7] = ACTIONS(1),
    [anon_sym_ZMM8] = ACTIONS(1),
    [anon_sym_ZMM9] = ACTIONS(1),
    [anon_sym_ZMM10] = ACTIONS(1),
    [anon_sym_ZMM11] = ACTIONS(1),
    [anon_sym_ZMM12] = ACTIONS(1),
    [anon_sym_ZMM13] = ACTIONS(1),
    [anon_sym_ZMM14] = ACTIONS(1),
    [anon_sym_ZMM15] = ACTIONS(1),
    [anon_sym_dr0] = ACTIONS(1),
    [anon_sym_dr1] = ACTIONS(1),
    [anon_sym_dr2] = ACTIONS(1),
    [anon_sym_dr3] = ACTIONS(1),
    [anon_sym_DR0] = ACTIONS(1),
    [anon_sym_DR1] = ACTIONS(1),
    [anon_sym_DR2] = ACTIONS(1),
    [anon_sym_DR3] = ACTIONS(1),
    [anon_sym_dr6] = ACTIONS(1),
    [anon_sym_dr7] = ACTIONS(1),
    [anon_sym_DR6] = ACTIONS(1),
    [anon_sym_DR7] = ACTIONS(1),
    [anon_sym_st0] = ACTIONS(1),
    [anon_sym_st1] = ACTIONS(1),
    [anon_sym_st2] = ACTIONS(1),
    [anon_sym_st3] = ACTIONS(1),
    [anon_sym_st4] = ACTIONS(1),
    [anon_sym_st5] = ACTIONS(1),
    [anon_sym_st6] = ACTIONS(1),
    [anon_sym_st7] = ACTIONS(1),
    [anon_sym_ST0] = ACTIONS(1),
    [anon_sym_ST1] = ACTIONS(1),
    [anon_sym_ST2] = ACTIONS(1),
    [anon_sym_ST3] = ACTIONS(1),
    [anon_sym_ST4] = ACTIONS(1),
    [anon_sym_ST5] = ACTIONS(1),
    [anon_sym_ST6] = ACTIONS(1),
    [anon_sym_ST7] = ACTIONS(1),
    [anon_sym_cr0] = ACTIONS(1),
    [anon_sym_CR0] = ACTIONS(1),
    [anon_sym_cr2] = ACTIONS(1),
    [anon_sym_cr3] = ACTIONS(1),
    [anon_sym_cr4] = ACTIONS(1),
    [anon_sym_CR2] = ACTIONS(1),
    [anon_sym_CR3] = ACTIONS(1),
    [anon_sym_CR4] = ACTIONS(1),
    [anon_sym_k0] = ACTIONS(1),
    [anon_sym_k1] = ACTIONS(1),
    [anon_sym_k2] = ACTIONS(1),
    [anon_sym_k3] = ACTIONS(1),
    [anon_sym_k4] = ACTIONS(1),
    [anon_sym_k5] = ACTIONS(1),
    [anon_sym_k6] = ACTIONS(1),
    [anon_sym_k7] = ACTIONS(1),
    [anon_sym_K0] = ACTIONS(1),
    [anon_sym_K1] = ACTIONS(1),
    [anon_sym_K2] = ACTIONS(1),
    [anon_sym_K3] = ACTIONS(1),
    [anon_sym_K4] = ACTIONS(1),
    [anon_sym_K5] = ACTIONS(1),
    [anon_sym_K6] = ACTIONS(1),
    [anon_sym_K7] = ACTIONS(1),
    [anon_sym_bnd0] = ACTIONS(1),
    [anon_sym_bnd1] = ACTIONS(1),
    [anon_sym_bnd2] = ACTIONS(1),
    [anon_sym_bnd3] = ACTIONS(1),
    [anon_sym_bnd4] = ACTIONS(1),
    [anon_sym_BND0] = ACTIONS(1),
    [anon_sym_BND1] = ACTIONS(1),
    [anon_sym_BND2] = ACTIONS(1),
    [anon_sym_BND3] = ACTIONS(1),
    [anon_sym_BND4] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__source_line] = STATE(5),
    [sym__statement] = STATE(22),
    [sym__directive] = STATE(22),
    [sym_instruction] = STATE(22),
    [sym_data_definition] = STATE(22),
    [sym_label] = STATE(9),
    [sym_format_directive] = STATE(22),
    [sym_section_directive] = STATE(22),
    [sym_actual_instruction] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_format] = ACTIONS(7),
    [anon_sym_FORMAT] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(9),
    [anon_sym_SECTION] = ACTIONS(9),
    [anon_sym_segment] = ACTIONS(11),
    [anon_sym_SEGMENT] = ACTIONS(11),
    [sym_control_directive] = ACTIONS(13),
    [sym_prepoc_directive] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_aaa] = ACTIONS(15),
    [anon_sym_aad] = ACTIONS(15),
    [anon_sym_aam] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_imul] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_idiv] = ACTIONS(15),
    [anon_sym_mov] = ACTIONS(15),
    [anon_sym_movb] = ACTIONS(15),
    [anon_sym_movw] = ACTIONS(15),
    [anon_sym_movd] = ACTIONS(15),
    [anon_sym_movq] = ACTIONS(15),
    [anon_sym_movt] = ACTIONS(15),
    [anon_sym_movzx] = ACTIONS(15),
    [anon_sym_movsx] = ACTIONS(15),
    [anon_sym_movdir64b] = ACTIONS(15),
    [anon_sym_shufps] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_pxor] = ACTIONS(15),
    [anon_sym_addps] = ACTIONS(15),
    [anon_sym_mulps] = ACTIONS(15),
    [anon_sym_SYSCALL] = ACTIONS(15),
    [anon_sym_AAA] = ACTIONS(15),
    [anon_sym_AAD] = ACTIONS(15),
    [anon_sym_AAM] = ACTIONS(15),
    [anon_sym_ADD] = ACTIONS(15),
    [anon_sym_SUB] = ACTIONS(15),
    [anon_sym_MUL] = ACTIONS(15),
    [anon_sym_IMUL] = ACTIONS(15),
    [anon_sym_DIV] = ACTIONS(15),
    [anon_sym_IDIV] = ACTIONS(15),
    [anon_sym_MOV] = ACTIONS(15),
    [anon_sym_MOVB] = ACTIONS(15),
    [anon_sym_MOVW] = ACTIONS(15),
    [anon_sym_MOVD] = ACTIONS(15),
    [anon_sym_MOVQ] = ACTIONS(15),
    [anon_sym_MOVT] = ACTIONS(15),
    [anon_sym_MOVZX] = ACTIONS(15),
    [anon_sym_MOVSX] = ACTIONS(15),
    [anon_sym_MOVDIR64B] = ACTIONS(15),
    [anon_sym_SHUFPS] = ACTIONS(15),
    [anon_sym_OR] = ACTIONS(15),
    [anon_sym_AND] = ACTIONS(15),
    [anon_sym_NOT] = ACTIONS(15),
    [anon_sym_XOR] = ACTIONS(15),
    [anon_sym_PXOR] = ACTIONS(15),
    [anon_sym_ADDPS] = ACTIONS(15),
    [anon_sym_MULPS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
  },
  [2] = {
    [sym__size_indicators] = STATE(4),
    [sym_operands] = STATE(26),
    [sym_identifier_or_registers] = STATE(25),
    [sym__registers] = STATE(23),
    [sym_comment] = ACTIONS(19),
    [sym__line_end] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(25),
    [anon_sym_word] = ACTIONS(25),
    [anon_sym_dword] = ACTIONS(25),
    [anon_sym_qword] = ACTIONS(25),
    [anon_sym_tbyte] = ACTIONS(25),
    [anon_sym_tword] = ACTIONS(25),
    [anon_sym_dqword] = ACTIONS(25),
    [anon_sym_xword] = ACTIONS(25),
    [anon_sym_qqword] = ACTIONS(25),
    [anon_sym_yword] = ACTIONS(25),
    [anon_sym_dqqword] = ACTIONS(25),
    [anon_sym_zword] = ACTIONS(25),
    [anon_sym_BYTE] = ACTIONS(25),
    [anon_sym_WORD] = ACTIONS(25),
    [anon_sym_DWORD] = ACTIONS(25),
    [anon_sym_QWORD] = ACTIONS(25),
    [anon_sym_TBYTE] = ACTIONS(25),
    [anon_sym_TWORD] = ACTIONS(25),
    [anon_sym_DQWORD] = ACTIONS(25),
    [anon_sym_XWORD] = ACTIONS(25),
    [anon_sym_QQWORD] = ACTIONS(25),
    [anon_sym_YWORD] = ACTIONS(25),
    [anon_sym_DQQWORD] = ACTIONS(25),
    [anon_sym_ZWORD] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_si] = ACTIONS(27),
    [anon_sym_di] = ACTIONS(27),
    [anon_sym_sp] = ACTIONS(27),
    [anon_sym_bp] = ACTIONS(27),
    [anon_sym_eax] = ACTIONS(27),
    [anon_sym_ebx] = ACTIONS(27),
    [anon_sym_ecx] = ACTIONS(27),
    [anon_sym_edx] = ACTIONS(27),
    [anon_sym_esi] = ACTIONS(27),
    [anon_sym_edi] = ACTIONS(27),
    [anon_sym_esp] = ACTIONS(27),
    [anon_sym_ebp] = ACTIONS(27),
    [anon_sym_rax] = ACTIONS(27),
    [anon_sym_rbx] = ACTIONS(27),
    [anon_sym_rcx] = ACTIONS(27),
    [anon_sym_rdx] = ACTIONS(27),
    [anon_sym_rsi] = ACTIONS(27),
    [anon_sym_rdi] = ACTIONS(27),
    [anon_sym_rsp] = ACTIONS(27),
    [anon_sym_rbp] = ACTIONS(27),
    [anon_sym_flags] = ACTIONS(27),
    [anon_sym_eflags] = ACTIONS(27),
    [anon_sym_rflags] = ACTIONS(27),
    [anon_sym_cs] = ACTIONS(27),
    [anon_sym_ds] = ACTIONS(27),
    [anon_sym_ss] = ACTIONS(27),
    [anon_sym_es] = ACTIONS(27),
    [anon_sym_fs] = ACTIONS(27),
    [anon_sym_gs] = ACTIONS(27),
    [anon_sym_al] = ACTIONS(27),
    [anon_sym_ah] = ACTIONS(27),
    [anon_sym_ax] = ACTIONS(27),
    [anon_sym_AL] = ACTIONS(27),
    [anon_sym_AH] = ACTIONS(27),
    [anon_sym_AX] = ACTIONS(27),
    [anon_sym_bl] = ACTIONS(27),
    [anon_sym_bh] = ACTIONS(27),
    [anon_sym_bx] = ACTIONS(27),
    [anon_sym_BL] = ACTIONS(27),
    [anon_sym_BH] = ACTIONS(27),
    [anon_sym_BX] = ACTIONS(27),
    [anon_sym_cl] = ACTIONS(27),
    [anon_sym_ch] = ACTIONS(27),
    [anon_sym_cx] = ACTIONS(27),
    [anon_sym_CL] = ACTIONS(27),
    [anon_sym_CH] = ACTIONS(27),
    [anon_sym_CX] = ACTIONS(27),
    [anon_sym_dl] = ACTIONS(27),
    [anon_sym_dh] = ACTIONS(27),
    [anon_sym_dx] = ACTIONS(27),
    [anon_sym_DL] = ACTIONS(27),
    [anon_sym_DH] = ACTIONS(27),
    [anon_sym_DX] = ACTIONS(27),
    [anon_sym_mm0] = ACTIONS(27),
    [anon_sym_mm1] = ACTIONS(27),
    [anon_sym_mm2] = ACTIONS(27),
    [anon_sym_mm3] = ACTIONS(27),
    [anon_sym_mm4] = ACTIONS(27),
    [anon_sym_mm5] = ACTIONS(27),
    [anon_sym_mm6] = ACTIONS(27),
    [anon_sym_mm7] = ACTIONS(27),
    [anon_sym_mm8] = ACTIONS(27),
    [anon_sym_mm9] = ACTIONS(27),
    [anon_sym_mm10] = ACTIONS(27),
    [anon_sym_mm11] = ACTIONS(27),
    [anon_sym_mm12] = ACTIONS(27),
    [anon_sym_mm13] = ACTIONS(27),
    [anon_sym_mm14] = ACTIONS(27),
    [anon_sym_mm15] = ACTIONS(27),
    [anon_sym_MM0] = ACTIONS(27),
    [anon_sym_MM1] = ACTIONS(27),
    [anon_sym_MM2] = ACTIONS(27),
    [anon_sym_MM3] = ACTIONS(27),
    [anon_sym_MM4] = ACTIONS(27),
    [anon_sym_MM5] = ACTIONS(27),
    [anon_sym_MM6] = ACTIONS(27),
    [anon_sym_MM7] = ACTIONS(27),
    [anon_sym_MM8] = ACTIONS(27),
    [anon_sym_MM9] = ACTIONS(27),
    [anon_sym_MM10] = ACTIONS(27),
    [anon_sym_MM11] = ACTIONS(27),
    [anon_sym_MM12] = ACTIONS(27),
    [anon_sym_MM13] = ACTIONS(27),
    [anon_sym_MM14] = ACTIONS(27),
    [anon_sym_MM15] = ACTIONS(27),
    [anon_sym_xmm0] = ACTIONS(27),
    [anon_sym_xmm1] = ACTIONS(27),
    [anon_sym_xmm2] = ACTIONS(27),
    [anon_sym_xmm3] = ACTIONS(27),
    [anon_sym_xmm4] = ACTIONS(27),
    [anon_sym_xmm5] = ACTIONS(27),
    [anon_sym_xmm6] = ACTIONS(27),
    [anon_sym_xmm7] = ACTIONS(27),
    [anon_sym_xmm8] = ACTIONS(27),
    [anon_sym_xmm9] = ACTIONS(27),
    [anon_sym_xmm10] = ACTIONS(27),
    [anon_sym_xmm11] = ACTIONS(27),
    [anon_sym_xmm12] = ACTIONS(27),
    [anon_sym_xmm13] = ACTIONS(27),
    [anon_sym_xmm14] = ACTIONS(27),
    [anon_sym_xmm15] = ACTIONS(27),
    [anon_sym_XMM0] = ACTIONS(27),
    [anon_sym_XMM1] = ACTIONS(27),
    [anon_sym_XMM2] = ACTIONS(27),
    [anon_sym_XMM3] = ACTIONS(27),
    [anon_sym_XMM4] = ACTIONS(27),
    [anon_sym_XMM5] = ACTIONS(27),
    [anon_sym_XMM6] = ACTIONS(27),
    [anon_sym_XMM7] = ACTIONS(27),
    [anon_sym_XMM8] = ACTIONS(27),
    [anon_sym_XMM9] = ACTIONS(27),
    [anon_sym_XMM10] = ACTIONS(27),
    [anon_sym_XMM11] = ACTIONS(27),
    [anon_sym_XMM12] = ACTIONS(27),
    [anon_sym_XMM13] = ACTIONS(27),
    [anon_sym_XMM14] = ACTIONS(27),
    [anon_sym_XMM15] = ACTIONS(27),
    [anon_sym_ymm0] = ACTIONS(27),
    [anon_sym_ymm1] = ACTIONS(27),
    [anon_sym_ymm2] = ACTIONS(27),
    [anon_sym_ymm3] = ACTIONS(27),
    [anon_sym_ymm4] = ACTIONS(27),
    [anon_sym_ymm5] = ACTIONS(27),
    [anon_sym_ymm6] = ACTIONS(27),
    [anon_sym_ymm7] = ACTIONS(27),
    [anon_sym_ymm8] = ACTIONS(27),
    [anon_sym_ymm9] = ACTIONS(27),
    [anon_sym_ymm10] = ACTIONS(27),
    [anon_sym_ymm11] = ACTIONS(27),
    [anon_sym_ymm12] = ACTIONS(27),
    [anon_sym_ymm13] = ACTIONS(27),
    [anon_sym_ymm14] = ACTIONS(27),
    [anon_sym_ymm15] = ACTIONS(27),
    [anon_sym_YMM0] = ACTIONS(27),
    [anon_sym_YMM1] = ACTIONS(27),
    [anon_sym_YMM2] = ACTIONS(27),
    [anon_sym_YMM3] = ACTIONS(27),
    [anon_sym_YMM4] = ACTIONS(27),
    [anon_sym_YMM5] = ACTIONS(27),
    [anon_sym_YMM6] = ACTIONS(27),
    [anon_sym_YMM7] = ACTIONS(27),
    [anon_sym_YMM8] = ACTIONS(27),
    [anon_sym_YMM9] = ACTIONS(27),
    [anon_sym_YMM10] = ACTIONS(27),
    [anon_sym_YMM11] = ACTIONS(27),
    [anon_sym_YMM12] = ACTIONS(27),
    [anon_sym_YMM13] = ACTIONS(27),
    [anon_sym_YMM14] = ACTIONS(27),
    [anon_sym_YMM15] = ACTIONS(27),
    [anon_sym_zmm0] = ACTIONS(27),
    [anon_sym_zmm1] = ACTIONS(27),
    [anon_sym_zmm2] = ACTIONS(27),
    [anon_sym_zmm3] = ACTIONS(27),
    [anon_sym_zmm4] = ACTIONS(27),
    [anon_sym_zmm5] = ACTIONS(27),
    [anon_sym_zmm6] = ACTIONS(27),
    [anon_sym_zmm7] = ACTIONS(27),
    [anon_sym_zmm8] = ACTIONS(27),
    [anon_sym_zmm9] = ACTIONS(27),
    [anon_sym_zmm10] = ACTIONS(27),
    [anon_sym_zmm11] = ACTIONS(27),
    [anon_sym_zmm12] = ACTIONS(27),
    [anon_sym_zmm13] = ACTIONS(27),
    [anon_sym_zmm14] = ACTIONS(27),
    [anon_sym_zmm15] = ACTIONS(27),
    [anon_sym_ZMM0] = ACTIONS(27),
    [anon_sym_ZMM1] = ACTIONS(27),
    [anon_sym_ZMM2] = ACTIONS(27),
    [anon_sym_ZMM3] = ACTIONS(27),
    [anon_sym_ZMM4] = ACTIONS(27),
    [anon_sym_ZMM5] = ACTIONS(27),
    [anon_sym_ZMM6] = ACTIONS(27),
    [anon_sym_ZMM7] = ACTIONS(27),
    [anon_sym_ZMM8] = ACTIONS(27),
    [anon_sym_ZMM9] = ACTIONS(27),
    [anon_sym_ZMM10] = ACTIONS(27),
    [anon_sym_ZMM11] = ACTIONS(27),
    [anon_sym_ZMM12] = ACTIONS(27),
    [anon_sym_ZMM13] = ACTIONS(27),
    [anon_sym_ZMM14] = ACTIONS(27),
    [anon_sym_ZMM15] = ACTIONS(27),
    [anon_sym_dr0] = ACTIONS(27),
    [anon_sym_dr1] = ACTIONS(27),
    [anon_sym_dr2] = ACTIONS(27),
    [anon_sym_dr3] = ACTIONS(27),
    [anon_sym_DR0] = ACTIONS(27),
    [anon_sym_DR1] = ACTIONS(27),
    [anon_sym_DR2] = ACTIONS(27),
    [anon_sym_DR3] = ACTIONS(27),
    [anon_sym_dr6] = ACTIONS(27),
    [anon_sym_dr7] = ACTIONS(27),
    [anon_sym_DR6] = ACTIONS(27),
    [anon_sym_DR7] = ACTIONS(27),
    [anon_sym_st0] = ACTIONS(27),
    [anon_sym_st1] = ACTIONS(27),
    [anon_sym_st2] = ACTIONS(27),
    [anon_sym_st3] = ACTIONS(27),
    [anon_sym_st4] = ACTIONS(27),
    [anon_sym_st5] = ACTIONS(27),
    [anon_sym_st6] = ACTIONS(27),
    [anon_sym_st7] = ACTIONS(27),
    [anon_sym_ST0] = ACTIONS(27),
    [anon_sym_ST1] = ACTIONS(27),
    [anon_sym_ST2] = ACTIONS(27),
    [anon_sym_ST3] = ACTIONS(27),
    [anon_sym_ST4] = ACTIONS(27),
    [anon_sym_ST5] = ACTIONS(27),
    [anon_sym_ST6] = ACTIONS(27),
    [anon_sym_ST7] = ACTIONS(27),
    [anon_sym_cr0] = ACTIONS(27),
    [anon_sym_CR0] = ACTIONS(27),
    [anon_sym_cr2] = ACTIONS(27),
    [anon_sym_cr3] = ACTIONS(27),
    [anon_sym_cr4] = ACTIONS(27),
    [anon_sym_CR2] = ACTIONS(27),
    [anon_sym_CR3] = ACTIONS(27),
    [anon_sym_CR4] = ACTIONS(27),
    [anon_sym_k0] = ACTIONS(27),
    [anon_sym_k1] = ACTIONS(27),
    [anon_sym_k2] = ACTIONS(27),
    [anon_sym_k3] = ACTIONS(27),
    [anon_sym_k4] = ACTIONS(27),
    [anon_sym_k5] = ACTIONS(27),
    [anon_sym_k6] = ACTIONS(27),
    [anon_sym_k7] = ACTIONS(27),
    [anon_sym_K0] = ACTIONS(27),
    [anon_sym_K1] = ACTIONS(27),
    [anon_sym_K2] = ACTIONS(27),
    [anon_sym_K3] = ACTIONS(27),
    [anon_sym_K4] = ACTIONS(27),
    [anon_sym_K5] = ACTIONS(27),
    [anon_sym_K6] = ACTIONS(27),
    [anon_sym_K7] = ACTIONS(27),
    [anon_sym_bnd0] = ACTIONS(27),
    [anon_sym_bnd1] = ACTIONS(27),
    [anon_sym_bnd2] = ACTIONS(27),
    [anon_sym_bnd3] = ACTIONS(27),
    [anon_sym_bnd4] = ACTIONS(27),
    [anon_sym_BND0] = ACTIONS(27),
    [anon_sym_BND1] = ACTIONS(27),
    [anon_sym_BND2] = ACTIONS(27),
    [anon_sym_BND3] = ACTIONS(27),
    [anon_sym_BND4] = ACTIONS(27),
  },
  [3] = {
    [sym_comment] = ACTIONS(19),
    [sym__line_end] = ACTIONS(29),
    [anon_sym_BSLASH] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_word] = ACTIONS(31),
    [anon_sym_dword] = ACTIONS(31),
    [anon_sym_qword] = ACTIONS(31),
    [anon_sym_tbyte] = ACTIONS(31),
    [anon_sym_tword] = ACTIONS(31),
    [anon_sym_dqword] = ACTIONS(31),
    [anon_sym_xword] = ACTIONS(31),
    [anon_sym_qqword] = ACTIONS(31),
    [anon_sym_yword] = ACTIONS(31),
    [anon_sym_dqqword] = ACTIONS(31),
    [anon_sym_zword] = ACTIONS(31),
    [anon_sym_BYTE] = ACTIONS(31),
    [anon_sym_WORD] = ACTIONS(31),
    [anon_sym_DWORD] = ACTIONS(31),
    [anon_sym_QWORD] = ACTIONS(31),
    [anon_sym_TBYTE] = ACTIONS(31),
    [anon_sym_TWORD] = ACTIONS(31),
    [anon_sym_DQWORD] = ACTIONS(31),
    [anon_sym_XWORD] = ACTIONS(31),
    [anon_sym_QQWORD] = ACTIONS(31),
    [anon_sym_YWORD] = ACTIONS(31),
    [anon_sym_DQQWORD] = ACTIONS(31),
    [anon_sym_ZWORD] = ACTIONS(31),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_si] = ACTIONS(31),
    [anon_sym_di] = ACTIONS(31),
    [anon_sym_sp] = ACTIONS(31),
    [anon_sym_bp] = ACTIONS(31),
    [anon_sym_eax] = ACTIONS(31),
    [anon_sym_ebx] = ACTIONS(31),
    [anon_sym_ecx] = ACTIONS(31),
    [anon_sym_edx] = ACTIONS(31),
    [anon_sym_esi] = ACTIONS(31),
    [anon_sym_edi] = ACTIONS(31),
    [anon_sym_esp] = ACTIONS(31),
    [anon_sym_ebp] = ACTIONS(31),
    [anon_sym_rax] = ACTIONS(31),
    [anon_sym_rbx] = ACTIONS(31),
    [anon_sym_rcx] = ACTIONS(31),
    [anon_sym_rdx] = ACTIONS(31),
    [anon_sym_rsi] = ACTIONS(31),
    [anon_sym_rdi] = ACTIONS(31),
    [anon_sym_rsp] = ACTIONS(31),
    [anon_sym_rbp] = ACTIONS(31),
    [anon_sym_flags] = ACTIONS(31),
    [anon_sym_eflags] = ACTIONS(31),
    [anon_sym_rflags] = ACTIONS(31),
    [anon_sym_cs] = ACTIONS(31),
    [anon_sym_ds] = ACTIONS(31),
    [anon_sym_ss] = ACTIONS(31),
    [anon_sym_es] = ACTIONS(31),
    [anon_sym_fs] = ACTIONS(31),
    [anon_sym_gs] = ACTIONS(31),
    [anon_sym_al] = ACTIONS(31),
    [anon_sym_ah] = ACTIONS(31),
    [anon_sym_ax] = ACTIONS(31),
    [anon_sym_AL] = ACTIONS(31),
    [anon_sym_AH] = ACTIONS(31),
    [anon_sym_AX] = ACTIONS(31),
    [anon_sym_bl] = ACTIONS(31),
    [anon_sym_bh] = ACTIONS(31),
    [anon_sym_bx] = ACTIONS(31),
    [anon_sym_BL] = ACTIONS(31),
    [anon_sym_BH] = ACTIONS(31),
    [anon_sym_BX] = ACTIONS(31),
    [anon_sym_cl] = ACTIONS(31),
    [anon_sym_ch] = ACTIONS(31),
    [anon_sym_cx] = ACTIONS(31),
    [anon_sym_CL] = ACTIONS(31),
    [anon_sym_CH] = ACTIONS(31),
    [anon_sym_CX] = ACTIONS(31),
    [anon_sym_dl] = ACTIONS(31),
    [anon_sym_dh] = ACTIONS(31),
    [anon_sym_dx] = ACTIONS(31),
    [anon_sym_DL] = ACTIONS(31),
    [anon_sym_DH] = ACTIONS(31),
    [anon_sym_DX] = ACTIONS(31),
    [anon_sym_mm0] = ACTIONS(31),
    [anon_sym_mm1] = ACTIONS(31),
    [anon_sym_mm2] = ACTIONS(31),
    [anon_sym_mm3] = ACTIONS(31),
    [anon_sym_mm4] = ACTIONS(31),
    [anon_sym_mm5] = ACTIONS(31),
    [anon_sym_mm6] = ACTIONS(31),
    [anon_sym_mm7] = ACTIONS(31),
    [anon_sym_mm8] = ACTIONS(31),
    [anon_sym_mm9] = ACTIONS(31),
    [anon_sym_mm10] = ACTIONS(31),
    [anon_sym_mm11] = ACTIONS(31),
    [anon_sym_mm12] = ACTIONS(31),
    [anon_sym_mm13] = ACTIONS(31),
    [anon_sym_mm14] = ACTIONS(31),
    [anon_sym_mm15] = ACTIONS(31),
    [anon_sym_MM0] = ACTIONS(31),
    [anon_sym_MM1] = ACTIONS(31),
    [anon_sym_MM2] = ACTIONS(31),
    [anon_sym_MM3] = ACTIONS(31),
    [anon_sym_MM4] = ACTIONS(31),
    [anon_sym_MM5] = ACTIONS(31),
    [anon_sym_MM6] = ACTIONS(31),
    [anon_sym_MM7] = ACTIONS(31),
    [anon_sym_MM8] = ACTIONS(31),
    [anon_sym_MM9] = ACTIONS(31),
    [anon_sym_MM10] = ACTIONS(31),
    [anon_sym_MM11] = ACTIONS(31),
    [anon_sym_MM12] = ACTIONS(31),
    [anon_sym_MM13] = ACTIONS(31),
    [anon_sym_MM14] = ACTIONS(31),
    [anon_sym_MM15] = ACTIONS(31),
    [anon_sym_xmm0] = ACTIONS(31),
    [anon_sym_xmm1] = ACTIONS(31),
    [anon_sym_xmm2] = ACTIONS(31),
    [anon_sym_xmm3] = ACTIONS(31),
    [anon_sym_xmm4] = ACTIONS(31),
    [anon_sym_xmm5] = ACTIONS(31),
    [anon_sym_xmm6] = ACTIONS(31),
    [anon_sym_xmm7] = ACTIONS(31),
    [anon_sym_xmm8] = ACTIONS(31),
    [anon_sym_xmm9] = ACTIONS(31),
    [anon_sym_xmm10] = ACTIONS(31),
    [anon_sym_xmm11] = ACTIONS(31),
    [anon_sym_xmm12] = ACTIONS(31),
    [anon_sym_xmm13] = ACTIONS(31),
    [anon_sym_xmm14] = ACTIONS(31),
    [anon_sym_xmm15] = ACTIONS(31),
    [anon_sym_XMM0] = ACTIONS(31),
    [anon_sym_XMM1] = ACTIONS(31),
    [anon_sym_XMM2] = ACTIONS(31),
    [anon_sym_XMM3] = ACTIONS(31),
    [anon_sym_XMM4] = ACTIONS(31),
    [anon_sym_XMM5] = ACTIONS(31),
    [anon_sym_XMM6] = ACTIONS(31),
    [anon_sym_XMM7] = ACTIONS(31),
    [anon_sym_XMM8] = ACTIONS(31),
    [anon_sym_XMM9] = ACTIONS(31),
    [anon_sym_XMM10] = ACTIONS(31),
    [anon_sym_XMM11] = ACTIONS(31),
    [anon_sym_XMM12] = ACTIONS(31),
    [anon_sym_XMM13] = ACTIONS(31),
    [anon_sym_XMM14] = ACTIONS(31),
    [anon_sym_XMM15] = ACTIONS(31),
    [anon_sym_ymm0] = ACTIONS(31),
    [anon_sym_ymm1] = ACTIONS(31),
    [anon_sym_ymm2] = ACTIONS(31),
    [anon_sym_ymm3] = ACTIONS(31),
    [anon_sym_ymm4] = ACTIONS(31),
    [anon_sym_ymm5] = ACTIONS(31),
    [anon_sym_ymm6] = ACTIONS(31),
    [anon_sym_ymm7] = ACTIONS(31),
    [anon_sym_ymm8] = ACTIONS(31),
    [anon_sym_ymm9] = ACTIONS(31),
    [anon_sym_ymm10] = ACTIONS(31),
    [anon_sym_ymm11] = ACTIONS(31),
    [anon_sym_ymm12] = ACTIONS(31),
    [anon_sym_ymm13] = ACTIONS(31),
    [anon_sym_ymm14] = ACTIONS(31),
    [anon_sym_ymm15] = ACTIONS(31),
    [anon_sym_YMM0] = ACTIONS(31),
    [anon_sym_YMM1] = ACTIONS(31),
    [anon_sym_YMM2] = ACTIONS(31),
    [anon_sym_YMM3] = ACTIONS(31),
    [anon_sym_YMM4] = ACTIONS(31),
    [anon_sym_YMM5] = ACTIONS(31),
    [anon_sym_YMM6] = ACTIONS(31),
    [anon_sym_YMM7] = ACTIONS(31),
    [anon_sym_YMM8] = ACTIONS(31),
    [anon_sym_YMM9] = ACTIONS(31),
    [anon_sym_YMM10] = ACTIONS(31),
    [anon_sym_YMM11] = ACTIONS(31),
    [anon_sym_YMM12] = ACTIONS(31),
    [anon_sym_YMM13] = ACTIONS(31),
    [anon_sym_YMM14] = ACTIONS(31),
    [anon_sym_YMM15] = ACTIONS(31),
    [anon_sym_zmm0] = ACTIONS(31),
    [anon_sym_zmm1] = ACTIONS(31),
    [anon_sym_zmm2] = ACTIONS(31),
    [anon_sym_zmm3] = ACTIONS(31),
    [anon_sym_zmm4] = ACTIONS(31),
    [anon_sym_zmm5] = ACTIONS(31),
    [anon_sym_zmm6] = ACTIONS(31),
    [anon_sym_zmm7] = ACTIONS(31),
    [anon_sym_zmm8] = ACTIONS(31),
    [anon_sym_zmm9] = ACTIONS(31),
    [anon_sym_zmm10] = ACTIONS(31),
    [anon_sym_zmm11] = ACTIONS(31),
    [anon_sym_zmm12] = ACTIONS(31),
    [anon_sym_zmm13] = ACTIONS(31),
    [anon_sym_zmm14] = ACTIONS(31),
    [anon_sym_zmm15] = ACTIONS(31),
    [anon_sym_ZMM0] = ACTIONS(31),
    [anon_sym_ZMM1] = ACTIONS(31),
    [anon_sym_ZMM2] = ACTIONS(31),
    [anon_sym_ZMM3] = ACTIONS(31),
    [anon_sym_ZMM4] = ACTIONS(31),
    [anon_sym_ZMM5] = ACTIONS(31),
    [anon_sym_ZMM6] = ACTIONS(31),
    [anon_sym_ZMM7] = ACTIONS(31),
    [anon_sym_ZMM8] = ACTIONS(31),
    [anon_sym_ZMM9] = ACTIONS(31),
    [anon_sym_ZMM10] = ACTIONS(31),
    [anon_sym_ZMM11] = ACTIONS(31),
    [anon_sym_ZMM12] = ACTIONS(31),
    [anon_sym_ZMM13] = ACTIONS(31),
    [anon_sym_ZMM14] = ACTIONS(31),
    [anon_sym_ZMM15] = ACTIONS(31),
    [anon_sym_dr0] = ACTIONS(31),
    [anon_sym_dr1] = ACTIONS(31),
    [anon_sym_dr2] = ACTIONS(31),
    [anon_sym_dr3] = ACTIONS(31),
    [anon_sym_DR0] = ACTIONS(31),
    [anon_sym_DR1] = ACTIONS(31),
    [anon_sym_DR2] = ACTIONS(31),
    [anon_sym_DR3] = ACTIONS(31),
    [anon_sym_dr6] = ACTIONS(31),
    [anon_sym_dr7] = ACTIONS(31),
    [anon_sym_DR6] = ACTIONS(31),
    [anon_sym_DR7] = ACTIONS(31),
    [anon_sym_st0] = ACTIONS(31),
    [anon_sym_st1] = ACTIONS(31),
    [anon_sym_st2] = ACTIONS(31),
    [anon_sym_st3] = ACTIONS(31),
    [anon_sym_st4] = ACTIONS(31),
    [anon_sym_st5] = ACTIONS(31),
    [anon_sym_st6] = ACTIONS(31),
    [anon_sym_st7] = ACTIONS(31),
    [anon_sym_ST0] = ACTIONS(31),
    [anon_sym_ST1] = ACTIONS(31),
    [anon_sym_ST2] = ACTIONS(31),
    [anon_sym_ST3] = ACTIONS(31),
    [anon_sym_ST4] = ACTIONS(31),
    [anon_sym_ST5] = ACTIONS(31),
    [anon_sym_ST6] = ACTIONS(31),
    [anon_sym_ST7] = ACTIONS(31),
    [anon_sym_cr0] = ACTIONS(31),
    [anon_sym_CR0] = ACTIONS(31),
    [anon_sym_cr2] = ACTIONS(31),
    [anon_sym_cr3] = ACTIONS(31),
    [anon_sym_cr4] = ACTIONS(31),
    [anon_sym_CR2] = ACTIONS(31),
    [anon_sym_CR3] = ACTIONS(31),
    [anon_sym_CR4] = ACTIONS(31),
    [anon_sym_k0] = ACTIONS(31),
    [anon_sym_k1] = ACTIONS(31),
    [anon_sym_k2] = ACTIONS(31),
    [anon_sym_k3] = ACTIONS(31),
    [anon_sym_k4] = ACTIONS(31),
    [anon_sym_k5] = ACTIONS(31),
    [anon_sym_k6] = ACTIONS(31),
    [anon_sym_k7] = ACTIONS(31),
    [anon_sym_K0] = ACTIONS(31),
    [anon_sym_K1] = ACTIONS(31),
    [anon_sym_K2] = ACTIONS(31),
    [anon_sym_K3] = ACTIONS(31),
    [anon_sym_K4] = ACTIONS(31),
    [anon_sym_K5] = ACTIONS(31),
    [anon_sym_K6] = ACTIONS(31),
    [anon_sym_K7] = ACTIONS(31),
    [anon_sym_bnd0] = ACTIONS(31),
    [anon_sym_bnd1] = ACTIONS(31),
    [anon_sym_bnd2] = ACTIONS(31),
    [anon_sym_bnd3] = ACTIONS(31),
    [anon_sym_bnd4] = ACTIONS(31),
    [anon_sym_BND0] = ACTIONS(31),
    [anon_sym_BND1] = ACTIONS(31),
    [anon_sym_BND2] = ACTIONS(31),
    [anon_sym_BND3] = ACTIONS(31),
    [anon_sym_BND4] = ACTIONS(31),
  },
  [4] = {
    [sym_operands] = STATE(31),
    [sym_identifier_or_registers] = STATE(25),
    [sym__registers] = STATE(23),
    [sym_comment] = ACTIONS(19),
    [sym__line_end] = ACTIONS(33),
    [anon_sym_BSLASH] = ACTIONS(35),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_si] = ACTIONS(27),
    [anon_sym_di] = ACTIONS(27),
    [anon_sym_sp] = ACTIONS(27),
    [anon_sym_bp] = ACTIONS(27),
    [anon_sym_eax] = ACTIONS(27),
    [anon_sym_ebx] = ACTIONS(27),
    [anon_sym_ecx] = ACTIONS(27),
    [anon_sym_edx] = ACTIONS(27),
    [anon_sym_esi] = ACTIONS(27),
    [anon_sym_edi] = ACTIONS(27),
    [anon_sym_esp] = ACTIONS(27),
    [anon_sym_ebp] = ACTIONS(27),
    [anon_sym_rax] = ACTIONS(27),
    [anon_sym_rbx] = ACTIONS(27),
    [anon_sym_rcx] = ACTIONS(27),
    [anon_sym_rdx] = ACTIONS(27),
    [anon_sym_rsi] = ACTIONS(27),
    [anon_sym_rdi] = ACTIONS(27),
    [anon_sym_rsp] = ACTIONS(27),
    [anon_sym_rbp] = ACTIONS(27),
    [anon_sym_flags] = ACTIONS(27),
    [anon_sym_eflags] = ACTIONS(27),
    [anon_sym_rflags] = ACTIONS(27),
    [anon_sym_cs] = ACTIONS(27),
    [anon_sym_ds] = ACTIONS(27),
    [anon_sym_ss] = ACTIONS(27),
    [anon_sym_es] = ACTIONS(27),
    [anon_sym_fs] = ACTIONS(27),
    [anon_sym_gs] = ACTIONS(27),
    [anon_sym_al] = ACTIONS(27),
    [anon_sym_ah] = ACTIONS(27),
    [anon_sym_ax] = ACTIONS(27),
    [anon_sym_AL] = ACTIONS(27),
    [anon_sym_AH] = ACTIONS(27),
    [anon_sym_AX] = ACTIONS(27),
    [anon_sym_bl] = ACTIONS(27),
    [anon_sym_bh] = ACTIONS(27),
    [anon_sym_bx] = ACTIONS(27),
    [anon_sym_BL] = ACTIONS(27),
    [anon_sym_BH] = ACTIONS(27),
    [anon_sym_BX] = ACTIONS(27),
    [anon_sym_cl] = ACTIONS(27),
    [anon_sym_ch] = ACTIONS(27),
    [anon_sym_cx] = ACTIONS(27),
    [anon_sym_CL] = ACTIONS(27),
    [anon_sym_CH] = ACTIONS(27),
    [anon_sym_CX] = ACTIONS(27),
    [anon_sym_dl] = ACTIONS(27),
    [anon_sym_dh] = ACTIONS(27),
    [anon_sym_dx] = ACTIONS(27),
    [anon_sym_DL] = ACTIONS(27),
    [anon_sym_DH] = ACTIONS(27),
    [anon_sym_DX] = ACTIONS(27),
    [anon_sym_mm0] = ACTIONS(27),
    [anon_sym_mm1] = ACTIONS(27),
    [anon_sym_mm2] = ACTIONS(27),
    [anon_sym_mm3] = ACTIONS(27),
    [anon_sym_mm4] = ACTIONS(27),
    [anon_sym_mm5] = ACTIONS(27),
    [anon_sym_mm6] = ACTIONS(27),
    [anon_sym_mm7] = ACTIONS(27),
    [anon_sym_mm8] = ACTIONS(27),
    [anon_sym_mm9] = ACTIONS(27),
    [anon_sym_mm10] = ACTIONS(27),
    [anon_sym_mm11] = ACTIONS(27),
    [anon_sym_mm12] = ACTIONS(27),
    [anon_sym_mm13] = ACTIONS(27),
    [anon_sym_mm14] = ACTIONS(27),
    [anon_sym_mm15] = ACTIONS(27),
    [anon_sym_MM0] = ACTIONS(27),
    [anon_sym_MM1] = ACTIONS(27),
    [anon_sym_MM2] = ACTIONS(27),
    [anon_sym_MM3] = ACTIONS(27),
    [anon_sym_MM4] = ACTIONS(27),
    [anon_sym_MM5] = ACTIONS(27),
    [anon_sym_MM6] = ACTIONS(27),
    [anon_sym_MM7] = ACTIONS(27),
    [anon_sym_MM8] = ACTIONS(27),
    [anon_sym_MM9] = ACTIONS(27),
    [anon_sym_MM10] = ACTIONS(27),
    [anon_sym_MM11] = ACTIONS(27),
    [anon_sym_MM12] = ACTIONS(27),
    [anon_sym_MM13] = ACTIONS(27),
    [anon_sym_MM14] = ACTIONS(27),
    [anon_sym_MM15] = ACTIONS(27),
    [anon_sym_xmm0] = ACTIONS(27),
    [anon_sym_xmm1] = ACTIONS(27),
    [anon_sym_xmm2] = ACTIONS(27),
    [anon_sym_xmm3] = ACTIONS(27),
    [anon_sym_xmm4] = ACTIONS(27),
    [anon_sym_xmm5] = ACTIONS(27),
    [anon_sym_xmm6] = ACTIONS(27),
    [anon_sym_xmm7] = ACTIONS(27),
    [anon_sym_xmm8] = ACTIONS(27),
    [anon_sym_xmm9] = ACTIONS(27),
    [anon_sym_xmm10] = ACTIONS(27),
    [anon_sym_xmm11] = ACTIONS(27),
    [anon_sym_xmm12] = ACTIONS(27),
    [anon_sym_xmm13] = ACTIONS(27),
    [anon_sym_xmm14] = ACTIONS(27),
    [anon_sym_xmm15] = ACTIONS(27),
    [anon_sym_XMM0] = ACTIONS(27),
    [anon_sym_XMM1] = ACTIONS(27),
    [anon_sym_XMM2] = ACTIONS(27),
    [anon_sym_XMM3] = ACTIONS(27),
    [anon_sym_XMM4] = ACTIONS(27),
    [anon_sym_XMM5] = ACTIONS(27),
    [anon_sym_XMM6] = ACTIONS(27),
    [anon_sym_XMM7] = ACTIONS(27),
    [anon_sym_XMM8] = ACTIONS(27),
    [anon_sym_XMM9] = ACTIONS(27),
    [anon_sym_XMM10] = ACTIONS(27),
    [anon_sym_XMM11] = ACTIONS(27),
    [anon_sym_XMM12] = ACTIONS(27),
    [anon_sym_XMM13] = ACTIONS(27),
    [anon_sym_XMM14] = ACTIONS(27),
    [anon_sym_XMM15] = ACTIONS(27),
    [anon_sym_ymm0] = ACTIONS(27),
    [anon_sym_ymm1] = ACTIONS(27),
    [anon_sym_ymm2] = ACTIONS(27),
    [anon_sym_ymm3] = ACTIONS(27),
    [anon_sym_ymm4] = ACTIONS(27),
    [anon_sym_ymm5] = ACTIONS(27),
    [anon_sym_ymm6] = ACTIONS(27),
    [anon_sym_ymm7] = ACTIONS(27),
    [anon_sym_ymm8] = ACTIONS(27),
    [anon_sym_ymm9] = ACTIONS(27),
    [anon_sym_ymm10] = ACTIONS(27),
    [anon_sym_ymm11] = ACTIONS(27),
    [anon_sym_ymm12] = ACTIONS(27),
    [anon_sym_ymm13] = ACTIONS(27),
    [anon_sym_ymm14] = ACTIONS(27),
    [anon_sym_ymm15] = ACTIONS(27),
    [anon_sym_YMM0] = ACTIONS(27),
    [anon_sym_YMM1] = ACTIONS(27),
    [anon_sym_YMM2] = ACTIONS(27),
    [anon_sym_YMM3] = ACTIONS(27),
    [anon_sym_YMM4] = ACTIONS(27),
    [anon_sym_YMM5] = ACTIONS(27),
    [anon_sym_YMM6] = ACTIONS(27),
    [anon_sym_YMM7] = ACTIONS(27),
    [anon_sym_YMM8] = ACTIONS(27),
    [anon_sym_YMM9] = ACTIONS(27),
    [anon_sym_YMM10] = ACTIONS(27),
    [anon_sym_YMM11] = ACTIONS(27),
    [anon_sym_YMM12] = ACTIONS(27),
    [anon_sym_YMM13] = ACTIONS(27),
    [anon_sym_YMM14] = ACTIONS(27),
    [anon_sym_YMM15] = ACTIONS(27),
    [anon_sym_zmm0] = ACTIONS(27),
    [anon_sym_zmm1] = ACTIONS(27),
    [anon_sym_zmm2] = ACTIONS(27),
    [anon_sym_zmm3] = ACTIONS(27),
    [anon_sym_zmm4] = ACTIONS(27),
    [anon_sym_zmm5] = ACTIONS(27),
    [anon_sym_zmm6] = ACTIONS(27),
    [anon_sym_zmm7] = ACTIONS(27),
    [anon_sym_zmm8] = ACTIONS(27),
    [anon_sym_zmm9] = ACTIONS(27),
    [anon_sym_zmm10] = ACTIONS(27),
    [anon_sym_zmm11] = ACTIONS(27),
    [anon_sym_zmm12] = ACTIONS(27),
    [anon_sym_zmm13] = ACTIONS(27),
    [anon_sym_zmm14] = ACTIONS(27),
    [anon_sym_zmm15] = ACTIONS(27),
    [anon_sym_ZMM0] = ACTIONS(27),
    [anon_sym_ZMM1] = ACTIONS(27),
    [anon_sym_ZMM2] = ACTIONS(27),
    [anon_sym_ZMM3] = ACTIONS(27),
    [anon_sym_ZMM4] = ACTIONS(27),
    [anon_sym_ZMM5] = ACTIONS(27),
    [anon_sym_ZMM6] = ACTIONS(27),
    [anon_sym_ZMM7] = ACTIONS(27),
    [anon_sym_ZMM8] = ACTIONS(27),
    [anon_sym_ZMM9] = ACTIONS(27),
    [anon_sym_ZMM10] = ACTIONS(27),
    [anon_sym_ZMM11] = ACTIONS(27),
    [anon_sym_ZMM12] = ACTIONS(27),
    [anon_sym_ZMM13] = ACTIONS(27),
    [anon_sym_ZMM14] = ACTIONS(27),
    [anon_sym_ZMM15] = ACTIONS(27),
    [anon_sym_dr0] = ACTIONS(27),
    [anon_sym_dr1] = ACTIONS(27),
    [anon_sym_dr2] = ACTIONS(27),
    [anon_sym_dr3] = ACTIONS(27),
    [anon_sym_DR0] = ACTIONS(27),
    [anon_sym_DR1] = ACTIONS(27),
    [anon_sym_DR2] = ACTIONS(27),
    [anon_sym_DR3] = ACTIONS(27),
    [anon_sym_dr6] = ACTIONS(27),
    [anon_sym_dr7] = ACTIONS(27),
    [anon_sym_DR6] = ACTIONS(27),
    [anon_sym_DR7] = ACTIONS(27),
    [anon_sym_st0] = ACTIONS(27),
    [anon_sym_st1] = ACTIONS(27),
    [anon_sym_st2] = ACTIONS(27),
    [anon_sym_st3] = ACTIONS(27),
    [anon_sym_st4] = ACTIONS(27),
    [anon_sym_st5] = ACTIONS(27),
    [anon_sym_st6] = ACTIONS(27),
    [anon_sym_st7] = ACTIONS(27),
    [anon_sym_ST0] = ACTIONS(27),
    [anon_sym_ST1] = ACTIONS(27),
    [anon_sym_ST2] = ACTIONS(27),
    [anon_sym_ST3] = ACTIONS(27),
    [anon_sym_ST4] = ACTIONS(27),
    [anon_sym_ST5] = ACTIONS(27),
    [anon_sym_ST6] = ACTIONS(27),
    [anon_sym_ST7] = ACTIONS(27),
    [anon_sym_cr0] = ACTIONS(27),
    [anon_sym_CR0] = ACTIONS(27),
    [anon_sym_cr2] = ACTIONS(27),
    [anon_sym_cr3] = ACTIONS(27),
    [anon_sym_cr4] = ACTIONS(27),
    [anon_sym_CR2] = ACTIONS(27),
    [anon_sym_CR3] = ACTIONS(27),
    [anon_sym_CR4] = ACTIONS(27),
    [anon_sym_k0] = ACTIONS(27),
    [anon_sym_k1] = ACTIONS(27),
    [anon_sym_k2] = ACTIONS(27),
    [anon_sym_k3] = ACTIONS(27),
    [anon_sym_k4] = ACTIONS(27),
    [anon_sym_k5] = ACTIONS(27),
    [anon_sym_k6] = ACTIONS(27),
    [anon_sym_k7] = ACTIONS(27),
    [anon_sym_K0] = ACTIONS(27),
    [anon_sym_K1] = ACTIONS(27),
    [anon_sym_K2] = ACTIONS(27),
    [anon_sym_K3] = ACTIONS(27),
    [anon_sym_K4] = ACTIONS(27),
    [anon_sym_K5] = ACTIONS(27),
    [anon_sym_K6] = ACTIONS(27),
    [anon_sym_K7] = ACTIONS(27),
    [anon_sym_bnd0] = ACTIONS(27),
    [anon_sym_bnd1] = ACTIONS(27),
    [anon_sym_bnd2] = ACTIONS(27),
    [anon_sym_bnd3] = ACTIONS(27),
    [anon_sym_bnd4] = ACTIONS(27),
    [anon_sym_BND0] = ACTIONS(27),
    [anon_sym_BND1] = ACTIONS(27),
    [anon_sym_BND2] = ACTIONS(27),
    [anon_sym_BND3] = ACTIONS(27),
    [anon_sym_BND4] = ACTIONS(27),
  },
  [5] = {
    [sym__source_line] = STATE(6),
    [sym__statement] = STATE(22),
    [sym__directive] = STATE(22),
    [sym_instruction] = STATE(22),
    [sym_data_definition] = STATE(22),
    [sym_label] = STATE(9),
    [sym_format_directive] = STATE(22),
    [sym_section_directive] = STATE(22),
    [sym_actual_instruction] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_format] = ACTIONS(7),
    [anon_sym_FORMAT] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(9),
    [anon_sym_SECTION] = ACTIONS(9),
    [anon_sym_segment] = ACTIONS(11),
    [anon_sym_SEGMENT] = ACTIONS(11),
    [sym_control_directive] = ACTIONS(13),
    [sym_prepoc_directive] = ACTIONS(13),
    [anon_sym_syscall] = ACTIONS(15),
    [anon_sym_aaa] = ACTIONS(15),
    [anon_sym_aad] = ACTIONS(15),
    [anon_sym_aam] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_imul] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_idiv] = ACTIONS(15),
    [anon_sym_mov] = ACTIONS(15),
    [anon_sym_movb] = ACTIONS(15),
    [anon_sym_movw] = ACTIONS(15),
    [anon_sym_movd] = ACTIONS(15),
    [anon_sym_movq] = ACTIONS(15),
    [anon_sym_movt] = ACTIONS(15),
    [anon_sym_movzx] = ACTIONS(15),
    [anon_sym_movsx] = ACTIONS(15),
    [anon_sym_movdir64b] = ACTIONS(15),
    [anon_sym_shufps] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_pxor] = ACTIONS(15),
    [anon_sym_addps] = ACTIONS(15),
    [anon_sym_mulps] = ACTIONS(15),
    [anon_sym_SYSCALL] = ACTIONS(15),
    [anon_sym_AAA] = ACTIONS(15),
    [anon_sym_AAD] = ACTIONS(15),
    [anon_sym_AAM] = ACTIONS(15),
    [anon_sym_ADD] = ACTIONS(15),
    [anon_sym_SUB] = ACTIONS(15),
    [anon_sym_MUL] = ACTIONS(15),
    [anon_sym_IMUL] = ACTIONS(15),
    [anon_sym_DIV] = ACTIONS(15),
    [anon_sym_IDIV] = ACTIONS(15),
    [anon_sym_MOV] = ACTIONS(15),
    [anon_sym_MOVB] = ACTIONS(15),
    [anon_sym_MOVW] = ACTIONS(15),
    [anon_sym_MOVD] = ACTIONS(15),
    [anon_sym_MOVQ] = ACTIONS(15),
    [anon_sym_MOVT] = ACTIONS(15),
    [anon_sym_MOVZX] = ACTIONS(15),
    [anon_sym_MOVSX] = ACTIONS(15),
    [anon_sym_MOVDIR64B] = ACTIONS(15),
    [anon_sym_SHUFPS] = ACTIONS(15),
    [anon_sym_OR] = ACTIONS(15),
    [anon_sym_AND] = ACTIONS(15),
    [anon_sym_NOT] = ACTIONS(15),
    [anon_sym_XOR] = ACTIONS(15),
    [anon_sym_PXOR] = ACTIONS(15),
    [anon_sym_ADDPS] = ACTIONS(15),
    [anon_sym_MULPS] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
  },
  [6] = {
    [sym__source_line] = STATE(6),
    [sym__statement] = STATE(22),
    [sym__directive] = STATE(22),
    [sym_instruction] = STATE(22),
    [sym_data_definition] = STATE(22),
    [sym_label] = STATE(9),
    [sym_format_directive] = STATE(22),
    [sym_section_directive] = STATE(22),
    [sym_actual_instruction] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_format] = ACTIONS(41),
    [anon_sym_FORMAT] = ACTIONS(41),
    [anon_sym_section] = ACTIONS(44),
    [anon_sym_SECTION] = ACTIONS(44),
    [anon_sym_segment] = ACTIONS(47),
    [anon_sym_SEGMENT] = ACTIONS(47),
    [sym_control_directive] = ACTIONS(50),
    [sym_prepoc_directive] = ACTIONS(50),
    [anon_sym_syscall] = ACTIONS(53),
    [anon_sym_aaa] = ACTIONS(53),
    [anon_sym_aad] = ACTIONS(53),
    [anon_sym_aam] = ACTIONS(53),
    [anon_sym_add] = ACTIONS(53),
    [anon_sym_sub] = ACTIONS(53),
    [anon_sym_mul] = ACTIONS(53),
    [anon_sym_imul] = ACTIONS(53),
    [anon_sym_div] = ACTIONS(53),
    [anon_sym_idiv] = ACTIONS(53),
    [anon_sym_mov] = ACTIONS(53),
    [anon_sym_movb] = ACTIONS(53),
    [anon_sym_movw] = ACTIONS(53),
    [anon_sym_movd] = ACTIONS(53),
    [anon_sym_movq] = ACTIONS(53),
    [anon_sym_movt] = ACTIONS(53),
    [anon_sym_movzx] = ACTIONS(53),
    [anon_sym_movsx] = ACTIONS(53),
    [anon_sym_movdir64b] = ACTIONS(53),
    [anon_sym_shufps] = ACTIONS(53),
    [anon_sym_or] = ACTIONS(53),
    [anon_sym_and] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(53),
    [anon_sym_xor] = ACTIONS(53),
    [anon_sym_pxor] = ACTIONS(53),
    [anon_sym_addps] = ACTIONS(53),
    [anon_sym_mulps] = ACTIONS(53),
    [anon_sym_SYSCALL] = ACTIONS(53),
    [anon_sym_AAA] = ACTIONS(53),
    [anon_sym_AAD] = ACTIONS(53),
    [anon_sym_AAM] = ACTIONS(53),
    [anon_sym_ADD] = ACTIONS(53),
    [anon_sym_SUB] = ACTIONS(53),
    [anon_sym_MUL] = ACTIONS(53),
    [anon_sym_IMUL] = ACTIONS(53),
    [anon_sym_DIV] = ACTIONS(53),
    [anon_sym_IDIV] = ACTIONS(53),
    [anon_sym_MOV] = ACTIONS(53),
    [anon_sym_MOVB] = ACTIONS(53),
    [anon_sym_MOVW] = ACTIONS(53),
    [anon_sym_MOVD] = ACTIONS(53),
    [anon_sym_MOVQ] = ACTIONS(53),
    [anon_sym_MOVT] = ACTIONS(53),
    [anon_sym_MOVZX] = ACTIONS(53),
    [anon_sym_MOVSX] = ACTIONS(53),
    [anon_sym_MOVDIR64B] = ACTIONS(53),
    [anon_sym_SHUFPS] = ACTIONS(53),
    [anon_sym_OR] = ACTIONS(53),
    [anon_sym_AND] = ACTIONS(53),
    [anon_sym_NOT] = ACTIONS(53),
    [anon_sym_XOR] = ACTIONS(53),
    [anon_sym_PXOR] = ACTIONS(53),
    [anon_sym_ADDPS] = ACTIONS(53),
    [anon_sym_MULPS] = ACTIONS(53),
    [sym_identifier] = ACTIONS(56),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_format] = ACTIONS(61),
    [anon_sym_FORMAT] = ACTIONS(61),
    [anon_sym_section] = ACTIONS(61),
    [anon_sym_SECTION] = ACTIONS(61),
    [anon_sym_segment] = ACTIONS(61),
    [anon_sym_SEGMENT] = ACTIONS(61),
    [sym_control_directive] = ACTIONS(61),
    [sym_prepoc_directive] = ACTIONS(61),
    [anon_sym_syscall] = ACTIONS(61),
    [anon_sym_aaa] = ACTIONS(61),
    [anon_sym_aad] = ACTIONS(61),
    [anon_sym_aam] = ACTIONS(61),
    [anon_sym_add] = ACTIONS(61),
    [anon_sym_sub] = ACTIONS(61),
    [anon_sym_mul] = ACTIONS(61),
    [anon_sym_imul] = ACTIONS(61),
    [anon_sym_div] = ACTIONS(61),
    [anon_sym_idiv] = ACTIONS(61),
    [anon_sym_mov] = ACTIONS(61),
    [anon_sym_movb] = ACTIONS(61),
    [anon_sym_movw] = ACTIONS(61),
    [anon_sym_movd] = ACTIONS(61),
    [anon_sym_movq] = ACTIONS(61),
    [anon_sym_movt] = ACTIONS(61),
    [anon_sym_movzx] = ACTIONS(61),
    [anon_sym_movsx] = ACTIONS(61),
    [anon_sym_movdir64b] = ACTIONS(61),
    [anon_sym_shufps] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(61),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(61),
    [anon_sym_xor] = ACTIONS(61),
    [anon_sym_pxor] = ACTIONS(61),
    [anon_sym_addps] = ACTIONS(61),
    [anon_sym_mulps] = ACTIONS(61),
    [anon_sym_SYSCALL] = ACTIONS(61),
    [anon_sym_AAA] = ACTIONS(61),
    [anon_sym_AAD] = ACTIONS(61),
    [anon_sym_AAM] = ACTIONS(61),
    [anon_sym_ADD] = ACTIONS(61),
    [anon_sym_SUB] = ACTIONS(61),
    [anon_sym_MUL] = ACTIONS(61),
    [anon_sym_IMUL] = ACTIONS(61),
    [anon_sym_DIV] = ACTIONS(61),
    [anon_sym_IDIV] = ACTIONS(61),
    [anon_sym_MOV] = ACTIONS(61),
    [anon_sym_MOVB] = ACTIONS(61),
    [anon_sym_MOVW] = ACTIONS(61),
    [anon_sym_MOVD] = ACTIONS(61),
    [anon_sym_MOVQ] = ACTIONS(61),
    [anon_sym_MOVT] = ACTIONS(61),
    [anon_sym_MOVZX] = ACTIONS(61),
    [anon_sym_MOVSX] = ACTIONS(61),
    [anon_sym_MOVDIR64B] = ACTIONS(61),
    [anon_sym_SHUFPS] = ACTIONS(61),
    [anon_sym_OR] = ACTIONS(61),
    [anon_sym_AND] = ACTIONS(61),
    [anon_sym_NOT] = ACTIONS(61),
    [anon_sym_XOR] = ACTIONS(61),
    [anon_sym_PXOR] = ACTIONS(61),
    [anon_sym_ADDPS] = ACTIONS(61),
    [anon_sym_MULPS] = ACTIONS(61),
    [sym_identifier] = ACTIONS(61),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_format] = ACTIONS(65),
    [anon_sym_FORMAT] = ACTIONS(65),
    [anon_sym_section] = ACTIONS(65),
    [anon_sym_SECTION] = ACTIONS(65),
    [anon_sym_segment] = ACTIONS(65),
    [anon_sym_SEGMENT] = ACTIONS(65),
    [sym_control_directive] = ACTIONS(65),
    [sym_prepoc_directive] = ACTIONS(65),
    [anon_sym_syscall] = ACTIONS(65),
    [anon_sym_aaa] = ACTIONS(65),
    [anon_sym_aad] = ACTIONS(65),
    [anon_sym_aam] = ACTIONS(65),
    [anon_sym_add] = ACTIONS(65),
    [anon_sym_sub] = ACTIONS(65),
    [anon_sym_mul] = ACTIONS(65),
    [anon_sym_imul] = ACTIONS(65),
    [anon_sym_div] = ACTIONS(65),
    [anon_sym_idiv] = ACTIONS(65),
    [anon_sym_mov] = ACTIONS(65),
    [anon_sym_movb] = ACTIONS(65),
    [anon_sym_movw] = ACTIONS(65),
    [anon_sym_movd] = ACTIONS(65),
    [anon_sym_movq] = ACTIONS(65),
    [anon_sym_movt] = ACTIONS(65),
    [anon_sym_movzx] = ACTIONS(65),
    [anon_sym_movsx] = ACTIONS(65),
    [anon_sym_movdir64b] = ACTIONS(65),
    [anon_sym_shufps] = ACTIONS(65),
    [anon_sym_or] = ACTIONS(65),
    [anon_sym_and] = ACTIONS(65),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_xor] = ACTIONS(65),
    [anon_sym_pxor] = ACTIONS(65),
    [anon_sym_addps] = ACTIONS(65),
    [anon_sym_mulps] = ACTIONS(65),
    [anon_sym_SYSCALL] = ACTIONS(65),
    [anon_sym_AAA] = ACTIONS(65),
    [anon_sym_AAD] = ACTIONS(65),
    [anon_sym_AAM] = ACTIONS(65),
    [anon_sym_ADD] = ACTIONS(65),
    [anon_sym_SUB] = ACTIONS(65),
    [anon_sym_MUL] = ACTIONS(65),
    [anon_sym_IMUL] = ACTIONS(65),
    [anon_sym_DIV] = ACTIONS(65),
    [anon_sym_IDIV] = ACTIONS(65),
    [anon_sym_MOV] = ACTIONS(65),
    [anon_sym_MOVB] = ACTIONS(65),
    [anon_sym_MOVW] = ACTIONS(65),
    [anon_sym_MOVD] = ACTIONS(65),
    [anon_sym_MOVQ] = ACTIONS(65),
    [anon_sym_MOVT] = ACTIONS(65),
    [anon_sym_MOVZX] = ACTIONS(65),
    [anon_sym_MOVSX] = ACTIONS(65),
    [anon_sym_MOVDIR64B] = ACTIONS(65),
    [anon_sym_SHUFPS] = ACTIONS(65),
    [anon_sym_OR] = ACTIONS(65),
    [anon_sym_AND] = ACTIONS(65),
    [anon_sym_NOT] = ACTIONS(65),
    [anon_sym_XOR] = ACTIONS(65),
    [anon_sym_PXOR] = ACTIONS(65),
    [anon_sym_ADDPS] = ACTIONS(65),
    [anon_sym_MULPS] = ACTIONS(65),
    [sym_identifier] = ACTIONS(65),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__line_end,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    STATE(19), 1,
      sym_data_directive,
    ACTIONS(71), 10,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
      anon_sym_dt,
      anon_sym_DB,
      anon_sym_DW,
      anon_sym_DD,
      anon_sym_DQ,
      anon_sym_DT,
  [25] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__line_end,
    ACTIONS(77), 1,
      anon_sym_COLON,
    ACTIONS(75), 11,
      anon_sym_BSLASH,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
      anon_sym_dt,
      anon_sym_DB,
      anon_sym_DW,
      anon_sym_DD,
      anon_sym_DQ,
      anon_sym_DT,
  [48] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_end,
    ACTIONS(81), 11,
      anon_sym_BSLASH,
      anon_sym_db,
      anon_sym_dw,
      anon_sym_dd,
      anon_sym_dq,
      anon_sym_dt,
      anon_sym_DB,
      anon_sym_DW,
      anon_sym_DD,
      anon_sym_DQ,
      anon_sym_DT,
  [68] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym__line_end,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    STATE(15), 2,
      sym__segment_flags,
      aux_sym_section_directive_repeat1,
    ACTIONS(87), 6,
      anon_sym_executable,
      anon_sym_EXECUTABLE,
      anon_sym_readable,
      anon_sym_writeable,
      anon_sym_READABLE,
      anon_sym_WRITEABLE,
  [90] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym__line_end,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    STATE(14), 2,
      sym__segment_flags,
      aux_sym_section_directive_repeat1,
    ACTIONS(89), 6,
      anon_sym_executable,
      anon_sym_EXECUTABLE,
      anon_sym_readable,
      anon_sym_writeable,
      anon_sym_READABLE,
      anon_sym_WRITEABLE,
  [112] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym__line_end,
    ACTIONS(93), 1,
      anon_sym_BSLASH,
    STATE(14), 2,
      sym__segment_flags,
      aux_sym_section_directive_repeat1,
    ACTIONS(95), 6,
      anon_sym_executable,
      anon_sym_EXECUTABLE,
      anon_sym_readable,
      anon_sym_writeable,
      anon_sym_READABLE,
      anon_sym_WRITEABLE,
  [134] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym__line_end,
    ACTIONS(100), 1,
      anon_sym_BSLASH,
    STATE(14), 2,
      sym__segment_flags,
      aux_sym_section_directive_repeat1,
    ACTIONS(89), 6,
      anon_sym_executable,
      anon_sym_EXECUTABLE,
      anon_sym_readable,
      anon_sym_writeable,
      anon_sym_READABLE,
      anon_sym_WRITEABLE,
  [156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym__valid_format,
    ACTIONS(102), 2,
      anon_sym_elf,
      anon_sym_ELF,
    ACTIONS(104), 6,
      anon_sym_elf64,
      anon_sym_bin,
      anon_sym_mscoff,
      anon_sym_ELF64,
      anon_sym_BIN,
      anon_sym_MSCOFF,
  [175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(13), 2,
      sym__segment_flags,
      aux_sym_section_directive_repeat1,
    ACTIONS(106), 6,
      anon_sym_executable,
      anon_sym_EXECUTABLE,
      anon_sym_readable,
      anon_sym_writeable,
      anon_sym_READABLE,
      anon_sym_WRITEABLE,
  [191] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__line_end,
    ACTIONS(110), 1,
      anon_sym_BSLASH,
    ACTIONS(112), 1,
      sym__integer,
    STATE(21), 1,
      sym__valid_format_suffix,
    ACTIONS(114), 2,
      anon_sym_executable,
      anon_sym_EXECUTABLE,
  [211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__integer,
    STATE(29), 1,
      sym_value,
    ACTIONS(116), 2,
      sym_identifier,
      sym__floats,
  [225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__integer,
    ACTIONS(120), 2,
      sym_identifier,
      sym__floats,
  [236] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym__line_end,
    ACTIONS(126), 1,
      anon_sym_BSLASH,
    ACTIONS(128), 1,
      sym__integer,
  [249] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__line_end,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
  [259] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym__line_end,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
  [269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      aux_sym_section_directive_token1,
      aux_sym_section_directive_token2,
  [277] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__line_end,
    ACTIONS(142), 1,
      anon_sym_BSLASH,
  [287] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__line_end,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
  [297] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym__line_end,
    ACTIONS(126), 1,
      anon_sym_BSLASH,
  [307] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__line_end,
    ACTIONS(146), 1,
      anon_sym_BSLASH,
  [317] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__line_end,
    ACTIONS(150), 1,
      anon_sym_BSLASH,
  [327] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym__line_end,
    ACTIONS(154), 1,
      anon_sym_BSLASH,
  [337] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__line_end,
    ACTIONS(158), 1,
      anon_sym_BSLASH,
  [347] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__line_end,
  [354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 25,
  [SMALL_STATE(11)] = 48,
  [SMALL_STATE(12)] = 68,
  [SMALL_STATE(13)] = 90,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 156,
  [SMALL_STATE(17)] = 175,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 211,
  [SMALL_STATE(20)] = 225,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 249,
  [SMALL_STATE(23)] = 259,
  [SMALL_STATE(24)] = 269,
  [SMALL_STATE(25)] = 277,
  [SMALL_STATE(26)] = 287,
  [SMALL_STATE(27)] = 297,
  [SMALL_STATE(28)] = 307,
  [SMALL_STATE(29)] = 317,
  [SMALL_STATE(30)] = 327,
  [SMALL_STATE(31)] = 337,
  [SMALL_STATE(32)] = 347,
  [SMALL_STATE(33)] = 354,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actual_instruction, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actual_instruction, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_line, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__source_line, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__source_line, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__source_line, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_directive, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_directive, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_directive_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_directive_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_directive, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_directive, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_directive, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_directive, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_directive, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_directive, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_or_registers, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_or_registers, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_definition, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_definition, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_directive, 4, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_directive, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
