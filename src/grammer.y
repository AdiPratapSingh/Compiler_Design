%{

// void variable is syntax error
// field declaration with primitive types allowed

// no. of parameters in method call
// scope of variables
// array
// size of literal?
// constructor

/* PROLOGUE */

#include <bits/stdc++.h>
using namespace std;

extern FILE *yyin;
extern int yylineno;
#define YYDEBUG 1


// Data structures to store the symbol table
struct info {
  string type;
  int size;
  int offset;
  int line_no;
  int class_dec_flag;
  int method_dec_flag;
  unordered_set<string> modifier;
};

struct local_symbol_table {
  string name;
  int parent;
  int cur_offset = 0;
  map<string,info> table;
  int class_table = 0;
  string parent_class = "";
  int method_table = 0;
};

vector<local_symbol_table> symbol_table;

int cur_table_idx = -1;
unordered_set<string> modifiers;
string cur_type = "";
int cur_size = 0;
bool create_new_table = true;


// 3AC
int temp_count = 0;
int curr_state = 0;
vector<int> parsed_exp_low;
vector<int> parsed_exp_high;
vector<int> multiplicative_expression_var;
int record_cond = 0;
int active_3ac = 0;

stack<int> begin_states;
stack<int> end_states;
stack<int> if_states;
string hold;
int computation_level = -1;
int subexpression_flag = 0;
int inline_initialization_flag = 0;

struct expr {
  char* s;
  char* type;
};

string current_class = "";
vector<vector<string>> tac_code;


// Function declarations
void createTable(string name="", int class_table=0, string parent_class="", int method_table=0);
struct info createInfo(string, int, int, int, int, int, unordered_set<string>);
unordered_set<string> split_modifiers(string);
void insertSymbol(string, struct info *);
void checkDeclaration(string);
string lookupType(string);
int getType(string);
void typeCheck(string, string);
void specificTypeCheck(string, string, string);
void checkReturnType(string);
void copyString(char **, string);
void copyData(struct expr **, string, string);
void dump3AC();

void yyerror(char const *);

%}
%code provides {
void yyerror (char const*);
int yylex (YYSTYPE*);
}
/* BISON DECLARATIONS */
%union{
  char* s;
  struct expr* e;
  int i;
}

%verbose
%define parse.trace
%define api.pure
%token <s> TOK_IDENTIFIER
%token <s> TOK_INTEGERLITERAL
%token <s> TOK_FLOATLITERAL
%token <s> TOK_BOOLEANLITERAL
%token <s> TOK_CHARLITERAL
%token <s> TOK_STRINGLITERAL
%token <s> TOK_TEXTBLOCKLITERAL
%token <s> TOK_NULLLITERAL
%token <s> TOK_33 "!"
%token <s> TOK_3361 "!="
%token <s> TOK_37 "%"
%token <s> TOK_3761 "%="
%token <s> TOK_38 "&"
%token <s> TOK_3838 "&&"
%token <s> TOK_3861 "&="
%token <s> TOK_40 "("
%token <s> TOK_41 ")"
%token <s> TOK_42 "*"
%token <s> TOK_4261 "*="
%token <s> TOK_43 "+"
%token <s> TOK_4343 "++"
%token <s> TOK_4361 "+="
%token <s> TOK_44 ","
%token <s> TOK_45 "-"
%token <s> TOK_4545 "--"
%token <s> TOK_4561 "-="
%token <s> TOK_4562 "->"
%token <s> TOK_46 "."
%token <s> TOK_464646 "..."
%token <s> TOK_47 "/"
%token <s> TOK_4761 "/="
%token <s> TOK_58 ":"
%token <s> TOK_5858 "::"
%token <s> TOK_59 ";"
%token <s> TOK_60 "<"
%token <s> TOK_6060 "<<"
%token <s> TOK_606061 "<<="
%token <s> TOK_6061 "<="
%token <s> TOK_61 "="
%token <s> TOK_6161 "=="
%token <s> TOK_62 ">"
%token <s> TOK_6261 ">="
%token <s> TOK_6262 ">>"
%token <s> TOK_626261 ">>="
%token <s> TOK_626262 ">>>"
%token <s> TOK_62626261 ">>>="
%token <s> TOK_63 "?"
%token <s> TOK_91 "["
%token <s> TOK_93 "]"
%token <s> TOK_94 "^"
%token <s> TOK_9461 "^="
%token <s> TOK_abstract "abstract"
%token <s> TOK_assert "assert"
%token <s> TOK_boolean "boolean"
%token <s> TOK_break "break"
%token <s> TOK_byte "byte"
%token <s> TOK_case "case"
%token <s> TOK_catch "catch"
%token <s> TOK_char "char"
%token <s> TOK_class "class"
%token <s> TOK_continue "continue"
%token <s> TOK_default "default"
%token <s> TOK_do "do"
%token <s> TOK_double "double"
%token <s> TOK_else "else"
%token <s> TOK_enum "enum"
%token <s> TOK_extends "extends"
%token <s> TOK_final "final"
%token <s> TOK_finally "finally"
%token <s> TOK_float "float"
%token <s> TOK_for "for"
%token <s> TOK_if "if"
%token <s> TOK_implements "implements"
%token <s> TOK_import "import"
%token <s> TOK_instanceof "instanceof"
%token <s> TOK_int "int"
%token <s> TOK_interface "interface"
%token <s> TOK_long "long"
%token <s> TOK_new "new"
%token <s> TOK_package "package"
%token <s> TOK_permits "permits"
%token <s> TOK_private "private"
%token <s> TOK_protected "protected"
%token <s> TOK_public "public"
%token <s> TOK_record "record"
%token <s> TOK_return "return"
%token <s> TOK_sealed "sealed"
%token <s> TOK_short "short"
%token <s> TOK_static "static"
%token <s> TOK_strictfp "strictfp"
%token <s> TOK_super "super"
%token <s> TOK_switch "switch"
%token <s> TOK_synchronized "synchronized"
%token <s> TOK_this "this"
%token <s> TOK_throw "throw"
%token <s> TOK_throws "throws"
%token <s> TOK_transient "transient"
%token <s> TOK_transitive "transitive"
%token <s> TOK_try "try"
%token <s> TOK_var "var"
%token <s> TOK_void "void"
%token <s> TOK_volatile "volatile"
%token <s> TOK_while "while"
%token <s> TOK_yield "yield"
%token <s> TOK_123 "{"
%token <s> TOK_124 "|"
%token <s> TOK_12461 "|="
%token <s> TOK_124124 "||"
%token <s> TOK_125 "}"
%token <s> TOK_126 "~"
%type<s> IDENTIFIER.opt
%type<s> additional_bound
%type<s> additional_bound.multiopt
%type<e> additive_expression
%type<e> and_expression
%type<s> argument_list
%type<s> argument_list.opt
%type<e> array_access
%type<e> array_creation_expression
%type<s> array_initializer
%type<s> array_type
%type<s> assert_statement
%type<e> assignment
%type<e> assignment_expression
%type<s> assignment_operator
%type<s> basic_for_statement
%type<s> basic_for_statement_no_short_if
%type<s> block
%type<s> block_statement
%type<s> block_statement.multiopt
%type<s> block_statements
%type<s> block_statements.opt
%type<s> break_statement
%type<s> case_constant
%type<e> cast_expression
%type<s> catch_clause
%type<s> catch_clause.multiopt
%type<s> catch_formal_parameter
%type<s> catch_type
%type<s> catches
%type<s> catches.opt
%type<s> class_body
%type<s> class_body.opt
%type<s> class_body_declaration
%type<s> class_body_declaration.multiopt
%type<s> class_declaration
%type<s> class_extends
%type<s> class_extends.opt
%type<s> class_implements
%type<s> class_implements.opt
%type<e> class_instance_creation_expression
%type<s> class_member_declaration
%type<s> class_or_interface_type
%type<s> class_permits
%type<s> class_permits.opt
%type<s> com.opt
%type<s> com_case_constant.multiopt
%type<s> com_enum_constant.multiopt
%type<s> com_exception_type.multiopt
%type<e> com_expression.multiopt
%type<s> com_formal_parameter.multiopt
%type<s> com_interface_type.multiopt
%type<s> com_record_component.multiopt
%type<e> com_statement_expression.multiopt
%type<s> com_type_name.multiopt
%type<s> com_type_parameter.multiopt
%type<s> com_variable_declarator.multiopt
%type<s> com_variable_initializer.multiopt
%type<s> compact_constructor_declaration
%type<s> compilation_unit
%type<e> conditional_and_expression
%type<e> conditional_expression
%type<e> conditional_or_expression
%type<s> constant_declaration
%type<s> constructor_body
%type<s> constructor_declaration
%type<s> constructor_declarator
%type<s> continue_statement
%type<e> dim_expr
%type<e> dim_expr.multiopt
%type<e> dim_exprs
%type<s> dims
%type<s> dims.opt
%type<s> do_statement
%type<s> dot_ind.multiopt
%type<s> empty_statement
%type<s> enhanced_for_statement
%type<s> enhanced_for_statement_no_short_if
%type<s> enum_body
%type<s> enum_body_declarations
%type<s> enum_body_declarations.opt
%type<s> enum_constant
%type<s> enum_constant_list
%type<s> enum_constant_list.opt
%type<s> enum_declaration
%type<s> eq_variable_initializer.opt
%type<e> equality_expression
%type<s> exception_type
%type<s> exception_type_list
%type<e> exclusive_or_expression
%type<e> expression
%type<e> expression.opt
%type<s> expression_statement
%type<e> field_access
%type<s> field_declaration
%type<s> field_modifier.multiopt
%type<s> field_modifier
%type<s> finally
%type<s> finally.opt
%type<s> floating_point_type
%type<s> for_init
%type<s> for_init.opt
%type<s> for_statement
%type<s> for_statement_no_short_if
%type<s> for_update
%type<s> for_update.opt
%type<s> formal_parameter
%type<s> formal_parameter_list
%type<s> formal_parameter_list.opt
%type<e> hold_Literal
%type<s> hold_TOK_IDENTIFIER
%type<s> if_then_else_statement
%type<s> if_then_else_statement_no_short_if
%type<s> if_then_statement
%type<s> import_declaration
%type<s> import_declaration.multiopt
%type<e> inclusive_or_expression
%type<s> input
%type<e> instance_initializer
%type<e> instanceof_expression
%type<s> integral_type
%type<s> interface_body
%type<s> interface_declaration
%type<s> interface_extends
%type<s> interface_extends.opt
%type<s> interface_member_declaration
%type<s> interface_member_declaration.multiopt
%type<s> interface_method_declaration
%type<s> interface_permits
%type<s> interface_permits.opt
%type<s> interface_type_list
%type<s> labeled_statement
%type<s> labeled_statement_no_short_if
%type<e> left_hand_side
%type<s> local_class_or_interface_declaration
%type<s> local_variable_declaration
%type<s> local_variable_declaration_statement
%type<s> local_variable_type
%type<s> method_body
%type<s> method_declaration
%type<s> method_declarator
%type<s> method_header
%type<e> method_invocation
%type<e> method_reference
%type<s> modifier
%type<s> modifier.multiopt
%type<e> multiplicative_expression
%type<s> normal_class_declaration
%type<s> normal_interface_declaration
%type<s> numeric_type
%type<s> ordinary_compilation_unit
%type<s> package_declaration
%type<s> package_declaration.opt
%type<s> pattern
%type<e> post_decrement_expression
%type<e> post_increment_expression
%type<e> postfix_expression
%type<e> pre_decrement_expression
%type<e> pre_increment_expression
%type<e> primary
%type<e> primary_no_new_array
%type<s> primitive_type
%type<s> record_body
%type<s> record_body_declaration
%type<s> record_body_declaration.multiopt
%type<s> record_component
%type<s> record_component_list
%type<s> record_component_list.opt
%type<s> record_declaration
%type<s> record_header
%type<s> reference_type
%type<e> relational_expression
%type<s> resource
%type<s> resource_list
%type<s> resource_specification
%type<s> result
%type<s> return_statement
%type<s> semcol.opt
%type<s> semcol_resource.multiopt
%type<e> shift_expression
%type<s> simple_type_name
%type<s> single_static_import_declaration
%type<s> single_type_import_declaration
%type<s> statement
%type<e> statement_expression
%type<e> statement_expression_list
%type<s> statement_no_short_if
%type<s> statement_without_trailing_substatement
%type<s> static_import_on_demand_declaration
%type<s> switch_block
%type<s> switch_block_statement_group
%type<s> switch_block_statement_group.multiopt
%type<e> switch_expression
%type<s> switch_label
%type<s> switch_label_col.multiopt
%type<s> switch_rule
%type<s> switch_rule.multiopt
%type<s> switch_statement
%type<s> synchronized_statement
%type<s> throw_statement
%type<s> throws
%type<s> throws.opt
%type<s> top_level_class_or_interface_declaration
%type<s> top_level_class_or_interface_declaration.multiopt
%type<s> try_statement
%type<s> try_with_resources_statement
%type<s> type
%type<s> type_argument
%type<s> type_argument.multiopt
%type<s> type_argument_list
%type<s> type_arguments
%type<s> type_arguments.opt
%type<s> type_bound
%type<s> type_bound.opt
%type<s> type_import_on_demand_declaration
%type<s> type_parameter
%type<s> type_parameter_list
%type<s> type_parameters
%type<s> type_parameters.opt
%type<s> type_pattern
%type<e> un_name
%type<e> unary_expression
%type<e> unary_expression_not_plus_minus
%type<e> unqualified_class_instance_creation_expression
%type<s> variable_access
%type<s> variable_arity_parameter
%type<s> variable_arity_record_component
%type<s> variable_declarator
%type<s> variable_declarator_id
%type<s> variable_declarator_list
%type<s> variable_initializer
%type<s> variable_initializer_list
%type<s> variable_initializer_list.opt
%type<s> vt_class_type.multiopt
%type<s> while_statement
%type<s> while_statement_no_short_if
%type<s> wildcard
%type<s> wildcard_bounds
%type<s> wildcard_bounds.opt
%type<s> yield_statement
%%

    /* GRAMMAR RULES */
input:
  compilation_unit
;
modifier.multiopt:
  modifier.multiopt modifier { modifiers.insert($2); }
| /*empty*/
;
modifier:
  TOK_public
| TOK_protected
| TOK_private	
| TOK_abstract
| TOK_static
| TOK_final
| TOK_sealed
| TOK_strictfp
| TOK_transitive
| TOK_transient
| TOK_volatile
;
dot_ind.multiopt:
  dot_ind.multiopt TOK_46 TOK_IDENTIFIER			
| /*empty*/			
;
	/* Types, Values and Variables */
type:
  primitive_type			
| reference_type			
;
primitive_type:
  numeric_type			
| TOK_boolean	{ cur_type = "boolean"; cur_size = 1; }
;
numeric_type:
  integral_type			
| floating_point_type			
;
integral_type:
  TOK_byte    { cur_type = "byte"; cur_size = 1; }
| TOK_short   { cur_type = "short"; cur_size = 2; }
| TOK_int     { cur_type = "int"; cur_size = 4; }
| TOK_long    { cur_type = "long"; cur_size = 8; }
| TOK_char    { cur_type = "char"; cur_size = 2; }
;
floating_point_type:
  TOK_float   { cur_type = "float";  cur_size = 4; }
| TOK_double  { cur_type = "double"; cur_size = 8; }
;
reference_type:
  class_or_interface_type			
| array_type			
;
class_or_interface_type:
  TOK_IDENTIFIER type_arguments.opt     { cur_type += $1; }
| class_or_interface_type TOK_46 TOK_IDENTIFIER type_arguments.opt  { cur_type += "." + string($3); }			
| un_name
;
array_type:
  class_or_interface_type dims			
;
dims:
  TOK_91 TOK_93			 { cur_type += "[]"; }
| dims TOK_91 TOK_93 { cur_type += "[]"; }
;
type_parameter:
   TOK_IDENTIFIER type_bound.opt			
;
type_bound.opt:
  type_bound			
| /* empty */			
;
type_bound:
  TOK_extends  class_or_interface_type additional_bound.multiopt			
;
additional_bound:
  TOK_38 class_or_interface_type			
;
type_arguments:
  TOK_60 type_argument_list TOK_62			
;
type_argument_list:
  type_argument.multiopt type_argument			
| /*empty*/			
;
type_argument.multiopt:
  type_argument.multiopt TOK_44 type_argument			
| /* empty */			
;
type_argument:
  reference_type			
| wildcard			
;
wildcard:
   TOK_63 wildcard_bounds.opt			
;
wildcard_bounds.opt:
  wildcard_bounds			
| /* empty */			
;
wildcard_bounds:
   TOK_extends  reference_type			
|  TOK_super  reference_type			


  /* Names */
un_name:
  TOK_IDENTIFIER        {
                          cur_type += $1;
                          checkDeclaration($1);
                          string type = lookupType($1);
                          copyData(&$$, $1, type);
                        }
| un_name TOK_46 TOK_IDENTIFIER   {
                          cur_type += "." + string($3);
                          string type = lookupType(string($3));
                          // string type = lookupType(string($3), string($1->s));
                          copyData(&$$, string($1->s) + "." + string($3), type);
                        }
;

  /* Packages and Modules */
compilation_unit:
  ordinary_compilation_unit			
;
ordinary_compilation_unit:
  package_declaration.opt import_declaration.multiopt top_level_class_or_interface_declaration.multiopt			
;
package_declaration.opt:
  package_declaration			
| /* empty */			
;
package_declaration:
    TOK_package  TOK_IDENTIFIER dot_ind.multiopt TOK_59			
;
import_declaration.multiopt:
  import_declaration.multiopt import_declaration			
| /* empty */			
;
import_declaration:
  single_type_import_declaration			
| type_import_on_demand_declaration			
| single_static_import_declaration			
| static_import_on_demand_declaration			
;
single_type_import_declaration:
   TOK_import  un_name  TOK_59			
;
type_import_on_demand_declaration:
   TOK_import  un_name TOK_46 TOK_42 TOK_59			
;
single_static_import_declaration:
   TOK_import  TOK_static un_name TOK_46 TOK_IDENTIFIER TOK_59			
;
static_import_on_demand_declaration:
   TOK_import  TOK_static un_name TOK_46 TOK_42 TOK_59			
;
top_level_class_or_interface_declaration.multiopt:
  top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration			
| /* empty */			
;
top_level_class_or_interface_declaration:
  class_declaration			
| interface_declaration			
| TOK_59			
;
com_type_name.multiopt:
  com_type_name.multiopt TOK_44 un_name			
| /*empty*/			
;

  /* Classes */
class_declaration:
  normal_class_declaration
| enum_declaration			
| record_declaration			
;
normal_class_declaration:
  modifier.multiopt TOK_class hold_TOK_IDENTIFIER type_parameters.opt class_extends.opt class_implements.opt class_permits.opt {
                                  int offset = symbol_table[cur_table_idx].cur_offset;
                                  struct info cur_info = createInfo("class", 10, offset, yylineno, 1, 0, modifiers);
                                  symbol_table[cur_table_idx].cur_offset += 10;
                                  string symbol = string($3);
                                  insertSymbol(symbol, &cur_info);
                                  modifiers.clear();
                                  cur_type = "";
                                  createTable(symbol, 1, $5);
                                  current_class = symbol;
                                } class_body {
                                  cur_table_idx = symbol_table[cur_table_idx].parent;
                                }
;
type_parameters.opt:
  type_parameters			
| /*empty*/			
;
class_extends.opt:
  class_extends			{ $$ = $1; }
| /*empty*/			    { $$[0] = '\0'; }
;
class_implements.opt:
  class_implements			
| /*empty*/			
;
class_permits.opt:
  class_permits			
| /*empty*/			
;
type_parameters:
  TOK_60 type_parameter_list TOK_62			
;
type_parameter_list:
  type_parameter com_type_parameter.multiopt			
;
com_type_parameter.multiopt:
  com_type_parameter.multiopt TOK_44 type_parameter			
| /*empty*/			
;
class_extends:
  TOK_extends class_or_interface_type { $$ = $2; }	
;
class_implements:
  TOK_implements interface_type_list			
;
interface_type_list:
  class_or_interface_type com_interface_type.multiopt			
;
com_interface_type.multiopt:
  com_interface_type.multiopt TOK_44 class_or_interface_type			
| /*empty*/			
;
class_permits:
  TOK_permits un_name com_type_name.multiopt			
;
class_body:
   TOK_123 class_body_declaration.multiopt  TOK_125		
;
class_body_declaration.multiopt:
  class_body_declaration.multiopt class_body_declaration			
| /*empty*/			
;
class_body_declaration:
  class_member_declaration		
| instance_initializer			
| constructor_declaration			
;
class_member_declaration:
  field_declaration
| method_declaration			
| class_declaration			
| interface_declaration			
;
field_declaration:
  modifier.multiopt primitive_type variable_declarator_list TOK_59 { modifiers.clear(); }
;
variable_declarator_list:
  variable_declarator com_variable_declarator.multiopt { cur_type = ""; modifiers.clear(); }
;
com_variable_declarator.multiopt:
  com_variable_declarator.multiopt TOK_44 variable_declarator			
| /*empty*/			
;
variable_declarator:
  variable_declarator_id eq_variable_initializer.opt {
                          if (inline_initialization_flag == 1) {
                            string s = string($1);
                            string h = " = t" + to_string(temp_count-1);
                            string g = s + h;
                            // tac_code[tac_code.size()-1].push_back(s + h);
                            inline_initialization_flag = 0;
                          }
                        }
;
eq_variable_initializer.opt:
  TOK_61 {active_3ac = 1;} variable_initializer {
                          inline_initialization_flag = 1;
                          active_3ac = 0;
                        }			
| /*empty*/			
;
variable_declarator_id:
  TOK_IDENTIFIER dims.opt { 
                  int offset = symbol_table[cur_table_idx].cur_offset;
                  struct info cur_info = createInfo(cur_type, cur_size, offset, yylineno, 0, 0, modifiers);
                  symbol_table[cur_table_idx].cur_offset += cur_size;
                  string symbol = string($1);
                  insertSymbol(symbol, &cur_info);
                }
;
dims.opt:
  dims			
| /*empty*/			
;
variable_initializer:
  expression			
| array_initializer			
;
type_arguments.opt:
  type_arguments			
| /*empty*/			
;
method_declaration:
  modifier.multiopt method_header method_body {
                    tac_code[tac_code.size()-1].push_back("endfunc");
                    create_new_table = true;
                  }            
;
method_header:
  result method_declarator throws.opt			
| type_parameters  result method_declarator throws.opt			
;
throws.opt:
  throws			
| /*empty*/			
;
result:
  type			
| TOK_void		{ cur_type = "void"; }
;
method_declarator:
  hold_TOK_IDENTIFIER {
                    vector<string> code;
                    code.push_back(current_class + "." + string($1));
                    tac_code.push_back(code);
                    tac_code[tac_code.size()-1].push_back("beginfunc");

                    int offset = symbol_table[cur_table_idx].cur_offset;
                    struct info cur_info = createInfo(cur_type, cur_size, offset, yylineno, 0, 1, modifiers);
                    symbol_table[cur_table_idx].cur_offset += cur_size;
                    string symbol = string($1);
                    insertSymbol(symbol, &cur_info);
                    modifiers.clear();
                    cur_type = "";
                    createTable($1, 0, "", 1);
                    create_new_table = false;
                  } TOK_40 formal_parameter_list.opt TOK_41 dims.opt	 
;
hold_TOK_IDENTIFIER:
  TOK_IDENTIFIER  
;
formal_parameter_list.opt:
  formal_parameter_list			
| /*empty*/			
;
formal_parameter_list:
  formal_parameter com_formal_parameter.multiopt { modifiers.clear(); }
;
com_formal_parameter.multiopt:
  com_formal_parameter.multiopt TOK_44 formal_parameter			
| /*empty*/			
;
formal_parameter:
  modifier.multiopt type variable_declarator_id
| variable_arity_parameter			
;
variable_arity_parameter:
  modifier.multiopt type  TOK_464646 TOK_IDENTIFIER			
;
throws:
  TOK_throws exception_type_list			
;
exception_type_list:
  exception_type com_exception_type.multiopt			
;
com_exception_type.multiopt:
  com_exception_type.multiopt TOK_44 exception_type			
| /*empty*/			
;
exception_type:
  class_or_interface_type			
;
method_body:
  block			
| TOK_59			{ create_new_table = true; }
;
instance_initializer:
  block			
;
constructor_declaration:
  modifier.multiopt constructor_declarator throws.opt constructor_body { 
                    tac_code[tac_code.size()-1].push_back("endfunc"); 
                    create_new_table = true;
                  }	
;
constructor_declarator:
  simple_type_name {
                    vector<string> code;
                    code.push_back(current_class + ".ctor:");
                    code.push_back("beginfunc");
                    tac_code.push_back(code);

                    int offset = symbol_table[cur_table_idx].cur_offset;
                    struct info cur_info = createInfo("constructor", 0, offset, yylineno, 0, 1, modifiers);
                    string symbol = string($1);
                    insertSymbol(symbol, &cur_info);
                    modifiers.clear();
                    cur_type = "";
                    createTable();
                  } TOK_40 formal_parameter_list.opt TOK_41			
;
simple_type_name:
  TOK_IDENTIFIER			
;
constructor_body:
  TOK_123 block_statements.opt TOK_125			
;
block_statements.opt:
  block_statements			
| /*empty*/			
;
argument_list.opt:
  argument_list
| /*empty*/			
;
enum_declaration:
  modifier.multiopt TOK_enum TOK_IDENTIFIER class_implements.opt enum_body			
;
enum_body:
  TOK_123 enum_constant_list.opt com.opt enum_body_declarations.opt TOK_125			
;
com.opt:
  TOK_44			
| /*empty*/			
;
enum_body_declarations.opt:
  enum_body_declarations			
| /*empty*/			
;
enum_constant_list.opt:
  enum_constant_list			
| /*empty*/			
;
enum_constant_list:
  enum_constant com_enum_constant.multiopt			
;
com_enum_constant.multiopt:
  com_enum_constant.multiopt TOK_44 enum_constant			
| /*empty*/			
;
enum_constant:
   TOK_IDENTIFIER TOK_91 TOK_40 argument_list.opt TOK_41 TOK_93 class_body.opt			
;

class_body.opt:
  class_body			
| /*empty*/			
;

enum_body_declarations:
  TOK_59 class_body_declaration.multiopt			
;
record_declaration:
  modifier.multiopt TOK_record TOK_IDENTIFIER type_parameters.opt record_header class_implements.opt record_body			
;
record_header:
  TOK_40 record_component_list.opt TOK_41			
;
record_component_list.opt:
  record_component_list			
| /*empty*/			
;
record_component_list:
  record_component com_record_component.multiopt			
;
com_record_component.multiopt:
  com_record_component.multiopt TOK_44 record_component			
| /*empty*/			
;
record_component:
  type TOK_IDENTIFIER			
| variable_arity_record_component			
;
variable_arity_record_component:
  type  TOK_464646 TOK_IDENTIFIER			
;
record_body:
  TOK_123 record_body_declaration.multiopt TOK_125			
;
record_body_declaration.multiopt:
  record_body_declaration.multiopt record_body_declaration			
| /*empty*/			
;
record_body_declaration:
  class_body_declaration			
| compact_constructor_declaration			
;
compact_constructor_declaration:
  modifier.multiopt simple_type_name constructor_body			
;

	/* Interfaces */

interface_declaration:
  normal_interface_declaration			
;
normal_interface_declaration:
  modifier.multiopt TOK_interface TOK_IDENTIFIER type_parameters.opt interface_extends.opt interface_permits.opt interface_body			
;
interface_extends.opt:
  interface_extends			
| /*empty*/			
;
interface_permits.opt:
  interface_permits			
| /*empty*/			
;
interface_extends:
  TOK_extends interface_type_list			
;
interface_permits:
  TOK_permits un_name com_type_name.multiopt			
;
interface_body:
  TOK_123 interface_member_declaration.multiopt TOK_125			
;
interface_member_declaration.multiopt:
  interface_member_declaration.multiopt interface_member_declaration			
| /*empty*/			
;
interface_member_declaration:
  interface_method_declaration			
| class_declaration			
| interface_declaration			
| TOK_59			
;
constant_declaration:
  modifier.multiopt type variable_declarator_list TOK_59			
;
interface_method_declaration:
  modifier.multiopt method_header method_body			
;

	/* Arrays */

array_initializer:
  TOK_123 variable_initializer_list.opt com.opt TOK_125			
;
variable_initializer_list.opt:
  variable_initializer_list			
| /*empty*/			
;
variable_initializer_list:
  variable_initializer com_variable_initializer.multiopt			
;
com_variable_initializer.multiopt:
  com_variable_initializer.multiopt TOK_44 variable_initializer			
| /*empty*/			
;

	/* Blocks, statements, and patterns */

block:
  TOK_123 { createTable(); } block_statements.opt { cur_table_idx = symbol_table[cur_table_idx].parent; } TOK_125	
;
block_statements:
  block_statement block_statement.multiopt			
;
block_statement.multiopt:
  block_statement.multiopt block_statement			
| /*empty*/			
;
block_statement:
  local_class_or_interface_declaration			
|  local_variable_declaration_statement			
| statement			
;
local_class_or_interface_declaration:
  class_declaration			
| normal_interface_declaration			
;
local_variable_declaration_statement:
  local_variable_declaration TOK_59			
;
local_variable_declaration:
  local_variable_type variable_declarator_list			
;
local_variable_type:
  type			
| TOK_var			{ cur_type = "var"; }
;
statement:
  statement_without_trailing_substatement			
| labeled_statement			
| if_then_statement			
| if_then_else_statement			
| while_statement
| for_statement
;
statement_no_short_if:
  statement_without_trailing_substatement			
| labeled_statement_no_short_if			
| if_then_else_statement_no_short_if			
| while_statement_no_short_if			
| for_statement_no_short_if			
;
statement_without_trailing_substatement:
  block			
| empty_statement			
| expression_statement			
| assert_statement			
| switch_statement			
| do_statement			
| break_statement			
| continue_statement			
| return_statement			
| synchronized_statement			
| throw_statement			
| try_statement			
| yield_statement			
;
empty_statement:
  TOK_59			
;
labeled_statement:
  TOK_IDENTIFIER TOK_58 statement			
;
labeled_statement_no_short_if:
  TOK_IDENTIFIER TOK_58 statement_no_short_if			
;
expression_statement:
  statement_expression TOK_59
;
statement_expression:
  assignment			
| pre_increment_expression			
| pre_decrement_expression			
| post_increment_expression			
| post_decrement_expression			
| method_invocation			
| class_instance_creation_expression			
;
if_then_statement:
  hold_TOK_if TOK_40 { 
                  createTable();
                  create_new_table = false;
                } expression { 
                  record_cond = 0;
                  // tac_code[tac_code.size()-1].push_back("beginfunc");
                  if_states.push(curr_state);
                  tac_code[tac_code.size()-1].push_back("if ( t" + to_string(temp_count - 1) + " == false ) Goto State_" + to_string(curr_state));
                  curr_state++;
                } TOK_41 statement	{ 
                  create_new_table = true;
                  tac_code[tac_code.size()-1].push_back("State_" + to_string(if_states.top()) + " :");
                  if_states.pop();
                }
;
hold_TOK_if:
  TOK_if            { record_cond = 1; }
;
if_then_else_statement:
  hold_TOK_if TOK_40 { 
                  createTable();
                  create_new_table = false;
                } expression {
                  record_cond = 0;
                  tac_code[tac_code.size()-1].push_back("if ( t" + to_string(temp_count-1) + " == false ) Goto State_" + to_string(curr_state));
                  if_states.push(curr_state);
                  curr_state++;
                } TOK_41 statement_no_short_if	{ 
                  create_new_table = true;
                  tac_code[tac_code.size()-1].push_back("Goto State_" + to_string(curr_state));
                  tac_code[tac_code.size()-1].push_back("State_" + to_string(if_states.top()) + " :");
                  if_states.push(curr_state);
                  curr_state++;
                  if_states.pop();
                } TOK_else { 
                  createTable();
                  create_new_table = false;
                } statement { 
                  create_new_table = true;
                  tac_code[tac_code.size()-1].push_back("State_" + to_string(if_states.top()) + " :");
                  if_states.pop();
                }
;
if_then_else_statement_no_short_if:
  hold_TOK_if TOK_40 { 
                  createTable();
                  create_new_table = false;
                } expression { 
                  record_cond = 0;
                  if_states.push(curr_state);
                  tac_code[tac_code.size()-1].push_back("if ( t" + to_string(temp_count - 1) + " == false ) Goto State_" + to_string(curr_state));
                  curr_state++;
                } TOK_41 statement_no_short_if { 
                  create_new_table = true;
                  tac_code[tac_code.size()-1].push_back("Goto State_" + to_string(curr_state));
                  tac_code[tac_code.size()-1].push_back("State_" + to_string(if_states.top()) + " :");
                  if_states.push(curr_state);
                  curr_state++;
                  if_states.pop();
                } TOK_else { 
                  createTable();
                  create_new_table = false;
                } statement_no_short_if {
                  create_new_table = true;
                  tac_code[tac_code.size()-1].push_back("State_" + to_string(if_states.top()) + " :");
                  tac_code[tac_code.size()-1].push_back("Goto State_" + to_string(curr_state));
                  if_states.push(curr_state);
                  curr_state++;
                  if_states.pop();
                }
;
assert_statement:
  TOK_assert expression TOK_59			
| TOK_assert expression TOK_58 expression TOK_59			
;
switch_statement:
  TOK_switch TOK_40 expression TOK_41 switch_block			
;
switch_block:
  TOK_123 switch_rule switch_rule.multiopt TOK_59			
| TOK_123 switch_block_statement_group.multiopt switch_label_col.multiopt TOK_125			
;
switch_rule.multiopt:
  switch_rule.multiopt switch_rule			
| /*empty*/			
;
switch_block_statement_group.multiopt:
  switch_block_statement_group.multiopt switch_block_statement_group			
| /*empty*/			
;
switch_label_col.multiopt:
  switch_label_col.multiopt switch_label TOK_58			
| /*empty*/			
;
switch_rule:
  switch_label TOK_4562 expression TOK_59			
| switch_label TOK_4562 block			
| switch_label TOK_4562 throw_statement			
;
switch_block_statement_group:
  switch_label TOK_58 switch_label_col.multiopt block_statements			
;
switch_label:
  TOK_case case_constant com_case_constant.multiopt			
| TOK_default			
;
com_case_constant.multiopt:
  com_case_constant.multiopt TOK_44 case_constant			
| /*empty*/			
;
case_constant:
  conditional_expression			
;
while_statement:
  hold_TOK_while TOK_40 { 
                  createTable();
                  create_new_table = false;
                } expression TOK_41 statement { 
                  create_new_table = true;
                }	
;
hold_TOK_while:
  TOK_while
;
while_statement_no_short_if:
  hold_TOK_while TOK_40 { 
                  createTable();
                  create_new_table = false;
                } expression TOK_41 statement_no_short_if { 
                  create_new_table = true;
                }	
;
do_statement:
  TOK_do { 
          createTable();
          create_new_table = false;
        } statement { 
          create_new_table = true;
        }	hold_TOK_while TOK_40 { 
          createTable();
          create_new_table = false;
        } expression TOK_41 TOK_59	{ 
          create_new_table = true;
        }	
;
for_statement:
  basic_for_statement			
| enhanced_for_statement			
;
for_statement_no_short_if:
  basic_for_statement_no_short_if			
| enhanced_for_statement_no_short_if			
;
basic_for_statement:
  hold_TOK_for TOK_40 { 
                  createTable();
                  create_new_table = false;
                } for_init.opt TOK_59 { record_cond = 1;} expression.opt {
                  tac_code[tac_code.size()-1].push_back("State_" + to_string(curr_state) + " :");
                  record_cond = 0;
                  begin_states.push(curr_state);
                  curr_state++;
                  end_states.push(curr_state);
                  curr_state++;
                  tac_code[tac_code.size()-1].push_back("if ( t" + to_string(temp_count - 1) + " == false ) Goto State_" + to_string(curr_state-1));
                } TOK_59 for_update.opt TOK_41 statement	{
                  tac_code[tac_code.size()-1].push_back("Goto State_" + to_string(begin_states.top()));
                  tac_code[tac_code.size()-1].push_back("State_" + to_string(end_states.top()) + " :");
                  curr_state++;
                  begin_states.pop();
                  end_states.pop();
                }		
;
hold_TOK_for:
  TOK_for
;
for_init.opt:
  for_init			
| /*empty*/			
;
expression.opt:
  expression			
| /*empty*/			
;
for_update.opt:
  for_update			
| /*empty*/			
;
basic_for_statement_no_short_if:
  hold_TOK_for TOK_40 { 
                  createTable();
                  create_new_table = false;
                } for_init.opt TOK_59 expression.opt TOK_59 for_update.opt TOK_41 statement_no_short_if	{ 
                  create_new_table = true;
                }		
;
for_init:
  statement_expression_list			
| local_variable_declaration			
;
for_update:
  statement_expression_list			
;
statement_expression_list:
  statement_expression com_statement_expression.multiopt			
;
com_statement_expression.multiopt:
  com_statement_expression.multiopt TOK_44 statement_expression			
| /*empty*/			
;
enhanced_for_statement:
  hold_TOK_for TOK_40 { 
                  createTable();
                  create_new_table = false;
                } local_variable_declaration TOK_58 expression TOK_41 statement	{ 
                  create_new_table = true;
                }				
;
enhanced_for_statement_no_short_if:
  hold_TOK_for TOK_40 { 
                  createTable();
                  create_new_table = false;
                } local_variable_declaration TOK_58 expression TOK_41 statement_no_short_if	{ 
                  create_new_table = true;
                }
;
break_statement:
  TOK_break IDENTIFIER.opt TOK_59			
;
IDENTIFIER.opt:
  TOK_IDENTIFIER			
| /*empty*/			
;
yield_statement:
  TOK_yield expression TOK_59			
;
continue_statement:
  TOK_continue IDENTIFIER.opt TOK_59			
;
return_statement:
  TOK_return expression.opt TOK_59	{ checkReturnType($2->type); }	
;
throw_statement:
  TOK_throw expression TOK_59			
;
synchronized_statement:
  TOK_synchronized TOK_40 expression TOK_41 block			
;
try_statement:
  TOK_try block catches			
| TOK_try block catches.opt finally			
| try_with_resources_statement			
;
catches.opt:
  catches			
| /*empty*/			
;
catches:
  catch_clause catch_clause.multiopt			
;
catch_clause.multiopt:
  catch_clause.multiopt catch_clause			
| /*empty*/			
;
catch_clause:
  TOK_catch TOK_40 catch_formal_parameter TOK_41 block			
;
catch_formal_parameter:
  modifier.multiopt catch_type variable_declarator_id			
;
catch_type:
  class_or_interface_type vt_class_type.multiopt			
;
vt_class_type.multiopt:
  vt_class_type.multiopt TOK_124 class_or_interface_type			
| /*empty*/			
;
finally:
  TOK_finally block			
;
try_with_resources_statement:
  TOK_try resource_specification block catches.opt finally.opt			
;
finally.opt:
  finally			
| /*empty*/			
;
resource_specification:
  TOK_40 resource_list semcol.opt TOK_41			
;
semcol.opt:
  TOK_59			
| /*empty*/			
;
resource_list:
  resource semcol_resource.multiopt			
;
semcol_resource.multiopt:
  semcol_resource.multiopt TOK_59 resource			
| /*empty*/			
;
resource:
  local_variable_declaration			
| variable_access			
;
variable_access:
  un_name			
| field_access			
;
pattern:
  type_pattern			
;
type_pattern:
  local_variable_declaration			

	/* expressions */

primary:
  primary_no_new_array			    { copyData(&$$, $1->s, $1->type); }
| array_creation_expression			{ copyData(&$$, $1->s, $1->type); }
;
primary_no_new_array:
  hold_Literal		              { copyData(&$$, $1->s, $1->type); }
| TOK_this			                { copyData(&$$, $1, "this"); }
| un_name TOK_46 TOK_this			  { copyData(&$$, string($1->s) + "." + string($3), "this"); }
| TOK_40 expression TOK_41			{ 
                    subexpression_flag = 1;
                    copyData(&$$, $2->s, $2->type);
                  }
| class_instance_creation_expression	{ copyData(&$$, $1->s, $1->type); }
| field_access			            { copyData(&$$, $1->s, $1->type); }
| array_access		              { copyData(&$$, $1->s, $1->type); }
| method_invocation			        { copyData(&$$, $1->s, $1->type); }
| method_reference			        { copyData(&$$, $1->s, $1->type); }
;

hold_Literal:
  TOK_INTEGERLITERAL    { copyData(&$$, $1, "int"); }
| TOK_FLOATLITERAL      { copyData(&$$, $1, "float"); }
| TOK_BOOLEANLITERAL    { copyData(&$$, $1, "boolean"); }
| TOK_CHARLITERAL       { copyData(&$$, $1, "char"); }
| TOK_STRINGLITERAL     { copyData(&$$, $1, "String"); }
| TOK_TEXTBLOCKLITERAL  { copyData(&$$, $1, "TextBlock"); }
| TOK_NULLLITERAL       { copyData(&$$, $1, "null"); }
;

class_instance_creation_expression:
  unqualified_class_instance_creation_expression	{ copyData(&$$, $1->s, $1->type); }
| un_name TOK_46 unqualified_class_instance_creation_expression	{ 
                    copyData(&$$, string($1->s) + "." + string($3->s), $3->type);
                  }	
| primary TOK_46 unqualified_class_instance_creation_expression	{
                    copyData(&$$, string($1->s) + "." + string($3->s), $3->type);
                  }
;
unqualified_class_instance_creation_expression:
  TOK_new class_or_interface_type TOK_40 argument_list.opt TOK_41 class_body.opt {
                    copyData(&$$, "new " + string($2) + "(" + string($4) + ")", $2);
                  }		
;
field_access:
  primary TOK_46 TOK_IDENTIFIER	{ copyData(&$$, string($1->s) + "." + string($3), "primary field access"); }
| TOK_super TOK_46 TOK_IDENTIFIER	{ copyData(&$$, "super." + string($3), "super field access"); }
| un_name TOK_46 TOK_super TOK_46 TOK_IDENTIFIER { copyData(&$$, string($1->s) + ".super." + string($5), "declared_id.super field access"); }
;
array_access:
  un_name[name] TOK_91 {
                    computation_level++; 
                    parsed_exp_low.push_back(-1);
                    parsed_exp_high.push_back(-1);
                    multiplicative_expression_var.push_back(-1);
                    active_3ac = 1;
                  } expression[expr] {
                    computation_level--;
                    parsed_exp_low.pop_back();
                    parsed_exp_high.pop_back();
                    multiplicative_expression_var.pop_back();
                    parsed_exp_low[computation_level] = -1;
                  } TOK_93 {
                    tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = " + string($1->s));
                    temp_count++;
                    hold = "*(t" + to_string(temp_count-1) + " + t" + to_string(temp_count-2) + " )";
                    tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = " + hold);
                    hold = "t" + to_string(temp_count);
                    temp_count++;
                    copyData(&$$, string($name->s) + "[" + string($expr->s) + "]", "decl_id array access");
                    specificTypeCheck($expr->type, "Integer", "array index");
                  }
| primary_no_new_array TOK_91 expression TOK_93 {
                    copyData(&$$, string($1->s) + "[" + string($3->s) + "]", "primary array access");
                    specificTypeCheck($3->type, "Integer", "array index");
                  }			
;
method_invocation:
  un_name TOK_40 argument_list.opt TOK_41	{
                    copyData(&$$, string($1->s) + "(" + string($3) + ")", "method invocation");
                  }
| un_name TOK_46  TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41 {
                    copyData(&$$, string($1->s) + "." + string($3) + "(" + string($5) + ")", "decl_id method invocation");
                  }
| primary TOK_46 TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41 {
                    copyData(&$$, string($1->s) + "." + string($3) + "(" + string($5) + ")", "primary method invocation");
                  }			
| TOK_super TOK_46  TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41 {
                    copyData(&$$, "super." + string($3) + "(" + string($5) + ")", "super method invocation");
                  }		
| un_name TOK_46 TOK_super TOK_46 TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41 {
                    copyData(&$$, string($1->s) + ".super." + string($5) + "(" + string($7) + ")", "decl_id.super method invocation");
                  }		
;
argument_list:
  expression com_expression.multiopt {
                    copyString(&($$), string($1->s) + string($2->s));
                  }		
;
com_expression.multiopt:
  com_expression.multiopt TOK_44 expression {
                    copyData(&$$, string($1->s) + ", " + string($3->s), $3->type);
                  }	
| /*empty*/	      { copyData(&$$, "", ""); }
;
method_reference:
  un_name TOK_5858 type_arguments.opt TOK_IDENTIFIER	{
                    copyData(&$$, string($1->s) + "::" + string($4), "decl_id method reference");
                  }		
| primary TOK_5858 type_arguments.opt TOK_IDENTIFIER {
                    copyData(&$$, string($1->s) + "::" + string($4), "primary method reference");
                  }
| TOK_super TOK_5858 type_arguments.opt TOK_IDENTIFIER {
                    copyData(&$$, "super::" + string($4), "super method reference");
                  }	
| un_name TOK_46 TOK_super TOK_5858 type_arguments.opt TOK_IDENTIFIER {
                    copyData(&$$, string($1->s) + ".super::" + string($6), "decl_id.super method reference");
                  }		
;
array_creation_expression:
  TOK_new primitive_type dim_exprs dims.opt {
                    copyData(&$$, "new " + string($2) + string($3->s) + string($4), $2);
                  }
| TOK_new class_or_interface_type dim_exprs dims.opt {
                    copyData(&$$, "new " + string($2) + string($3->s) + string($4), $2);
                  }
| TOK_new primitive_type dims array_initializer	{
                    copyData(&$$, "new " + string($2) + string($3) + string($4), $2);
                  }
| TOK_new class_or_interface_type dims array_initializer {
                    copyData(&$$, "new " + string($2) + string($3) + string($4), $2);
                  }			
;
dim_exprs:
  dim_expr dim_expr.multiopt { copyData(&$$, string($1->s) + string($2->s), $1->type); }
;
dim_expr.multiopt:
  dim_expr.multiopt dim_expr { copyData(&$$, string($1->s) + string($2->s), $2->type); }
| /*empty*/			  { copyData(&$$, "", ""); }
;
dim_expr:
   TOK_91 expression TOK_93 {
                    copyData(&$$, "[" + string($2->s) + "]", $2->type);
                    specificTypeCheck($2->type, "Integer", "array index");
                  }	
;
expression:
  { computation_level++; 
    parsed_exp_low.push_back(-1);
    parsed_exp_high.push_back(-1);
    multiplicative_expression_var.push_back(-1);} assignment_expression[as_expr]	{ 
                  copyData(&$$, $as_expr->s, $as_expr->type);
                }
;
assignment_expression:
  conditional_expression { copyData(&$$, $1->s, $1->type); }
| assignment			       { copyData(&$$, $1->s, $1->type); }
;
assignment:
  left_hand_side[lhs] assignment_operator[as_op] { active_3ac = 1; } expression[expr] {
                  active_3ac = 0;
                  tac_code[tac_code.size()-1].push_back(string($1->s) + " = t" + to_string(parsed_exp_low[computation_level]));
                  computation_level--;
                  parsed_exp_low.pop_back();
                  parsed_exp_high.pop_back();
                  multiplicative_expression_var.pop_back();
                  parsed_exp_low[computation_level] = -1;
                  copyData(&$$, string($lhs->s) + " " + string($as_op) + " " + string($expr->s), $1->type);
                  typeCheck($lhs->type, $expr->type);
                }
;
left_hand_side:
  un_name         { copyData(&$$, $1->s, $1->type); }
| field_access		{ copyData(&$$, $1->s, $1->type); }
| array_access		{ copyData(&$$, $1->s, $1->type); }
;
assignment_operator:
  TOK_61
| TOK_4261			
| TOK_4761			
| TOK_3761			
| TOK_4361			
| TOK_4561			
| TOK_606061			
| TOK_626261			
| TOK_62626261			
| TOK_3861			
| TOK_9461			
| TOK_12461			
;
conditional_expression:
  conditional_or_expression	 { copyData(&$$, $1->s, $1->type); }
| conditional_or_expression TOK_63 expression TOK_58 conditional_expression	{ 
                            copyData(&$$, string($1->s) + " ? " + string($3->s) + " : " + string($5->s), $3->type);
                            specificTypeCheck($1->type, "boolean", "?");
                            typeCheck($3->type, $5->type);
                          }
;
conditional_or_expression:
  conditional_and_expression	{ copyData(&$$, $1->s, $1->type); }
| conditional_or_expression TOK_124124 conditional_and_expression { 
                            copyData(&$$, string($1->s) + " || " + string($3->s), "boolean");
                            specificTypeCheck($1->type, "boolean", "||");
                            specificTypeCheck($3->type, "boolean", "||");
                          }
;
conditional_and_expression:
  inclusive_or_expression		  { copyData(&$$, $1->s, $1->type); }
| conditional_and_expression TOK_3838 inclusive_or_expression	{ 
                            copyData(&$$, string($1->s) + " && " + string($3->s), "boolean");
                            specificTypeCheck($1->type, "boolean", "&&");
                            specificTypeCheck($3->type, "boolean", "&&");
                          }
;
inclusive_or_expression:
  exclusive_or_expression		  { copyData(&$$, $1->s, $1->type); }
| inclusive_or_expression TOK_124 exclusive_or_expression		{ 
                            copyData(&$$, string($1->s) + " | " + string($3->s), "Integer");
                            specificTypeCheck($1->type, "Integer", "|");
                            specificTypeCheck($3->type, "Integer", "|");
                          }
;
exclusive_or_expression:
  and_expression			        { copyData(&$$, $1->s, $1->type); }
| exclusive_or_expression TOK_94 and_expression { 
                            copyData(&$$, string($1->s) + " ^ " + string($3->s), "Integer");
                            specificTypeCheck($1->type, "Integer", "^");
                            specificTypeCheck($3->type, "Integer", "^");
                          }
;
and_expression:
  equality_expression         { copyData(&$$, $1->s, $1->type); }			
| and_expression TOK_38 equality_expression	{ 
                            copyData(&$$, string($1->s) + " & " + string($3->s), "Integer");
                            specificTypeCheck($1->type, "Integer", "&");
                            specificTypeCheck($3->type, "Integer", "&");
                          }
;
equality_expression:
  relational_expression			  { copyData(&$$, $1->s, $1->type); }
| equality_expression TOK_6161 relational_expression { 
                            copyData(&$$, string($1->s) + " == " + string($3->s), "boolean");
                            typeCheck($1->type, $3->type);
                          }	
| equality_expression TOK_3361 relational_expression { 
                            copyData(&$$, string($1->s) + " != " + string($3->s), "boolean");
                            typeCheck($1->type, $3->type);
                          }
;
relational_expression:
  shift_expression          { copyData(&$$, $1->s, $1->type); }
| relational_expression[rexpr] TOK_60 {active_3ac = 1;} shift_expression[sexpr] {
                            //if(record_cond) cond_expr = string($1) + string($2) + string($3);
                            active_3ac = 0;
                            tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = (" + string($1->s) + " < t" + to_string(temp_count-1) + ")");
                            temp_count++;
                            
                            copyData(&$$, string($rexpr->s) + " < " + string($sexpr->s), "boolean");
                            typeCheck($rexpr->type, $sexpr->type);
                          }
| relational_expression[rexpr] TOK_62 {active_3ac = 1;} shift_expression[sexpr] {
                            //if(record_cond) cond_expr = string($1) + string($2) + string($3);
                            active_3ac = 0;
                            tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = (" + string($1->s) + " > t" + to_string(temp_count-1) + ")");
                            temp_count++;
                            
                            copyData(&$$, string($rexpr->s) + " > " + string($sexpr->s), "boolean");
                            typeCheck($rexpr->type, $sexpr->type);
                          }
| relational_expression[rexpr] TOK_6061 {active_3ac = 1;} shift_expression[sexpr] {
                            //if(record_cond) cond_expr = string($1) + string($2) + string($3);
                            active_3ac = 0;
                            tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = (" + string($1->s) + " <= t" + to_string(temp_count-1) + ")");
                            temp_count++;
                            
                            copyData(&$$, string($1->s) + " <= " + string($sexpr->s), "boolean");
                            typeCheck($rexpr->type, $sexpr->type);
                          }
| relational_expression[rexpr] TOK_6261 {active_3ac = 1;} shift_expression[sexpr] {
                            //if(record_cond) cond_expr = string($1) + string($2) + string($3);
                            active_3ac = 0;
                            tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = (" + string($1->s) + " >= t" + to_string(temp_count-1) + ")");
                            temp_count++;
                            
                            copyData(&$$, string($1->s) + " >= " + string($sexpr->s), "boolean");
                            typeCheck($rexpr->type, $sexpr->type);
                          }
| instanceof_expression		{ copyData(&$$, $1->s, $1->type); }
;
instanceof_expression:
  relational_expression TOK_instanceof reference_type	{
                            copyData(&$$, string($1->s) + " instanceof " + string($3), "boolean");
                            specificTypeCheck($1->type, "reference", "instanceof");
                            specificTypeCheck($3, "class", "instanceof");
                          }
| relational_expression TOK_instanceof pattern {
                            copyData(&$$, string($1->s) + " instanceof " + string($3), "boolean");
                            // specificTypeCheck($1, "reference");
                            // specificTypeCheck($3, "pattern");
                          }
;
shift_expression:
  additive_expression      { copyData(&$$, $1->s, $1->type); }
| shift_expression TOK_6060 additive_expression	 { 
                            copyData(&$$, string($1->s) + " << " + string($3->s), "Integer");
                            specificTypeCheck($1->type, "Integer", "<<");
                            specificTypeCheck($3->type, "Integer", "<<");
                          }
| shift_expression TOK_6262 additive_expression	 { 
                            copyData(&$$, string($1->s) + " >> " + string($3->s), "Integer");
                            specificTypeCheck($1->type, "Integer", ">>");
                            specificTypeCheck($3->type, "Integer", ">>");
                          }
| shift_expression TOK_626262 additive_expression	 { 
                            copyData(&$$, string($1->s) + " >>> " + string($3->s), "Integer");
                            specificTypeCheck($1->type, "Integer", ">>>");
                            specificTypeCheck($3->type, "Integer", ">>>");
                          }	
;
additive_expression:
  multiplicative_expression	 {
                            if (active_3ac) {
                              parsed_exp_low[computation_level] = temp_count-1;
                              multiplicative_expression_var[computation_level] = -1;
                              parsed_exp_high[computation_level] = -1;
                            }

                            copyData(&$$, $1->s, $1->type);
                          }
| additive_expression TOK_43 multiplicative_expression	{ 
                            if (active_3ac) {
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = t" + to_string(multiplicative_expression_var[computation_level]));
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count+1) + " = t" + to_string(temp_count) + " + t" + to_string(parsed_exp_low[computation_level]));
                              temp_count+=2;
                              parsed_exp_low[computation_level] = temp_count-1;
                              multiplicative_expression_var[computation_level] = -1;
                              parsed_exp_high[computation_level] = -1;
                            }

                            copyData(&$$, string($1->s) + " + " + string($3->s), $1->type);
                            specificTypeCheck($3->type, "Numeric", "+");
                            typeCheck($1->type, $3->type);
                          }		
| additive_expression TOK_45 multiplicative_expression	{ if(active_3ac){
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = t" + to_string(multiplicative_expression_var[computation_level]));
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count+1) + " = t" + to_string(temp_count) + " - t" + to_string(parsed_exp_low[computation_level]));

                              temp_count+=2;
                              parsed_exp_low[computation_level] = temp_count-1;
                              multiplicative_expression_var[computation_level] = -1;
                              parsed_exp_high[computation_level] = -1;
                            }
                            
                            copyData(&$$, string($1->s) + " - " + string($3->s), $1->type);
                            specificTypeCheck($3->type, "Numeric", "-");
                            typeCheck($1->type, $3->type);
                          }
;
multiplicative_expression:
  unary_expression			  {
                            if(active_3ac){
                              if(subexpression_flag == 1){
                                subexpression_flag = 0;
                                computation_level--;
                                parsed_exp_low.pop_back();
                                parsed_exp_high.pop_back();
                                multiplicative_expression_var.pop_back();
                                multiplicative_expression_var[computation_level] = temp_count - 1;
                              }
                              else{
                                tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = " + string($1->s));
                                multiplicative_expression_var[computation_level] = temp_count;
                                temp_count++;
                              }
                            }

                            copyData(&$$, $1->s, $1->type);
                          }
| multiplicative_expression TOK_42 unary_expression	{
                            if(active_3ac){
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = " + string($3->s));
                              if(parsed_exp_high[computation_level] == -1) parsed_exp_high[computation_level] = multiplicative_expression_var[computation_level];
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count+1) + " = t" + to_string(parsed_exp_high[computation_level]) + " * t" + to_string(temp_count));
                              temp_count+=2;
                              parsed_exp_high[computation_level] = temp_count-1;
                              // If controle transfers to additive expression then no worry because of this
                              multiplicative_expression_var[computation_level] = parsed_exp_high[computation_level];
                            }

                            copyData(&$$, string($1->s) + "*" + string($3->s), $1->type);
                            specificTypeCheck($3->type, "Numeric", "*");
                            typeCheck($1->type, $3->type);
                          }
| multiplicative_expression TOK_47 unary_expression	{
                            if(active_3ac){
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = " + string($3->s));
                              if(parsed_exp_high[computation_level] == -1) parsed_exp_high[computation_level] = multiplicative_expression_var[computation_level];
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count+1) + " = t" + to_string(parsed_exp_high[computation_level]) + " / t" + to_string(temp_count));
                              temp_count+=2;
                              parsed_exp_high[computation_level] = temp_count-1;
                              // If controle transfers to additive expression then no worry because of this
                              multiplicative_expression_var[computation_level] = parsed_exp_high[computation_level];
                            }

                            copyData(&$$, string($1->s) + " / " + string($3->s), $1->type);
                            specificTypeCheck($3->type, "Numeric", "/");
                            typeCheck($1->type, $3->type);
                          }
| multiplicative_expression TOK_37 unary_expression	{
                            if(active_3ac){
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count) + " = " + string($3->s));
                              if(parsed_exp_high[computation_level] == -1) parsed_exp_high[computation_level] = multiplicative_expression_var[computation_level];
                              tac_code[tac_code.size()-1].push_back("t" + to_string(temp_count+1) + " = t" + to_string(parsed_exp_high[computation_level]) + " % t" + to_string(temp_count));
                              temp_count+=2;
                              parsed_exp_high[computation_level] = temp_count-1;
                              multiplicative_expression_var[computation_level] = parsed_exp_high[computation_level];
                            }

                            copyData(&$$, string($1->s) + " % " + string($3->s), $1->type);
                            specificTypeCheck($3->type, "Numeric", "%");
                            typeCheck($1->type, $3->type);
                          }
;
unary_expression:
  pre_increment_expression  { copyData(&$$, $1->s, $1->type); }
| pre_decrement_expression  { copyData(&$$, $1->s, $1->type); }
| TOK_43 unary_expression	{ 
                    copyData(&$$, "+" + string($2->s), $2->type);
                    specificTypeCheck($2->type, "Numeric", "+");
                  }
| TOK_45 unary_expression	{
                    copyData(&$$, "-" + string($2->s), $2->type);
                    specificTypeCheck($2->type, "Numeric", "+");
                  }
| unary_expression_not_plus_minus	{ copyData(&$$, $1->s, $1->type); }
;
pre_increment_expression:
  TOK_4343 unary_expression { 
                    copyData(&$$, $2->s, $2->type);
                    specificTypeCheck($2->type, "Numeric", "++");
                  }
;
pre_decrement_expression:
  TOK_4545 unary_expression	{ 
                    copyData(&$$, $2->s, $2->type);
                    specificTypeCheck($2->type, "Numeric", "--");
                  }	
;
unary_expression_not_plus_minus:
  postfix_expression	{ copyData(&$$, $1->s, $1->type); }
| TOK_126 unary_expression { 
                    copyData(&$$, $2->s, $2->type);
                    specificTypeCheck($2->type, "Integer", "~");
                  }		
| TOK_33 unary_expression	{ 
                    copyData(&$$, $2->s, $2->type);
                    specificTypeCheck($2->type, "boolean", "!");
                  }	
| cast_expression		 { copyData(&$$, $1->s, $1->type); }
| switch_expression	 { copyData(&$$, $1->s, $1->type); }
;
postfix_expression:
  primary	                    { copyData(&$$, $1->s, $1->type); }
| un_name                     { copyData(&$$, $1->s, $1->type); }
| post_increment_expression	  { copyData(&$$, $1->s, $1->type); }
| post_decrement_expression	  { copyData(&$$, $1->s, $1->type); }
;
post_increment_expression:
  postfix_expression TOK_4343	{ 
                    // cout << "t" << temp_count << " = " << string($1->s) << "\n";
                    // temp_count++;
                    // cout << "t" << temp_count << " = t" << temp_count-1 << " + 1\n";
                    // cout << string($1->s) << " = t" << temp_count << "\n";
                    // temp_count++;
                    copyData(&$$, $1->s, $1->type);
                    specificTypeCheck($1->type, "Numeric", "++");
                  }
;
post_decrement_expression:
  postfix_expression TOK_4545	{ 
                    // cout << "t" << temp_count << " = " << string($1->s) << "\n";
                    // temp_count++;
                    // cout << "t" << temp_count << " = t" << temp_count-1 << " - 1\n";
                    // cout << string($1->s) << " = t" << temp_count << "\n";
                    // temp_count++;
                    copyData(&$$, $1->s, $1->type);
                    specificTypeCheck($1->type, "Numeric", "--");
                  }	
;
cast_expression:
  TOK_40 primitive_type TOK_41 unary_expression	{ 
                    copyData(&$$, "(" + string($2) + ")" + string($4->s), $2);
                    // no check for now
                  }
;
additional_bound.multiopt:
  additional_bound.multiopt additional_bound
| /*empty*/
;
switch_expression:
  TOK_switch TOK_40 expression TOK_41 switch_block
;

%%


/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

void createTable(string name, int class_table, string parent_class, int method_table) {
  if (create_new_table) {
    struct local_symbol_table lst;
    lst.parent = cur_table_idx;
    lst.name = name;
    lst.class_table = class_table;
    lst.parent_class = parent_class;
    lst.method_table = method_table;
    symbol_table.push_back(lst);
    cur_table_idx = symbol_table.size() - 1;
  }
  create_new_table = true;
}

struct info createInfo(string type, int size, int offset, int line_no, int class_dec_flag, int method_dec_flag, unordered_set<string> modifier) {
  struct info i = {type, size, offset, line_no, class_dec_flag, method_dec_flag, modifier};
  return i;
}

void insertSymbol(string symbol, struct info *i) {
  if (symbol_table[cur_table_idx].table.find(symbol) == symbol_table[cur_table_idx].table.end()) {
    symbol_table[cur_table_idx].table[symbol] = *i;
  } else {
    cout << "Error at line no " << yylineno << ": " << symbol << " already declared in this scope\n";
  }
}

void checkDeclaration(string symbol) {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].table.find(symbol) != symbol_table[i].table.end()) {
      return;
    }
    i = symbol_table[i].parent;
  }
  cout << "Error at line no " << yylineno << ": Undeclared variable " << symbol << endl;
}

string lookupType(string symbol) {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].table.find(symbol) != symbol_table[i].table.end()) {
      return symbol_table[i].table[symbol].type;
    }
    i = symbol_table[i].parent;
  }
  return "";
}

int getType(string type) {
  if (type == "byte" || type == "short" || type == "int" || type == "long" || type == "char" || type == "float" || type == "double") {
    // Numeric type - type ok -> need casting if different types
    return 1;
  } else if (type == "boolean") {
    return 2;
  } else if (type == "String" || type == "TextBlock") {
    return 3;
  } else if (type == "void") {
    return 4;
  } else if (type == "reference") {
    return 5;
  } else if (type == "null") {
    return 6;
  } else if (type == "class") {
    return 7;
  } else {
    return 8;
  }
}

void typeCheck(string type1, string type2) {
  int t1 = getType(type1), t2 = getType(type2);
  if (t1 != t2) {
    cout << "Error at line no " << yylineno << ": Type mismatch between " << type1 << " and " << type2 << endl;
  }
}

void specificTypeCheck(string type, string target, string op = "") {
  int t1 = getType(type), t2 = getType(target);
  if (target == "Numeric") {
    if (t1 != 1) {
      if (op == "")
        cout << "Error at line no " << yylineno << ": Type mismatch between " << type << " and " << target << endl;
      else 
        cout << "Error at line no " << yylineno << ": Incompatible operator " << op << " with operand of type " << type << endl;
    }
  } else if (target == "Integer") {
    if (type == "byte" || type == "short" || type == "int" || type == "long") {
      return;
    } else {      
      if (op == "")
        cout << "Error at line no " << yylineno << ": Type mismatch between " << type << " and " << target << endl;
      else if (op == "array index")
        cout << "Error at line no " << yylineno << ": Array index must be of type int, found " << type << endl;
      else 
        cout << "Error at line no " << yylineno << ": Incompatible operator " << op << " with operand of type " << type << endl;
    }
  } else {
    if (t1 != t2) {      
      if (op == "")
        cout << "Error at line no " << yylineno << ": Type mismatch between " << type << " and " << target << endl;
      else 
        cout << "Error at line no " << yylineno << ": Incompatible operator " << op << " with operand of type " << type << endl;
    }
  }
}

void print_symbol_table() {
  vector<int> class_st;
  vector<vector<int>> method_st;
  map<int,int> scope;
  int cur_scope = 1;
  for (int i = 1; i < symbol_table.size(); i++) {
    if (symbol_table[i].class_table == 1) {
      class_st.push_back(i);
    } else if (symbol_table[i].method_table == 1) {
      vector<int> temp;
      temp.push_back(i);
      method_st.push_back(temp);
    } else {
      method_st[method_st.size() - 1].push_back(i);
      scope[i] = cur_scope;
      cur_scope++;
    }
  }
  for (int i = 0; i < method_st.size(); i++) {
    string filename = "st_method_" + symbol_table[method_st[i][0]].name + ".csv";
    ofstream fout(filename);
    fout << "Symbol Name,Type,Size,Offset,Line Number,Modifier,Scope" << endl;
    for (int j = 0; j < method_st[i].size(); j++) {
      for (auto it = symbol_table[method_st[i][j]].table.begin(); it != symbol_table[method_st[i][j]].table.end(); it++) {
        fout << it->first << "," << it->second.type << "," << it->second.size << "," << it->second.offset << "," << it->second.line_no <<  ",";
        for (auto it2 = it->second.modifier.begin(); it2 != it->second.modifier.end(); it2++) {
          fout << *it2 << " ";
        }
        fout << "," << scope[method_st[i][j]] << endl;
      }
    }
    fout.close();
  }
  cout << "Symbol tables generated" << endl;
}

void copyString(char **c, string s) {
  // remove *c if already allocated
  *c = new char[s.length() + 1];
  strcpy(*c, s.c_str());
}

void copyData(struct expr **c, string s, string type) {
  *c = new struct expr;
  copyString(&(*c)->s, s);
  copyString(&(*c)->type, type);
}

void checkReturnType(string type) {
  string return_type = lookupType(symbol_table[cur_table_idx].name);
  int t1 = getType(type), t2 = getType(return_type);
  if (t1 != t2) {
    cout << "Error at line no " << yylineno << ": Return type mismatch, expected " << return_type << " found " << type << endl;
  }
}

void dump3AC() {
  ofstream fout("3AC.txt");
  for (int i = 0; i < tac_code.size(); i++) {
    fout << tac_code[i][0] << '\n';
    for (int j = 1; j < tac_code[i].size(); j++) {
      fout << '\t' << tac_code[i][j] << '\n';
    }
    fout << endl;
  }
  fout.close();
  cout << "3AC generated" << endl;
}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
//   yydebug=1;
  createTable();
	yyparse();
	fclose(yyin);
  print_symbol_table();
  dump3AC();
	return 0;
}