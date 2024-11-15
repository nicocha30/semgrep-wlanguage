/**
 * @file Wlanguage grammar for tree-sitter
 * @author Nicochad
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'wlanguage',

  conflicts: $ => [
    [$.assignment, $.expression]
  ],

  rules: {
    program: $ => repeat(choice($._statement, $.comment)),

    _statement: $ => choice(
      $.variable_declaration,
      $.assignment,
      $.if_statement,
      $.for_statement,
      $.while_statement,
      $.expression
    ),

    // Déclaration de variable avec type
    variable_declaration: $ => seq(
      $.identifier,
      choice('est une', 'est un', 'est'),
      $.type,
      optional(seq('=', $.expression)),
      optional(';')
    ),

    assignment: $ => prec.left(2, seq($.identifier_chain, '=', $.expression, optional(';'))),

    expression: $ => prec.left(1, choice(
      $.number,
      $.string,
      $.boolean,
      $.identifier_chain,
      $.binary_expression,
      $.function_call
    )),

    identifier_chain: $ => seq($.identifier, repeat(seq('.', $.identifier))),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_éèà]*/,

    type: $ => choice(
      'entier',
      'réel',
      'chaine',
      'monétaire', 
      'booléen',
      'date',
      'heure',
      'durée',
      $.identifier
    ),

    number: $ => token(seq(/\d{1,3}/, repeat(seq(' ', /\d{3}/)))),

    string: $ => /"([^"\\]|\\.)*"/,
    boolean: $ => choice('VRAI', 'FAUX'),

    binary_expression: $ => prec.left(1, seq(
      $.expression,
      choice('+', '-', '*', '/', '=', '<>', '>', '<', '>=', '<='),
      $.expression
    )),

    function_call: $ => seq(
      $.identifier_chain,
      '(',
      optional($.argument_list),
      ')'
    ),

    argument_list: $ => sep1($.expression, ','),

    if_statement: $ => seq(
      'SI',
      $.expression,
      'ALORS',
      repeat(choice($._statement, $.comment)),
      optional($.else_clause),
      'FIN'
    ),

    else_clause: $ => seq(
      'SINON',
      repeat(choice($._statement, $.comment))
    ),

    for_statement: $ => seq(
      'POUR',
      $.assignment,
      'TANTQUE',
      $.expression,
      repeat(choice($._statement, $.comment)),
      'FIN'
    ),

    while_statement: $ => seq(
      'TANTQUE',
      $.expression,
      repeat(choice($._statement, $.comment)),
      'FIN'
    ),

    // Définition des commentaires
    comment: $ => choice(
      $.line_comment,
      $.block_comment
    ),

    line_comment: $ => token(seq('//', /.*/)),

    block_comment: $ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))
  }
});

function sep1(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
