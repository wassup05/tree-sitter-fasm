/**
 * @file tree-sitter parser for the FASM assembler.
 * @author Suprit S Jahagirdar <supritsj05@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const non_stdregs = [
  "si",
  "di",
  "sp",
  "bp",
  "eax",
  "ebx",
  "ecx",
  "edx",
  "esi",
  "edi",
  "esp",
  "ebp",
  "rax",
  "rbx",
  "rcx",
  "rdx",
  "rsi",
  "rdi",
  "rsp",
  "rbp",
  "flags",
  "eflags",
  "rflags",
  "cs",
  "ds",
  "ss",
  "es",
  "fs",
  "gs",
]

const x86_instructions = [
  "syscall",
  "aaa",
  "aad",
  "aam",
  "add",
  "sub",
  "mul",
  "imul",
  "div",
  "idiv",
  "mov",
  "movb",
  "movw",
  "movd",
  "movq",
  "movt",
  "movzx",
  "movsx",
  "movdir64b",
  "shufps",
  "or",
  "and",
  "not",
  "xor",
  "pxor",
  "addps",
  "mulps",
]

module.exports = grammar({
  name: "fasm",

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    source_file: $ => repeat($._source_line),

    comment: $ => /;.*/,

    _line_end: $ => /\r?\n/,

    _source_line: $ => seq(
      $._statement,
      optional("\\"),
      $._line_end
    ),

    _statement: $ => choice(
      $._directive,
      $.instruction,
      $.data_definition,
      $.label
    ),

    _directive: $ => choice(
      $.format_directive,
      $.section_directive,
      $.control_directive,
      $.prepoc_directive,
    ),

    instruction: $ => seq(
      $.actual_instruction,
      optional($._size_indicators),
      optional($.operands),
    ),

    _size_indicators: $ => choice(
      ...ci([
        "byte",
        "word",
        "dword",
        "qword",
        "tbyte",
        "tword",
        "dqword",
        "xword",
        "qqword",
        "yword",
        "dqqword",
        "zword",
      ]),
    ),

    data_definition: $ => seq(
      $.label,
      $.data_directive,
      $.value
    ),

    label: $ => seq(
      $.identifier,
      optional(":"),
    ),

    format_directive: $ => seq(
      choice(...ci(["format"])),
      $._valid_format,
      optional($._valid_format_suffix),
      optional($._integer)
    ),

    section_directive: $ => choice(
      seq(
        choice(...ci(["section"])),
        choice(/".*"/, /'.*'/),
        repeat($._segment_flags)
      ), seq(
        choice(...ci(["segment"])),
        repeat1($._segment_flags)
      )
    ),

    control_directive: $ => /control/,

    prepoc_directive: $ => /prepoc/,

    actual_instruction: $ => choice(
      ...ci(x86_instructions),
    ),

    operands: $ => $.identifier_or_registers,

    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,

    data_directive: $ => choice(
      ...ci(["db", "dw", "dd", "dq", "dt"]),
    ),

    value: $ => choice(
      $.identifier,
      $._integer,
      $._floats
    ),

    _floats: $ => /\d*\.?\d+/,

    _integer: $ => /\d+/,

    _valid_format: $ => choice(
      ...ci(["elf", "elf64", "bin", "ms coff"])
    ),

    _valid_format_suffix: $ => choice(
      ...ci(["executable"]),
    ),

    _segment_flags: $ => choice(
      ...ci(["readable", "writeable", "executable"])
    ),

    identifier_or_registers: $ => choice(
      $.identifier,
      $._registers
    ),

    _registers: $ => choice(
      ...non_stdregs,
      ...congenreg("a", ["l", "h", "x"]),
      ...congenreg("b", ["l", "h", "x"]),
      ...congenreg("c", ["l", "h", "x"]),
      ...congenreg("d", ["l", "h", "x"]),
      ...conreg("mm", 0, 15),
      ...conreg("xmm", 0, 15),
      ...conreg("ymm", 0, 15),
      ...conreg("zmm", 0, 15),
      ...conreg("dr", 0, 3),
      ...conreg("dr", 6, 7),
      ...conreg("st", 0, 7),
      ...conreg("cr", 0, 0),
      ...conreg("cr", 2, 4),
      ...conreg("k", 0, 7),
      ...conreg("bnd", 0, 4),
    ),
  }
});

function ci(array) {
  array.forEach(ele => {
    array.push(ele.toUpperCase())
  })

  return array
}

function conreg(prefix, start, end) {
  let array = []
  for (let i = start; i <= end; i++) {
    array.push(prefix + i)
  }

  return ci(array)
}

function congenreg(prefix, suffixes) {
  let array = []
  suffixes.forEach(suffix => {
    array.push(prefix + suffix)
  })

  return ci(array)
}
