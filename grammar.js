/**
 * @file Literate Haskell grammar for tree-sitter
 * @author Andre Marianiello <andremarianiello@users.noreply.github.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "lhaskell",

  rules: {
    source_file: $ => repeat($._block),
    _block: $ => choice($.comment_block, $.code_block),
    comment_block: $ => prec.right(repeat1($.comment_line)),
    comment_line: $ => $.line_content,
    spaced_code_block: $ => seq("\n", $.code_block, "\n"),
    code_block: $ => prec.right(repeat1($.code_line)),
    code_line: $ => seq($.bird_track, $.line_content),
    bird_track: $ => token(prec(1, ">")),
    line_content: $ => /[^\n]*\n/,
  },

  extras: $ => [],
});
