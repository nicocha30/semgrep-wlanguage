(* Generated by ocaml-tree-sitter. *)

(*
   Disable warning 42:
     "this use of Foo relies on type-directed disambiguation,
     it will not compile with OCaml 4.00 or earlier."
*)
[@@@warning "-42"]

(* Disable warnings against unused variables. *)
[@@@warning "-26-27-32"]

open Tree_sitter_bindings
open Tree_sitter_run

let debug = ref false

type mt = Run.matcher_token

external create_parser :
  unit -> Tree_sitter_API.ts_parser = "octs_create_parser_wlanguage"

let ts_parser = create_parser ()

let parse_source_string ?src_file contents =
  Tree_sitter_parsing.parse_source_string ?src_file ts_parser contents

let parse_source_file src_file =
  Tree_sitter_parsing.parse_source_file ts_parser src_file

let extras = [
]

let children_regexps : (string * Run.exp option) list = [
  "line_comment", None;
  "boolean",
  Some (
    Alt [|
      Token (Literal "VRAI");
      Token (Literal "FAUX");
    |];
  );
  "string", None;
  "number", None;
  "identifier", None;
  "block_comment", None;
  "type",
  Some (
    Alt [|
      Token (Literal "entier");
      Token (Literal "r\195\169el");
      Token (Literal "chaine");
      Token (Literal "mon\195\169taire");
      Token (Literal "bool\195\169en");
      Token (Literal "date");
      Token (Literal "heure");
      Token (Literal "dur\195\169e");
      Token (Name "identifier");
    |];
  );
  "identifier_chain",
  Some (
    Seq [
      Token (Name "identifier");
      Repeat (
        Seq [
          Token (Literal ".");
          Token (Name "identifier");
        ];
      );
    ];
  );
  "comment",
  Some (
    Alt [|
      Token (Name "line_comment");
      Token (Name "block_comment");
    |];
  );
  "argument_list",
  Some (
    Seq [
      Token (Name "expression");
      Repeat (
        Seq [
          Token (Literal ",");
          Token (Name "expression");
        ];
      );
    ];
  );
  "binary_expression",
  Some (
    Seq [
      Token (Name "expression");
      Alt [|
        Token (Literal "+");
        Token (Literal "-");
        Token (Literal "*");
        Token (Literal "/");
        Token (Literal "=");
        Token (Literal "<>");
        Token (Literal ">");
        Token (Literal "<");
        Token (Literal ">=");
        Token (Literal "<=");
      |];
      Token (Name "expression");
    ];
  );
  "expression",
  Some (
    Alt [|
      Token (Name "number");
      Token (Name "string");
      Token (Name "boolean");
      Token (Name "identifier_chain");
      Token (Name "binary_expression");
      Token (Name "function_call");
    |];
  );
  "function_call",
  Some (
    Seq [
      Token (Name "identifier_chain");
      Token (Literal "(");
      Opt (
        Token (Name "argument_list");
      );
      Token (Literal ")");
    ];
  );
  "assignment",
  Some (
    Seq [
      Token (Name "identifier_chain");
      Token (Literal "=");
      Token (Name "expression");
      Opt (
        Token (Literal ";");
      );
    ];
  );
  "variable_declaration",
  Some (
    Seq [
      Token (Name "identifier");
      Alt [|
        Token (Literal "est une");
        Token (Literal "est un");
        Token (Literal "est");
      |];
      Token (Name "type");
      Opt (
        Seq [
          Token (Literal "=");
          Token (Name "expression");
        ];
      );
      Opt (
        Token (Literal ";");
      );
    ];
  );
  "else_clause",
  Some (
    Seq [
      Token (Literal "SINON");
      Repeat (
        Alt [|
          Token (Name "statement");
          Token (Name "comment");
        |];
      );
    ];
  );
  "for_statement",
  Some (
    Seq [
      Token (Literal "POUR");
      Token (Name "assignment");
      Token (Literal "TANTQUE");
      Token (Name "expression");
      Repeat (
        Alt [|
          Token (Name "statement");
          Token (Name "comment");
        |];
      );
      Token (Literal "FIN");
    ];
  );
  "if_statement",
  Some (
    Seq [
      Token (Literal "SI");
      Token (Name "expression");
      Token (Literal "ALORS");
      Repeat (
        Alt [|
          Token (Name "statement");
          Token (Name "comment");
        |];
      );
      Opt (
        Token (Name "else_clause");
      );
      Token (Literal "FIN");
    ];
  );
  "statement",
  Some (
    Alt [|
      Token (Name "variable_declaration");
      Token (Name "assignment");
      Token (Name "if_statement");
      Token (Name "for_statement");
      Token (Name "while_statement");
      Token (Name "expression");
    |];
  );
  "while_statement",
  Some (
    Seq [
      Token (Literal "TANTQUE");
      Token (Name "expression");
      Repeat (
        Alt [|
          Token (Name "statement");
          Token (Name "comment");
        |];
      );
      Token (Literal "FIN");
    ];
  );
  "program",
  Some (
    Repeat (
      Alt [|
        Token (Name "statement");
        Token (Name "comment");
      |];
    );
  );
]

let trans_line_comment ((kind, body) : mt) : CST.line_comment =
  match body with
  | Leaf v -> v
  | Children _ -> assert false

let trans_boolean ((kind, body) : mt) : CST.boolean =
  match body with
  | Children v ->
      (match v with
      | Alt (0, v) ->
          `VRAI (
            Run.trans_token (Run.matcher_token v)
          )
      | Alt (1, v) ->
          `FAUX (
            Run.trans_token (Run.matcher_token v)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

let trans_string_ ((kind, body) : mt) : CST.string_ =
  match body with
  | Leaf v -> v
  | Children _ -> assert false

let trans_number ((kind, body) : mt) : CST.number =
  match body with
  | Leaf v -> v
  | Children _ -> assert false

let trans_identifier ((kind, body) : mt) : CST.identifier =
  match body with
  | Leaf v -> v
  | Children _ -> assert false

let trans_block_comment ((kind, body) : mt) : CST.block_comment =
  match body with
  | Leaf v -> v
  | Children _ -> assert false

let trans_type_ ((kind, body) : mt) : CST.type_ =
  match body with
  | Children v ->
      (match v with
      | Alt (0, v) ->
          `Entier (
            Run.trans_token (Run.matcher_token v)
          )
      | Alt (1, v) ->
          `RUNK (
            Run.trans_token (Run.matcher_token v)
          )
      | Alt (2, v) ->
          `Chaine (
            Run.trans_token (Run.matcher_token v)
          )
      | Alt (3, v) ->
          `MonU (
            Run.trans_token (Run.matcher_token v)
          )
      | Alt (4, v) ->
          `Bool (
            Run.trans_token (Run.matcher_token v)
          )
      | Alt (5, v) ->
          `Date (
            Run.trans_token (Run.matcher_token v)
          )
      | Alt (6, v) ->
          `Heure (
            Run.trans_token (Run.matcher_token v)
          )
      | Alt (7, v) ->
          `DurU (
            Run.trans_token (Run.matcher_token v)
          )
      | Alt (8, v) ->
          `Id (
            trans_identifier (Run.matcher_token v)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

let trans_identifier_chain ((kind, body) : mt) : CST.identifier_chain =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1] ->
          (
            trans_identifier (Run.matcher_token v0),
            Run.repeat
              (fun v ->
                (match v with
                | Seq [v0; v1] ->
                    (
                      Run.trans_token (Run.matcher_token v0),
                      trans_identifier (Run.matcher_token v1)
                    )
                | _ -> assert false
                )
              )
              v1
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

let trans_comment ((kind, body) : mt) : CST.comment =
  match body with
  | Children v ->
      (match v with
      | Alt (0, v) ->
          `Line_comm (
            trans_line_comment (Run.matcher_token v)
          )
      | Alt (1, v) ->
          `Blk_comm (
            trans_block_comment (Run.matcher_token v)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

let rec trans_argument_list ((kind, body) : mt) : CST.argument_list =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1] ->
          (
            trans_expression (Run.matcher_token v0),
            Run.repeat
              (fun v ->
                (match v with
                | Seq [v0; v1] ->
                    (
                      Run.trans_token (Run.matcher_token v0),
                      trans_expression (Run.matcher_token v1)
                    )
                | _ -> assert false
                )
              )
              v1
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

and trans_binary_expression ((kind, body) : mt) : CST.binary_expression =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1; v2] ->
          (
            trans_expression (Run.matcher_token v0),
            (match v1 with
            | Alt (0, v) ->
                `PLUS (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (1, v) ->
                `DASH (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (2, v) ->
                `STAR (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (3, v) ->
                `SLASH (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (4, v) ->
                `EQ (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (5, v) ->
                `LTGT (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (6, v) ->
                `GT (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (7, v) ->
                `LT (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (8, v) ->
                `GTEQ (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (9, v) ->
                `LTEQ (
                  Run.trans_token (Run.matcher_token v)
                )
            | _ -> assert false
            )
            ,
            trans_expression (Run.matcher_token v2)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

and trans_expression ((kind, body) : mt) : CST.expression =
  match body with
  | Children v ->
      (match v with
      | Alt (0, v) ->
          `Num (
            trans_number (Run.matcher_token v)
          )
      | Alt (1, v) ->
          `Str (
            trans_string_ (Run.matcher_token v)
          )
      | Alt (2, v) ->
          `Bool (
            trans_boolean (Run.matcher_token v)
          )
      | Alt (3, v) ->
          `Id_chain (
            trans_identifier_chain (Run.matcher_token v)
          )
      | Alt (4, v) ->
          `Bin_exp (
            trans_binary_expression (Run.matcher_token v)
          )
      | Alt (5, v) ->
          `Func_call (
            trans_function_call (Run.matcher_token v)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

and trans_function_call ((kind, body) : mt) : CST.function_call =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1; v2; v3] ->
          (
            trans_identifier_chain (Run.matcher_token v0),
            Run.trans_token (Run.matcher_token v1),
            Run.opt
              (fun v -> trans_argument_list (Run.matcher_token v))
              v2
            ,
            Run.trans_token (Run.matcher_token v3)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

let trans_assignment ((kind, body) : mt) : CST.assignment =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1; v2; v3] ->
          (
            trans_identifier_chain (Run.matcher_token v0),
            Run.trans_token (Run.matcher_token v1),
            trans_expression (Run.matcher_token v2),
            Run.opt
              (fun v -> Run.trans_token (Run.matcher_token v))
              v3
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

let trans_variable_declaration ((kind, body) : mt) : CST.variable_declaration =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1; v2; v3; v4] ->
          (
            trans_identifier (Run.matcher_token v0),
            (match v1 with
            | Alt (0, v) ->
                `EstS_012163e (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (1, v) ->
                `EstS_d45e481 (
                  Run.trans_token (Run.matcher_token v)
                )
            | Alt (2, v) ->
                `Est (
                  Run.trans_token (Run.matcher_token v)
                )
            | _ -> assert false
            )
            ,
            trans_type_ (Run.matcher_token v2),
            Run.opt
              (fun v ->
                (match v with
                | Seq [v0; v1] ->
                    (
                      Run.trans_token (Run.matcher_token v0),
                      trans_expression (Run.matcher_token v1)
                    )
                | _ -> assert false
                )
              )
              v3
            ,
            Run.opt
              (fun v -> Run.trans_token (Run.matcher_token v))
              v4
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

let rec trans_else_clause ((kind, body) : mt) : CST.else_clause =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1] ->
          (
            Run.trans_token (Run.matcher_token v0),
            Run.repeat
              (fun v ->
                (match v with
                | Alt (0, v) ->
                    `Stmt (
                      trans_statement (Run.matcher_token v)
                    )
                | Alt (1, v) ->
                    `Comm (
                      trans_comment (Run.matcher_token v)
                    )
                | _ -> assert false
                )
              )
              v1
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

and trans_for_statement ((kind, body) : mt) : CST.for_statement =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1; v2; v3; v4; v5] ->
          (
            Run.trans_token (Run.matcher_token v0),
            trans_assignment (Run.matcher_token v1),
            Run.trans_token (Run.matcher_token v2),
            trans_expression (Run.matcher_token v3),
            Run.repeat
              (fun v ->
                (match v with
                | Alt (0, v) ->
                    `Stmt (
                      trans_statement (Run.matcher_token v)
                    )
                | Alt (1, v) ->
                    `Comm (
                      trans_comment (Run.matcher_token v)
                    )
                | _ -> assert false
                )
              )
              v4
            ,
            Run.trans_token (Run.matcher_token v5)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

and trans_if_statement ((kind, body) : mt) : CST.if_statement =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1; v2; v3; v4; v5] ->
          (
            Run.trans_token (Run.matcher_token v0),
            trans_expression (Run.matcher_token v1),
            Run.trans_token (Run.matcher_token v2),
            Run.repeat
              (fun v ->
                (match v with
                | Alt (0, v) ->
                    `Stmt (
                      trans_statement (Run.matcher_token v)
                    )
                | Alt (1, v) ->
                    `Comm (
                      trans_comment (Run.matcher_token v)
                    )
                | _ -> assert false
                )
              )
              v3
            ,
            Run.opt
              (fun v -> trans_else_clause (Run.matcher_token v))
              v4
            ,
            Run.trans_token (Run.matcher_token v5)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

and trans_statement ((kind, body) : mt) : CST.statement =
  match body with
  | Children v ->
      (match v with
      | Alt (0, v) ->
          `Var_decl (
            trans_variable_declaration (Run.matcher_token v)
          )
      | Alt (1, v) ->
          `Assign (
            trans_assignment (Run.matcher_token v)
          )
      | Alt (2, v) ->
          `If_stmt (
            trans_if_statement (Run.matcher_token v)
          )
      | Alt (3, v) ->
          `For_stmt (
            trans_for_statement (Run.matcher_token v)
          )
      | Alt (4, v) ->
          `While_stmt (
            trans_while_statement (Run.matcher_token v)
          )
      | Alt (5, v) ->
          `Exp (
            trans_expression (Run.matcher_token v)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

and trans_while_statement ((kind, body) : mt) : CST.while_statement =
  match body with
  | Children v ->
      (match v with
      | Seq [v0; v1; v2; v3] ->
          (
            Run.trans_token (Run.matcher_token v0),
            trans_expression (Run.matcher_token v1),
            Run.repeat
              (fun v ->
                (match v with
                | Alt (0, v) ->
                    `Stmt (
                      trans_statement (Run.matcher_token v)
                    )
                | Alt (1, v) ->
                    `Comm (
                      trans_comment (Run.matcher_token v)
                    )
                | _ -> assert false
                )
              )
              v2
            ,
            Run.trans_token (Run.matcher_token v3)
          )
      | _ -> assert false
      )
  | Leaf _ -> assert false

let trans_program ((kind, body) : mt) : CST.program =
  match body with
  | Children v ->
      Run.repeat
        (fun v ->
          (match v with
          | Alt (0, v) ->
              `Stmt (
                trans_statement (Run.matcher_token v)
              )
          | Alt (1, v) ->
              `Comm (
                trans_comment (Run.matcher_token v)
              )
          | _ -> assert false
          )
        )
        v
  | Leaf _ -> assert false

(*
   Costly operation that translates a whole tree or subtree.

   The first pass translates it into a generic tree structure suitable
   to guess which node corresponds to each grammar rule.
   The second pass is a translation into a typed tree where each grammar
   node has its own type.

   This function is called:
   - once on the root of the program after removing extras
     (comments and other nodes that occur anywhere independently from
     the grammar);
   - once of each extra node, resulting in its own independent tree of type
     'extra'.
*)
let translate_tree src node trans_x =
  let matched_tree = Run.match_tree children_regexps src node in
  Option.map trans_x matched_tree


let translate_extra src (node : Tree_sitter_output_t.node) : CST.extra option =
  None

let translate_root src root_node =
  translate_tree src root_node trans_program

let parse_input_tree input_tree =
  let orig_root_node = Tree_sitter_parsing.root input_tree in
  let src = Tree_sitter_parsing.src input_tree in
  let errors = Run.extract_errors src orig_root_node in
  let opt_program, extras =
     Run.translate
       ~extras
       ~translate_root:(translate_root src)
       ~translate_extra:(translate_extra src)
       orig_root_node
  in
  Parsing_result.create src opt_program extras errors

let string ?src_file contents =
  let input_tree = parse_source_string ?src_file contents in
  parse_input_tree input_tree

let file src_file =
  let input_tree = parse_source_file src_file in
  parse_input_tree input_tree
