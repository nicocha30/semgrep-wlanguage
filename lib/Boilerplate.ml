(**
   Boilerplate to be used as a template when mapping the wlanguage CST
   to another type of tree.
*)

module R = Tree_sitter_run.Raw_tree

(* Disable warnings against unused variables *)
[@@@warning "-26-27"]

(* Disable warning against unused 'rec' *)
[@@@warning "-39"]

type env = unit

let token (env : env) (tok : Tree_sitter_run.Token.t) =
  R.Token tok

let blank (env : env) () =
  R.Tuple []

let map_line_comment (env : env) (tok : CST.line_comment) =
  (* line_comment *) token env tok

let map_boolean (env : env) (x : CST.boolean) =
  (match x with
  | `VRAI tok -> R.Case ("VRAI",
      (* "VRAI" *) token env tok
    )
  | `FAUX tok -> R.Case ("FAUX",
      (* "FAUX" *) token env tok
    )
  )

let map_number (env : env) (tok : CST.number) =
  (* number *) token env tok

let map_identifier (env : env) (tok : CST.identifier) =
  (* pattern [a-zA-Z_][a-zA-Z0-9_éèà]* *) token env tok

let map_string_ (env : env) (tok : CST.string_) =
  (* pattern "\"([^\"\\\\]|\\\\.)*\"" *) token env tok

let map_block_comment (env : env) (tok : CST.block_comment) =
  (* block_comment *) token env tok

let map_type_ (env : env) (x : CST.type_) =
  (match x with
  | `Entier tok -> R.Case ("Entier",
      (* "entier" *) token env tok
    )
  | `RUNK tok -> R.Case ("RUNK",
      (* "r\195\169el" *) token env tok
    )
  | `Chaine tok -> R.Case ("Chaine",
      (* "chaine" *) token env tok
    )
  | `MonU tok -> R.Case ("MonU",
      (* "mon\195\169taire" *) token env tok
    )
  | `Bool tok -> R.Case ("Bool",
      (* "bool\195\169en" *) token env tok
    )
  | `Date tok -> R.Case ("Date",
      (* "date" *) token env tok
    )
  | `Heure tok -> R.Case ("Heure",
      (* "heure" *) token env tok
    )
  | `DurU tok -> R.Case ("DurU",
      (* "dur\195\169e" *) token env tok
    )
  | `Id tok -> R.Case ("Id",
      (* pattern [a-zA-Z_][a-zA-Z0-9_éèà]* *) token env tok
    )
  )

let map_identifier_chain (env : env) ((v1, v2) : CST.identifier_chain) =
  let v1 =
    (* pattern [a-zA-Z_][a-zA-Z0-9_éèà]* *) token env v1
  in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "." *) token env v1 in
      let v2 =
        (* pattern [a-zA-Z_][a-zA-Z0-9_éèà]* *) token env v2
      in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

let map_comment (env : env) (x : CST.comment) =
  (match x with
  | `Line_comm tok -> R.Case ("Line_comm",
      (* line_comment *) token env tok
    )
  | `Blk_comm tok -> R.Case ("Blk_comm",
      (* block_comment *) token env tok
    )
  )

let rec map_argument_list (env : env) ((v1, v2) : CST.argument_list) =
  let v1 = map_expression env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "," *) token env v1 in
      let v2 = map_expression env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_expression (env : env) (x : CST.expression) =
  (match x with
  | `Num tok -> R.Case ("Num",
      (* number *) token env tok
    )
  | `Str tok -> R.Case ("Str",
      (* pattern "\"([^\"\\\\]|\\\\.)*\"" *) token env tok
    )
  | `Bool x -> R.Case ("Bool",
      map_boolean env x
    )
  | `Id_chain x -> R.Case ("Id_chain",
      map_identifier_chain env x
    )
  | `Bin_exp (v1, v2, v3) -> R.Case ("Bin_exp",
      let v1 = map_expression env v1 in
      let v2 =
        (match v2 with
        | `PLUS tok -> R.Case ("PLUS",
            (* "+" *) token env tok
          )
        | `DASH tok -> R.Case ("DASH",
            (* "-" *) token env tok
          )
        | `STAR tok -> R.Case ("STAR",
            (* "*" *) token env tok
          )
        | `SLASH tok -> R.Case ("SLASH",
            (* "/" *) token env tok
          )
        | `EQ tok -> R.Case ("EQ",
            (* "=" *) token env tok
          )
        | `LTGT tok -> R.Case ("LTGT",
            (* "<>" *) token env tok
          )
        | `GT tok -> R.Case ("GT",
            (* ">" *) token env tok
          )
        | `LT tok -> R.Case ("LT",
            (* "<" *) token env tok
          )
        | `GTEQ tok -> R.Case ("GTEQ",
            (* ">=" *) token env tok
          )
        | `LTEQ tok -> R.Case ("LTEQ",
            (* "<=" *) token env tok
          )
        )
      in
      let v3 = map_expression env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Func_call (v1, v2, v3, v4) -> R.Case ("Func_call",
      let v1 = map_identifier_chain env v1 in
      let v2 = (* "(" *) token env v2 in
      let v3 =
        (match v3 with
        | Some x -> R.Option (Some (
            map_argument_list env x
          ))
        | None -> R.Option None)
      in
      let v4 = (* ")" *) token env v4 in
      R.Tuple [v1; v2; v3; v4]
    )
  )

let map_assignment (env : env) ((v1, v2, v3, v4) : CST.assignment) =
  let v1 = map_identifier_chain env v1 in
  let v2 = (* "=" *) token env v2 in
  let v3 = map_expression env v3 in
  let v4 =
    (match v4 with
    | Some tok -> R.Option (Some (
        (* ";" *) token env tok
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3; v4]

let rec map_else_clause (env : env) ((v1, v2) : CST.else_clause) =
  let v1 = (* "SINON" *) token env v1 in
  let v2 = map_program env v2 in
  R.Tuple [v1; v2]

and map_program (env : env) (xs : CST.program) =
  R.List (List.map (fun x ->
    (match x with
    | `Stmt x -> R.Case ("Stmt",
        map_statement env x
      )
    | `Comm x -> R.Case ("Comm",
        map_comment env x
      )
    )
  ) xs)

and map_statement (env : env) (x : CST.statement) =
  (match x with
  | `Var_decl (v1, v2, v3, v4, v5) -> R.Case ("Var_decl",
      let v1 =
        (* pattern [a-zA-Z_][a-zA-Z0-9_éèà]* *) token env v1
      in
      let v2 =
        (match v2 with
        | `EstS_012163e tok -> R.Case ("EstS_012163e",
            (* "est une" *) token env tok
          )
        | `EstS_d45e481 tok -> R.Case ("EstS_d45e481",
            (* "est un" *) token env tok
          )
        | `Est tok -> R.Case ("Est",
            (* "est" *) token env tok
          )
        )
      in
      let v3 = map_type_ env v3 in
      let v4 =
        (match v4 with
        | Some (v1, v2) -> R.Option (Some (
            let v1 = (* "=" *) token env v1 in
            let v2 = map_expression env v2 in
            R.Tuple [v1; v2]
          ))
        | None -> R.Option None)
      in
      let v5 =
        (match v5 with
        | Some tok -> R.Option (Some (
            (* ";" *) token env tok
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2; v3; v4; v5]
    )
  | `Assign x -> R.Case ("Assign",
      map_assignment env x
    )
  | `If_stmt (v1, v2, v3, v4, v5, v6) -> R.Case ("If_stmt",
      let v1 = (* "SI" *) token env v1 in
      let v2 = map_expression env v2 in
      let v3 = (* "ALORS" *) token env v3 in
      let v4 = map_program env v4 in
      let v5 =
        (match v5 with
        | Some x -> R.Option (Some (
            map_else_clause env x
          ))
        | None -> R.Option None)
      in
      let v6 = (* "FIN" *) token env v6 in
      R.Tuple [v1; v2; v3; v4; v5; v6]
    )
  | `For_stmt (v1, v2, v3, v4, v5, v6) -> R.Case ("For_stmt",
      let v1 = (* "POUR" *) token env v1 in
      let v2 = map_assignment env v2 in
      let v3 = (* "TANTQUE" *) token env v3 in
      let v4 = map_expression env v4 in
      let v5 = map_program env v5 in
      let v6 = (* "FIN" *) token env v6 in
      R.Tuple [v1; v2; v3; v4; v5; v6]
    )
  | `While_stmt (v1, v2, v3, v4) -> R.Case ("While_stmt",
      let v1 = (* "TANTQUE" *) token env v1 in
      let v2 = map_expression env v2 in
      let v3 = map_program env v3 in
      let v4 = (* "FIN" *) token env v4 in
      R.Tuple [v1; v2; v3; v4]
    )
  | `Exp x -> R.Case ("Exp",
      map_expression env x
    )
  )

let dump_tree root =
  map_program () root
  |> Tree_sitter_run.Raw_tree.to_channel stdout
let dump_extras (extras : CST.extras) = ()
