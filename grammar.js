/**
 * @file Lhaskell grammar for tree-sitter
 * @author Andre Marianiello <andremarianiello@users.noreply.github.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "lhaskell",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
