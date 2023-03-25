/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "grammer.y"


/* PROLOGUE */

#include <bits/stdc++.h>
using namespace std;

extern FILE *yyin;
extern int yylineno;
#define YYDEBUG 1
// Data structures to store the tree
vector<pair<string,vector<int>>> nodes;
int startNode;

// Symbol Table
vector<map<string,string>> block_table(10);
vector<map<string,string>> cum_table;
map<string,string> symbol_table;
int current_stack = 0;
string curr_type;
string modifier = "public";
string parent_class = "";
int class_dec_flag = 0;
int method_dec_flag = 0;

// 3AC
int temp_count = 0;
int curr_state = 0;
vector<int> parsed_exp_low;
vector<int> parsed_exp_high;
vector<int> multiplicative_expression_var;
// string cond_expr = "";
int record_cond = 0;
int active_3ac = 0;

stack<int> begin_states;
stack<int> end_states;
stack<int> if_states;
string hold;
int computation_level = -1;
int subexpression_flag = 0;

vector<string> mod_list;
string lhs_type = "";
string rhs_type = "";
int lhs_record = 1;
int rhs_record = 1;
int halt_type_check = 0;
string pre_var = "";

struct var_info{
  string name;
  int size;
  int offset;
  string type;
};

vector<var_info> database;
struct var_info* filler;


void yyerror(char const *);
int createNode(string);
string probe_type(string);
void addChild(int, int);


#line 139 "grammer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "grammer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_IDENTIFIER = 3,             /* TOK_IDENTIFIER  */
  YYSYMBOL_TOK_NUMERICLITERAL = 4,         /* TOK_NUMERICLITERAL  */
  YYSYMBOL_TOK_NONNUMERICLITERAL = 5,      /* TOK_NONNUMERICLITERAL  */
  YYSYMBOL_TOK_33 = 6,                     /* "!"  */
  YYSYMBOL_TOK_3361 = 7,                   /* "!="  */
  YYSYMBOL_TOK_37 = 8,                     /* "%"  */
  YYSYMBOL_TOK_3761 = 9,                   /* "%="  */
  YYSYMBOL_TOK_38 = 10,                    /* "&"  */
  YYSYMBOL_TOK_3838 = 11,                  /* "&&"  */
  YYSYMBOL_TOK_3861 = 12,                  /* "&="  */
  YYSYMBOL_TOK_40 = 13,                    /* "("  */
  YYSYMBOL_TOK_41 = 14,                    /* ")"  */
  YYSYMBOL_TOK_42 = 15,                    /* "*"  */
  YYSYMBOL_TOK_4261 = 16,                  /* "*="  */
  YYSYMBOL_TOK_43 = 17,                    /* "+"  */
  YYSYMBOL_TOK_4343 = 18,                  /* "++"  */
  YYSYMBOL_TOK_4361 = 19,                  /* "+="  */
  YYSYMBOL_TOK_44 = 20,                    /* ","  */
  YYSYMBOL_TOK_45 = 21,                    /* "-"  */
  YYSYMBOL_TOK_4545 = 22,                  /* "--"  */
  YYSYMBOL_TOK_4561 = 23,                  /* "-="  */
  YYSYMBOL_TOK_4562 = 24,                  /* "->"  */
  YYSYMBOL_TOK_46 = 25,                    /* "."  */
  YYSYMBOL_TOK_464646 = 26,                /* "..."  */
  YYSYMBOL_TOK_47 = 27,                    /* "/"  */
  YYSYMBOL_TOK_4761 = 28,                  /* "/="  */
  YYSYMBOL_TOK_58 = 29,                    /* ":"  */
  YYSYMBOL_TOK_5858 = 30,                  /* "::"  */
  YYSYMBOL_TOK_59 = 31,                    /* ";"  */
  YYSYMBOL_TOK_60 = 32,                    /* "<"  */
  YYSYMBOL_TOK_6060 = 33,                  /* "<<"  */
  YYSYMBOL_TOK_606061 = 34,                /* "<<="  */
  YYSYMBOL_TOK_6061 = 35,                  /* "<="  */
  YYSYMBOL_TOK_61 = 36,                    /* "="  */
  YYSYMBOL_TOK_6161 = 37,                  /* "=="  */
  YYSYMBOL_TOK_62 = 38,                    /* ">"  */
  YYSYMBOL_TOK_6261 = 39,                  /* ">="  */
  YYSYMBOL_TOK_6262 = 40,                  /* ">>"  */
  YYSYMBOL_TOK_626261 = 41,                /* ">>="  */
  YYSYMBOL_TOK_626262 = 42,                /* ">>>"  */
  YYSYMBOL_TOK_62626261 = 43,              /* ">>>="  */
  YYSYMBOL_TOK_63 = 44,                    /* "?"  */
  YYSYMBOL_TOK_91 = 45,                    /* "["  */
  YYSYMBOL_TOK_93 = 46,                    /* "]"  */
  YYSYMBOL_TOK_94 = 47,                    /* "^"  */
  YYSYMBOL_TOK_9461 = 48,                  /* "^="  */
  YYSYMBOL_TOK_abstract = 49,              /* "abstract"  */
  YYSYMBOL_TOK_assert = 50,                /* "assert"  */
  YYSYMBOL_TOK_boolean = 51,               /* "boolean"  */
  YYSYMBOL_TOK_break = 52,                 /* "break"  */
  YYSYMBOL_TOK_byte = 53,                  /* "byte"  */
  YYSYMBOL_TOK_case = 54,                  /* "case"  */
  YYSYMBOL_TOK_catch = 55,                 /* "catch"  */
  YYSYMBOL_TOK_char = 56,                  /* "char"  */
  YYSYMBOL_TOK_class = 57,                 /* "class"  */
  YYSYMBOL_TOK_continue = 58,              /* "continue"  */
  YYSYMBOL_TOK_default = 59,               /* "default"  */
  YYSYMBOL_TOK_do = 60,                    /* "do"  */
  YYSYMBOL_TOK_double = 61,                /* "double"  */
  YYSYMBOL_TOK_else = 62,                  /* "else"  */
  YYSYMBOL_TOK_enum = 63,                  /* "enum"  */
  YYSYMBOL_TOK_extends = 64,               /* "extends"  */
  YYSYMBOL_TOK_final = 65,                 /* "final"  */
  YYSYMBOL_TOK_finally = 66,               /* "finally"  */
  YYSYMBOL_TOK_float = 67,                 /* "float"  */
  YYSYMBOL_TOK_for = 68,                   /* "for"  */
  YYSYMBOL_TOK_if = 69,                    /* "if"  */
  YYSYMBOL_TOK_implements = 70,            /* "implements"  */
  YYSYMBOL_TOK_import = 71,                /* "import"  */
  YYSYMBOL_TOK_instanceof = 72,            /* "instanceof"  */
  YYSYMBOL_TOK_int = 73,                   /* "int"  */
  YYSYMBOL_TOK_interface = 74,             /* "interface"  */
  YYSYMBOL_TOK_long = 75,                  /* "long"  */
  YYSYMBOL_TOK_new = 76,                   /* "new"  */
  YYSYMBOL_TOK_package = 77,               /* "package"  */
  YYSYMBOL_TOK_permits = 78,               /* "permits"  */
  YYSYMBOL_TOK_private = 79,               /* "private"  */
  YYSYMBOL_TOK_protected = 80,             /* "protected"  */
  YYSYMBOL_TOK_public = 81,                /* "public"  */
  YYSYMBOL_TOK_record = 82,                /* "record"  */
  YYSYMBOL_TOK_return = 83,                /* "return"  */
  YYSYMBOL_TOK_sealed = 84,                /* "sealed"  */
  YYSYMBOL_TOK_short = 85,                 /* "short"  */
  YYSYMBOL_TOK_static = 86,                /* "static"  */
  YYSYMBOL_TOK_strictfp = 87,              /* "strictfp"  */
  YYSYMBOL_TOK_super = 88,                 /* "super"  */
  YYSYMBOL_TOK_switch = 89,                /* "switch"  */
  YYSYMBOL_TOK_synchronized = 90,          /* "synchronized"  */
  YYSYMBOL_TOK_this = 91,                  /* "this"  */
  YYSYMBOL_TOK_throw = 92,                 /* "throw"  */
  YYSYMBOL_TOK_throws = 93,                /* "throws"  */
  YYSYMBOL_TOK_transient = 94,             /* "transient"  */
  YYSYMBOL_TOK_transitive = 95,            /* "transitive"  */
  YYSYMBOL_TOK_try = 96,                   /* "try"  */
  YYSYMBOL_TOK_var = 97,                   /* "var"  */
  YYSYMBOL_TOK_void = 98,                  /* "void"  */
  YYSYMBOL_TOK_volatile = 99,              /* "volatile"  */
  YYSYMBOL_TOK_while = 100,                /* "while"  */
  YYSYMBOL_TOK_yield = 101,                /* "yield"  */
  YYSYMBOL_TOK_123 = 102,                  /* "{"  */
  YYSYMBOL_TOK_124 = 103,                  /* "|"  */
  YYSYMBOL_TOK_12461 = 104,                /* "|="  */
  YYSYMBOL_TOK_124124 = 105,               /* "||"  */
  YYSYMBOL_TOK_125 = 106,                  /* "}"  */
  YYSYMBOL_TOK_126 = 107,                  /* "~"  */
  YYSYMBOL_YYACCEPT = 108,                 /* $accept  */
  YYSYMBOL_input = 109,                    /* input  */
  YYSYMBOL_110_modifier_multiopt = 110,    /* modifier.multiopt  */
  YYSYMBOL_modifier = 111,                 /* modifier  */
  YYSYMBOL_112_dot_ind_multiopt = 112,     /* dot_ind.multiopt  */
  YYSYMBOL_type = 113,                     /* type  */
  YYSYMBOL_primitive_type = 114,           /* primitive_type  */
  YYSYMBOL_numeric_type = 115,             /* numeric_type  */
  YYSYMBOL_integral_type = 116,            /* integral_type  */
  YYSYMBOL_floating_point_type = 117,      /* floating_point_type  */
  YYSYMBOL_reference_type = 118,           /* reference_type  */
  YYSYMBOL_class_or_interface_type = 119,  /* class_or_interface_type  */
  YYSYMBOL_array_type = 120,               /* array_type  */
  YYSYMBOL_dims = 121,                     /* dims  */
  YYSYMBOL_type_parameter = 122,           /* type_parameter  */
  YYSYMBOL_123_type_bound_opt = 123,       /* type_bound.opt  */
  YYSYMBOL_type_bound = 124,               /* type_bound  */
  YYSYMBOL_additional_bound = 125,         /* additional_bound  */
  YYSYMBOL_type_arguments = 126,           /* type_arguments  */
  YYSYMBOL_type_argument_list = 127,       /* type_argument_list  */
  YYSYMBOL_128_type_argument_multiopt = 128, /* type_argument.multiopt  */
  YYSYMBOL_type_argument = 129,            /* type_argument  */
  YYSYMBOL_wildcard = 130,                 /* wildcard  */
  YYSYMBOL_131_wildcard_bounds_opt = 131,  /* wildcard_bounds.opt  */
  YYSYMBOL_wildcard_bounds = 132,          /* wildcard_bounds  */
  YYSYMBOL_un_name = 133,                  /* un_name  */
  YYSYMBOL_compilation_unit = 134,         /* compilation_unit  */
  YYSYMBOL_ordinary_compilation_unit = 135, /* ordinary_compilation_unit  */
  YYSYMBOL_136_package_declaration_opt = 136, /* package_declaration.opt  */
  YYSYMBOL_package_declaration = 137,      /* package_declaration  */
  YYSYMBOL_138_import_declaration_multiopt = 138, /* import_declaration.multiopt  */
  YYSYMBOL_import_declaration = 139,       /* import_declaration  */
  YYSYMBOL_single_type_import_declaration = 140, /* single_type_import_declaration  */
  YYSYMBOL_type_import_on_demand_declaration = 141, /* type_import_on_demand_declaration  */
  YYSYMBOL_single_static_import_declaration = 142, /* single_static_import_declaration  */
  YYSYMBOL_static_import_on_demand_declaration = 143, /* static_import_on_demand_declaration  */
  YYSYMBOL_144_top_level_class_or_interface_declaration_multiopt = 144, /* top_level_class_or_interface_declaration.multiopt  */
  YYSYMBOL_top_level_class_or_interface_declaration = 145, /* top_level_class_or_interface_declaration  */
  YYSYMBOL_146_com_type_name_multiopt = 146, /* com_type_name.multiopt  */
  YYSYMBOL_class_declaration = 147,        /* class_declaration  */
  YYSYMBOL_normal_class_declaration = 148, /* normal_class_declaration  */
  YYSYMBOL_149_1 = 149,                    /* $@1  */
  YYSYMBOL_150_2 = 150,                    /* $@2  */
  YYSYMBOL_151_type_parameters_opt = 151,  /* type_parameters.opt  */
  YYSYMBOL_152_class_extends_opt = 152,    /* class_extends.opt  */
  YYSYMBOL_153_class_implements_opt = 153, /* class_implements.opt  */
  YYSYMBOL_154_class_permits_opt = 154,    /* class_permits.opt  */
  YYSYMBOL_type_parameters = 155,          /* type_parameters  */
  YYSYMBOL_type_parameter_list = 156,      /* type_parameter_list  */
  YYSYMBOL_157_com_type_parameter_multiopt = 157, /* com_type_parameter.multiopt  */
  YYSYMBOL_class_extends = 158,            /* class_extends  */
  YYSYMBOL_class_implements = 159,         /* class_implements  */
  YYSYMBOL_interface_type_list = 160,      /* interface_type_list  */
  YYSYMBOL_161_com_interface_type_multiopt = 161, /* com_interface_type.multiopt  */
  YYSYMBOL_class_permits = 162,            /* class_permits  */
  YYSYMBOL_class_body = 163,               /* class_body  */
  YYSYMBOL_164_class_body_declaration_multiopt = 164, /* class_body_declaration.multiopt  */
  YYSYMBOL_class_body_declaration = 165,   /* class_body_declaration  */
  YYSYMBOL_class_member_declaration = 166, /* class_member_declaration  */
  YYSYMBOL_variable_declarator_list = 167, /* variable_declarator_list  */
  YYSYMBOL_168_com_variable_declarator_multiopt = 168, /* com_variable_declarator.multiopt  */
  YYSYMBOL_variable_declarator = 169,      /* variable_declarator  */
  YYSYMBOL_170_eq_variable_initializer_opt = 170, /* eq_variable_initializer.opt  */
  YYSYMBOL_variable_declarator_id = 171,   /* variable_declarator_id  */
  YYSYMBOL_172_dims_opt = 172,             /* dims.opt  */
  YYSYMBOL_variable_initializer = 173,     /* variable_initializer  */
  YYSYMBOL_174_type_arguments_opt = 174,   /* type_arguments.opt  */
  YYSYMBOL_method_declaration = 175,       /* method_declaration  */
  YYSYMBOL_176_3 = 176,                    /* $@3  */
  YYSYMBOL_method_header = 177,            /* method_header  */
  YYSYMBOL_178_throws_opt = 178,           /* throws.opt  */
  YYSYMBOL_result = 179,                   /* result  */
  YYSYMBOL_method_declarator = 180,        /* method_declarator  */
  YYSYMBOL_181_4 = 181,                    /* $@4  */
  YYSYMBOL_182_5 = 182,                    /* $@5  */
  YYSYMBOL_hold_TOK_IDENTIFIER = 183,      /* hold_TOK_IDENTIFIER  */
  YYSYMBOL_184_formal_parameter_list_opt = 184, /* formal_parameter_list.opt  */
  YYSYMBOL_formal_parameter_list = 185,    /* formal_parameter_list  */
  YYSYMBOL_186_com_formal_parameter_multiopt = 186, /* com_formal_parameter.multiopt  */
  YYSYMBOL_formal_parameter = 187,         /* formal_parameter  */
  YYSYMBOL_variable_arity_parameter = 188, /* variable_arity_parameter  */
  YYSYMBOL_throws = 189,                   /* throws  */
  YYSYMBOL_exception_type_list = 190,      /* exception_type_list  */
  YYSYMBOL_191_com_exception_type_multiopt = 191, /* com_exception_type.multiopt  */
  YYSYMBOL_exception_type = 192,           /* exception_type  */
  YYSYMBOL_method_body = 193,              /* method_body  */
  YYSYMBOL_instance_initializer = 194,     /* instance_initializer  */
  YYSYMBOL_constructor_declaration = 195,  /* constructor_declaration  */
  YYSYMBOL_constructor_declarator = 196,   /* constructor_declarator  */
  YYSYMBOL_simple_type_name = 197,         /* simple_type_name  */
  YYSYMBOL_constructor_body = 198,         /* constructor_body  */
  YYSYMBOL_199_block_statements_opt = 199, /* block_statements.opt  */
  YYSYMBOL_200_argument_list_opt = 200,    /* argument_list.opt  */
  YYSYMBOL_201_6 = 201,                    /* $@6  */
  YYSYMBOL_enum_declaration = 202,         /* enum_declaration  */
  YYSYMBOL_enum_body = 203,                /* enum_body  */
  YYSYMBOL_204_com_opt = 204,              /* com.opt  */
  YYSYMBOL_205_enum_body_declarations_opt = 205, /* enum_body_declarations.opt  */
  YYSYMBOL_206_enum_constant_list_opt = 206, /* enum_constant_list.opt  */
  YYSYMBOL_enum_constant_list = 207,       /* enum_constant_list  */
  YYSYMBOL_208_com_enum_constant_multiopt = 208, /* com_enum_constant.multiopt  */
  YYSYMBOL_enum_constant = 209,            /* enum_constant  */
  YYSYMBOL_210_class_body_opt = 210,       /* class_body.opt  */
  YYSYMBOL_enum_body_declarations = 211,   /* enum_body_declarations  */
  YYSYMBOL_record_declaration = 212,       /* record_declaration  */
  YYSYMBOL_record_header = 213,            /* record_header  */
  YYSYMBOL_214_record_component_list_opt = 214, /* record_component_list.opt  */
  YYSYMBOL_record_component_list = 215,    /* record_component_list  */
  YYSYMBOL_216_com_record_component_multiopt = 216, /* com_record_component.multiopt  */
  YYSYMBOL_record_component = 217,         /* record_component  */
  YYSYMBOL_variable_arity_record_component = 218, /* variable_arity_record_component  */
  YYSYMBOL_record_body = 219,              /* record_body  */
  YYSYMBOL_220_record_body_declaration_multiopt = 220, /* record_body_declaration.multiopt  */
  YYSYMBOL_record_body_declaration = 221,  /* record_body_declaration  */
  YYSYMBOL_compact_constructor_declaration = 222, /* compact_constructor_declaration  */
  YYSYMBOL_interface_declaration = 223,    /* interface_declaration  */
  YYSYMBOL_normal_interface_declaration = 224, /* normal_interface_declaration  */
  YYSYMBOL_225_interface_extends_opt = 225, /* interface_extends.opt  */
  YYSYMBOL_226_interface_permits_opt = 226, /* interface_permits.opt  */
  YYSYMBOL_interface_extends = 227,        /* interface_extends  */
  YYSYMBOL_interface_permits = 228,        /* interface_permits  */
  YYSYMBOL_interface_body = 229,           /* interface_body  */
  YYSYMBOL_230_interface_member_declaration_multiopt = 230, /* interface_member_declaration.multiopt  */
  YYSYMBOL_interface_member_declaration = 231, /* interface_member_declaration  */
  YYSYMBOL_interface_method_declaration = 232, /* interface_method_declaration  */
  YYSYMBOL_array_initializer = 233,        /* array_initializer  */
  YYSYMBOL_234_variable_initializer_list_opt = 234, /* variable_initializer_list.opt  */
  YYSYMBOL_variable_initializer_list = 235, /* variable_initializer_list  */
  YYSYMBOL_236_com_variable_initializer_multiopt = 236, /* com_variable_initializer.multiopt  */
  YYSYMBOL_block = 237,                    /* block  */
  YYSYMBOL_block_statements = 238,         /* block_statements  */
  YYSYMBOL_239_block_statement_multiopt = 239, /* block_statement.multiopt  */
  YYSYMBOL_block_statement = 240,          /* block_statement  */
  YYSYMBOL_local_class_or_interface_declaration = 241, /* local_class_or_interface_declaration  */
  YYSYMBOL_local_variable_declaration_statement = 242, /* local_variable_declaration_statement  */
  YYSYMBOL_local_variable_declaration = 243, /* local_variable_declaration  */
  YYSYMBOL_local_variable_type = 244,      /* local_variable_type  */
  YYSYMBOL_statement = 245,                /* statement  */
  YYSYMBOL_statement_no_short_if = 246,    /* statement_no_short_if  */
  YYSYMBOL_statement_without_trailing_substatement = 247, /* statement_without_trailing_substatement  */
  YYSYMBOL_empty_statement = 248,          /* empty_statement  */
  YYSYMBOL_labeled_statement = 249,        /* labeled_statement  */
  YYSYMBOL_labeled_statement_no_short_if = 250, /* labeled_statement_no_short_if  */
  YYSYMBOL_expression_statement = 251,     /* expression_statement  */
  YYSYMBOL_statement_expression = 252,     /* statement_expression  */
  YYSYMBOL_if_then_statement = 253,        /* if_then_statement  */
  YYSYMBOL_254_7 = 254,                    /* $@7  */
  YYSYMBOL_hold_TOK_if = 255,              /* hold_TOK_if  */
  YYSYMBOL_if_then_else_statement = 256,   /* if_then_else_statement  */
  YYSYMBOL_257_8 = 257,                    /* $@8  */
  YYSYMBOL_258_9 = 258,                    /* $@9  */
  YYSYMBOL_if_then_else_statement_no_short_if = 259, /* if_then_else_statement_no_short_if  */
  YYSYMBOL_260_10 = 260,                   /* $@10  */
  YYSYMBOL_261_11 = 261,                   /* $@11  */
  YYSYMBOL_assert_statement = 262,         /* assert_statement  */
  YYSYMBOL_switch_statement = 263,         /* switch_statement  */
  YYSYMBOL_switch_block = 264,             /* switch_block  */
  YYSYMBOL_265_switch_rule_multiopt = 265, /* switch_rule.multiopt  */
  YYSYMBOL_266_switch_block_statement_group_multiopt = 266, /* switch_block_statement_group.multiopt  */
  YYSYMBOL_267_switch_label_col_multiopt = 267, /* switch_label_col.multiopt  */
  YYSYMBOL_switch_rule = 268,              /* switch_rule  */
  YYSYMBOL_switch_block_statement_group = 269, /* switch_block_statement_group  */
  YYSYMBOL_switch_label = 270,             /* switch_label  */
  YYSYMBOL_271_com_case_constant_multiopt = 271, /* com_case_constant.multiopt  */
  YYSYMBOL_case_constant = 272,            /* case_constant  */
  YYSYMBOL_while_statement = 273,          /* while_statement  */
  YYSYMBOL_hold_TOK_while = 274,           /* hold_TOK_while  */
  YYSYMBOL_while_statement_no_short_if = 275, /* while_statement_no_short_if  */
  YYSYMBOL_do_statement = 276,             /* do_statement  */
  YYSYMBOL_for_statement = 277,            /* for_statement  */
  YYSYMBOL_for_statement_no_short_if = 278, /* for_statement_no_short_if  */
  YYSYMBOL_basic_for_statement = 279,      /* basic_for_statement  */
  YYSYMBOL_280_12 = 280,                   /* $@12  */
  YYSYMBOL_281_13 = 281,                   /* $@13  */
  YYSYMBOL_hold_TOK_for = 282,             /* hold_TOK_for  */
  YYSYMBOL_283_for_init_opt = 283,         /* for_init.opt  */
  YYSYMBOL_284_expression_opt = 284,       /* expression.opt  */
  YYSYMBOL_285_for_update_opt = 285,       /* for_update.opt  */
  YYSYMBOL_basic_for_statement_no_short_if = 286, /* basic_for_statement_no_short_if  */
  YYSYMBOL_for_init = 287,                 /* for_init  */
  YYSYMBOL_for_update = 288,               /* for_update  */
  YYSYMBOL_statement_expression_list = 289, /* statement_expression_list  */
  YYSYMBOL_290_com_statement_expression_multiopt = 290, /* com_statement_expression.multiopt  */
  YYSYMBOL_enhanced_for_statement = 291,   /* enhanced_for_statement  */
  YYSYMBOL_enhanced_for_statement_no_short_if = 292, /* enhanced_for_statement_no_short_if  */
  YYSYMBOL_break_statement = 293,          /* break_statement  */
  YYSYMBOL_294_IDENTIFIER_opt = 294,       /* IDENTIFIER.opt  */
  YYSYMBOL_yield_statement = 295,          /* yield_statement  */
  YYSYMBOL_continue_statement = 296,       /* continue_statement  */
  YYSYMBOL_return_statement = 297,         /* return_statement  */
  YYSYMBOL_throw_statement = 298,          /* throw_statement  */
  YYSYMBOL_synchronized_statement = 299,   /* synchronized_statement  */
  YYSYMBOL_try_statement = 300,            /* try_statement  */
  YYSYMBOL_301_catches_opt = 301,          /* catches.opt  */
  YYSYMBOL_catches = 302,                  /* catches  */
  YYSYMBOL_303_catch_clause_multiopt = 303, /* catch_clause.multiopt  */
  YYSYMBOL_catch_clause = 304,             /* catch_clause  */
  YYSYMBOL_catch_formal_parameter = 305,   /* catch_formal_parameter  */
  YYSYMBOL_catch_type = 306,               /* catch_type  */
  YYSYMBOL_307_vt_class_type_multiopt = 307, /* vt_class_type.multiopt  */
  YYSYMBOL_finally = 308,                  /* finally  */
  YYSYMBOL_try_with_resources_statement = 309, /* try_with_resources_statement  */
  YYSYMBOL_310_finally_opt = 310,          /* finally.opt  */
  YYSYMBOL_resource_specification = 311,   /* resource_specification  */
  YYSYMBOL_312_semcol_opt = 312,           /* semcol.opt  */
  YYSYMBOL_resource_list = 313,            /* resource_list  */
  YYSYMBOL_314_semcol_resource_multiopt = 314, /* semcol_resource.multiopt  */
  YYSYMBOL_resource = 315,                 /* resource  */
  YYSYMBOL_variable_access = 316,          /* variable_access  */
  YYSYMBOL_pattern = 317,                  /* pattern  */
  YYSYMBOL_type_pattern = 318,             /* type_pattern  */
  YYSYMBOL_primary = 319,                  /* primary  */
  YYSYMBOL_primary_no_new_array = 320,     /* primary_no_new_array  */
  YYSYMBOL_hold_Literal = 321,             /* hold_Literal  */
  YYSYMBOL_class_instance_creation_expression = 322, /* class_instance_creation_expression  */
  YYSYMBOL_unqualified_class_instance_creation_expression = 323, /* unqualified_class_instance_creation_expression  */
  YYSYMBOL_field_access = 324,             /* field_access  */
  YYSYMBOL_array_access = 325,             /* array_access  */
  YYSYMBOL_326_14 = 326,                   /* $@14  */
  YYSYMBOL_327_15 = 327,                   /* $@15  */
  YYSYMBOL_method_invocation = 328,        /* method_invocation  */
  YYSYMBOL_argument_list = 329,            /* argument_list  */
  YYSYMBOL_330_com_expression_multiopt = 330, /* com_expression.multiopt  */
  YYSYMBOL_method_reference = 331,         /* method_reference  */
  YYSYMBOL_array_creation_expression = 332, /* array_creation_expression  */
  YYSYMBOL_dim_exprs = 333,                /* dim_exprs  */
  YYSYMBOL_334_dim_expr_multiopt = 334,    /* dim_expr.multiopt  */
  YYSYMBOL_dim_expr = 335,                 /* dim_expr  */
  YYSYMBOL_expression = 336,               /* expression  */
  YYSYMBOL_337_16 = 337,                   /* $@16  */
  YYSYMBOL_assignment_expression = 338,    /* assignment_expression  */
  YYSYMBOL_assignment = 339,               /* assignment  */
  YYSYMBOL_340_17 = 340,                   /* $@17  */
  YYSYMBOL_left_hand_side = 341,           /* left_hand_side  */
  YYSYMBOL_assignment_operator = 342,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 343,   /* conditional_expression  */
  YYSYMBOL_conditional_or_expression = 344, /* conditional_or_expression  */
  YYSYMBOL_conditional_and_expression = 345, /* conditional_and_expression  */
  YYSYMBOL_inclusive_or_expression = 346,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 347,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 348,           /* and_expression  */
  YYSYMBOL_equality_expression = 349,      /* equality_expression  */
  YYSYMBOL_relational_expression = 350,    /* relational_expression  */
  YYSYMBOL_351_18 = 351,                   /* $@18  */
  YYSYMBOL_352_19 = 352,                   /* $@19  */
  YYSYMBOL_353_20 = 353,                   /* $@20  */
  YYSYMBOL_354_21 = 354,                   /* $@21  */
  YYSYMBOL_instanceof_expression = 355,    /* instanceof_expression  */
  YYSYMBOL_shift_expression = 356,         /* shift_expression  */
  YYSYMBOL_additive_expression = 357,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 358, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 359,         /* unary_expression  */
  YYSYMBOL_pre_increment_expression = 360, /* pre_increment_expression  */
  YYSYMBOL_pre_decrement_expression = 361, /* pre_decrement_expression  */
  YYSYMBOL_unary_expression_not_plus_minus = 362, /* unary_expression_not_plus_minus  */
  YYSYMBOL_postfix_expression = 363,       /* postfix_expression  */
  YYSYMBOL_post_increment_expression = 364, /* post_increment_expression  */
  YYSYMBOL_post_decrement_expression = 365, /* post_decrement_expression  */
  YYSYMBOL_cast_expression = 366,          /* cast_expression  */
  YYSYMBOL_367_additional_bound_multiopt = 367, /* additional_bound.multiopt  */
  YYSYMBOL_switch_expression = 368         /* switch_expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1815

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  261
/* YYNRULES -- Number of rules.  */
#define YYNRULES  481
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  766

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   362


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   426,   426,   429,   430,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   446,   447,   451,   452,
     455,   456,   459,   460,   463,   464,   465,   466,   467,   470,
     471,   474,   475,   478,   479,   480,   483,   486,   487,   490,
     493,   494,   497,   500,   503,   506,   507,   510,   511,   514,
     515,   518,   521,   522,   525,   526,   531,   553,   559,   562,
     565,   566,   569,   572,   573,   576,   577,   578,   579,   582,
     585,   588,   591,   594,   595,   598,   599,   600,   603,   604,
     609,   620,   621,   624,   624,   624,   627,   628,   631,   632,
     635,   636,   639,   640,   643,   646,   649,   650,   653,   656,
     659,   662,   663,   666,   669,   672,   673,   676,   677,   678,
     681,   682,   683,   686,   689,   690,   693,   696,   697,   700,
     708,   709,   712,   713,   716,   717,   720,   720,   729,   730,
     733,   734,   737,   738,   741,   741,   741,   744,   773,   774,
     777,   780,   781,   784,   785,   788,   791,   794,   797,   798,
     801,   804,   805,   808,   811,   814,   817,   820,   823,   824,
     827,   827,   828,   831,   834,   837,   838,   841,   842,   845,
     846,   849,   852,   853,   856,   860,   861,   865,   868,   871,
     874,   875,   878,   881,   882,   886,   887,   891,   894,   897,
     898,   901,   902,   905,   911,   914,   917,   918,   921,   922,
     925,   928,   931,   934,   935,   938,   939,   940,   941,   947,
     953,   956,   957,   960,   963,   964,   969,   972,   975,   976,
     979,   980,   981,   984,   985,   988,   991,   994,   995,   998,
     999,  1000,  1001,  1002,  1003,  1006,  1007,  1008,  1009,  1010,
    1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1024,  1025,  1028,  1031,  1034,  1037,  1051,  1052,  1053,
    1054,  1055,  1056,  1057,  1060,  1060,  1072,  1075,  1080,  1075,
    1094,  1099,  1094,  1119,  1120,  1123,  1126,  1127,  1130,  1131,
    1134,  1135,  1138,  1139,  1142,  1143,  1144,  1147,  1150,  1151,
    1154,  1155,  1158,  1161,  1164,  1166,  1169,  1172,  1173,  1176,
    1177,  1180,  1180,  1180,  1196,  1199,  1200,  1203,  1204,  1207,
    1208,  1211,  1214,  1215,  1218,  1221,  1224,  1225,  1228,  1231,
    1234,  1237,  1238,  1241,  1244,  1247,  1250,  1253,  1256,  1257,
    1258,  1261,  1262,  1265,  1268,  1269,  1272,  1275,  1278,  1281,
    1282,  1285,  1288,  1291,  1292,  1295,  1298,  1299,  1302,  1305,
    1306,  1309,  1310,  1313,  1314,  1317,  1320,  1325,  1326,  1329,
    1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,  1341,  1345,
    1353,  1354,  1355,  1358,  1361,  1362,  1363,  1366,  1371,  1366,
    1384,  1387,  1388,  1389,  1390,  1391,  1394,  1397,  1398,  1401,
    1402,  1403,  1404,  1407,  1408,  1409,  1410,  1413,  1416,  1417,
    1420,  1423,  1423,  1429,  1430,  1433,  1433,  1444,  1445,  1446,
    1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,  1457,  1458,
    1459,  1460,  1463,  1464,  1467,  1468,  1471,  1472,  1475,  1476,
    1479,  1480,  1483,  1484,  1487,  1488,  1489,  1492,  1493,  1493,
    1499,  1499,  1505,  1505,  1511,  1511,  1517,  1520,  1521,  1524,
    1525,  1526,  1527,  1530,  1536,  1546,  1558,  1575,  1586,  1597,
    1608,  1609,  1610,  1611,  1612,  1615,  1617,  1619,  1620,  1621,
    1622,  1623,  1626,  1627,  1628,  1629,  1632,  1635,  1638,  1641,
    1642,  1645
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOK_IDENTIFIER",
  "TOK_NUMERICLITERAL", "TOK_NONNUMERICLITERAL", "\"!\"", "\"!=\"",
  "\"%\"", "\"%=\"", "\"&\"", "\"&&\"", "\"&=\"", "\"(\"", "\")\"",
  "\"*\"", "\"*=\"", "\"+\"", "\"++\"", "\"+=\"", "\",\"", "\"-\"",
  "\"--\"", "\"-=\"", "\"->\"", "\".\"", "\"...\"", "\"/\"", "\"/=\"",
  "\":\"", "\"::\"", "\";\"", "\"<\"", "\"<<\"", "\"<<=\"", "\"<=\"",
  "\"=\"", "\"==\"", "\">\"", "\">=\"", "\">>\"", "\">>=\"", "\">>>\"",
  "\">>>=\"", "\"?\"", "\"[\"", "\"]\"", "\"^\"", "\"^=\"", "\"abstract\"",
  "\"assert\"", "\"boolean\"", "\"break\"", "\"byte\"", "\"case\"",
  "\"catch\"", "\"char\"", "\"class\"", "\"continue\"", "\"default\"",
  "\"do\"", "\"double\"", "\"else\"", "\"enum\"", "\"extends\"",
  "\"final\"", "\"finally\"", "\"float\"", "\"for\"", "\"if\"",
  "\"implements\"", "\"import\"", "\"instanceof\"", "\"int\"",
  "\"interface\"", "\"long\"", "\"new\"", "\"package\"", "\"permits\"",
  "\"private\"", "\"protected\"", "\"public\"", "\"record\"", "\"return\"",
  "\"sealed\"", "\"short\"", "\"static\"", "\"strictfp\"", "\"super\"",
  "\"switch\"", "\"synchronized\"", "\"this\"", "\"throw\"", "\"throws\"",
  "\"transient\"", "\"transitive\"", "\"try\"", "\"var\"", "\"void\"",
  "\"volatile\"", "\"while\"", "\"yield\"", "\"{\"", "\"|\"", "\"|=\"",
  "\"||\"", "\"}\"", "\"~\"", "$accept", "input", "modifier.multiopt",
  "modifier", "dot_ind.multiopt", "type", "primitive_type", "numeric_type",
  "integral_type", "floating_point_type", "reference_type",
  "class_or_interface_type", "array_type", "dims", "type_parameter",
  "type_bound.opt", "type_bound", "additional_bound", "type_arguments",
  "type_argument_list", "type_argument.multiopt", "type_argument",
  "wildcard", "wildcard_bounds.opt", "wildcard_bounds", "un_name",
  "compilation_unit", "ordinary_compilation_unit",
  "package_declaration.opt", "package_declaration",
  "import_declaration.multiopt", "import_declaration",
  "single_type_import_declaration", "type_import_on_demand_declaration",
  "single_static_import_declaration",
  "static_import_on_demand_declaration",
  "top_level_class_or_interface_declaration.multiopt",
  "top_level_class_or_interface_declaration", "com_type_name.multiopt",
  "class_declaration", "normal_class_declaration", "$@1", "$@2",
  "type_parameters.opt", "class_extends.opt", "class_implements.opt",
  "class_permits.opt", "type_parameters", "type_parameter_list",
  "com_type_parameter.multiopt", "class_extends", "class_implements",
  "interface_type_list", "com_interface_type.multiopt", "class_permits",
  "class_body", "class_body_declaration.multiopt",
  "class_body_declaration", "class_member_declaration",
  "variable_declarator_list", "com_variable_declarator.multiopt",
  "variable_declarator", "eq_variable_initializer.opt",
  "variable_declarator_id", "dims.opt", "variable_initializer",
  "type_arguments.opt", "method_declaration", "$@3", "method_header",
  "throws.opt", "result", "method_declarator", "$@4", "$@5",
  "hold_TOK_IDENTIFIER", "formal_parameter_list.opt",
  "formal_parameter_list", "com_formal_parameter.multiopt",
  "formal_parameter", "variable_arity_parameter", "throws",
  "exception_type_list", "com_exception_type.multiopt", "exception_type",
  "method_body", "instance_initializer", "constructor_declaration",
  "constructor_declarator", "simple_type_name", "constructor_body",
  "block_statements.opt", "argument_list.opt", "$@6", "enum_declaration",
  "enum_body", "com.opt", "enum_body_declarations.opt",
  "enum_constant_list.opt", "enum_constant_list",
  "com_enum_constant.multiopt", "enum_constant", "class_body.opt",
  "enum_body_declarations", "record_declaration", "record_header",
  "record_component_list.opt", "record_component_list",
  "com_record_component.multiopt", "record_component",
  "variable_arity_record_component", "record_body",
  "record_body_declaration.multiopt", "record_body_declaration",
  "compact_constructor_declaration", "interface_declaration",
  "normal_interface_declaration", "interface_extends.opt",
  "interface_permits.opt", "interface_extends", "interface_permits",
  "interface_body", "interface_member_declaration.multiopt",
  "interface_member_declaration", "interface_method_declaration",
  "array_initializer", "variable_initializer_list.opt",
  "variable_initializer_list", "com_variable_initializer.multiopt",
  "block", "block_statements", "block_statement.multiopt",
  "block_statement", "local_class_or_interface_declaration",
  "local_variable_declaration_statement", "local_variable_declaration",
  "local_variable_type", "statement", "statement_no_short_if",
  "statement_without_trailing_substatement", "empty_statement",
  "labeled_statement", "labeled_statement_no_short_if",
  "expression_statement", "statement_expression", "if_then_statement",
  "$@7", "hold_TOK_if", "if_then_else_statement", "$@8", "$@9",
  "if_then_else_statement_no_short_if", "$@10", "$@11", "assert_statement",
  "switch_statement", "switch_block", "switch_rule.multiopt",
  "switch_block_statement_group.multiopt", "switch_label_col.multiopt",
  "switch_rule", "switch_block_statement_group", "switch_label",
  "com_case_constant.multiopt", "case_constant", "while_statement",
  "hold_TOK_while", "while_statement_no_short_if", "do_statement",
  "for_statement", "for_statement_no_short_if", "basic_for_statement",
  "$@12", "$@13", "hold_TOK_for", "for_init.opt", "expression.opt",
  "for_update.opt", "basic_for_statement_no_short_if", "for_init",
  "for_update", "statement_expression_list",
  "com_statement_expression.multiopt", "enhanced_for_statement",
  "enhanced_for_statement_no_short_if", "break_statement",
  "IDENTIFIER.opt", "yield_statement", "continue_statement",
  "return_statement", "throw_statement", "synchronized_statement",
  "try_statement", "catches.opt", "catches", "catch_clause.multiopt",
  "catch_clause", "catch_formal_parameter", "catch_type",
  "vt_class_type.multiopt", "finally", "try_with_resources_statement",
  "finally.opt", "resource_specification", "semcol.opt", "resource_list",
  "semcol_resource.multiopt", "resource", "variable_access", "pattern",
  "type_pattern", "primary", "primary_no_new_array", "hold_Literal",
  "class_instance_creation_expression",
  "unqualified_class_instance_creation_expression", "field_access",
  "array_access", "$@14", "$@15", "method_invocation", "argument_list",
  "com_expression.multiopt", "method_reference",
  "array_creation_expression", "dim_exprs", "dim_expr.multiopt",
  "dim_expr", "expression", "$@16", "assignment_expression", "assignment",
  "$@17", "left_hand_side", "assignment_operator",
  "conditional_expression", "conditional_or_expression",
  "conditional_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "$@18", "$@19", "$@20", "$@21",
  "instanceof_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "unary_expression",
  "pre_increment_expression", "pre_decrement_expression",
  "unary_expression_not_plus_minus", "postfix_expression",
  "post_increment_expression", "post_decrement_expression",
  "cast_expression", "additional_bound.multiopt", "switch_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-630)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-476)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,    97,   154,  -630,  -630,  -630,  -630,  -630,  -630,   151,
      55,    26,  -630,  -630,  -630,  -630,  -630,    60,   220,  -630,
    -630,   228,   195,  -630,  1178,  -630,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,   214,   162,  -630,  -630,  -630,   235,  -630,
     264,  -630,  -630,  -630,   267,  -630,  -630,  -630,  -630,  -630,
    -630,  -630,   165,  -630,   254,   287,   229,   266,   266,   271,
     279,  -630,  -630,  -630,   306,   219,  -630,   322,   262,  -630,
     317,  -630,  -630,   266,   301,   310,   311,  -630,   335,  -630,
     283,  -630,   302,   306,   265,  -630,  1011,   229,   288,   318,
    -630,  -630,   354,   340,   358,   319,   345,  -630,  -630,   306,
    -630,  -630,   346,  -630,  -630,   228,   270,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,  -630,    78,  -630,  -630,  -630,
    -630,  -630,    40,  -630,   360,  -630,  -630,  -630,   275,   306,
     229,  -630,   342,    51,   301,   306,   370,  -630,   350,   365,
     310,   322,   311,  -630,  -630,  -630,   383,   343,   349,  -630,
     377,  -630,  -630,   310,   323,  -630,    48,    -5,  -630,  -630,
    -630,  -630,   310,   389,  -630,   304,  -630,   335,   401,  -630,
     393,     4,  -630,  -630,   372,  1011,    35,   228,   312,  -630,
    -630,   306,   306,  -630,  -630,   405,  -630,   144,  -630,  -630,
     306,  -630,   228,  -630,  -630,  1494,  -630,  -630,  -630,  -630,
    -630,  -630,  1218,  -630,  1534,  -630,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,   311,  -630,  -630,  -630,  -630,
     374,  -630,  -630,   857,  1534,  -630,   310,   311,  -630,  -630,
     278,    12,  -630,   230,  -630,  -630,  -630,   857,   857,  -630,
    -630,   419,   419,  1398,  -630,  -630,  1011,   394,   204,   411,
     413,  -630,  -630,    18,  -630,  -630,  -630,  -630,   324,  -630,
     321,  -630,  -630,  -630,  -630,  -630,  -630,   398,   427,  -630,
    -630,  -630,  -630,  -630,   403,  -630,   422,  -630,  -630,  -630,
    -630,   424,  -630,  -630,  -630,   425,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,   215,   387,  -630,   143,  -630,
     359,   475,   190,  -630,  -630,  -630,   886,  -630,  -630,   239,
     258,   269,    15,  -630,   347,    21,   393,   186,   312,   421,
     857,   926,   857,   857,   426,   857,  1658,  -630,  -630,  -630,
    -630,  -630,    14,   431,   348,   399,   440,    59,   176,  -630,
     167,   276,   131,  -630,  -630,  -630,  -630,   239,  -630,  -630,
    -630,  -630,   442,  -630,  -630,  -630,  -630,   347,   287,  1398,
     444,   122,  -630,  -630,  -630,  -630,   289,  -630,   429,   430,
     433,   364,   420,    64,   435,  -630,   464,   301,  -630,  -630,
     438,  1718,   415,   369,   441,   389,    52,   301,  -630,  -630,
    1110,  -630,   428,  -630,  -630,   439,  -630,  -630,  -630,  1692,
      37,   301,  -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,    12,   306,
     375,  -630,   460,  1218,  -630,  -630,  -630,  -630,  -630,  -630,
     462,  -630,  -630,  -630,  -630,  -630,   857,   857,   857,   857,
     857,   857,   857,  -630,  -630,  -630,  -630,   986,   857,   857,
     857,   857,   857,   857,   857,   857,   347,  -630,   465,  -630,
    -630,  -630,  -630,  -630,  -630,   466,   343,     5,   428,  -630,
     389,     5,   428,  -630,   467,   482,   472,   476,  -630,    54,
    -630,   468,  -630,  -630,   215,    38,   480,   436,   449,  -630,
     415,  -630,   481,   492,   306,   217,  -630,  -630,   503,  -630,
    -630,   349,  -630,   487,   406,  -630,  -630,   505,   488,  -630,
     490,  -630,  -630,   511,  -630,   522,   484,  -630,  -630,   310,
    -630,  -630,  -630,  1574,   512,  -630,  -630,  -630,   432,  -630,
     857,   513,   499,   431,   348,   399,   440,    59,   176,   176,
     857,   857,   857,   857,   532,  -630,  -630,  -630,   276,   276,
     276,   131,   131,  -630,  -630,  -630,  -630,  -630,   509,  -630,
     497,    36,  -630,  -630,   501,   535,  -630,  -630,   389,  -630,
     448,   369,  -630,   540,   524,  -630,   369,  -630,   415,   436,
    -630,  -630,   389,   174,   554,   301,  -630,  -630,   427,  -630,
    -630,  -630,   546,   547,  1398,  -630,   542,  -630,   389,  -630,
    -630,  -630,   543,   146,  -630,   548,  -630,  -630,   448,   857,
     167,   167,   167,   167,   460,  -630,   552,  -630,  -630,   345,
    -630,  -630,  -630,   312,   559,   136,  -630,  -630,  -630,  1718,
     575,   560,  -630,  -630,  -630,  -630,   561,   563,   574,   534,
    -630,  1398,  1433,  -630,   567,   529,   394,   568,   306,   581,
    -630,  -630,  -630,  -630,   571,   555,   569,   485,  -630,  -630,
     857,  -630,   136,  -630,   566,  -630,   310,   427,   369,  -630,
     389,  -630,  -630,  -630,   570,  -630,  -630,  -630,   579,  -630,
     582,  -630,  -630,   584,  -630,  -630,  1398,  -630,  -630,  -630,
    -630,  -630,  -630,   428,  -630,   406,  -630,  -630,  -630,   -13,
    -630,   573,   101,    96,   495,  -630,  -630,   586,  1433,   544,
    -630,  -630,  1692,  -630,   576,  -630,  -630,   588,  -630,   585,
    -630,  -630,  -630,  -630,  -630,   592,   306,  -630,  -630,  1398,
    -630,   590,   596,   595,   529,   857,  -630,  1308,  -630,   310,
    -630,   613,  1433,  -630,   394,   614,  -630,  -630,  -630,  -630,
    1433,  -630,   615,   601,  1398,  -630,  1433,   529,  -630,   577,
    -630,   619,  1433,  1433,  -630,  -630
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      61,     0,     0,     2,    58,    64,    60,    17,     1,    74,
       0,     0,    63,    65,    66,    67,    68,     4,     0,    62,
      56,     0,     0,    77,     0,    73,    75,    80,    81,    82,
      76,   194,    16,     0,     0,    69,     8,    83,     0,    10,
       0,     7,     6,     5,     0,    11,     9,    12,    14,    13,
      15,     3,     0,    57,     0,     0,    91,    87,    87,    57,
       0,    70,   137,    84,     0,     0,    90,     0,   197,    86,
       0,    71,    72,    87,    56,   102,    35,    99,   170,   163,
      41,    97,     0,     0,   199,   196,   181,    91,    89,    48,
     124,    33,     0,   100,     0,     0,   166,   169,   173,     0,
      39,    40,    95,    94,   200,     0,     0,   198,    21,    24,
      28,    30,    29,    26,    27,    25,     0,    18,    20,    22,
      23,    19,    31,    32,     0,   180,   184,   186,     0,     0,
      91,    88,     0,     0,   125,     0,     0,   165,   168,   171,
     480,     0,    79,   204,   195,   185,     0,     0,    36,   179,
     182,   190,   178,    98,    93,    44,     0,    53,    49,    45,
      50,    34,   101,   160,   106,     0,   167,     0,    42,    96,
     201,     4,   187,    37,     0,     0,     4,     0,     0,    92,
      47,     0,     0,    51,    52,     0,   401,     4,   164,   172,
       0,   479,     0,   208,   202,     0,   206,   207,   203,   205,
      38,   183,     4,   188,     0,   111,   191,   107,   110,   108,
     109,   189,   192,   112,   153,    79,   106,    85,    54,    55,
       0,   161,   388,     0,     0,   105,    43,    78,   133,   132,
       0,     0,   134,    56,   368,   369,   401,     0,     0,   253,
     401,   322,   322,     0,   304,   266,     0,   401,     0,     0,
       0,   360,   401,     0,   228,   294,   401,   227,   407,   223,
       0,   224,   240,   158,   219,   220,   221,     0,     0,   222,
     229,   241,   230,   242,     0,   231,     0,   232,   243,   244,
     233,     0,   245,   234,   297,     0,   298,   246,   252,   247,
     248,   250,   249,   251,   330,   472,   357,   359,   363,   370,
     364,   365,   366,   367,   358,   257,     0,   258,   259,     0,
     260,   261,    56,   126,   131,     0,   103,     4,   176,   386,
       0,   401,     0,     0,     0,     0,   473,   363,   366,   402,
     404,   403,   422,   424,   426,   428,   430,   432,   434,   446,
     437,   449,   453,   456,   460,   461,   464,   467,   474,   475,
     470,   471,     0,   134,   152,   209,   151,   131,     0,     0,
       0,   473,   364,   365,   465,   466,     0,   321,     0,     0,
      56,     0,     0,     0,     0,   307,     0,   125,   401,   401,
       0,     0,   332,     0,     0,   160,     0,   125,   377,   216,
       4,   225,   121,   226,   115,   118,   256,   401,   401,   306,
       0,   125,   401,   413,   419,   411,   414,   415,   412,   416,
     410,   417,   418,   420,   421,   405,   476,   477,     0,     0,
       0,   130,     4,     4,   193,   104,   175,   174,   401,   469,
       0,   462,   463,   401,   468,   401,     0,     0,     0,     0,
       0,     0,     0,   438,   442,   440,   444,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   131,   128,     0,   254,
     362,   401,   273,   320,   324,     0,   401,     0,   121,   399,
     160,     0,   121,   325,   375,     0,     0,     0,   326,   353,
     351,   347,   350,   352,     0,   364,     0,     0,   328,   335,
     332,   323,     0,    57,     0,     0,   361,   371,     0,   401,
     218,   120,   119,   113,   401,   116,   264,     0,   313,   317,
       0,   305,   312,   374,   372,     0,     0,   401,   127,   150,
     146,   149,   154,     0,     0,   138,   142,   144,     0,   387,
       0,     0,     0,   425,   427,   429,   431,   433,   436,   435,
       0,     0,     0,     0,   447,   356,   448,   355,   450,   451,
     452,   454,   455,   459,   457,   458,   129,   135,     0,   401,
       0,   401,   395,   393,   397,     0,   396,   394,   160,   391,
       0,     0,   346,     0,   348,     4,     0,   329,   333,   344,
     331,   381,   160,     0,     0,   125,   389,   378,     0,   117,
     123,   122,     0,     0,     0,   401,   315,   301,   160,   390,
     380,   406,   147,     0,   155,   140,   157,   478,     0,     0,
     439,   443,   441,   445,     4,   274,     0,   400,   215,   166,
     211,   401,   398,   176,     0,   281,   275,   327,   345,     0,
       0,     0,   341,   334,   343,   342,     0,   376,     0,     0,
     114,     0,     0,   293,     0,     0,   401,     0,     0,     0,
     143,     4,   481,   423,     0,     0,   213,     0,   373,   384,
       0,   289,   283,   279,     0,   349,   340,     0,     0,   382,
     160,   392,   379,   265,    56,   268,   235,   236,     0,   237,
       0,   238,   239,     0,   299,   300,     0,   316,   302,   383,
     148,   145,   141,   121,   296,   401,   210,   291,   292,     0,
     280,     0,     0,   401,   338,   337,   336,     0,     0,     0,
     401,   401,   306,   318,     0,   136,   214,   288,   277,     0,
     283,   276,   278,   285,   286,     0,     0,   385,   255,     0,
     270,     0,   313,     0,   310,     0,   282,     4,   284,   339,
     269,     0,     0,   401,   401,     0,   309,   314,   290,   287,
       0,   295,     0,     0,     0,   271,     0,   310,   303,     0,
     319,     0,     0,     0,   272,   311
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -630,  -630,  -169,  -630,  -630,   -74,  -210,  -630,  -630,  -630,
    -119,   -61,  -630,   -99,   469,  -630,  -630,  -630,  -630,  -630,
    -630,   479,  -630,  -630,  -630,   -11,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,   423,     2,
    -630,  -630,  -630,    86,  -630,   -43,  -630,   -98,  -630,  -630,
    -630,  -630,   564,  -630,  -630,   470,   434,   473,  -630,  -630,
    -630,    56,  -630,  -564,  -442,  -544,  -133,  -630,  -630,   451,
    -341,   437,   290,  -630,  -630,   293,    43,  -630,  -630,     7,
    -630,  -630,  -630,  -630,    16,   242,  -630,  -630,  -630,   447,
     246,   245,  -365,  -630,  -630,  -630,    53,  -630,  -630,  -630,
    -630,   506,    57,  -630,  -630,  -630,  -630,  -630,  -630,   502,
    -630,  -630,  -630,  -630,  -630,    -2,  -196,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,  -163,  -630,  -630,  -630,  -155,
     -59,  -630,   286,  -630,  -630,  -357,  -630,  -232,  -439,  -526,
    -630,  -630,  -630,  -630,  -390,  -630,  -630,  -467,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,  -630,    71,  -630,  -630,   -39,
     -20,  -630,  -629,  -630,   -52,  -630,  -358,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -456,   -27,  -619,   -70,  -630,  -630,
    -630,  -581,  -630,  -630,  -630,  -630,   446,  -630,  -630,  -630,
     -14,  -630,  -630,   200,   201,  -630,   114,  -630,  -630,  -630,
     115,  -630,  -630,  -630,  -630,  -630,  -630,    66,  -630,  -630,
    -630,  -373,  -630,  -630,     0,  -322,  -198,  -141,  -630,  -630,
      58,  -630,  -630,  -630,  -630,   325,  -630,   132,   594,  -630,
    -630,   483,  -630,  -630,  -630,  -218,  -630,   268,   272,   281,
     263,   273,  -245,  -630,  -630,  -630,  -630,  -630,  -227,  -171,
    -246,  -189,    69,   130,  -630,   213,   294,   368,  -630,  -630,
    -630
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    24,    51,    10,   257,   117,   118,   119,   120,
     121,   122,   123,   501,    81,   100,   101,   191,    90,   132,
     133,   159,   160,   183,   184,   361,     3,     4,     5,     6,
       9,    12,    13,    14,    15,    16,    17,    25,   170,   259,
      27,    55,    73,    68,   130,    65,   178,    69,    82,   102,
     131,    66,    77,    93,   179,   426,   187,   225,   207,   393,
     503,   394,   505,   395,   502,   589,    91,   208,   418,   313,
     420,   232,   357,   358,   614,    63,   524,   525,   605,   526,
     527,   421,   520,   602,   521,   355,   209,   210,   314,   315,
     424,   260,   185,   186,    28,    79,   138,   165,    96,    97,
     139,    98,   427,   166,    29,    87,   124,   125,   150,   126,
     127,   152,   176,   211,   212,   213,    31,    84,   106,    85,
     107,   144,   171,   198,   199,   590,   619,   620,   656,   262,
     263,   390,   264,   265,   266,   267,   268,   269,   675,   270,
     271,   272,   677,   273,   274,   275,   592,   276,   277,   593,
     709,   679,   741,   759,   278,   279,   626,   702,   662,   699,
     663,   700,   664,   717,   697,   280,   281,   681,   282,   283,
     682,   284,   646,   714,   285,   510,   374,   745,   684,   511,
     746,   512,   596,   286,   685,   287,   368,   288,   289,   290,
     291,   292,   293,   487,   488,   578,   489,   631,   667,   704,
     577,   294,   635,   383,   573,   481,   574,   482,   483,   546,
     547,   295,   296,   297,   327,   299,   362,   363,   499,   639,
     328,   221,   319,   303,   304,   468,   564,   469,   375,   223,
     329,   305,   517,   306,   415,   698,   332,   333,   334,   335,
     336,   337,   338,   540,   542,   541,   543,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   168,
     351
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   161,   195,    75,   300,   331,   261,   204,   484,   509,
      33,   371,   116,   465,   158,    30,   457,   618,   224,    26,
     492,   214,    75,   148,   480,   300,   563,   688,  -156,    20,
     567,   381,   214,   701,   422,   193,   372,   158,   140,   650,
     513,   660,   508,   354,   128,   300,   661,    89,   364,   365,
     174,    74,  -354,    76,    74,   493,  -212,   -35,   435,   181,
     -59,   301,   218,   219,   497,    92,   441,   385,   153,  -354,
     719,   156,    76,     1,   162,    76,   356,   470,   514,   386,
      18,   145,   301,   182,   387,   147,    19,   154,    76,    92,
     545,    23,   157,   718,   142,   157,   442,   230,   382,   388,
       7,   116,   301,   705,   146,   565,   230,   561,   719,   466,
     194,   430,    21,   494,   202,   556,   676,  -156,    76,   436,
     202,   229,    76,   423,    76,   753,   230,   459,   494,   226,
     229,   429,   721,   431,   432,   385,   434,   202,   561,   453,
     495,   203,  -212,   496,    70,    76,   454,   386,   224,   392,
     229,   716,   387,   747,     8,   660,   229,  -263,   455,    88,
     661,   300,   214,  -263,    76,    53,   215,   388,    59,   197,
      76,    76,   649,   196,  -263,   678,   747,    54,   205,    76,
      60,   227,   676,   485,    76,   373,   683,   470,   252,   205,
     660,   258,   300,    76,   261,   661,   538,   539,   202,    92,
     448,   300,   298,   624,  -262,   551,   552,   449,   443,   450,
    -262,   444,   326,    76,   445,   446,   676,   636,   301,    76,
      34,  -262,    11,    32,   676,   300,    35,   261,   490,   376,
     676,    20,   326,   647,   377,    76,   676,   676,    56,    52,
     400,   678,   584,   298,   475,   401,   202,   585,   447,   301,
    -177,   715,   683,   523,   498,   687,   484,   416,   301,   359,
     302,   417,    89,   356,   553,   554,   555,    57,   515,   728,
      58,   307,   480,   467,   471,   678,  -474,   548,   549,   550,
    -474,    74,   301,   678,   680,    61,   683,  -475,   202,   678,
      62,  -475,   425,   451,   683,   678,   678,   452,    67,    64,
     683,   302,    71,   751,   562,   707,   683,   683,   566,    74,
      72,   755,   307,   610,   611,   612,   613,   760,   461,   205,
     462,    78,   509,   764,   765,    80,    83,   -35,   544,   108,
      86,   109,   308,    89,   110,    92,    94,   385,    95,   111,
     103,   607,  -473,   105,   509,   112,  -473,    99,   326,   386,
     680,   113,   129,   114,   387,   732,   -46,   134,   519,   298,
     135,    53,   643,   115,   136,   137,   141,   509,  -408,   388,
     479,  -408,   143,   308,   149,  -408,   228,   151,  -408,   258,
     155,   164,  -408,   163,   680,   167,   172,  -408,   258,   173,
     298,   653,   680,  -408,   174,  -408,   300,   175,   680,   298,
    -408,   177,  -408,  -162,   680,   680,   630,  -408,    76,   673,
     188,   190,   258,   192,   216,   309,   627,   302,   200,   220,
     318,   632,   367,   298,   378,  -308,   379,   389,   307,   391,
     392,   485,   402,   583,   396,   397,    76,   398,   399,   433,
     419,   428,   437,   300,   300,   523,   439,   300,   302,   603,
     440,   438,   638,   301,   713,   422,   309,   302,   460,   307,
     463,   464,   359,  -408,   255,   466,   473,   474,   307,   478,
     486,   202,   491,   147,  -139,   504,   530,   423,   557,   559,
     568,   302,   523,    76,  -409,   569,   570,  -409,   300,   308,
     571,  -409,   307,   575,  -409,   581,   310,   740,  -409,   572,
     301,   301,   576,  -409,   301,   582,   586,   588,   561,  -409,
     300,  -409,    76,   706,   300,  -331,  -409,   595,  -409,   594,
     308,   597,   758,  -409,   598,   599,   604,   608,   609,   308,
     600,   300,    20,   234,   235,   -19,   300,   310,   606,   300,
     615,   261,   236,   617,   300,   301,   621,   237,   723,   623,
     625,   238,   300,   308,   628,   629,   300,   637,   300,   300,
     641,   642,   645,   648,   300,   300,   655,   301,   651,   666,
     311,   301,   309,   659,   668,   669,   670,   671,    74,  -409,
     672,   686,   689,   326,   691,   693,   694,   519,   301,   695,
     703,   696,   710,   301,   298,   711,   301,   712,   726,   708,
     727,   301,   720,   309,   742,   246,   729,   734,   735,   301,
     169,   311,   309,   301,   736,   301,   301,   248,   479,    76,
     251,   301,   301,   738,    36,   743,   744,   750,   754,   756,
     326,   326,   757,   763,   326,   180,   309,    76,   316,   762,
      39,   298,   298,   456,   640,   298,   231,   104,   217,   206,
     317,   458,   302,   310,    41,    42,    43,   654,   692,    45,
     518,    46,    47,   307,   690,   739,   522,   353,   528,    48,
      49,   352,   657,   189,    50,   326,   500,   201,   749,   652,
     658,   737,   722,   748,   310,   733,   298,   761,   369,   724,
     579,   580,   633,   310,   634,   665,   622,   326,   472,   302,
     302,   258,   536,   302,   533,     0,   330,     0,   298,   534,
     307,   307,   298,   537,   307,    76,     0,   310,   326,   535,
       0,     0,     0,   326,   308,     0,   258,   311,     0,   298,
       0,   326,     0,     0,   298,     0,     0,   298,     0,   326,
       0,     0,   298,   326,   302,   326,   326,     0,     0,     0,
     298,   326,   326,     0,   298,   307,   298,   298,   311,     0,
       0,     0,   298,   298,     0,     0,   302,   311,     0,     0,
     302,   308,   308,     0,     0,   308,     0,   307,     0,     0,
     222,   307,     0,     0,     0,     0,     0,   302,     0,     0,
       0,   311,   302,     0,     0,   302,     0,     0,   307,     0,
     302,     0,     0,   307,     0,     0,   307,   309,   302,     0,
       0,   307,   302,     0,   302,   302,   308,     0,     0,   307,
     302,   302,     0,   307,     0,   307,   307,     0,     0,     0,
     360,   307,   307,     0,   366,     0,     0,     0,   308,     0,
       0,     0,   308,     0,     0,     0,   380,     0,     0,     0,
     384,     0,     0,     0,   309,   309,     0,     0,   309,   308,
      20,   234,   235,   320,   308,     0,     0,   308,     0,     0,
     321,     0,   308,     0,   322,   237,     0,     0,   323,   238,
     308,     0,     0,     0,   308,     0,   308,   308,   310,     0,
       0,     0,   308,   308,     0,   403,     0,     0,   404,   309,
       0,     0,   405,     0,     0,   406,     0,     0,     0,   407,
       0,     0,     0,     0,   408,   360,     0,     0,     0,     0,
     409,   309,   410,     0,     0,   309,     0,   411,     0,   412,
       0,     0,     0,   246,   413,   310,   310,     0,     0,   310,
       0,     0,   309,     0,     0,   248,   324,   309,   251,     0,
     309,     0,     0,     0,     0,   309,     0,     0,     0,     0,
       0,     0,   311,   309,   325,     0,     0,   309,     0,   309,
     309,     0,   476,   477,     0,   309,   309,   108,     0,   109,
     310,     0,   110,     0,     0,     0,     0,   111,     0,    74,
     414,   506,   507,   112,     0,     0,   516,     0,     0,   113,
       0,   114,   310,     0,     0,     0,   310,     0,     0,   311,
     311,   115,     0,   311,    74,     0,     0,     0,     0,     0,
       0,     0,   529,   310,     0,     0,     0,   531,   310,   532,
       0,   310,     0,     0,     0,     0,   310,   108,     0,   109,
       0,     0,   110,     0,   310,     0,     0,   111,   310,     0,
     310,   310,     0,   112,   311,   558,   310,   310,     0,   113,
     560,   114,   108,     0,   109,     0,     0,   110,     0,     0,
       0,   115,   111,     0,     0,     0,   311,     0,   112,     0,
     311,     0,     0,   254,   113,     0,   114,     0,     0,     0,
       0,     0,     0,   587,     0,     0,   115,   311,   591,     0,
       0,     0,   311,     0,     0,   311,     0,     0,     0,     0,
     311,   601,     0,   233,   234,   235,     0,     0,   311,     0,
       0,     0,   311,   236,   311,   311,     0,     0,   237,     0,
     311,   311,   238,     0,     0,     0,     0,     0,     0,     0,
       0,   239,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   616,     0,   591,     0,     0,     0,     0,
     240,   108,   241,   109,  -217,     0,   110,     0,   242,  -217,
     243,   111,     0,     0,     0,     0,     0,   112,   244,   245,
       0,     0,     0,   113,     0,   114,   246,     0,     0,   644,
       0,     0,     0,   247,     0,   115,     0,     0,   248,   249,
     250,   251,   252,     0,     0,     0,   253,   254,     0,     0,
     255,   256,   202,     0,     0,   560,  -217,     0,     0,     0,
       0,   233,   234,   235,     0,     0,     0,    36,     0,     0,
       0,   236,     0,     0,     0,    37,   237,     0,     0,     0,
     238,    38,     0,    39,     0,     0,     0,     0,     0,   239,
       0,     0,    40,     0,     0,     0,     0,    41,    42,    43,
      44,     0,    45,     0,    46,    47,     0,     0,   240,   108,
     241,   109,    48,    49,   110,     0,   242,    50,   243,   111,
       0,     0,     0,     0,     0,   112,   244,   245,     0,   591,
       0,   113,     0,   114,   246,     0,     0,   725,     0,     0,
       0,   247,     0,   115,   730,   731,   248,   249,   250,   251,
     252,   233,   234,   235,   253,   254,     0,     0,   255,   256,
     202,   236,     0,     0,  -159,     0,   237,     0,     0,     0,
     238,     0,     0,     0,     0,     0,     0,   752,     0,   239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   240,   108,
     241,   109,   660,     0,   110,     0,   242,   661,   243,   111,
       0,     0,     0,     0,     0,   112,   244,   245,     0,     0,
       0,   113,     0,   114,   246,     0,     0,     0,     0,     0,
       0,   247,     0,   115,     0,     0,   248,   249,   250,   251,
     252,   370,   234,   235,   253,   254,     0,     0,   255,   256,
     202,   236,     0,     0,     0,     0,   237,     0,     0,     0,
     238,     0,     0,     0,     0,     0,     0,     0,     0,   239,
       0,     0,     0,     0,     0,     0,   674,   234,   235,     0,
       0,     0,     0,     0,     0,     0,   236,     0,   240,     0,
     241,   237,     0,     0,     0,   238,   242,     0,   243,     0,
       0,     0,     0,     0,   239,     0,   244,   245,     0,     0,
       0,     0,     0,     0,   246,     0,     0,     0,     0,     0,
       0,   247,     0,   240,     0,   241,   248,   249,   250,   251,
     252,   242,     0,   243,   253,     0,     0,    74,   255,   256,
     202,   244,   245,     0,     0,     0,     0,     0,     0,   246,
       0,     0,     0,     0,     0,     0,   247,     0,     0,     0,
       0,   248,   249,   250,   251,   252,    67,     0,     0,   253,
       0,     0,     0,   255,   256,   202,     0,   312,     0,     0,
       0,     0,     0,    36,     0,   108,     0,   109,     0,     0,
     110,    37,     0,     0,     0,   111,     0,    38,     0,    39,
       0,   112,     0,     0,     0,     0,    67,   113,    40,   114,
       0,     0,     0,    41,    42,    43,    44,    74,    45,   115,
      46,    47,     0,    36,     0,   108,     0,   109,    48,    49,
     110,    37,   228,    50,     0,   111,     0,    38,     0,    39,
       0,   112,     0,     0,     0,     0,     0,   113,    40,   114,
       0,     0,     0,    41,    42,    43,    44,     0,    45,   115,
      46,    47,     0,    36,     0,   108,     0,   109,    48,    49,
     110,     0,   228,    50,     0,   111,     0,     0,     0,    39,
       0,   112,     0,     0,     0,     0,     0,   113,     0,   114,
       0,     0,     0,    41,    42,    43,     0,     0,    45,   115,
      46,    47,     0,     0,     0,     0,     0,  -407,    48,    49,
    -407,   385,     0,    50,  -407,     0,     0,  -407,     0,     0,
       0,  -407,     0,   386,     0,     0,  -407,     0,   387,     0,
       0,     0,  -407,     0,  -407,    74,   234,   235,     0,  -407,
       0,  -407,     0,   388,     0,   236,  -407,     0,     0,     0,
     237,     0,     0,     0,   238,     0,     0,     0,     0,     0,
       0,    74,   234,   235,     0,     0,     0,     0,     0,     0,
       0,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,     0,   109,     0,     0,   110,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,   112,
       0,     0,  -407,     0,     0,   113,     0,   114,   246,   108,
       0,   109,     0,     0,   110,     0,     0,   115,     0,   111,
     248,     0,     0,   251,     0,   112,     0,     0,     0,   254,
       0,   113,     0,   114,   246,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,   248,     0,     0,   251,
       0,     0,     0,     0,     0,   254
};

static const yytype_int16 yycheck[] =
{
      11,   134,   171,    64,   202,   223,   202,   176,   381,   399,
      21,   243,    86,   371,   133,    17,   357,   561,   187,    17,
     385,   176,    83,   122,   381,   223,   468,   646,    13,     3,
     472,    13,   187,   662,    13,    31,   246,   156,    99,   603,
       3,    54,   399,    31,    87,   243,    59,    32,   237,   238,
      45,     3,    14,    64,     3,     3,    20,     3,    44,    64,
       0,   202,   181,   182,   386,    25,     7,    13,   129,    31,
     699,    20,    83,    77,   135,    86,   231,    13,   400,    25,
      25,     3,   223,    88,    30,    45,    31,   130,    99,    25,
     447,    31,    44,   106,   105,    44,    37,   195,   253,    45,
       3,   175,   243,   667,    26,   470,   204,   102,   737,    45,
     106,   321,    86,    76,   102,   456,   642,   102,   129,   105,
     102,   195,   133,   102,   135,   744,   224,   359,    76,   190,
     204,   320,    31,   322,   323,    13,   325,   102,   102,     8,
      88,   106,   106,    91,    58,   156,    15,    25,   317,     3,
     224,   695,    30,   734,     0,    54,   230,    14,    27,    73,
      59,   359,   317,    20,   175,     3,   177,    45,     3,   171,
     181,   182,    26,   171,    31,   642,   757,    15,   176,   190,
      15,   192,   708,   381,   195,   246,   642,    13,    92,   187,
      54,   202,   390,   204,   390,    59,   441,   442,   102,    25,
      33,   399,   202,   568,    14,   451,   452,    40,    32,    42,
      20,    35,   223,   224,    38,    39,   742,   582,   359,   230,
      25,    31,    71,     3,   750,   423,    31,   423,   383,    25,
     756,     3,   243,   598,    30,   246,   762,   763,     3,    25,
      25,   708,    25,   243,   377,    30,   102,    30,    72,   390,
     106,   693,   708,   422,   387,   645,   629,    18,   399,    29,
     202,    22,    32,   418,   453,   454,   455,     3,   401,   708,
       3,   202,   629,   372,   373,   742,    18,   448,   449,   450,
      22,     3,   423,   750,   642,    31,   742,    18,   102,   756,
       3,    22,   106,    17,   750,   762,   763,    21,    32,    70,
     756,   243,    31,   742,   467,   670,   762,   763,   471,     3,
      31,   750,   243,   540,   541,   542,   543,   756,    29,   317,
      31,   102,   712,   762,   763,     3,    64,     3,   447,    51,
      13,    53,   202,    32,    56,    25,    25,    13,     3,    61,
      38,   530,    18,    78,   734,    67,    22,    64,   359,    25,
     708,    73,    64,    75,    30,   712,    38,     3,   419,   359,
      20,     3,   594,    85,    45,    20,    20,   757,     9,    45,
     381,    12,   102,   243,    14,    16,    98,   102,    19,   390,
      38,    31,    23,    13,   742,    20,     3,    28,   399,    46,
     390,   609,   750,    34,    45,    36,   594,    20,   756,   399,
      41,    78,    43,    14,   762,   763,   575,    48,   419,   641,
     106,    10,   423,    20,   102,   202,   571,   359,    46,    14,
      46,   576,     3,   423,    13,    31,    13,   106,   359,    31,
       3,   629,    45,   494,    31,    13,   447,    13,    13,    13,
      93,    20,    11,   641,   642,   614,    47,   645,   390,   523,
      10,   103,   585,   594,   686,    13,   243,   399,    14,   390,
      31,    31,    29,   104,   100,    45,    31,     3,   399,    31,
      55,   102,    31,    45,    14,    36,    14,   102,    13,    13,
      13,   423,   651,   494,     9,     3,    14,    12,   686,   359,
      14,    16,   423,    13,    19,    14,   202,   729,    23,    31,
     641,   642,    66,    28,   645,    13,     3,    20,   102,    34,
     708,    36,   523,   668,   712,    66,    41,    29,    43,    14,
     390,    31,   754,    48,    13,     3,    14,    14,    29,   399,
      46,   729,     3,     4,     5,     3,   734,   243,   106,   737,
      31,   737,    13,    46,   742,   686,    45,    18,   703,    14,
     102,    22,   750,   423,    14,    31,   754,     3,   756,   757,
      14,    14,    20,    20,   762,   763,    14,   708,    20,   630,
     202,   712,   359,    14,    14,    14,    13,     3,     3,   104,
      46,    14,    14,   594,     3,    14,    31,   648,   729,    20,
      24,   106,    13,   734,   594,    13,   737,    13,   103,    29,
      14,   742,    29,   390,    14,    76,    62,    31,    20,   750,
     141,   243,   399,   754,    29,   756,   757,    88,   629,   630,
      91,   762,   763,    31,    49,    29,    31,    14,    14,    14,
     641,   642,    31,    14,   645,   156,   423,   648,   215,    62,
      65,   641,   642,   353,   588,   645,   195,    83,   178,   176,
     216,   358,   594,   359,    79,    80,    81,   614,   651,    84,
     418,    86,    87,   594,   648,   726,   420,   230,   423,    94,
      95,   224,   619,   167,    99,   686,   390,   175,   737,   608,
     623,   720,   702,   735,   390,   712,   686,   757,   242,   703,
     490,   490,   578,   399,   579,   629,   564,   708,   373,   641,
     642,   712,   439,   645,   436,    -1,   223,    -1,   708,   437,
     641,   642,   712,   440,   645,   726,    -1,   423,   729,   438,
      -1,    -1,    -1,   734,   594,    -1,   737,   359,    -1,   729,
      -1,   742,    -1,    -1,   734,    -1,    -1,   737,    -1,   750,
      -1,    -1,   742,   754,   686,   756,   757,    -1,    -1,    -1,
     750,   762,   763,    -1,   754,   686,   756,   757,   390,    -1,
      -1,    -1,   762,   763,    -1,    -1,   708,   399,    -1,    -1,
     712,   641,   642,    -1,    -1,   645,    -1,   708,    -1,    -1,
     186,   712,    -1,    -1,    -1,    -1,    -1,   729,    -1,    -1,
      -1,   423,   734,    -1,    -1,   737,    -1,    -1,   729,    -1,
     742,    -1,    -1,   734,    -1,    -1,   737,   594,   750,    -1,
      -1,   742,   754,    -1,   756,   757,   686,    -1,    -1,   750,
     762,   763,    -1,   754,    -1,   756,   757,    -1,    -1,    -1,
     236,   762,   763,    -1,   240,    -1,    -1,    -1,   708,    -1,
      -1,    -1,   712,    -1,    -1,    -1,   252,    -1,    -1,    -1,
     256,    -1,    -1,    -1,   641,   642,    -1,    -1,   645,   729,
       3,     4,     5,     6,   734,    -1,    -1,   737,    -1,    -1,
      13,    -1,   742,    -1,    17,    18,    -1,    -1,    21,    22,
     750,    -1,    -1,    -1,   754,    -1,   756,   757,   594,    -1,
      -1,    -1,   762,   763,    -1,     9,    -1,    -1,    12,   686,
      -1,    -1,    16,    -1,    -1,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    28,   321,    -1,    -1,    -1,    -1,
      34,   708,    36,    -1,    -1,   712,    -1,    41,    -1,    43,
      -1,    -1,    -1,    76,    48,   641,   642,    -1,    -1,   645,
      -1,    -1,   729,    -1,    -1,    88,    89,   734,    91,    -1,
     737,    -1,    -1,    -1,    -1,   742,    -1,    -1,    -1,    -1,
      -1,    -1,   594,   750,   107,    -1,    -1,   754,    -1,   756,
     757,    -1,   378,   379,    -1,   762,   763,    51,    -1,    53,
     686,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,     3,
     104,   397,   398,    67,    -1,    -1,   402,    -1,    -1,    73,
      -1,    75,   708,    -1,    -1,    -1,   712,    -1,    -1,   641,
     642,    85,    -1,   645,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   428,   729,    -1,    -1,    -1,   433,   734,   435,
      -1,   737,    -1,    -1,    -1,    -1,   742,    51,    -1,    53,
      -1,    -1,    56,    -1,   750,    -1,    -1,    61,   754,    -1,
     756,   757,    -1,    67,   686,   461,   762,   763,    -1,    73,
     466,    75,    51,    -1,    53,    -1,    -1,    56,    -1,    -1,
      -1,    85,    61,    -1,    -1,    -1,   708,    -1,    67,    -1,
     712,    -1,    -1,    97,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,   499,    -1,    -1,    85,   729,   504,    -1,
      -1,    -1,   734,    -1,    -1,   737,    -1,    -1,    -1,    -1,
     742,   517,    -1,     3,     4,     5,    -1,    -1,   750,    -1,
      -1,    -1,   754,    13,   756,   757,    -1,    -1,    18,    -1,
     762,   763,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   559,    -1,   561,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    -1,    56,    -1,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      -1,    -1,    -1,    73,    -1,    75,    76,    -1,    -1,   595,
      -1,    -1,    -1,    83,    -1,    85,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,   102,    -1,    -1,   621,   106,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    57,    18,    -1,    -1,    -1,
      22,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    87,    -1,    -1,    50,    51,
      52,    53,    94,    95,    56,    -1,    58,    99,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,   695,
      -1,    73,    -1,    75,    76,    -1,    -1,   703,    -1,    -1,
      -1,    83,    -1,    85,   710,   711,    88,    89,    90,    91,
      92,     3,     4,     5,    96,    97,    -1,    -1,   100,   101,
     102,    13,    -1,    -1,   106,    -1,    18,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,   743,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    -1,    56,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    73,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,     3,     4,     5,    96,    97,    -1,    -1,   100,   101,
     102,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    50,    -1,
      52,    18,    -1,    -1,    -1,    22,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    50,    -1,    52,    88,    89,    90,    91,
      92,    58,    -1,    60,    96,    -1,    -1,     3,   100,   101,
     102,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    32,    -1,    -1,    96,
      -1,    -1,    -1,   100,   101,   102,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    -1,    53,    -1,    -1,
      56,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    -1,    -1,    -1,    32,    73,    74,    75,
      -1,    -1,    -1,    79,    80,    81,    82,     3,    84,    85,
      86,    87,    -1,    49,    -1,    51,    -1,    53,    94,    95,
      56,    57,    98,    99,    -1,    61,    -1,    63,    -1,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    85,
      86,    87,    -1,    49,    -1,    51,    -1,    53,    94,    95,
      56,    -1,    98,    99,    -1,    61,    -1,    -1,    -1,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    -1,    -1,    84,    85,
      86,    87,    -1,    -1,    -1,    -1,    -1,     9,    94,    95,
      12,    13,    -1,    99,    16,    -1,    -1,    19,    -1,    -1,
      -1,    23,    -1,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    36,     3,     4,     5,    -1,    41,
      -1,    43,    -1,    45,    -1,    13,    48,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,   104,    -1,    -1,    73,    -1,    75,    76,    51,
      -1,    53,    -1,    -1,    56,    -1,    -1,    85,    -1,    61,
      88,    -1,    -1,    91,    -1,    67,    -1,    -1,    -1,    97,
      -1,    73,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    97
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    77,   109,   134,   135,   136,   137,     3,     0,   138,
     112,    71,   139,   140,   141,   142,   143,   144,    25,    31,
       3,    86,   133,    31,   110,   145,   147,   148,   202,   212,
     223,   224,     3,   133,    25,    31,    49,    57,    63,    65,
      74,    79,    80,    81,    82,    84,    86,    87,    94,    95,
      99,   111,    25,     3,    15,   149,     3,     3,     3,     3,
      15,    31,     3,   183,    70,   153,   159,    32,   151,   155,
     151,    31,    31,   150,     3,   119,   133,   160,   102,   203,
       3,   122,   156,    64,   225,   227,    13,   213,   151,    32,
     126,   174,    25,   161,    25,     3,   206,   207,   209,    64,
     123,   124,   157,    38,   160,    78,   226,   228,    51,    53,
      56,    61,    67,    73,    75,    85,   113,   114,   115,   116,
     117,   118,   119,   120,   214,   215,   217,   218,   153,    64,
     152,   158,   127,   128,     3,    20,    45,    20,   204,   208,
     119,    20,   133,   102,   229,     3,    26,    45,   121,    14,
     216,   102,   219,   119,   153,    38,    20,    44,   118,   129,
     130,   174,   119,    13,    31,   205,   211,    20,   367,   122,
     146,   230,     3,    46,    45,    20,   220,    78,   154,   162,
     129,    64,    88,   131,   132,   200,   201,   164,   106,   209,
      10,   125,    20,    31,   106,   110,   147,   223,   231,   232,
      46,   217,   102,   106,   110,   147,   165,   166,   175,   194,
     195,   221,   222,   223,   237,   133,   102,   163,   118,   118,
      14,   329,   336,   337,   110,   165,   119,   133,    98,   113,
     155,   177,   179,     3,     4,     5,    13,    18,    22,    31,
      50,    52,    58,    60,    68,    69,    76,    83,    88,    89,
      90,    91,    92,    96,    97,   100,   101,   113,   133,   147,
     199,   224,   237,   238,   240,   241,   242,   243,   244,   245,
     247,   248,   249,   251,   252,   253,   255,   256,   262,   263,
     273,   274,   276,   277,   279,   282,   291,   293,   295,   296,
     297,   298,   299,   300,   309,   319,   320,   321,   322,   323,
     324,   325,   328,   331,   332,   339,   341,   360,   361,   363,
     364,   365,     3,   177,   196,   197,   146,   164,    46,   330,
       6,    13,    17,    21,    89,   107,   133,   322,   328,   338,
     339,   343,   344,   345,   346,   347,   348,   349,   350,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   368,   197,   179,    31,   193,   237,   180,   181,    29,
     336,   133,   324,   325,   359,   359,   336,     3,   294,   294,
       3,   245,   114,   119,   284,   336,    25,    30,    13,    13,
     336,    13,   237,   311,   336,    13,    25,    30,    45,   106,
     239,    31,     3,   167,   169,   171,    31,    13,    13,    13,
      25,    30,    45,     9,    12,    16,    19,    23,    28,    34,
      36,    41,    43,    48,   104,   342,    18,    22,   176,    93,
     178,   189,    13,   102,   198,   106,   163,   210,    20,   359,
     114,   359,   359,    13,   359,    44,   105,    11,   103,    47,
      10,     7,    37,    32,    35,    38,    39,    72,    33,    40,
      42,    17,    21,     8,    15,    27,   180,   178,   183,   245,
      14,    29,    31,    31,    31,   274,    45,   121,   333,   335,
      13,   121,   333,    31,     3,   174,   336,   336,    31,   133,
     243,   313,   315,   316,   319,   324,    55,   301,   302,   304,
     237,    31,   200,     3,    76,    88,    91,   323,   174,   326,
     240,   121,   172,   168,    36,   170,   336,   336,   243,   252,
     283,   287,   289,     3,   323,   174,   336,   340,   193,   119,
     190,   192,   198,   110,   184,   185,   187,   188,   199,   336,
      14,   336,   336,   345,   346,   347,   348,   349,   350,   350,
     351,   353,   352,   354,   118,   243,   317,   318,   357,   357,
     357,   358,   358,   359,   359,   359,   178,    13,   336,    13,
     336,   102,   233,   172,   334,   200,   233,   172,    13,     3,
      14,    14,    31,   312,   314,    13,    66,   308,   303,   301,
     302,    14,    13,   119,    25,    30,     3,   336,    20,   173,
     233,   336,   254,   257,    14,    29,   290,    31,    13,     3,
      46,   336,   191,   113,    14,   186,   106,   359,    14,    29,
     356,   356,   356,   356,   182,    31,   336,    46,   173,   234,
     235,    45,   335,    14,   200,   102,   264,   237,    14,    31,
     110,   305,   237,   304,   308,   310,   200,     3,   174,   327,
     169,    14,    14,   245,   336,    20,   280,   200,    20,    26,
     171,    20,   264,   343,   184,    14,   236,   204,   210,    14,
      54,    59,   266,   268,   270,   315,   119,   306,    14,    14,
      13,     3,    46,   245,     3,   246,   247,   250,   255,   259,
     274,   275,   278,   282,   286,   292,    14,   252,   284,    14,
     192,     3,   187,    14,    31,    20,   106,   272,   343,   267,
     269,   270,   265,    24,   307,   171,   237,   200,    29,   258,
      13,    13,    13,   245,   281,   172,   173,   271,   106,   270,
      29,    31,   268,   237,   298,   336,   103,    14,   246,    62,
     336,   336,   243,   283,    31,    20,    29,   267,    31,   119,
     245,   260,    14,    29,    31,   285,   288,   289,   272,   238,
      14,   246,   336,   284,    14,   246,    14,    31,   245,   261,
     246,   285,    62,    14,   246,   246
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   108,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   116,   116,   117,
     117,   118,   118,   119,   119,   119,   120,   121,   121,   122,
     123,   123,   124,   125,   126,   127,   127,   128,   128,   129,
     129,   130,   131,   131,   132,   132,   133,   133,   134,   135,
     136,   136,   137,   138,   138,   139,   139,   139,   139,   140,
     141,   142,   143,   144,   144,   145,   145,   145,   146,   146,
     147,   147,   147,   149,   150,   148,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   156,   157,   157,   158,   159,
     160,   161,   161,   162,   163,   164,   164,   165,   165,   165,
     166,   166,   166,   167,   168,   168,   169,   170,   170,   171,
     172,   172,   173,   173,   174,   174,   176,   175,   177,   177,
     178,   178,   179,   179,   181,   182,   180,   183,   184,   184,
     185,   186,   186,   187,   187,   188,   189,   190,   191,   191,
     192,   193,   193,   194,   195,   196,   197,   198,   199,   199,
     201,   200,   200,   202,   203,   204,   204,   205,   205,   206,
     206,   207,   208,   208,   209,   210,   210,   211,   212,   213,
     214,   214,   215,   216,   216,   217,   217,   218,   219,   220,
     220,   221,   221,   222,   223,   224,   225,   225,   226,   226,
     227,   228,   229,   230,   230,   231,   231,   231,   231,   232,
     233,   234,   234,   235,   236,   236,   237,   238,   239,   239,
     240,   240,   240,   241,   241,   242,   243,   244,   244,   245,
     245,   245,   245,   245,   245,   246,   246,   246,   246,   246,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   248,   249,   250,   251,   252,   252,   252,
     252,   252,   252,   252,   254,   253,   255,   257,   258,   256,
     260,   261,   259,   262,   262,   263,   264,   264,   265,   265,
     266,   266,   267,   267,   268,   268,   268,   269,   270,   270,
     271,   271,   272,   273,   274,   275,   276,   277,   277,   278,
     278,   280,   281,   279,   282,   283,   283,   284,   284,   285,
     285,   286,   287,   287,   288,   289,   290,   290,   291,   292,
     293,   294,   294,   295,   296,   297,   298,   299,   300,   300,
     300,   301,   301,   302,   303,   303,   304,   305,   306,   307,
     307,   308,   309,   310,   310,   311,   312,   312,   313,   314,
     314,   315,   315,   316,   316,   317,   318,   319,   319,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   321,   321,
     322,   322,   322,   323,   324,   324,   324,   326,   327,   325,
     325,   328,   328,   328,   328,   328,   329,   330,   330,   331,
     331,   331,   331,   332,   332,   332,   332,   333,   334,   334,
     335,   337,   336,   338,   338,   340,   339,   341,   341,   341,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   343,   343,   344,   344,   345,   345,   346,   346,
     347,   347,   348,   348,   349,   349,   349,   350,   351,   350,
     352,   350,   353,   350,   354,   350,   350,   355,   355,   356,
     356,   356,   356,   357,   357,   357,   358,   358,   358,   358,
     359,   359,   359,   359,   359,   360,   361,   362,   362,   362,
     362,   362,   363,   363,   363,   363,   364,   365,   366,   367,
     367,   368
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     1,     2,     2,     3,     2,
       1,     0,     3,     2,     3,     2,     0,     3,     0,     1,
       1,     2,     1,     0,     2,     2,     1,     3,     1,     3,
       1,     0,     4,     2,     0,     1,     1,     1,     1,     3,
       5,     6,     6,     2,     0,     1,     1,     1,     3,     0,
       1,     1,     1,     0,     0,    10,     1,     0,     1,     0,
       1,     0,     1,     0,     3,     2,     3,     0,     2,     2,
       2,     3,     0,     3,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     2,     3,     0,     2,     2,     0,     2,
       1,     0,     1,     1,     1,     0,     0,     4,     3,     4,
       1,     0,     1,     1,     0,     0,     7,     1,     1,     0,
       2,     3,     0,     3,     1,     4,     2,     2,     3,     0,
       1,     1,     1,     1,     4,     4,     1,     3,     1,     0,
       0,     2,     0,     5,     5,     1,     0,     1,     0,     1,
       0,     2,     3,     0,     7,     1,     0,     2,     7,     3,
       1,     0,     2,     3,     0,     2,     1,     3,     3,     2,
       0,     1,     1,     3,     1,     7,     1,     0,     1,     0,
       2,     3,     3,     2,     0,     1,     1,     1,     1,     3,
       4,     1,     0,     2,     3,     0,     3,     2,     2,     0,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     1,     0,     0,     9,
       0,     0,     9,     3,     5,     5,     4,     4,     2,     0,
       2,     0,     3,     0,     4,     3,     3,     4,     3,     1,
       3,     0,     1,     5,     1,     5,     7,     1,     1,     1,
       1,     0,     0,    11,     1,     1,     0,     1,     0,     1,
       0,     9,     1,     1,     1,     2,     3,     0,     7,     7,
       3,     1,     0,     3,     3,     3,     3,     5,     3,     4,
       1,     1,     0,     2,     2,     0,     5,     3,     2,     3,
       0,     2,     5,     1,     0,     4,     1,     0,     2,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     6,     3,     3,     5,     0,     0,     6,
       4,     4,     6,     6,     6,     8,     2,     3,     0,     4,
       4,     4,     6,     4,     4,     4,     4,     2,     2,     0,
       3,     0,     2,     1,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     0,     4,
       0,     4,     0,     4,     0,     4,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     2,
       0,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* modifier: "public"  */
#line 433 "grammer.y"
                                {modifier = "public";}
#line 2394 "grammer.tab.c"
    break;

  case 6: /* modifier: "protected"  */
#line 434 "grammer.y"
                        {modifier = "protected";}
#line 2400 "grammer.tab.c"
    break;

  case 7: /* modifier: "private"  */
#line 435 "grammer.y"
                                {modifier = "private";}
#line 2406 "grammer.tab.c"
    break;

  case 24: /* integral_type: "byte"  */
#line 463 "grammer.y"
                                { curr_type = "Numeric";}
#line 2412 "grammer.tab.c"
    break;

  case 25: /* integral_type: "short"  */
#line 464 "grammer.y"
                                { curr_type = "Numeric";}
#line 2418 "grammer.tab.c"
    break;

  case 26: /* integral_type: "int"  */
#line 465 "grammer.y"
                                { curr_type = "Numeric";}
#line 2424 "grammer.tab.c"
    break;

  case 27: /* integral_type: "long"  */
#line 466 "grammer.y"
                                { curr_type = "Numeric";}
#line 2430 "grammer.tab.c"
    break;

  case 28: /* integral_type: "char"  */
#line 467 "grammer.y"
                                { curr_type = "Numeric";}
#line 2436 "grammer.tab.c"
    break;

  case 29: /* floating_point_type: "float"  */
#line 470 "grammer.y"
                                {curr_type = "Numeric";}
#line 2442 "grammer.tab.c"
    break;

  case 30: /* floating_point_type: "double"  */
#line 471 "grammer.y"
                                {curr_type = "Numeric";}
#line 2448 "grammer.tab.c"
    break;

  case 56: /* un_name: TOK_IDENTIFIER  */
#line 531 "grammer.y"
                                        { curr_type = string((yyvsp[0].s));
                        string iden_type = probe_type(curr_type);

                        if(iden_type == ""){
                          // cout<<"Error at line no "<<yylineno<<": Undefined reference "<<$1<<"\n";
                        }
                        //cout<<string($1)<<" "<<lhs_type<<" "<<rhs_type<<" "<<halt_type_check<<"\n";
                        if(halt_type_check == 0){
                          if(lhs_record == 1){
                            lhs_type = iden_type;
                            //cout<<lhs_type<<" -- "<<$$<<"\n";
                          }
                          if(rhs_record == 1){
                            rhs_type = iden_type;
                          }
                        }else{
                          lhs_type = "";
                          rhs_type = "";
                        }
                        //cout<<string($1)<<" "<<lhs_type<<" "<<rhs_type<<" "<<halt_type_check<<"\n";
                        pre_var = string((yyvsp[0].s));
                      }
#line 2475 "grammer.tab.c"
    break;

  case 57: /* un_name: un_name "." TOK_IDENTIFIER  */
#line 553 "grammer.y"
                                                {curr_type = curr_type + '.' + string((yyvsp[0].s));}
#line 2481 "grammer.tab.c"
    break;

  case 80: /* class_declaration: normal_class_declaration  */
#line 609 "grammer.y"
                                                {cum_table.push_back(block_table[current_stack]);
                                block_table[current_stack].clear();
                                current_stack--;
                                // cout<<parent_class<<"1\n";
                                int i = parent_class.size() - 1;
                                while(i>=0 && parent_class[i]!='.') i--;
                                if(i != -1) parent_class = parent_class.substr(0,i);
                                else parent_class = "";
                                // cout<<i<<" "<<parent_class<<"2\n";
                                }
#line 2496 "grammer.tab.c"
    break;

  case 83: /* $@1: %empty  */
#line 624 "grammer.y"
                              {curr_type = "class";class_dec_flag = 1;}
#line 2502 "grammer.tab.c"
    break;

  case 84: /* $@2: %empty  */
#line 624 "grammer.y"
                                                                                            {current_stack++;}
#line 2508 "grammer.tab.c"
    break;

  case 119: /* variable_declarator_id: TOK_IDENTIFIER dims.opt  */
#line 700 "grammer.y"
                                                {block_table[current_stack][(yyvsp[-1].s)] = curr_type;
                                filler = new var_info;
                                filler->name = string((yyvsp[-1].s));
                                filler->type = curr_type;
                                
                              }
#line 2519 "grammer.tab.c"
    break;

  case 126: /* $@3: %empty  */
#line 720 "grammer.y"
                                  {cout<<"beginfunc\n";}
#line 2525 "grammer.tab.c"
    break;

  case 127: /* method_declaration: modifier.multiopt method_header $@3 method_body  */
#line 720 "grammer.y"
                                                                        {
                                                                    cout<<"endfunc\n";

                                                                    cum_table.push_back(block_table[current_stack]);
                                                                    block_table[current_stack].clear();
                                                                    current_stack--;
                                                                  }
#line 2537 "grammer.tab.c"
    break;

  case 133: /* result: "void"  */
#line 738 "grammer.y"
                                {curr_type = "void";}
#line 2543 "grammer.tab.c"
    break;

  case 134: /* $@4: %empty  */
#line 741 "grammer.y"
  {method_dec_flag = 1;}
#line 2549 "grammer.tab.c"
    break;

  case 135: /* $@5: %empty  */
#line 741 "grammer.y"
                                                   {method_dec_flag = 0; current_stack++;halt_type_check = 1;}
#line 2555 "grammer.tab.c"
    break;

  case 136: /* method_declarator: $@4 hold_TOK_IDENTIFIER "(" $@5 formal_parameter_list.opt ")" dims.opt  */
#line 741 "grammer.y"
                                                                                                                                                         {halt_type_check = 0;}
#line 2561 "grammer.tab.c"
    break;

  case 137: /* hold_TOK_IDENTIFIER: TOK_IDENTIFIER  */
#line 744 "grammer.y"
                  { if(class_dec_flag){
                      string hold = string((yyvsp[0].s));
                      if(parent_class!=""){
                        hold = parent_class + '.' + hold;
                      }
                      parent_class = hold;

                      // can improve by making an array of class modifiers
                      if(modifier == "public" && current_stack>0){
                        block_table[current_stack-1][hold] = curr_type;
                      }
                      else{
                        block_table[current_stack][hold] = curr_type;
                      }
                      class_dec_flag = 0;
                    }
                    else if(method_dec_flag){
                      curr_type = parent_class + '.' + string((yyvsp[0].s));
                      if(modifier == "public" && current_stack>0){
                        block_table[current_stack-1][curr_type] = "method";
                      }
                      else{
                        block_table[current_stack][curr_type] = "method";
                      }
                    }
                    else
                    block_table[current_stack][(yyvsp[0].s)] = curr_type;}
#line 2593 "grammer.tab.c"
    break;

  case 160: /* $@6: %empty  */
#line 827 "grammer.y"
  {halt_type_check = 1;}
#line 2599 "grammer.tab.c"
    break;

  case 161: /* argument_list.opt: $@6 argument_list  */
#line 827 "grammer.y"
                                                        {halt_type_check = 0; }
#line 2605 "grammer.tab.c"
    break;

  case 233: /* statement: while_statement  */
#line 1002 "grammer.y"
                                        {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2611 "grammer.tab.c"
    break;

  case 234: /* statement: for_statement  */
#line 1003 "grammer.y"
                                {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2617 "grammer.tab.c"
    break;

  case 256: /* expression_statement: statement_expression ";"  */
#line 1037 "grammer.y"
                                                {
                                  if(halt_type_check == 0){
                                    if(lhs_type!=rhs_type){
                                      // cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be assigned "<<rhs_type<<" type\n";
                                    }
                                    else{
                                      //cout<<"Correct :"<<yylineno<<" "<<lhs_type<<" "<<rhs_type<<"\n";
                                    }
                                  }
                                  lhs_record = 1;
                                  rhs_record = 1;
                                  }
#line 2634 "grammer.tab.c"
    break;

  case 264: /* $@7: %empty  */
#line 1060 "grammer.y"
                                { record_cond = 0;
                                  cout<<"if( t"<<temp_count - 1<<" == false ) ";
                                  if_states.push(curr_state);
                                  cout<<"Goto State_"<<curr_state<<"\n";
                                  curr_state++;
                                }
#line 2645 "grammer.tab.c"
    break;

  case 265: /* if_then_statement: hold_TOK_if "(" expression $@7 ")" statement  */
#line 1065 "grammer.y"
                                                                { cout<<"State_"<<if_states.top()<<" :\n";
                                                        if_states.pop();
                                                        cum_table.push_back(block_table[current_stack]);
                                                        block_table[current_stack].clear();current_stack--;
                                                      }
#line 2655 "grammer.tab.c"
    break;

  case 266: /* hold_TOK_if: "if"  */
#line 1072 "grammer.y"
              {current_stack++;record_cond = 1;}
#line 2661 "grammer.tab.c"
    break;

  case 267: /* $@8: %empty  */
#line 1075 "grammer.y"
                                { record_cond = 0;
                                  cout<<"if( t"<<temp_count - 1<<" == false ) ";
                                  if_states.push(curr_state);
                                  cout<<"Goto State_"<<curr_state<<"\n";
                                  curr_state++;
                                }
#line 2672 "grammer.tab.c"
    break;

  case 268: /* $@9: %empty  */
#line 1080 "grammer.y"
                                                               {cum_table.push_back(block_table[current_stack]);
                                                                block_table[current_stack].clear();
                                                                current_stack--;
                                                                current_stack++;
                                                                cout<<"Goto State_"<<curr_state<<"\n";
                                                                cout<<"State_"<<if_states.top()<<" :\n";
                                                                if_states.push(curr_state);
                                                                curr_state++;
                                                                if_states.pop();
                                                              }
#line 2687 "grammer.tab.c"
    break;

  case 269: /* if_then_else_statement: hold_TOK_if "(" expression $@8 ")" statement_no_short_if $@9 "else" statement  */
#line 1089 "grammer.y"
                                                                                        { cout<<"State_"<<if_states.top()<<" :\n";
                                                                                      if_states.pop();
                                                                                      cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2695 "grammer.tab.c"
    break;

  case 270: /* $@10: %empty  */
#line 1094 "grammer.y"
                                { record_cond = 0;
                                  cout<<"if( t"<<temp_count - 1<<" == false ) ";
                                  if_states.push(curr_state);
                                  cout<<"Goto State_"<<curr_state<<"\n";
                                  curr_state++;
                                }
#line 2706 "grammer.tab.c"
    break;

  case 271: /* $@11: %empty  */
#line 1099 "grammer.y"
                                                               {cum_table.push_back(block_table[current_stack]);
                                                                block_table[current_stack].clear();
                                                                current_stack--;
                                                                current_stack++;
                                                                cout<<"Goto State_"<<curr_state<<"\n";
                                                                cout<<"State_"<<if_states.top()<<" :\n";
                                                                if_states.push(curr_state);
                                                                curr_state++;
                                                                if_states.pop();
                                                              }
#line 2721 "grammer.tab.c"
    break;

  case 272: /* if_then_else_statement_no_short_if: hold_TOK_if "(" expression $@10 ")" statement_no_short_if $@11 "else" statement_no_short_if  */
#line 1108 "grammer.y"
                                                                                                { cout<<"Goto State_"<<curr_state<<"\n";
                                                                                                  cout<<"State_"<<if_states.top()<<" :\n";
                                                                                                  if_states.push(curr_state);
                                                                                                  curr_state++;
                                                                                                  if_states.pop();
                                                                                                  cum_table.push_back(block_table[current_stack]);
                                                                                                  block_table[current_stack].clear();
                                                                                                  current_stack--;
                                                                                                }
#line 2735 "grammer.tab.c"
    break;

  case 294: /* hold_TOK_while: "while"  */
#line 1164 "grammer.y"
                   {current_stack++;}
#line 2741 "grammer.tab.c"
    break;

  case 301: /* $@12: %empty  */
#line 1180 "grammer.y"
                                          { record_cond = 1;}
#line 2747 "grammer.tab.c"
    break;

  case 302: /* $@13: %empty  */
#line 1180 "grammer.y"
                                                                             {
                                                                              cout<<"State_"<<curr_state<<" :\n";
                                                                              record_cond = 0;
                                                                              begin_states.push(curr_state);
                                                                              curr_state++;
                                                                              end_states.push(curr_state);
                                                                              curr_state++;
                                                                              cout<<"if( t"<<temp_count - 1 <<" == false) Goto State_"<<curr_state-1<<"\n";
                                                                            }
#line 2761 "grammer.tab.c"
    break;

  case 303: /* basic_for_statement: hold_TOK_for "(" for_init.opt ";" $@12 expression.opt $@13 ";" for_update.opt ")" statement  */
#line 1188 "grammer.y"
                                                                                                                                        { 
                                                                                                                            cout<<"Goto State_"<<begin_states.top()<<"\n";
                                                                                                                            cout<<"State_"<<end_states.top()<<" :\n";curr_state++;
                                                                                                                            begin_states.pop();
                                                                                                                            end_states.pop();
                                                                                                                          }
#line 2772 "grammer.tab.c"
    break;

  case 304: /* hold_TOK_for: "for"  */
#line 1196 "grammer.y"
              {current_stack++;}
#line 2778 "grammer.tab.c"
    break;

  case 362: /* primary_no_new_array: "(" expression ")"  */
#line 1332 "grammer.y"
                                                {subexpression_flag = 1;}
#line 2784 "grammer.tab.c"
    break;

  case 368: /* hold_Literal: TOK_NUMERICLITERAL  */
#line 1341 "grammer.y"
                        {if(halt_type_check == 0)rhs_type = "Numeric";
                          else rhs_type = "";
                          
                        }
#line 2793 "grammer.tab.c"
    break;

  case 369: /* hold_Literal: TOK_NONNUMERICLITERAL  */
#line 1345 "grammer.y"
                             {if(halt_type_check == 0)rhs_type = "String";
                              else rhs_type = "";
                              //cout<<rhs_type<<" "<<halt_type_check<<" ====\n";
                             
                            }
#line 2803 "grammer.tab.c"
    break;

  case 377: /* $@14: %empty  */
#line 1366 "grammer.y"
                 {  computation_level++; 
                    parsed_exp_low.push_back(-1);
                    parsed_exp_high.push_back(-1);
                    multiplicative_expression_var.push_back(-1);
                    active_3ac = 1;
                    }
#line 2814 "grammer.tab.c"
    break;

  case 378: /* $@15: %empty  */
#line 1371 "grammer.y"
                                 { computation_level--;
                                  parsed_exp_low.pop_back();
                                  parsed_exp_high.pop_back();
                                  multiplicative_expression_var.pop_back();
                                  parsed_exp_low[computation_level] = -1;
                                }
#line 2825 "grammer.tab.c"
    break;

  case 379: /* array_access: un_name "[" $@14 expression $@15 "]"  */
#line 1376 "grammer.y"
                                                { cout<<"t"<<temp_count<<" = "<<string((yyvsp[-5].s))<<"--\n";
                                          temp_count++;
                                          hold = "*(t" + to_string(temp_count-1) + " + t" + to_string(temp_count-2) + " )";
                                          cout<<"t"<<temp_count<<" = "<<hold<<"\n";
                                          hold = "t" + to_string(temp_count);
                                          temp_count++;
                                          (yyval.s) = (char*)(hold.c_str());
                                        }
#line 2838 "grammer.tab.c"
    break;

  case 401: /* $@16: %empty  */
#line 1423 "grammer.y"
  { computation_level++; 
    parsed_exp_low.push_back(-1);
    parsed_exp_high.push_back(-1);
    multiplicative_expression_var.push_back(-1);}
#line 2847 "grammer.tab.c"
    break;

  case 405: /* $@17: %empty  */
#line 1433 "grammer.y"
                                     { active_3ac = 1; }
#line 2853 "grammer.tab.c"
    break;

  case 406: /* assignment: left_hand_side assignment_operator $@17 expression  */
#line 1433 "grammer.y"
                                                                                        {
                                                                          active_3ac = 0;
                                                                          cout<<string((yyvsp[-3].s))<<" = t"<<parsed_exp_low[computation_level]<<"\n";
                                                                          computation_level--;
                                                                          parsed_exp_low.pop_back();
                                                                          parsed_exp_high.pop_back();
                                                                          multiplicative_expression_var.pop_back();
                                                                          parsed_exp_low[computation_level] = -1;
                                                                        }
#line 2867 "grammer.tab.c"
    break;

  case 407: /* left_hand_side: un_name  */
#line 1444 "grammer.y"
                {lhs_record = 0;}
#line 2873 "grammer.tab.c"
    break;

  case 438: /* $@18: %empty  */
#line 1493 "grammer.y"
                                {active_3ac = 1;}
#line 2879 "grammer.tab.c"
    break;

  case 439: /* relational_expression: relational_expression "<" $@18 shift_expression  */
#line 1493 "grammer.y"
                                                                                        {
                                                      //if(record_cond) cond_expr = string($1) + string($2) + string($3);
                                                      active_3ac = 0;
                                                      cout<<"t"<<temp_count<<" = ("<<string((yyvsp[-3].s))<<" < t"<<temp_count-1<<")\n";
                                                      temp_count++;
                                                    }
#line 2890 "grammer.tab.c"
    break;

  case 440: /* $@19: %empty  */
#line 1499 "grammer.y"
                               {active_3ac = 1;}
#line 2896 "grammer.tab.c"
    break;

  case 441: /* relational_expression: relational_expression ">" $@19 shift_expression  */
#line 1499 "grammer.y"
                                                                                        {
                                                      //if(record_cond) cond_expr = string($1) + string($2) + string($3);
                                                      active_3ac = 0;
                                                      cout<<"t"<<temp_count<<" = ("<<string((yyvsp[-3].s))<<" > t"<<temp_count-1<<")\n";
                                                      temp_count++;
                                                    }
#line 2907 "grammer.tab.c"
    break;

  case 442: /* $@20: %empty  */
#line 1505 "grammer.y"
                                 {active_3ac = 1;}
#line 2913 "grammer.tab.c"
    break;

  case 443: /* relational_expression: relational_expression "<=" $@20 shift_expression  */
#line 1505 "grammer.y"
                                                                                {
                                                      //if(record_cond) cond_expr = string($1) + string($2) + string($3);
                                                      active_3ac = 0;
                                                      cout<<"t"<<temp_count<<" = ("<<string((yyvsp[-3].s))<<" <= t"<<temp_count-1<<")\n";
                                                      temp_count++;
                                                    }
#line 2924 "grammer.tab.c"
    break;

  case 444: /* $@21: %empty  */
#line 1511 "grammer.y"
                                 {active_3ac = 1;}
#line 2930 "grammer.tab.c"
    break;

  case 445: /* relational_expression: relational_expression ">=" $@21 shift_expression  */
#line 1511 "grammer.y"
                                                                                {
                                                      //if(record_cond) cond_expr = string($1) + string($2) + string($3);
                                                      active_3ac = 0;
                                                      cout<<"t"<<temp_count<<" = ("<<string((yyvsp[-3].s))<<" >= t"<<temp_count-1<<")\n";
                                                      temp_count++;
                                                    }
#line 2941 "grammer.tab.c"
    break;

  case 453: /* additive_expression: multiplicative_expression  */
#line 1530 "grammer.y"
                                                                        { if(active_3ac){
                                                              parsed_exp_low[computation_level] = temp_count-1;
                                                              multiplicative_expression_var[computation_level] = -1;
                                                              parsed_exp_high[computation_level] = -1;
                                                            }
                                                          }
#line 2952 "grammer.tab.c"
    break;

  case 454: /* additive_expression: additive_expression "+" multiplicative_expression  */
#line 1536 "grammer.y"
                                                          { if(active_3ac){
                                                              cout<<"t"<<temp_count<<" = t"<<multiplicative_expression_var[computation_level]<<"\n";
                                                              cout<<"t"<<temp_count+1<<" = t"<<temp_count<<" + t"<<parsed_exp_low[computation_level]<<"\n";
                                                              temp_count+=2;
                                                              parsed_exp_low[computation_level] = temp_count-1;

                                                              multiplicative_expression_var[computation_level] = -1;
                                                              parsed_exp_high[computation_level] = -1;
                                                            }
                                                          }
#line 2967 "grammer.tab.c"
    break;

  case 455: /* additive_expression: additive_expression "-" multiplicative_expression  */
#line 1546 "grammer.y"
                                                                { if(active_3ac){
                                                              cout<<"t"<<temp_count<<" = t"<<multiplicative_expression_var[computation_level]<<"\n";
                                                              cout<<"t"<<temp_count+1<<" = t"<<parsed_exp_low[computation_level]<<" - t"<<temp_count<<"\n";
                                                              temp_count+=2;
                                                              parsed_exp_low[computation_level] = temp_count-1;

                                                              multiplicative_expression_var[computation_level] = -1;
                                                              parsed_exp_high[computation_level] = -1;
                                                            }
                                                          }
#line 2982 "grammer.tab.c"
    break;

  case 456: /* multiplicative_expression: unary_expression  */
#line 1558 "grammer.y"
                                                                          {
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
                                                                cout<<"t"<<temp_count<<" = "<<string((yyvsp[0].s))<<"\n";
                                                                multiplicative_expression_var[computation_level] = temp_count;
                                                                temp_count++;
                                                              }
                                                            }
                                                          }
#line 3004 "grammer.tab.c"
    break;

  case 457: /* multiplicative_expression: multiplicative_expression "*" unary_expression  */
#line 1575 "grammer.y"
                                                                          { if(active_3ac){
                                                              cout<<"t"<<temp_count<<" = "<<string((yyvsp[0].s))<<"\n";
                                                              if(parsed_exp_high[computation_level] == -1) parsed_exp_high[computation_level] = multiplicative_expression_var[computation_level];
                                                              cout<<"t"<<temp_count+1<<" = t"<<parsed_exp_high[computation_level]<<" * t"<<temp_count<<"\n";
                                                              temp_count+=2;
                                                              parsed_exp_high[computation_level] = temp_count-1;

                                                              // If controle transfers to additive expression then no worry because of this
                                                              multiplicative_expression_var[computation_level] = parsed_exp_high[computation_level];
                                                            }
                                                          }
#line 3020 "grammer.tab.c"
    break;

  case 458: /* multiplicative_expression: multiplicative_expression "/" unary_expression  */
#line 1586 "grammer.y"
                                                                          { if(active_3ac){
                                                              cout<<"t"<<temp_count<<" = "<<string((yyvsp[0].s))<<"\n";
                                                              if(parsed_exp_high[computation_level] == -1) parsed_exp_high[computation_level] = multiplicative_expression_var[computation_level];
                                                              cout<<"t"<<temp_count+1<<" = t"<<parsed_exp_high[computation_level]<<" / t"<<temp_count<<"\n";
                                                              temp_count+=2;
                                                              parsed_exp_high[computation_level] = temp_count-1;

                                                              // If controle transfers to additive expression then no worry because of this
                                                              multiplicative_expression_var[computation_level] = parsed_exp_high[computation_level];
                                                            }
                                                          }
#line 3036 "grammer.tab.c"
    break;

  case 459: /* multiplicative_expression: multiplicative_expression "%" unary_expression  */
#line 1597 "grammer.y"
                                                                          { if(active_3ac){
                                                              cout<<"t"<<temp_count<<" = t"<<string((yyvsp[0].s))<<"\n";
                                                              if(parsed_exp_high[computation_level] == -1) parsed_exp_high[computation_level] = multiplicative_expression_var[computation_level];
                                                              cout<<"t"<<temp_count+1<<" = t"<<parsed_exp_high[computation_level]<<" % t"<<temp_count<<"\n";
                                                              temp_count+=2;
                                                              parsed_exp_high[computation_level] = temp_count-1;
                                                              multiplicative_expression_var[computation_level] = parsed_exp_high[computation_level];
                                                            }
                                                          }
#line 3050 "grammer.tab.c"
    break;

  case 462: /* unary_expression: "+" unary_expression  */
#line 1610 "grammer.y"
                                                { /* merge and pass to $$ */ }
#line 3056 "grammer.tab.c"
    break;

  case 463: /* unary_expression: "-" unary_expression  */
#line 1611 "grammer.y"
                                                { /* merge and pass to $$ */ }
#line 3062 "grammer.tab.c"
    break;

  case 473: /* postfix_expression: un_name  */
#line 1627 "grammer.y"
                {rhs_record = 0;}
#line 3068 "grammer.tab.c"
    break;


#line 3072 "grammer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1648 "grammer.y"



/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

void print_stack(){
  for(int i = block_table.size() -1; i>=0; i--){
    for(auto itr = block_table[i].begin(); itr != block_table[i].end(); itr++){
      cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<"--------------------------------\n";
  }
  return;
}

string probe_type(string var){
  for(int i = block_table.size() -1; i>=0; i--){
    if(block_table[i][var]!=""){
      return block_table[i][var];
    }
  }
  // if(var!="String")
  // print_stack();
  // cout<<yylineno<<" "<<var<<"\n";
  return "";
}

void print_symbol_table(){
  freopen("symbole_table.txt", "w", stdout);
  cout<<"Symbol      Type\n";
  cum_table.push_back(block_table[0]);
  for(int i = 0; i < cum_table.size(); i++) {
    for(auto itr = cum_table[i].begin(); itr != cum_table[i].end(); itr++) {
      cout<< itr->first <<" "<<itr->second<<"\n";
    }
    cout<< "--------------------------------\n";
  }
  fclose(stdout);
  return;
}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
//   yydebug=1;
	yyparse();
	fclose(yyin);
  print_symbol_table();
	return 0;
}
