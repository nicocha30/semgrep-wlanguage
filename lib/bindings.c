/*
  Generated by ocaml-tree-sitter for wlanguage.
*/

#include <string.h>
#include <tree_sitter/api.h>

#include <caml/alloc.h>
#include <caml/bigarray.h>
#include <caml/callback.h>
#include <caml/custom.h>
#include <caml/memory.h>
#include <caml/mlvalues.h>
#include <caml/threads.h>

// Implemented by parser.c
TSLanguage *tree_sitter_wlanguage();

typedef struct _parser {
  TSParser *parser;
} parser_W;

static void finalize_parser(value v) {
  parser_W *p;
  p = (parser_W *)Data_custom_val(v);
  ts_parser_delete(p->parser);
}

static struct custom_operations parser_custom_ops = {
  .identifier = "parser handling",
  .finalize = finalize_parser,
  .compare = custom_compare_default,
  .hash = custom_hash_default,
  .serialize = custom_serialize_default,
  .deserialize = custom_deserialize_default
};

// OCaml function
CAMLprim value octs_create_parser_wlanguage(value unit) {
  CAMLparam0();
  CAMLlocal1(v);

  parser_W parserWrapper;
  TSParser *parser = ts_parser_new();
  parserWrapper.parser = parser;

  v = caml_alloc_custom(&parser_custom_ops, sizeof(parser_W), 0, 1);
  memcpy(Data_custom_val(v), &parserWrapper, sizeof(parser_W));
  ts_parser_set_language(parser, tree_sitter_wlanguage());
  CAMLreturn(v);
};
