/**
 * @file tree-sitter parser for the FASM assembler.
 * @author Suprit S Jahagirdar <supritsj05@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "fasm",

  extras: $ => [
    $.comment,
    /\s|\r?\n/
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._source_line),

    comment: $ => seq(
       /;.*/,
       $._line_end 
    ),

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
      optional($.operands),
    ),

    data_definition: $ => seq(
      $.identifier,
      $.data_directive,
      $.value
    ),

    label: $ => seq(
      $.identifier,
      optional(":")
    ),

    format_directive: $ => seq(
      "format",
      $._valid_format,
      optional($._valid_format_suffix),
    ),

    section_directive: $ => choice(
      seq(
        "section",
        /".*"/,
        optional($._segment_flags)
      ), seq(
        "segment",
        repeat1($._segment_flags)
      )
    ),

    control_directive: $ => /control/,

    prepoc_directive: $ => /prepoc/,

    actual_instruction: $ => choice(
      "mov",
      "movsx",
      "movzx",
    ),

    operands: $ => $.identifier_or_registers,

    identifier: $ => /[a-z]+/,

    data_directive: $ => choice(
      "db",
      "dw",
      "dd",
      "dq",
      "dt",
    ),

    value: $ => choice(
      $.identifier,
      /\d+/
    ),

    _valid_format: $ => choice(
      "ELF",
      "ELF32"
    ),

    _valid_format_suffix: $ => choice(
      "executable",
      "COFF"
    ),

    _segment_flags: $ => choice(
      "readable",
      "writeable",
      "executable"
    ),

    identifier_or_registers: $ => choice(
      $.identifier,
      $._registers
    ),

    _registers: $ => choice(
      "al",
      "ah",
      "bl",
      "bh"
    ),
  }
});
