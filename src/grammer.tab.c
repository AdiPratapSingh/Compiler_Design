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
vector<map<string,string>> block_table(1000);
vector<map<string,string>> cum_table;
map<string,string> symbol_table;
int current_stack = 0;
string curr_type;
string modifier = "public";
string parent_class = "";
int class_dec_flag = 0;
int method_dec_flag = 0;

vector<string> mod_list;


void yyerror(char const *);
int createNode(string);
void addChild(int, int);


#line 105 "grammer.tab.c"

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
  YYSYMBOL_TOK_LITERAL = 4,                /* TOK_LITERAL  */
  YYSYMBOL_TOK_33 = 5,                     /* "!"  */
  YYSYMBOL_TOK_3361 = 6,                   /* "!="  */
  YYSYMBOL_TOK_37 = 7,                     /* "%"  */
  YYSYMBOL_TOK_3761 = 8,                   /* "%="  */
  YYSYMBOL_TOK_38 = 9,                     /* "&"  */
  YYSYMBOL_TOK_3838 = 10,                  /* "&&"  */
  YYSYMBOL_TOK_3861 = 11,                  /* "&="  */
  YYSYMBOL_TOK_40 = 12,                    /* "("  */
  YYSYMBOL_TOK_41 = 13,                    /* ")"  */
  YYSYMBOL_TOK_42 = 14,                    /* "*"  */
  YYSYMBOL_TOK_4261 = 15,                  /* "*="  */
  YYSYMBOL_TOK_43 = 16,                    /* "+"  */
  YYSYMBOL_TOK_4343 = 17,                  /* "++"  */
  YYSYMBOL_TOK_4361 = 18,                  /* "+="  */
  YYSYMBOL_TOK_44 = 19,                    /* ","  */
  YYSYMBOL_TOK_45 = 20,                    /* "-"  */
  YYSYMBOL_TOK_4545 = 21,                  /* "--"  */
  YYSYMBOL_TOK_4561 = 22,                  /* "-="  */
  YYSYMBOL_TOK_4562 = 23,                  /* "->"  */
  YYSYMBOL_TOK_46 = 24,                    /* "."  */
  YYSYMBOL_TOK_464646 = 25,                /* "..."  */
  YYSYMBOL_TOK_47 = 26,                    /* "/"  */
  YYSYMBOL_TOK_4761 = 27,                  /* "/="  */
  YYSYMBOL_TOK_58 = 28,                    /* ":"  */
  YYSYMBOL_TOK_5858 = 29,                  /* "::"  */
  YYSYMBOL_TOK_59 = 30,                    /* ";"  */
  YYSYMBOL_TOK_60 = 31,                    /* "<"  */
  YYSYMBOL_TOK_6060 = 32,                  /* "<<"  */
  YYSYMBOL_TOK_606061 = 33,                /* "<<="  */
  YYSYMBOL_TOK_6061 = 34,                  /* "<="  */
  YYSYMBOL_TOK_61 = 35,                    /* "="  */
  YYSYMBOL_TOK_6161 = 36,                  /* "=="  */
  YYSYMBOL_TOK_62 = 37,                    /* ">"  */
  YYSYMBOL_TOK_6261 = 38,                  /* ">="  */
  YYSYMBOL_TOK_6262 = 39,                  /* ">>"  */
  YYSYMBOL_TOK_626261 = 40,                /* ">>="  */
  YYSYMBOL_TOK_626262 = 41,                /* ">>>"  */
  YYSYMBOL_TOK_62626261 = 42,              /* ">>>="  */
  YYSYMBOL_TOK_63 = 43,                    /* "?"  */
  YYSYMBOL_TOK_91 = 44,                    /* "["  */
  YYSYMBOL_TOK_93 = 45,                    /* "]"  */
  YYSYMBOL_TOK_94 = 46,                    /* "^"  */
  YYSYMBOL_TOK_9461 = 47,                  /* "^="  */
  YYSYMBOL_TOK_abstract = 48,              /* "abstract"  */
  YYSYMBOL_TOK_assert = 49,                /* "assert"  */
  YYSYMBOL_TOK_boolean = 50,               /* "boolean"  */
  YYSYMBOL_TOK_break = 51,                 /* "break"  */
  YYSYMBOL_TOK_byte = 52,                  /* "byte"  */
  YYSYMBOL_TOK_case = 53,                  /* "case"  */
  YYSYMBOL_TOK_catch = 54,                 /* "catch"  */
  YYSYMBOL_TOK_char = 55,                  /* "char"  */
  YYSYMBOL_TOK_class = 56,                 /* "class"  */
  YYSYMBOL_TOK_continue = 57,              /* "continue"  */
  YYSYMBOL_TOK_default = 58,               /* "default"  */
  YYSYMBOL_TOK_do = 59,                    /* "do"  */
  YYSYMBOL_TOK_double = 60,                /* "double"  */
  YYSYMBOL_TOK_else = 61,                  /* "else"  */
  YYSYMBOL_TOK_enum = 62,                  /* "enum"  */
  YYSYMBOL_TOK_extends = 63,               /* "extends"  */
  YYSYMBOL_TOK_final = 64,                 /* "final"  */
  YYSYMBOL_TOK_finally = 65,               /* "finally"  */
  YYSYMBOL_TOK_float = 66,                 /* "float"  */
  YYSYMBOL_TOK_for = 67,                   /* "for"  */
  YYSYMBOL_TOK_if = 68,                    /* "if"  */
  YYSYMBOL_TOK_implements = 69,            /* "implements"  */
  YYSYMBOL_TOK_import = 70,                /* "import"  */
  YYSYMBOL_TOK_instanceof = 71,            /* "instanceof"  */
  YYSYMBOL_TOK_int = 72,                   /* "int"  */
  YYSYMBOL_TOK_interface = 73,             /* "interface"  */
  YYSYMBOL_TOK_long = 74,                  /* "long"  */
  YYSYMBOL_TOK_new = 75,                   /* "new"  */
  YYSYMBOL_TOK_package = 76,               /* "package"  */
  YYSYMBOL_TOK_permits = 77,               /* "permits"  */
  YYSYMBOL_TOK_private = 78,               /* "private"  */
  YYSYMBOL_TOK_protected = 79,             /* "protected"  */
  YYSYMBOL_TOK_public = 80,                /* "public"  */
  YYSYMBOL_TOK_record = 81,                /* "record"  */
  YYSYMBOL_TOK_return = 82,                /* "return"  */
  YYSYMBOL_TOK_sealed = 83,                /* "sealed"  */
  YYSYMBOL_TOK_short = 84,                 /* "short"  */
  YYSYMBOL_TOK_static = 85,                /* "static"  */
  YYSYMBOL_TOK_strictfp = 86,              /* "strictfp"  */
  YYSYMBOL_TOK_super = 87,                 /* "super"  */
  YYSYMBOL_TOK_switch = 88,                /* "switch"  */
  YYSYMBOL_TOK_synchronized = 89,          /* "synchronized"  */
  YYSYMBOL_TOK_this = 90,                  /* "this"  */
  YYSYMBOL_TOK_throw = 91,                 /* "throw"  */
  YYSYMBOL_TOK_throws = 92,                /* "throws"  */
  YYSYMBOL_TOK_transient = 93,             /* "transient"  */
  YYSYMBOL_TOK_transitive = 94,            /* "transitive"  */
  YYSYMBOL_TOK_try = 95,                   /* "try"  */
  YYSYMBOL_TOK_var = 96,                   /* "var"  */
  YYSYMBOL_TOK_void = 97,                  /* "void"  */
  YYSYMBOL_TOK_volatile = 98,              /* "volatile"  */
  YYSYMBOL_TOK_while = 99,                 /* "while"  */
  YYSYMBOL_TOK_yield = 100,                /* "yield"  */
  YYSYMBOL_TOK_123 = 101,                  /* "{"  */
  YYSYMBOL_TOK_124 = 102,                  /* "|"  */
  YYSYMBOL_TOK_12461 = 103,                /* "|="  */
  YYSYMBOL_TOK_124124 = 104,               /* "||"  */
  YYSYMBOL_TOK_125 = 105,                  /* "}"  */
  YYSYMBOL_TOK_126 = 106,                  /* "~"  */
  YYSYMBOL_YYACCEPT = 107,                 /* $accept  */
  YYSYMBOL_input = 108,                    /* input  */
  YYSYMBOL_109_modifier_multiopt = 109,    /* modifier.multiopt  */
  YYSYMBOL_modifier = 110,                 /* modifier  */
  YYSYMBOL_111_dot_ind_multiopt = 111,     /* dot_ind.multiopt  */
  YYSYMBOL_type = 112,                     /* type  */
  YYSYMBOL_primitive_type = 113,           /* primitive_type  */
  YYSYMBOL_numeric_type = 114,             /* numeric_type  */
  YYSYMBOL_integral_type = 115,            /* integral_type  */
  YYSYMBOL_floating_point_type = 116,      /* floating_point_type  */
  YYSYMBOL_reference_type = 117,           /* reference_type  */
  YYSYMBOL_class_or_interface_type = 118,  /* class_or_interface_type  */
  YYSYMBOL_array_type = 119,               /* array_type  */
  YYSYMBOL_dims = 120,                     /* dims  */
  YYSYMBOL_type_parameter = 121,           /* type_parameter  */
  YYSYMBOL_122_type_bound_opt = 122,       /* type_bound.opt  */
  YYSYMBOL_type_bound = 123,               /* type_bound  */
  YYSYMBOL_additional_bound = 124,         /* additional_bound  */
  YYSYMBOL_type_arguments = 125,           /* type_arguments  */
  YYSYMBOL_type_argument_list = 126,       /* type_argument_list  */
  YYSYMBOL_127_type_argument_multiopt = 127, /* type_argument.multiopt  */
  YYSYMBOL_type_argument = 128,            /* type_argument  */
  YYSYMBOL_wildcard = 129,                 /* wildcard  */
  YYSYMBOL_130_wildcard_bounds_opt = 130,  /* wildcard_bounds.opt  */
  YYSYMBOL_wildcard_bounds = 131,          /* wildcard_bounds  */
  YYSYMBOL_un_name = 132,                  /* un_name  */
  YYSYMBOL_compilation_unit = 133,         /* compilation_unit  */
  YYSYMBOL_ordinary_compilation_unit = 134, /* ordinary_compilation_unit  */
  YYSYMBOL_135_package_declaration_opt = 135, /* package_declaration.opt  */
  YYSYMBOL_package_declaration = 136,      /* package_declaration  */
  YYSYMBOL_137_import_declaration_multiopt = 137, /* import_declaration.multiopt  */
  YYSYMBOL_import_declaration = 138,       /* import_declaration  */
  YYSYMBOL_single_type_import_declaration = 139, /* single_type_import_declaration  */
  YYSYMBOL_type_import_on_demand_declaration = 140, /* type_import_on_demand_declaration  */
  YYSYMBOL_single_static_import_declaration = 141, /* single_static_import_declaration  */
  YYSYMBOL_static_import_on_demand_declaration = 142, /* static_import_on_demand_declaration  */
  YYSYMBOL_143_top_level_class_or_interface_declaration_multiopt = 143, /* top_level_class_or_interface_declaration.multiopt  */
  YYSYMBOL_top_level_class_or_interface_declaration = 144, /* top_level_class_or_interface_declaration  */
  YYSYMBOL_145_com_type_name_multiopt = 145, /* com_type_name.multiopt  */
  YYSYMBOL_class_declaration = 146,        /* class_declaration  */
  YYSYMBOL_normal_class_declaration = 147, /* normal_class_declaration  */
  YYSYMBOL_148_1 = 148,                    /* $@1  */
  YYSYMBOL_149_2 = 149,                    /* $@2  */
  YYSYMBOL_150_type_parameters_opt = 150,  /* type_parameters.opt  */
  YYSYMBOL_151_class_extends_opt = 151,    /* class_extends.opt  */
  YYSYMBOL_152_class_implements_opt = 152, /* class_implements.opt  */
  YYSYMBOL_153_class_permits_opt = 153,    /* class_permits.opt  */
  YYSYMBOL_type_parameters = 154,          /* type_parameters  */
  YYSYMBOL_type_parameter_list = 155,      /* type_parameter_list  */
  YYSYMBOL_156_com_type_parameter_multiopt = 156, /* com_type_parameter.multiopt  */
  YYSYMBOL_class_extends = 157,            /* class_extends  */
  YYSYMBOL_class_implements = 158,         /* class_implements  */
  YYSYMBOL_interface_type_list = 159,      /* interface_type_list  */
  YYSYMBOL_160_com_interface_type_multiopt = 160, /* com_interface_type.multiopt  */
  YYSYMBOL_class_permits = 161,            /* class_permits  */
  YYSYMBOL_class_body = 162,               /* class_body  */
  YYSYMBOL_163_class_body_declaration_multiopt = 163, /* class_body_declaration.multiopt  */
  YYSYMBOL_class_body_declaration = 164,   /* class_body_declaration  */
  YYSYMBOL_class_member_declaration = 165, /* class_member_declaration  */
  YYSYMBOL_variable_declarator_list = 166, /* variable_declarator_list  */
  YYSYMBOL_167_com_variable_declarator_multiopt = 167, /* com_variable_declarator.multiopt  */
  YYSYMBOL_variable_declarator = 168,      /* variable_declarator  */
  YYSYMBOL_169_eq_variable_initializer_opt = 169, /* eq_variable_initializer.opt  */
  YYSYMBOL_variable_declarator_id = 170,   /* variable_declarator_id  */
  YYSYMBOL_171_dims_opt = 171,             /* dims.opt  */
  YYSYMBOL_variable_initializer = 172,     /* variable_initializer  */
  YYSYMBOL_173_type_arguments_opt = 173,   /* type_arguments.opt  */
  YYSYMBOL_method_declaration = 174,       /* method_declaration  */
  YYSYMBOL_method_header = 175,            /* method_header  */
  YYSYMBOL_176_throws_opt = 176,           /* throws.opt  */
  YYSYMBOL_result = 177,                   /* result  */
  YYSYMBOL_method_declarator = 178,        /* method_declarator  */
  YYSYMBOL_179_3 = 179,                    /* $@3  */
  YYSYMBOL_180_4 = 180,                    /* $@4  */
  YYSYMBOL_hold_TOK_IDENTIFIER = 181,      /* hold_TOK_IDENTIFIER  */
  YYSYMBOL_182_formal_parameter_list_opt = 182, /* formal_parameter_list.opt  */
  YYSYMBOL_formal_parameter_list = 183,    /* formal_parameter_list  */
  YYSYMBOL_184_com_formal_parameter_multiopt = 184, /* com_formal_parameter.multiopt  */
  YYSYMBOL_formal_parameter = 185,         /* formal_parameter  */
  YYSYMBOL_variable_arity_parameter = 186, /* variable_arity_parameter  */
  YYSYMBOL_throws = 187,                   /* throws  */
  YYSYMBOL_exception_type_list = 188,      /* exception_type_list  */
  YYSYMBOL_189_com_exception_type_multiopt = 189, /* com_exception_type.multiopt  */
  YYSYMBOL_exception_type = 190,           /* exception_type  */
  YYSYMBOL_method_body = 191,              /* method_body  */
  YYSYMBOL_instance_initializer = 192,     /* instance_initializer  */
  YYSYMBOL_constructor_declaration = 193,  /* constructor_declaration  */
  YYSYMBOL_constructor_declarator = 194,   /* constructor_declarator  */
  YYSYMBOL_simple_type_name = 195,         /* simple_type_name  */
  YYSYMBOL_constructor_body = 196,         /* constructor_body  */
  YYSYMBOL_197_block_statements_opt = 197, /* block_statements.opt  */
  YYSYMBOL_198_argument_list_opt = 198,    /* argument_list.opt  */
  YYSYMBOL_enum_declaration = 199,         /* enum_declaration  */
  YYSYMBOL_enum_body = 200,                /* enum_body  */
  YYSYMBOL_201_com_opt = 201,              /* com.opt  */
  YYSYMBOL_202_enum_body_declarations_opt = 202, /* enum_body_declarations.opt  */
  YYSYMBOL_203_enum_constant_list_opt = 203, /* enum_constant_list.opt  */
  YYSYMBOL_enum_constant_list = 204,       /* enum_constant_list  */
  YYSYMBOL_205_com_enum_constant_multiopt = 205, /* com_enum_constant.multiopt  */
  YYSYMBOL_enum_constant = 206,            /* enum_constant  */
  YYSYMBOL_207_class_body_opt = 207,       /* class_body.opt  */
  YYSYMBOL_enum_body_declarations = 208,   /* enum_body_declarations  */
  YYSYMBOL_record_declaration = 209,       /* record_declaration  */
  YYSYMBOL_record_header = 210,            /* record_header  */
  YYSYMBOL_211_record_component_list_opt = 211, /* record_component_list.opt  */
  YYSYMBOL_record_component_list = 212,    /* record_component_list  */
  YYSYMBOL_213_com_record_component_multiopt = 213, /* com_record_component.multiopt  */
  YYSYMBOL_record_component = 214,         /* record_component  */
  YYSYMBOL_variable_arity_record_component = 215, /* variable_arity_record_component  */
  YYSYMBOL_record_body = 216,              /* record_body  */
  YYSYMBOL_217_record_body_declaration_multiopt = 217, /* record_body_declaration.multiopt  */
  YYSYMBOL_record_body_declaration = 218,  /* record_body_declaration  */
  YYSYMBOL_compact_constructor_declaration = 219, /* compact_constructor_declaration  */
  YYSYMBOL_interface_declaration = 220,    /* interface_declaration  */
  YYSYMBOL_normal_interface_declaration = 221, /* normal_interface_declaration  */
  YYSYMBOL_222_interface_extends_opt = 222, /* interface_extends.opt  */
  YYSYMBOL_223_interface_permits_opt = 223, /* interface_permits.opt  */
  YYSYMBOL_interface_extends = 224,        /* interface_extends  */
  YYSYMBOL_interface_permits = 225,        /* interface_permits  */
  YYSYMBOL_interface_body = 226,           /* interface_body  */
  YYSYMBOL_227_interface_member_declaration_multiopt = 227, /* interface_member_declaration.multiopt  */
  YYSYMBOL_interface_member_declaration = 228, /* interface_member_declaration  */
  YYSYMBOL_interface_method_declaration = 229, /* interface_method_declaration  */
  YYSYMBOL_array_initializer = 230,        /* array_initializer  */
  YYSYMBOL_231_variable_initializer_list_opt = 231, /* variable_initializer_list.opt  */
  YYSYMBOL_variable_initializer_list = 232, /* variable_initializer_list  */
  YYSYMBOL_233_com_variable_initializer_multiopt = 233, /* com_variable_initializer.multiopt  */
  YYSYMBOL_block = 234,                    /* block  */
  YYSYMBOL_block_statements = 235,         /* block_statements  */
  YYSYMBOL_236_block_statement_multiopt = 236, /* block_statement.multiopt  */
  YYSYMBOL_block_statement = 237,          /* block_statement  */
  YYSYMBOL_local_class_or_interface_declaration = 238, /* local_class_or_interface_declaration  */
  YYSYMBOL_local_variable_declaration_statement = 239, /* local_variable_declaration_statement  */
  YYSYMBOL_local_variable_declaration = 240, /* local_variable_declaration  */
  YYSYMBOL_local_variable_type = 241,      /* local_variable_type  */
  YYSYMBOL_statement = 242,                /* statement  */
  YYSYMBOL_statement_no_short_if = 243,    /* statement_no_short_if  */
  YYSYMBOL_statement_without_trailing_substatement = 244, /* statement_without_trailing_substatement  */
  YYSYMBOL_empty_statement = 245,          /* empty_statement  */
  YYSYMBOL_labeled_statement = 246,        /* labeled_statement  */
  YYSYMBOL_labeled_statement_no_short_if = 247, /* labeled_statement_no_short_if  */
  YYSYMBOL_expression_statement = 248,     /* expression_statement  */
  YYSYMBOL_statement_expression = 249,     /* statement_expression  */
  YYSYMBOL_if_then_statement = 250,        /* if_then_statement  */
  YYSYMBOL_hold_TOK_if = 251,              /* hold_TOK_if  */
  YYSYMBOL_if_then_else_statement = 252,   /* if_then_else_statement  */
  YYSYMBOL_253_5 = 253,                    /* $@5  */
  YYSYMBOL_if_then_else_statement_no_short_if = 254, /* if_then_else_statement_no_short_if  */
  YYSYMBOL_255_6 = 255,                    /* $@6  */
  YYSYMBOL_assert_statement = 256,         /* assert_statement  */
  YYSYMBOL_switch_statement = 257,         /* switch_statement  */
  YYSYMBOL_switch_block = 258,             /* switch_block  */
  YYSYMBOL_259_switch_rule_multiopt = 259, /* switch_rule.multiopt  */
  YYSYMBOL_260_switch_block_statement_group_multiopt = 260, /* switch_block_statement_group.multiopt  */
  YYSYMBOL_261_switch_label_col_multiopt = 261, /* switch_label_col.multiopt  */
  YYSYMBOL_switch_rule = 262,              /* switch_rule  */
  YYSYMBOL_switch_block_statement_group = 263, /* switch_block_statement_group  */
  YYSYMBOL_switch_label = 264,             /* switch_label  */
  YYSYMBOL_265_com_case_constant_multiopt = 265, /* com_case_constant.multiopt  */
  YYSYMBOL_case_constant = 266,            /* case_constant  */
  YYSYMBOL_while_statement = 267,          /* while_statement  */
  YYSYMBOL_hold_TOK_while = 268,           /* hold_TOK_while  */
  YYSYMBOL_while_statement_no_short_if = 269, /* while_statement_no_short_if  */
  YYSYMBOL_do_statement = 270,             /* do_statement  */
  YYSYMBOL_for_statement = 271,            /* for_statement  */
  YYSYMBOL_for_statement_no_short_if = 272, /* for_statement_no_short_if  */
  YYSYMBOL_basic_for_statement = 273,      /* basic_for_statement  */
  YYSYMBOL_hold_TOK_for = 274,             /* hold_TOK_for  */
  YYSYMBOL_275_for_init_opt = 275,         /* for_init.opt  */
  YYSYMBOL_276_expression_opt = 276,       /* expression.opt  */
  YYSYMBOL_277_for_update_opt = 277,       /* for_update.opt  */
  YYSYMBOL_basic_for_statement_no_short_if = 278, /* basic_for_statement_no_short_if  */
  YYSYMBOL_for_init = 279,                 /* for_init  */
  YYSYMBOL_for_update = 280,               /* for_update  */
  YYSYMBOL_statement_expression_list = 281, /* statement_expression_list  */
  YYSYMBOL_282_com_statement_expression_multiopt = 282, /* com_statement_expression.multiopt  */
  YYSYMBOL_enhanced_for_statement = 283,   /* enhanced_for_statement  */
  YYSYMBOL_enhanced_for_statement_no_short_if = 284, /* enhanced_for_statement_no_short_if  */
  YYSYMBOL_break_statement = 285,          /* break_statement  */
  YYSYMBOL_286_IDENTIFIER_opt = 286,       /* IDENTIFIER.opt  */
  YYSYMBOL_yield_statement = 287,          /* yield_statement  */
  YYSYMBOL_continue_statement = 288,       /* continue_statement  */
  YYSYMBOL_return_statement = 289,         /* return_statement  */
  YYSYMBOL_throw_statement = 290,          /* throw_statement  */
  YYSYMBOL_synchronized_statement = 291,   /* synchronized_statement  */
  YYSYMBOL_try_statement = 292,            /* try_statement  */
  YYSYMBOL_293_catches_opt = 293,          /* catches.opt  */
  YYSYMBOL_catches = 294,                  /* catches  */
  YYSYMBOL_295_catch_clause_multiopt = 295, /* catch_clause.multiopt  */
  YYSYMBOL_catch_clause = 296,             /* catch_clause  */
  YYSYMBOL_catch_formal_parameter = 297,   /* catch_formal_parameter  */
  YYSYMBOL_catch_type = 298,               /* catch_type  */
  YYSYMBOL_299_vt_class_type_multiopt = 299, /* vt_class_type.multiopt  */
  YYSYMBOL_finally = 300,                  /* finally  */
  YYSYMBOL_try_with_resources_statement = 301, /* try_with_resources_statement  */
  YYSYMBOL_302_finally_opt = 302,          /* finally.opt  */
  YYSYMBOL_resource_specification = 303,   /* resource_specification  */
  YYSYMBOL_304_semcol_opt = 304,           /* semcol.opt  */
  YYSYMBOL_resource_list = 305,            /* resource_list  */
  YYSYMBOL_306_semcol_resource_multiopt = 306, /* semcol_resource.multiopt  */
  YYSYMBOL_resource = 307,                 /* resource  */
  YYSYMBOL_variable_access = 308,          /* variable_access  */
  YYSYMBOL_pattern = 309,                  /* pattern  */
  YYSYMBOL_type_pattern = 310,             /* type_pattern  */
  YYSYMBOL_primary = 311,                  /* primary  */
  YYSYMBOL_primary_no_new_array = 312,     /* primary_no_new_array  */
  YYSYMBOL_class_instance_creation_expression = 313, /* class_instance_creation_expression  */
  YYSYMBOL_unqualified_class_instance_creation_expression = 314, /* unqualified_class_instance_creation_expression  */
  YYSYMBOL_field_access = 315,             /* field_access  */
  YYSYMBOL_array_access = 316,             /* array_access  */
  YYSYMBOL_method_invocation = 317,        /* method_invocation  */
  YYSYMBOL_argument_list = 318,            /* argument_list  */
  YYSYMBOL_319_com_expression_multiopt = 319, /* com_expression.multiopt  */
  YYSYMBOL_method_reference = 320,         /* method_reference  */
  YYSYMBOL_array_creation_expression = 321, /* array_creation_expression  */
  YYSYMBOL_dim_exprs = 322,                /* dim_exprs  */
  YYSYMBOL_323_dim_expr_multiopt = 323,    /* dim_expr.multiopt  */
  YYSYMBOL_dim_expr = 324,                 /* dim_expr  */
  YYSYMBOL_expression = 325,               /* expression  */
  YYSYMBOL_assignment_expression = 326,    /* assignment_expression  */
  YYSYMBOL_assignment = 327,               /* assignment  */
  YYSYMBOL_left_hand_side = 328,           /* left_hand_side  */
  YYSYMBOL_assignment_operator = 329,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 330,   /* conditional_expression  */
  YYSYMBOL_conditional_or_expression = 331, /* conditional_or_expression  */
  YYSYMBOL_conditional_and_expression = 332, /* conditional_and_expression  */
  YYSYMBOL_inclusive_or_expression = 333,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 334,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 335,           /* and_expression  */
  YYSYMBOL_equality_expression = 336,      /* equality_expression  */
  YYSYMBOL_relational_expression = 337,    /* relational_expression  */
  YYSYMBOL_instanceof_expression = 338,    /* instanceof_expression  */
  YYSYMBOL_shift_expression = 339,         /* shift_expression  */
  YYSYMBOL_additive_expression = 340,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 341, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 342,         /* unary_expression  */
  YYSYMBOL_pre_increment_expression = 343, /* pre_increment_expression  */
  YYSYMBOL_pre_decrement_expression = 344, /* pre_decrement_expression  */
  YYSYMBOL_unary_expression_not_plus_minus = 345, /* unary_expression_not_plus_minus  */
  YYSYMBOL_postfix_expression = 346,       /* postfix_expression  */
  YYSYMBOL_post_increment_expression = 347, /* post_increment_expression  */
  YYSYMBOL_post_decrement_expression = 348, /* post_decrement_expression  */
  YYSYMBOL_cast_expression = 349,          /* cast_expression  */
  YYSYMBOL_350_additional_bound_multiopt = 350, /* additional_bound.multiopt  */
  YYSYMBOL_switch_expression = 351         /* switch_expression  */
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
#define YYLAST   2189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  245
/* YYNRULES -- Number of rules.  */
#define YYNRULES  464
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  772

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   361


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
     105,   106
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   392,   392,   395,   396,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   412,   413,   417,   418,
     421,   422,   425,   426,   429,   430,   431,   432,   433,   436,
     437,   440,   441,   444,   445,   446,   449,   452,   453,   456,
     459,   460,   463,   466,   469,   472,   473,   476,   477,   480,
     481,   484,   487,   488,   491,   492,   497,   498,   504,   507,
     510,   511,   514,   517,   518,   521,   522,   523,   524,   527,
     530,   533,   536,   539,   540,   543,   544,   545,   548,   549,
     554,   566,   567,   570,   570,   570,   573,   574,   577,   578,
     581,   582,   585,   586,   589,   592,   595,   596,   599,   602,
     605,   608,   609,   612,   615,   618,   619,   622,   623,   624,
     627,   628,   629,   632,   635,   636,   639,   642,   643,   646,
     649,   650,   653,   654,   657,   658,   661,   664,   665,   668,
     669,   672,   673,   676,   676,   676,   679,   708,   709,   712,
     715,   716,   719,   720,   723,   726,   729,   732,   733,   736,
     739,   740,   743,   746,   749,   752,   755,   758,   759,   762,
     763,   766,   769,   772,   773,   776,   777,   780,   781,   784,
     787,   788,   791,   795,   796,   800,   803,   806,   809,   810,
     813,   816,   817,   821,   822,   826,   829,   832,   833,   836,
     837,   840,   846,   849,   852,   853,   856,   857,   860,   863,
     866,   869,   870,   873,   874,   875,   876,   882,   888,   891,
     892,   895,   898,   899,   904,   907,   910,   911,   914,   915,
     916,   919,   920,   923,   926,   929,   930,   933,   934,   935,
     936,   937,   938,   941,   942,   943,   944,   945,   948,   949,
     950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,   963,   966,   969,   972,   975,   976,   977,   978,   979,
     980,   981,   984,   987,   990,   990,   993,   993,   996,   997,
    1000,  1003,  1004,  1007,  1008,  1011,  1012,  1015,  1016,  1019,
    1020,  1021,  1024,  1027,  1028,  1031,  1032,  1035,  1038,  1041,
    1043,  1046,  1049,  1050,  1053,  1054,  1057,  1060,  1063,  1064,
    1067,  1068,  1071,  1072,  1075,  1078,  1079,  1082,  1085,  1088,
    1089,  1092,  1095,  1098,  1101,  1102,  1105,  1108,  1111,  1114,
    1117,  1120,  1121,  1122,  1125,  1126,  1129,  1132,  1133,  1136,
    1139,  1142,  1145,  1146,  1149,  1152,  1155,  1156,  1159,  1162,
    1163,  1166,  1169,  1170,  1173,  1174,  1177,  1178,  1181,  1184,
    1189,  1190,  1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,
    1201,  1205,  1206,  1207,  1210,  1213,  1214,  1215,  1218,  1219,
    1222,  1223,  1224,  1225,  1226,  1229,  1232,  1233,  1236,  1237,
    1238,  1239,  1242,  1243,  1244,  1245,  1248,  1251,  1252,  1255,
    1258,  1261,  1262,  1265,  1268,  1269,  1270,  1273,  1274,  1275,
    1276,  1277,  1278,  1279,  1280,  1281,  1282,  1283,  1284,  1287,
    1288,  1291,  1292,  1295,  1296,  1299,  1300,  1303,  1304,  1307,
    1308,  1311,  1312,  1313,  1316,  1317,  1318,  1319,  1320,  1321,
    1324,  1325,  1328,  1329,  1330,  1331,  1334,  1335,  1336,  1339,
    1340,  1341,  1342,  1345,  1346,  1347,  1348,  1349,  1352,  1354,
    1356,  1357,  1358,  1359,  1360,  1363,  1364,  1365,  1366,  1369,
    1372,  1375,  1378,  1379,  1382
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
  "TOK_LITERAL", "\"!\"", "\"!=\"", "\"%\"", "\"%=\"", "\"&\"", "\"&&\"",
  "\"&=\"", "\"(\"", "\")\"", "\"*\"", "\"*=\"", "\"+\"", "\"++\"",
  "\"+=\"", "\",\"", "\"-\"", "\"--\"", "\"-=\"", "\"->\"", "\".\"",
  "\"...\"", "\"/\"", "\"/=\"", "\":\"", "\"::\"", "\";\"", "\"<\"",
  "\"<<\"", "\"<<=\"", "\"<=\"", "\"=\"", "\"==\"", "\">\"", "\">=\"",
  "\">>\"", "\">>=\"", "\">>>\"", "\">>>=\"", "\"?\"", "\"[\"", "\"]\"",
  "\"^\"", "\"^=\"", "\"abstract\"", "\"assert\"", "\"boolean\"",
  "\"break\"", "\"byte\"", "\"case\"", "\"catch\"", "\"char\"",
  "\"class\"", "\"continue\"", "\"default\"", "\"do\"", "\"double\"",
  "\"else\"", "\"enum\"", "\"extends\"", "\"final\"", "\"finally\"",
  "\"float\"", "\"for\"", "\"if\"", "\"implements\"", "\"import\"",
  "\"instanceof\"", "\"int\"", "\"interface\"", "\"long\"", "\"new\"",
  "\"package\"", "\"permits\"", "\"private\"", "\"protected\"",
  "\"public\"", "\"record\"", "\"return\"", "\"sealed\"", "\"short\"",
  "\"static\"", "\"strictfp\"", "\"super\"", "\"switch\"",
  "\"synchronized\"", "\"this\"", "\"throw\"", "\"throws\"",
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
  "type_arguments.opt", "method_declaration", "method_header",
  "throws.opt", "result", "method_declarator", "$@3", "$@4",
  "hold_TOK_IDENTIFIER", "formal_parameter_list.opt",
  "formal_parameter_list", "com_formal_parameter.multiopt",
  "formal_parameter", "variable_arity_parameter", "throws",
  "exception_type_list", "com_exception_type.multiopt", "exception_type",
  "method_body", "instance_initializer", "constructor_declaration",
  "constructor_declarator", "simple_type_name", "constructor_body",
  "block_statements.opt", "argument_list.opt", "enum_declaration",
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
  "hold_TOK_if", "if_then_else_statement", "$@5",
  "if_then_else_statement_no_short_if", "$@6", "assert_statement",
  "switch_statement", "switch_block", "switch_rule.multiopt",
  "switch_block_statement_group.multiopt", "switch_label_col.multiopt",
  "switch_rule", "switch_block_statement_group", "switch_label",
  "com_case_constant.multiopt", "case_constant", "while_statement",
  "hold_TOK_while", "while_statement_no_short_if", "do_statement",
  "for_statement", "for_statement_no_short_if", "basic_for_statement",
  "hold_TOK_for", "for_init.opt", "expression.opt", "for_update.opt",
  "basic_for_statement_no_short_if", "for_init", "for_update",
  "statement_expression_list", "com_statement_expression.multiopt",
  "enhanced_for_statement", "enhanced_for_statement_no_short_if",
  "break_statement", "IDENTIFIER.opt", "yield_statement",
  "continue_statement", "return_statement", "throw_statement",
  "synchronized_statement", "try_statement", "catches.opt", "catches",
  "catch_clause.multiopt", "catch_clause", "catch_formal_parameter",
  "catch_type", "vt_class_type.multiopt", "finally",
  "try_with_resources_statement", "finally.opt", "resource_specification",
  "semcol.opt", "resource_list", "semcol_resource.multiopt", "resource",
  "variable_access", "pattern", "type_pattern", "primary",
  "primary_no_new_array", "class_instance_creation_expression",
  "unqualified_class_instance_creation_expression", "field_access",
  "array_access", "method_invocation", "argument_list",
  "com_expression.multiopt", "method_reference",
  "array_creation_expression", "dim_exprs", "dim_expr.multiopt",
  "dim_expr", "expression", "assignment_expression", "assignment",
  "left_hand_side", "assignment_operator", "conditional_expression",
  "conditional_or_expression", "conditional_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "instanceof_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "unary_expression", "pre_increment_expression",
  "pre_decrement_expression", "unary_expression_not_plus_minus",
  "postfix_expression", "post_increment_expression",
  "post_decrement_expression", "cast_expression",
  "additional_bound.multiopt", "switch_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-683)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-459)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,    78,    89,  -683,  -683,  -683,  -683,  -683,  -683,   162,
     132,    12,  -683,  -683,  -683,  -683,  -683,    34,   232,  -683,
    -683,   245,   215,  -683,   987,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,   135,   206,  -683,  -683,  -683,   265,  -683,
     277,  -683,  -683,  -683,   312,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,   207,  -683,   172,   319,   214,   300,   300,   321,
     326,  -683,  -683,  -683,   370,   267,  -683,   380,   303,  -683,
     378,  -683,  -683,   300,   368,   376,   383,  -683,   413,  -683,
     357,  -683,   384,   370,   347,  -683,   668,   214,   362,   392,
    -683,  -683,   427,   416,   433,   397,   424,  -683,  -683,   370,
    -683,  -683,   434,  -683,  -683,   245,   336,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,    54,  -683,  -683,  -683,
    -683,  -683,    49,  -683,   439,  -683,  -683,  -683,   345,   370,
     214,  -683,   420,   275,   368,   370,   443,  -683,   429,   441,
     376,   380,   383,  -683,  -683,  -683,   458,   417,   419,  -683,
     447,  -683,  -683,   376,   390,  -683,   131,   -21,  -683,  -683,
    -683,  -683,   376,  1338,  -683,   364,  -683,   413,   462,  -683,
     453,     1,  -683,  -683,   437,   668,   223,   245,   373,  -683,
    -683,   370,   370,  -683,  -683,  -683,  1338,  1189,  1338,  1338,
    1338,  1338,   668,   120,   466,  -683,  1338,  2003,   496,   188,
     467,  -683,  -683,   952,  2026,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  2047,  -683,    13,   500,   411,   469,   507,    42,
     156,  -683,   247,   338,   190,  -683,  -683,  -683,  -683,   344,
    -683,  -683,  -683,  -683,   280,  -683,  -683,   370,  -683,   245,
    -683,  -683,  1823,  -683,  -683,  -683,  -683,  -683,  -683,  1472,
    -683,  1863,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,   383,  -683,  -683,  -683,  -683,   331,  -683,  -683,
    -683,   504,   505,  -683,  -683,  -683,  -683,   475,   199,   518,
     368,  1338,  -683,  1338,    48,   368,  1338,   478,    46,   368,
    1338,   508,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  1338,  1338,  1338,  1338,  1338,  1338,
    1338,  1338,  1338,  1338,  1338,  1338,  1338,   582,  1338,  1338,
    1338,  1338,  1338,  1338,  1338,  1338,  -683,  -683,  1863,  -683,
     376,   383,  -683,  -683,   495,     2,  -683,   194,  1338,  -683,
    1338,   521,   521,  1652,  -683,  -683,  1338,   520,   523,  1338,
       9,  -683,  -683,  1338,  -683,   212,  -683,   428,  -683,  -683,
    -683,  -683,  -683,  -683,   506,   534,  -683,  -683,  -683,  -683,
    -683,   509,  -683,   526,  -683,  -683,  -683,  -683,   529,  -683,
    -683,  -683,   531,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,   308,   333,  -683,  -683,  -683,   344,   363,   365,
       8,     2,   452,    18,   453,   297,  1338,  -683,    24,    27,
     502,  -683,  1338,    27,   502,   536,   546,   538,   539,   541,
     370,   222,  -683,  -683,   553,   513,   373,   547,  -683,   559,
     519,  1338,  -683,   535,   500,   411,   469,   507,    42,   156,
     156,   247,   247,   247,   247,   562,  -683,  -683,  -683,   338,
     338,   338,   190,   190,  -683,  -683,  -683,   554,  -683,  -683,
    -683,  -683,   452,   319,  1652,   385,  -683,   540,   542,   550,
     477,   551,  -683,  1338,  1338,   552,  2093,   514,   482,   560,
    -683,  1382,  -683,   502,  -683,  -683,   549,  -683,  1338,  1338,
    2067,  -683,   370,   488,  -683,   578,  1472,  -683,  -683,  -683,
     557,  1308,  -683,   419,  -683,   563,   580,  -683,  -683,  1338,
    -683,   493,  -683,  1338,    72,   592,   368,  -683,  -683,  -683,
    -683,  1338,  -683,  -683,  -683,  1338,   452,  -683,   584,  -683,
    1338,  -683,  -683,  -683,   585,  -683,   593,   595,  -683,   350,
    -683,   568,  -683,  -683,   188,   133,   600,   558,   566,  -683,
     514,  -683,  -683,  -683,   594,  1308,  -683,   601,   602,   589,
    -683,   598,  -683,  -683,   376,  -683,  -683,  -683,  1919,   606,
    -683,  -683,  -683,   528,  -683,  -683,  -683,   424,  -683,  -683,
    1338,  -683,   373,   611,   229,  -683,   612,   623,   633,   625,
    -683,  -683,  -683,   613,  1338,   493,   482,  -683,   628,   614,
    -683,   482,  -683,   514,   558,  -683,   534,  -683,  1687,  1652,
    1338,   626,  1338,   631,    55,  -683,   636,  -683,   639,   564,
    -683,  -683,  1338,  -683,   229,  -683,   642,  -683,  1338,  -683,
    -683,   578,  -683,   646,  -683,  -683,  -683,  2093,    22,   649,
    -683,  -683,  -683,  -683,  -683,   640,  -683,  -683,   619,  -683,
     660,  -683,   669,  -683,  -683,   670,  -683,  -683,  -683,   671,
     393,   653,   370,   684,  -683,  -683,  1308,  -683,  -683,  -683,
      95,  -683,   661,   161,  1195,   675,   677,   662,  -683,   376,
     534,   482,  1687,   630,  1338,  1338,  2067,  1652,  -683,   393,
    -683,  -683,  -683,  -683,   674,  -683,   666,  -683,  -683,  -683,
    -683,  -683,   667,  -683,   502,  -683,   599,  -683,  -683,  -683,
    1652,   687,   690,   679,   681,  -683,   696,  -683,  -683,  1338,
    -683,  1562,  -683,  -683,   370,  -683,  1687,  1687,  1338,  1338,
    1652,  -683,  -683,   376,  -683,  -683,   699,   686,  -683,   656,
    1687,   393,  1768,  -683,   701,   691,  -683,  -683,   712,   713,
     715,  1687,  1768,  1338,  1338,  2067,  -683,   716,   719,   708,
     709,  1768,  1768,  1338,  1338,  -683,   725,   711,  1768,   393,
     732,  1768
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      61,     0,     0,     2,    58,    64,    60,    17,     1,    74,
       0,     0,    63,    65,    66,    67,    68,     4,     0,    62,
      56,     0,     0,    77,     0,    73,    75,    80,    81,    82,
      76,   192,    16,     0,     0,    69,     8,    83,     0,    10,
       0,     7,     6,     5,     0,    11,     9,    12,    14,    13,
      15,     3,     0,    57,     0,     0,    91,    87,    87,    57,
       0,    70,   136,    84,     0,     0,    90,     0,   195,    86,
       0,    71,    72,    87,    56,   102,    35,    99,   168,   161,
      41,    97,     0,     0,   197,   194,   179,    91,    89,    48,
     124,    33,     0,   100,     0,     0,   164,   167,   171,     0,
      39,    40,    95,    94,   198,     0,     0,   196,    21,    24,
      28,    30,    29,    26,    27,    25,     0,    18,    20,    22,
      23,    19,    31,    32,     0,   178,   182,   184,     0,     0,
      91,    88,     0,     0,   125,     0,     0,   163,   166,   169,
     463,     0,    79,   202,   193,   183,     0,     0,    36,   177,
     180,   188,   176,    98,    93,    44,     0,    53,    49,    45,
      50,    34,   101,   160,   106,     0,   165,     0,    42,    96,
     199,     4,   185,    37,     0,     0,     4,     0,     0,    92,
      47,     0,     0,    51,    52,   352,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   353,     0,   456,     0,   455,
     350,   356,   361,   357,   358,   359,   159,   360,   351,   377,
     390,   392,     0,   391,   409,   411,   413,   415,   417,   419,
     421,   429,   424,   432,   436,   439,   443,   444,   447,   450,
     457,   458,   453,   454,     4,   162,   170,     0,   462,     0,
     206,   200,     0,   204,   205,   201,   203,    38,   181,     4,
     186,     0,   111,   189,   107,   110,   108,   109,   187,   190,
     112,   152,    79,   106,    85,    54,    55,   456,   357,   358,
     452,     0,     0,   445,   448,   446,   449,     0,     0,     0,
     125,     0,   451,   160,     0,   125,     0,     0,     0,   125,
       0,   375,   400,   406,   398,   401,   402,   399,   403,   397,
     404,   405,   407,   408,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   459,   460,     0,   105,
      43,    78,   132,   131,     0,     0,   133,    56,     0,   251,
       0,   315,   315,     0,   297,   263,   301,     0,     0,     0,
       0,   226,   289,     0,   225,   394,   221,     0,   222,   238,
     157,   217,   218,   219,     0,     0,   220,   227,   239,   228,
     240,     0,   229,     0,   230,   241,   242,   231,     0,   243,
     232,   292,     0,   293,   244,   250,   245,   246,   248,   247,
     249,   323,   356,   359,   255,   256,   257,     0,   258,   259,
      56,     0,   130,     0,   103,     4,     0,   355,     0,     0,
     121,   388,   160,     0,   121,   366,     0,     0,     0,    57,
       0,     0,   354,   362,     0,     0,   174,   365,   363,     0,
       0,     0,   393,     0,   412,   414,   416,   418,   420,   423,
     422,   425,   427,   426,   428,   430,   349,   431,   348,   433,
     434,   435,   437,   438,   442,   440,   441,     0,   133,   151,
     207,   150,   130,     0,     0,     0,   314,     0,     0,    56,
       0,     0,   300,     0,     0,     0,     0,   325,     0,     0,
     214,     4,   223,   121,   224,   115,   118,   254,     0,     0,
     299,   126,     0,     0,   129,     4,     4,   191,   104,   461,
       0,   210,   384,   120,   382,   386,     0,   385,   383,   160,
     380,     0,   370,   160,     0,     0,   125,   378,   368,   173,
     172,   160,   379,   369,   376,     0,   130,   127,     0,   252,
       0,   268,   313,   317,     0,   318,     0,     0,   319,   346,
     344,   340,   343,   345,     0,   357,     0,     0,   321,   328,
     325,   316,   216,   119,   113,     0,   116,     0,     0,   306,
     310,     0,   298,   305,   149,   145,   148,   153,     0,     0,
     137,   141,   143,     0,   389,   213,   123,   164,   209,   122,
       0,   387,   174,     0,   276,   464,     0,   367,     0,     0,
     410,   128,   134,     0,     0,     0,     0,   339,     0,   341,
       4,     0,   322,   326,   337,   324,     0,   117,     0,     0,
       0,   308,   301,   146,     0,   154,   139,   156,   211,     0,
     364,   373,     0,   284,   278,   274,     0,   371,   160,   381,
     372,     4,   269,     0,   270,   320,   338,     0,     0,     0,
     334,   327,   336,   335,   114,    56,   262,   264,   227,   234,
       0,   235,     0,   236,   237,     0,   294,   295,   288,     0,
       0,     0,     0,     0,   142,     4,     0,   208,   286,   287,
       0,   275,     0,     0,     0,     0,     0,     0,   342,   333,
       0,     0,     0,     0,     0,     0,   299,     0,   309,   303,
     147,   144,   140,   212,   283,   272,     0,   278,   271,   273,
     280,   281,     0,   374,   121,   291,   331,   330,   329,   253,
       0,     0,     0,   306,     0,   311,     0,   302,   307,     0,
     277,     4,   279,   135,     0,   265,     0,     0,     0,   301,
       0,   285,   282,   332,   264,   290,     0,     0,   296,     0,
       0,   303,     0,   312,     0,    56,   267,   233,     0,     0,
       0,     0,     0,     0,     0,   299,   304,     0,     0,   306,
       0,     0,     0,     0,   301,   266,     0,     0,     0,   303,
       0,     0
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -683,  -683,  -158,  -683,  -683,   -84,   138,  -683,  -683,  -683,
    -121,   -61,  -683,  -105,   607,  -683,  -683,  -683,  -683,  -683,
    -683,   597,  -683,  -683,  -683,   -11,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,   487,   -16,
    -683,  -683,  -683,    -8,  -683,   -40,  -683,  -199,  -683,  -683,
    -683,  -683,   672,  -683,  -683,   573,   499,   583,  -683,  -683,
    -683,   152,  -683,  -537,  -388,  -541,  -128,  -683,   522,  -443,
     444,   309,  -683,  -683,   305,   142,  -683,  -683,   115,  -683,
    -683,  -683,  -683,   119,   381,  -683,  -683,  -683,   459,   295,
     293,  -279,  -683,  -683,   213,  -683,  -683,  -683,  -683,   627,
     211,  -683,  -683,  -683,  -683,  -683,  -683,   629,  -683,  -683,
    -683,  -683,  -683,    -6,  -244,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,    -1,  -683,  -683,  -683,  -152,    77,  -683,
     320,  -683,  -683,  -308,  -683,  -276,  -323,   -66,  -683,  -683,
    -683,  -683,  -405,  -683,    -5,  -683,  -683,  -683,  -683,  -683,
    -683,   219,  -683,  -683,   105,   136,  -683,  -608,  -683,    88,
    -683,  -122,  -683,  -683,  -683,  -683,  -683,   175,  -663,  -575,
    -682,  -683,  -683,  -683,  -643,  -683,  -683,  -683,  -683,   468,
    -683,  -683,  -683,   145,  -683,  -683,   258,   271,  -683,   220,
    -683,  -683,  -683,   218,  -683,  -683,  -683,  -683,  -683,  -683,
     187,  -683,  -683,  -683,  -468,  -683,    44,   134,   -49,   181,
      90,  -683,  -683,  -683,  -683,   555,  -683,   322,  -154,  -683,
     183,  -683,  -683,  -518,  -683,   532,   527,   517,   530,   516,
    -257,  -683,   -24,    73,    23,    17,   279,   372,  -683,   418,
     548,   605,  -683,  -683,  -683
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    24,    51,    10,   354,   117,   118,   119,   120,
     121,   122,   123,   503,    81,   100,   101,   238,    90,   132,
     133,   159,   160,   183,   184,   197,     3,     4,     5,     6,
       9,    12,    13,    14,    15,    16,    17,    25,   170,   356,
      27,    55,    73,    68,   130,    65,   178,    69,    82,   102,
     131,    66,    77,    93,   179,   519,   234,   329,   254,   484,
     554,   485,   556,   486,   504,   575,    91,   255,   401,   493,
     336,   462,   463,   631,    63,   569,   570,   616,   571,   572,
     494,   565,   613,   566,   460,   256,   257,   402,   403,   497,
     357,   198,    28,    79,   138,   165,    96,    97,   139,    98,
     520,   166,    29,    87,   124,   125,   150,   126,   127,   152,
     176,   258,   259,   260,    31,    84,   106,    85,   107,   144,
     171,   245,   246,   576,   577,   578,   618,   359,   360,   481,
     361,   362,   363,   364,   365,   366,   709,   367,   368,   369,
     649,   370,   371,   372,   373,   374,   683,   651,   739,   375,
     376,   585,   673,   624,   670,   625,   671,   626,   694,   668,
     377,   378,   653,   379,   380,   654,   381,   382,   561,   471,
     716,   656,   562,   717,   563,   611,   383,   657,   384,   467,
     385,   386,   387,   388,   389,   390,   547,   548,   603,   549,
     639,   680,   706,   602,   391,   643,   478,   598,   541,   599,
     542,   543,   447,   448,   199,   200,   201,   202,   203,   204,
     205,   206,   291,   207,   208,   410,   505,   411,   209,   210,
     211,   212,   304,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   168,   233
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    26,   116,    75,   418,   358,   161,   590,   544,   446,
      33,    30,   158,   242,   607,    20,   672,   148,   251,   527,
    -155,   476,    75,   714,   261,    74,   508,    20,   185,   186,
     495,   240,   459,   272,   -59,   158,   187,   661,   140,    89,
     188,   189,   181,   334,   190,   191,   718,   128,   311,   427,
      70,   419,   334,    76,   439,   440,   305,   145,   483,   744,
     265,   266,   696,     1,    23,    88,   182,   470,   153,   173,
      36,   174,    76,    92,   162,    76,   328,   664,   312,   146,
     663,     7,   261,   591,   412,   560,    39,   770,    76,     8,
     154,   116,   760,   147,   142,   553,    92,    21,   718,   192,
      41,    42,    43,   249,   669,    45,   241,    46,    47,  -155,
     249,   193,   194,   696,   195,    48,    49,   306,    76,   496,
      50,   420,    76,   420,    76,   693,   718,   417,   501,   334,
     196,   278,   425,   506,    74,   421,   430,   268,   422,   268,
     268,   268,   268,   707,   279,    76,  -347,   268,   622,   280,
     432,   433,   416,   623,   737,   243,    18,   424,   333,    52,
     252,   429,    19,  -347,    76,   244,   262,   333,   540,   544,
      76,    76,   409,   413,   157,   267,   330,   267,   267,   267,
     267,    76,   559,   461,   272,   267,   465,   313,   529,   767,
     314,   698,   472,   315,   316,   475,   445,   323,   477,   479,
     695,   669,    61,   270,   324,   273,   274,   275,   276,    53,
      59,   412,   288,   282,   622,   -35,   325,   289,   252,   623,
      54,    60,   464,    92,   283,    89,    76,   317,   331,  -456,
     583,    76,    11,  -456,   586,    32,   284,   358,   355,    34,
      76,   285,   589,   408,   333,    35,   515,   328,    20,   461,
     333,   516,   358,   261,   500,   688,   286,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,    56,   268,
     268,   268,   268,   268,   268,   268,   268,   524,    74,   318,
      57,   560,   622,    64,   560,   647,   319,   623,   320,   441,
     442,   443,   444,   392,   156,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,    76,   267,   267,   267,
     267,   267,   267,   267,   267,    58,   723,    76,   157,   536,
     537,  -261,    62,    76,   249,   271,   550,  -261,   250,   540,
     277,    67,   646,   658,   557,   558,   560,   568,  -261,   393,
     454,   455,   456,   283,   452,   453,  -260,   579,   534,   675,
     560,    71,  -260,   -35,   321,   284,    72,   268,   322,   514,
     285,   326,   283,  -260,   560,   327,    83,   269,    78,   269,
     269,   269,   269,    74,   284,   286,   593,   269,   713,   285,
    -457,   249,  -458,    80,  -457,  -175,  -458,   392,   588,   252,
      86,   449,   450,   451,   286,   267,    20,   185,   249,    89,
      92,   579,   498,   734,   735,   338,   529,    94,   502,    76,
     189,   715,   507,   530,   191,   531,    95,   743,   423,   746,
      99,   103,   428,   499,   105,   129,   500,   545,   756,   -46,
     134,   564,   394,   393,   725,   135,    53,   143,   765,   735,
     633,   136,   638,   137,   635,   743,   151,   759,   756,   640,
     646,   658,   149,   141,   738,   163,   659,   155,   472,   164,
     167,   172,   173,   174,   715,   539,   175,   177,   192,   235,
     355,   237,   239,   568,   263,   738,   268,   358,   281,   355,
     193,    76,   247,   195,   614,   355,   652,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,    74,   269,
     269,   269,   269,   269,   269,   269,   269,   568,   392,   287,
     307,   290,   579,   308,   267,   309,   310,   406,   407,   408,
     702,   415,   700,   426,   466,   392,   394,   431,   395,   708,
     711,   712,   473,   480,   392,   474,   482,   483,   488,   487,
     392,   489,   648,   490,   492,   108,   147,   109,   509,   510,
     110,   511,   512,   513,   393,   111,   517,    76,   518,   521,
     652,   112,   522,   525,   523,   -19,   495,   113,   546,   114,
     532,   393,   533,   268,   736,   472,   352,   679,   464,   115,
     393,   535,   538,   249,   555,    74,   393,   269,   545,   496,
     551,  -138,   332,   582,   584,   587,   592,   594,   597,   757,
     758,   564,   574,   650,   652,   652,   595,   580,   596,   766,
     472,   267,   600,   606,   608,   609,   648,   610,   652,   615,
     749,   396,   395,   601,   621,   627,   539,    76,   612,   652,
     749,  -324,   108,   617,   109,   628,   629,   110,   630,   749,
     749,   636,   111,   632,   637,   660,   749,   394,   112,   749,
     662,    76,   392,   392,   113,   665,   114,   269,   666,   677,
     648,   648,   681,   733,   394,   674,   115,   397,   682,   667,
     268,    74,   684,   394,   648,   355,   747,   650,   351,   394,
    -233,   685,   686,   689,   687,   648,   747,   691,   703,   697,
     704,   710,   705,   719,   720,   747,   747,   722,   393,   393,
     726,   724,   747,   727,   392,   747,   269,   728,   267,   730,
     355,   729,   740,    76,   751,   396,   741,   742,   108,   752,
     109,   650,   650,   110,   753,   754,   392,   755,   111,   761,
     392,   392,   762,   392,   112,   650,   763,   748,   768,   764,
     113,   769,   114,   395,   355,   771,   650,   748,   169,   404,
     393,   264,   115,   180,   392,   104,   748,   748,   644,   253,
     395,   397,   405,   748,   335,   392,   748,   526,   528,   395,
     392,   392,   393,   676,   392,   395,   393,   393,   458,   393,
     692,   690,   491,   655,   392,   392,   392,   457,   567,   573,
     619,   394,   394,   620,   236,   392,   392,   398,   732,   392,
     393,   552,   721,   269,   248,   392,   392,   731,   604,   699,
     468,   393,   392,   392,   634,   392,   393,   393,   269,   701,
     393,   605,   642,   641,   678,   436,   438,   581,     0,     0,
     393,   393,   393,   414,   435,     0,   396,     0,   434,   437,
       0,   393,   393,   394,     0,   393,     0,     0,     0,     0,
       0,   393,   393,   396,   399,     0,     0,   655,   393,   393,
       0,   393,   396,     0,     0,   394,     0,     0,   396,   394,
     394,     0,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,     0,     0,     0,     0,   395,   395,     0,
       0,   398,     0,   394,     0,     0,     0,     0,     0,   397,
     269,   655,   655,     0,   394,     0,     0,     0,   397,   394,
     394,     0,     0,   394,   397,   655,     0,   750,     0,     0,
       0,     0,     0,   394,   394,   394,   655,   750,     0,     0,
       0,     0,     0,     0,   394,   394,   750,   750,   394,   395,
       0,     0,     0,   750,   394,   394,   750,     0,   399,     0,
       0,   394,   394,     0,   394,     0,     0,     0,     0,     0,
    -395,   395,     0,  -395,     0,   395,   395,  -395,   395,     0,
    -395,     0,     0,     0,  -395,     0,     0,     0,     0,  -395,
     396,   396,     0,     0,     0,  -395,     0,  -395,     0,   395,
       0,     0,  -395,     0,  -395,     0,     0,     0,     0,  -395,
     395,     0,     0,     0,     0,   395,   395,     0,     0,   395,
       0,     0,   398,     0,     0,     0,     0,     0,     0,   395,
     395,   395,     0,     0,     0,     0,   397,   397,     0,   398,
     395,   395,   396,     0,   395,    36,     0,     0,   398,     0,
     395,   395,     0,    37,   398,     0,     0,   395,   395,    38,
     395,    39,     0,     0,   396,  -395,     0,     0,   396,   396,
      40,   396,     0,     0,     0,    41,    42,    43,    44,   399,
      45,     0,    46,    47,     0,     0,     0,     0,   397,     0,
      48,    49,   396,     0,     0,    50,   399,     0,     0,     0,
       0,     0,     0,   396,     0,   399,     0,     0,   396,   396,
     397,   399,   396,     0,   397,   397,     0,   397,     0,     0,
       0,     0,   396,   396,   396,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   396,     0,     0,   396,   397,     0,
       0,     0,     0,   396,   396,     0,     0,     0,     0,   397,
     396,   396,     0,   396,   397,   397,     0,     0,   397,     0,
       0,     0,     0,     0,     0,     0,   398,   398,   397,   397,
     397,     0,     0,     0,     0,     0,     0,     0,     0,   397,
     397,     0,     0,   397,     0,     0,     0,     0,     0,   397,
     397,     0,     0,     0,     0,     0,   397,   397,     0,   397,
       0,     0,    20,   185,   186,     0,     0,     0,    20,   185,
     186,   187,     0,     0,     0,   188,   189,   187,   398,   190,
     191,   188,   189,   399,   399,   190,   191,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,   398,   398,     0,   398,     0,   108,
       0,   109,     0,     0,   110,     0,     0,     0,     0,   111,
       0,     0,     0,     0,     0,   112,     0,     0,   398,     0,
       0,   113,     0,   114,   192,   399,     0,     0,     0,   398,
     192,     0,     0,   115,   398,   398,   193,   194,   398,   195,
       0,     0,   193,   194,     0,   195,   349,   399,   398,   398,
     398,   399,   399,     0,   399,   196,   249,     0,     0,   398,
     398,   196,     0,   398,     0,     0,     0,     0,     0,   398,
     398,    20,   185,   186,     0,   399,   398,   398,     0,   398,
     187,     0,     0,     0,   188,   189,   399,     0,   190,   191,
       0,   399,   399,     0,     0,   399,     0,     0,     0,     0,
       0,    20,   185,   186,     0,   399,   399,   399,     0,     0,
     187,     0,     0,     0,   188,   189,   399,   399,   190,   191,
     399,     0,     0,     0,     0,     0,   399,   399,     0,     0,
       0,     0,     0,   399,   399,     0,   399,     0,     0,     0,
       0,     0,     0,   192,     0,   337,   185,     0,     0,     0,
       0,     0,     0,     0,   338,   193,   194,     0,   195,   189,
       0,     0,     0,   191,     0,     0,     0,     0,     0,   501,
       0,     0,   339,   192,   196,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,     0,   195,     0,
       0,   340,   108,   341,   109,  -215,     0,   110,     0,   342,
    -215,   343,   111,     0,   196,     0,     0,     0,   112,   344,
     345,     0,     0,     0,   113,     0,   114,   192,     0,     0,
       0,     0,     0,     0,   346,     0,   115,     0,     0,   193,
     347,   348,   195,   349,     0,   337,   185,   350,   351,     0,
       0,   352,   353,   249,   338,     0,     0,  -215,     0,   189,
       0,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   108,   341,   109,     0,     0,   110,     0,   342,
       0,   343,   111,     0,     0,     0,     0,     0,   112,   344,
     345,     0,     0,     0,   113,     0,   114,   192,     0,     0,
       0,     0,     0,     0,   346,     0,   115,     0,     0,   193,
     347,   348,   195,   349,     0,   337,   185,   350,   351,     0,
       0,   352,   353,   249,   338,     0,     0,  -158,     0,   189,
       0,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   108,   341,   109,   622,     0,   110,     0,   342,
     623,   343,   111,     0,     0,     0,     0,     0,   112,   344,
     345,     0,     0,     0,   113,     0,   114,   192,     0,     0,
       0,     0,     0,     0,   346,     0,   115,     0,     0,   193,
     347,   348,   195,   349,     0,   469,   185,   350,   351,     0,
       0,   352,   353,   249,   338,     0,     0,     0,     0,   189,
       0,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
     645,   185,     0,     0,     0,     0,     0,     0,     0,   338,
       0,   340,     0,   341,   189,     0,     0,     0,   191,   342,
       0,   343,     0,     0,     0,     0,     0,   339,     0,   344,
     345,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,   346,     0,   340,     0,   341,   193,
     347,   348,   195,   349,   342,     0,   343,   350,     0,     0,
       0,   352,   353,   249,   344,   345,     0,     0,     0,     0,
       0,     0,   192,     0,     0,     0,     0,     0,     0,   346,
       0,   745,   185,     0,   193,   347,   348,   195,   349,     0,
     338,     0,   350,     0,     0,   189,   352,   353,   249,   191,
       0,     0,     0,     0,     0,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   340,     0,   341,
       0,     0,     0,     0,     0,   342,    74,   343,     0,     0,
       0,     0,     0,     0,     0,   344,   345,     0,     0,     0,
       0,     0,     0,   192,     0,     0,     0,     0,     0,     0,
     346,     0,     0,     0,    67,   193,   347,   348,   195,   349,
       0,     0,     0,   350,     0,     0,   400,   352,   353,   249,
       0,    36,     0,   108,     0,   109,     0,     0,   110,    37,
       0,     0,     0,   111,     0,    38,     0,    39,     0,   112,
       0,     0,     0,     0,    67,   113,    40,   114,     0,     0,
       0,    41,    42,    43,    44,     0,    45,   115,    46,    47,
       0,    36,     0,   108,     0,   109,    48,    49,   110,    37,
     332,    50,    74,   111,     0,    38,     0,    39,     0,   112,
       0,     0,     0,     0,     0,   113,    40,   114,     0,     0,
       0,    41,    42,    43,    44,     0,    45,   115,    46,    47,
       0,     0,     0,     0,     0,     0,    48,    49,     0,     0,
     332,    50,     0,     0,     0,     0,     0,    36,     0,   108,
       0,   109,     0,     0,   110,     0,     0,     0,     0,   111,
       0,     0,     0,    39,     0,   112,     0,     0,     0,     0,
       0,   113,     0,   114,     0,     0,     0,    41,    42,    43,
       0,     0,    45,   115,    46,    47,     0,     0,     0,     0,
       0,  -394,    48,    49,  -394,   283,     0,    50,  -394,     0,
       0,  -394,     0,     0,     0,  -394,     0,   284,     0,     0,
    -394,     0,   285,     0,  -396,     0,  -394,  -396,  -394,     0,
       0,  -396,     0,  -394,  -396,  -394,     0,   286,  -396,     0,
    -394,     0,     0,  -396,     0,   292,     0,     0,   293,  -396,
       0,  -396,   294,     0,     0,   295,  -396,     0,  -396,   296,
      74,   185,     0,  -396,   297,     0,     0,     0,     0,   338,
     298,     0,   299,     0,   189,     0,     0,   300,   191,   301,
       0,     0,     0,     0,   302,     0,    74,   185,     0,     0,
       0,     0,     0,     0,     0,   338,  -394,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,     0,   109,
       0,     0,   110,     0,     0,     0,     0,   111,     0,  -396,
       0,     0,     0,   112,     0,     0,     0,     0,     0,   113,
       0,   114,   192,   108,     0,   109,     0,     0,   110,     0,
     303,   115,     0,   111,   193,     0,     0,   195,     0,   112,
       0,     0,     0,   351,     0,   113,     0,   114,   192,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
     193,     0,     0,   195,     0,     0,     0,     0,     0,   351
};

static const yytype_int16 yycheck[] =
{
      11,    17,    86,    64,   283,   249,   134,   525,   476,   317,
      21,    17,   133,   171,   555,     3,   624,   122,   176,   462,
      12,    12,    83,   686,   176,     3,   414,     3,     4,     5,
      12,    30,    30,   187,     0,   156,    12,   612,    99,    31,
      16,    17,    63,   242,    20,    21,   689,    87,     6,     3,
      58,     3,   251,    64,   311,   312,    43,     3,     3,   741,
     181,   182,   670,    76,    30,    73,    87,   343,   129,    45,
      48,    44,    83,    24,   135,    86,   234,   614,    36,    25,
      25,     3,   234,   526,    12,   490,    64,   769,    99,     0,
     130,   175,   755,    44,   105,   483,    24,    85,   741,    75,
      78,    79,    80,   101,   622,    83,   105,    85,    86,   101,
     101,    87,    88,   721,    90,    93,    94,   104,   129,   101,
      98,    75,   133,    75,   135,   666,   769,   281,   101,   328,
     106,   192,   286,   412,     3,    87,   290,   186,    90,   188,
     189,   190,   191,   680,    24,   156,    13,   196,    53,    29,
     304,   305,   280,    58,   729,   171,    24,   285,   242,    24,
     176,   289,    30,    30,   175,   171,   177,   251,   476,   637,
     181,   182,   277,   278,    43,   186,   237,   188,   189,   190,
     191,   192,   490,   335,   338,   196,   340,    31,   464,   764,
      34,    30,   346,    37,    38,   349,   317,     7,   350,   353,
     105,   719,    30,   186,    14,   188,   189,   190,   191,     3,
       3,    12,    24,   196,    53,     3,    26,    29,   234,    58,
      14,    14,    28,    24,    12,    31,   237,    71,   239,    17,
     509,   242,    70,    21,   513,     3,    24,   481,   249,    24,
     251,    29,   521,    44,   328,    30,    24,   405,     3,   401,
     334,    29,   496,   405,   408,   660,    44,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,     3,   318,
     319,   320,   321,   322,   323,   324,   325,   431,     3,    32,
       3,   686,    53,    69,   689,   608,    39,    58,    41,   313,
     314,   315,   316,   249,    19,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,     3,   704,   328,    43,   473,
     474,    13,     3,   334,   101,   187,   478,    19,   105,   637,
     192,    31,   608,   609,   488,   489,   741,   495,    30,   249,
     323,   324,   325,    12,   321,   322,    13,   501,   470,   628,
     755,    30,    19,     3,    16,    24,    30,   406,    20,   420,
      29,    17,    12,    30,   769,    21,    63,   186,   101,   188,
     189,   190,   191,     3,    24,    44,   530,   196,   686,    29,
      17,   101,    17,     3,    21,   105,    21,   343,   516,   405,
      12,   318,   319,   320,    44,   406,     3,     4,   101,    31,
      24,   555,   105,   726,   727,    12,   682,    24,   409,   420,
      17,   687,   413,    28,    21,    30,     3,   740,   284,   742,
      63,    37,   288,   406,    77,    63,   580,   476,   751,    37,
       3,   492,   249,   343,   710,    19,     3,   101,   761,   762,
     594,    44,   600,    19,   596,   768,   101,   755,   771,   601,
     726,   727,    13,    19,   730,    12,   610,    37,   612,    30,
      19,     3,    45,    44,   740,   476,    19,    77,    75,   105,
     481,     9,    19,   631,   101,   751,   525,   721,    12,   490,
      87,   492,    45,    90,   568,   496,   608,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,     3,   318,
     319,   320,   321,   322,   323,   324,   325,   665,   464,    13,
      10,    44,   666,   102,   525,    46,     9,    13,    13,    44,
     674,     3,   674,    45,     3,   481,   343,    19,   249,   681,
     684,   685,    12,   105,   490,    12,    30,     3,    12,    30,
     496,    12,   608,    12,    92,    50,    44,    52,    12,     3,
      55,    13,    13,    12,   464,    60,     3,   568,    45,    12,
     682,    66,     3,    28,    45,     3,    12,    72,    54,    74,
      30,   481,    30,   622,   728,   729,    99,   638,    28,    84,
     490,    30,    30,   101,    35,     3,   496,   406,   637,   101,
      30,    13,    97,    13,   101,     3,    12,    12,    30,   753,
     754,   662,    45,   608,   726,   727,    13,    44,    13,   763,
     764,   622,    12,    19,    13,    13,   682,    28,   740,    13,
     742,   249,   343,    65,    13,    13,   637,   638,    30,   751,
     752,    65,    50,   105,    52,    12,     3,    55,    13,   761,
     762,    13,    60,    30,    30,    19,   768,   464,    66,   771,
      19,   662,   608,   609,    72,    19,    74,   476,    19,    13,
     726,   727,    13,   724,   481,    23,    84,   249,    28,   105,
     719,     3,    12,   490,   740,   686,   742,   682,    96,   496,
      61,    12,    12,    30,    13,   751,   752,     3,    13,    28,
      13,    61,    30,    19,    28,   761,   762,    30,   608,   609,
      13,   102,   768,    13,   660,   771,   525,    28,   719,    13,
     721,    30,    13,   724,    13,   343,    30,    61,    50,    28,
      52,   726,   727,    55,    12,    12,   682,    12,    60,    13,
     686,   687,    13,   689,    66,   740,    28,   742,    13,    30,
      72,    30,    74,   464,   755,    13,   751,   752,   141,   262,
     660,   178,    84,   156,   710,    83,   761,   762,   606,   176,
     481,   343,   263,   768,   242,   721,   771,   458,   463,   490,
     726,   727,   682,   631,   730,   496,   686,   687,   334,   689,
     665,   662,   401,   608,   740,   741,   742,   328,   493,   496,
     577,   608,   609,   582,   167,   751,   752,   249,   721,   755,
     710,   481,   697,   622,   175,   761,   762,   719,   550,   673,
     342,   721,   768,   769,   595,   771,   726,   727,   637,   674,
     730,   550,   604,   603,   637,   308,   310,   505,    -1,    -1,
     740,   741,   742,   278,   307,    -1,   464,    -1,   306,   309,
      -1,   751,   752,   660,    -1,   755,    -1,    -1,    -1,    -1,
      -1,   761,   762,   481,   249,    -1,    -1,   682,   768,   769,
      -1,   771,   490,    -1,    -1,   682,    -1,    -1,   496,   686,
     687,    -1,   689,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   464,    -1,    -1,    -1,    -1,   608,   609,    -1,
      -1,   343,    -1,   710,    -1,    -1,    -1,    -1,    -1,   481,
     719,   726,   727,    -1,   721,    -1,    -1,    -1,   490,   726,
     727,    -1,    -1,   730,   496,   740,    -1,   742,    -1,    -1,
      -1,    -1,    -1,   740,   741,   742,   751,   752,    -1,    -1,
      -1,    -1,    -1,    -1,   751,   752,   761,   762,   755,   660,
      -1,    -1,    -1,   768,   761,   762,   771,    -1,   343,    -1,
      -1,   768,   769,    -1,   771,    -1,    -1,    -1,    -1,    -1,
       8,   682,    -1,    11,    -1,   686,   687,    15,   689,    -1,
      18,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,
     608,   609,    -1,    -1,    -1,    33,    -1,    35,    -1,   710,
      -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    47,
     721,    -1,    -1,    -1,    -1,   726,   727,    -1,    -1,   730,
      -1,    -1,   464,    -1,    -1,    -1,    -1,    -1,    -1,   740,
     741,   742,    -1,    -1,    -1,    -1,   608,   609,    -1,   481,
     751,   752,   660,    -1,   755,    48,    -1,    -1,   490,    -1,
     761,   762,    -1,    56,   496,    -1,    -1,   768,   769,    62,
     771,    64,    -1,    -1,   682,   103,    -1,    -1,   686,   687,
      73,   689,    -1,    -1,    -1,    78,    79,    80,    81,   464,
      83,    -1,    85,    86,    -1,    -1,    -1,    -1,   660,    -1,
      93,    94,   710,    -1,    -1,    98,   481,    -1,    -1,    -1,
      -1,    -1,    -1,   721,    -1,   490,    -1,    -1,   726,   727,
     682,   496,   730,    -1,   686,   687,    -1,   689,    -1,    -1,
      -1,    -1,   740,   741,   742,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   751,   752,    -1,    -1,   755,   710,    -1,
      -1,    -1,    -1,   761,   762,    -1,    -1,    -1,    -1,   721,
     768,   769,    -1,   771,   726,   727,    -1,    -1,   730,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   608,   609,   740,   741,
     742,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   751,
     752,    -1,    -1,   755,    -1,    -1,    -1,    -1,    -1,   761,
     762,    -1,    -1,    -1,    -1,    -1,   768,   769,    -1,   771,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,     3,     4,
       5,    12,    -1,    -1,    -1,    16,    17,    12,   660,    20,
      21,    16,    17,   608,   609,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     682,    -1,    -1,    -1,   686,   687,    -1,   689,    -1,    50,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,   710,    -1,
      -1,    72,    -1,    74,    75,   660,    -1,    -1,    -1,   721,
      75,    -1,    -1,    84,   726,   727,    87,    88,   730,    90,
      -1,    -1,    87,    88,    -1,    90,    91,   682,   740,   741,
     742,   686,   687,    -1,   689,   106,   101,    -1,    -1,   751,
     752,   106,    -1,   755,    -1,    -1,    -1,    -1,    -1,   761,
     762,     3,     4,     5,    -1,   710,   768,   769,    -1,   771,
      12,    -1,    -1,    -1,    16,    17,   721,    -1,    20,    21,
      -1,   726,   727,    -1,    -1,   730,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,   740,   741,   742,    -1,    -1,
      12,    -1,    -1,    -1,    16,    17,   751,   752,    20,    21,
     755,    -1,    -1,    -1,    -1,    -1,   761,   762,    -1,    -1,
      -1,    -1,    -1,   768,   769,    -1,   771,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    87,    88,    -1,    90,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    30,    75,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    -1,    90,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    -1,    57,
      58,    59,    60,    -1,   106,    -1,    -1,    -1,    66,    67,
      68,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    84,    -1,    -1,    87,
      88,    89,    90,    91,    -1,     3,     4,    95,    96,    -1,
      -1,    99,   100,   101,    12,    -1,    -1,   105,    -1,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    -1,    -1,    55,    -1,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    84,    -1,    -1,    87,
      88,    89,    90,    91,    -1,     3,     4,    95,    96,    -1,
      -1,    99,   100,   101,    12,    -1,    -1,   105,    -1,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    -1,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    84,    -1,    -1,    87,
      88,    89,    90,    91,    -1,     3,     4,    95,    96,    -1,
      -1,    99,   100,   101,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    49,    -1,    51,    17,    -1,    -1,    -1,    21,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    30,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    49,    -1,    51,    87,
      88,    89,    90,    91,    57,    -1,    59,    95,    -1,    -1,
      -1,    99,   100,   101,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,     3,     4,    -1,    87,    88,    89,    90,    91,    -1,
      12,    -1,    95,    -1,    -1,    17,    99,   100,   101,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,     3,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    31,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    -1,    -1,     3,    99,   100,   101,
      -1,    48,    -1,    50,    -1,    52,    -1,    -1,    55,    56,
      -1,    -1,    -1,    60,    -1,    62,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    31,    72,    73,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    84,    85,    86,
      -1,    48,    -1,    50,    -1,    52,    93,    94,    55,    56,
      97,    98,     3,    60,    -1,    62,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      -1,    -1,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,     8,    93,    94,    11,    12,    -1,    98,    15,    -1,
      -1,    18,    -1,    -1,    -1,    22,    -1,    24,    -1,    -1,
      27,    -1,    29,    -1,     8,    -1,    33,    11,    35,    -1,
      -1,    15,    -1,    40,    18,    42,    -1,    44,    22,    -1,
      47,    -1,    -1,    27,    -1,     8,    -1,    -1,    11,    33,
      -1,    35,    15,    -1,    -1,    18,    40,    -1,    42,    22,
       3,     4,    -1,    47,    27,    -1,    -1,    -1,    -1,    12,
      33,    -1,    35,    -1,    17,    -1,    -1,    40,    21,    42,
      -1,    -1,    -1,    -1,    47,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,   103,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    50,    -1,    52,    -1,    -1,    55,    -1,
     103,    84,    -1,    60,    87,    -1,    -1,    90,    -1,    66,
      -1,    -1,    -1,    96,    -1,    72,    -1,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    96
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    76,   108,   133,   134,   135,   136,     3,     0,   137,
     111,    70,   138,   139,   140,   141,   142,   143,    24,    30,
       3,    85,   132,    30,   109,   144,   146,   147,   199,   209,
     220,   221,     3,   132,    24,    30,    48,    56,    62,    64,
      73,    78,    79,    80,    81,    83,    85,    86,    93,    94,
      98,   110,    24,     3,    14,   148,     3,     3,     3,     3,
      14,    30,     3,   181,    69,   152,   158,    31,   150,   154,
     150,    30,    30,   149,     3,   118,   132,   159,   101,   200,
       3,   121,   155,    63,   222,   224,    12,   210,   150,    31,
     125,   173,    24,   160,    24,     3,   203,   204,   206,    63,
     122,   123,   156,    37,   159,    77,   223,   225,    50,    52,
      55,    60,    66,    72,    74,    84,   112,   113,   114,   115,
     116,   117,   118,   119,   211,   212,   214,   215,   152,    63,
     151,   157,   126,   127,     3,    19,    44,    19,   201,   205,
     118,    19,   132,   101,   226,     3,    25,    44,   120,    13,
     213,   101,   216,   118,   152,    37,    19,    43,   117,   128,
     129,   173,   118,    12,    30,   202,   208,    19,   350,   121,
     145,   227,     3,    45,    44,    19,   217,    77,   153,   161,
     128,    63,    87,   130,   131,     4,     5,    12,    16,    17,
      20,    21,    75,    87,    88,    90,   106,   132,   198,   311,
     312,   313,   314,   315,   316,   317,   318,   320,   321,   325,
     326,   327,   328,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   351,   163,   105,   206,     9,   124,    19,
      30,   105,   109,   146,   220,   228,   229,    45,   214,   101,
     105,   109,   146,   164,   165,   174,   192,   193,   218,   219,
     220,   234,   132,   101,   162,   117,   117,   132,   315,   316,
     342,   113,   325,   342,   342,   342,   342,   113,   118,    24,
      29,    12,   342,    12,    24,    29,    44,    13,    24,    29,
      44,   319,     8,    11,    15,    18,    22,    27,    33,    35,
      40,    42,    47,   103,   329,    43,   104,    10,   102,    46,
       9,     6,    36,    31,    34,    37,    38,    71,    32,    39,
      41,    16,    20,     7,    14,    26,    17,    21,   109,   164,
     118,   132,    97,   112,   154,   175,   177,     3,    12,    30,
      49,    51,    57,    59,    67,    68,    82,    88,    89,    91,
      95,    96,    99,   100,   112,   132,   146,   197,   221,   234,
     235,   237,   238,   239,   240,   241,   242,   244,   245,   246,
     248,   249,   250,   251,   252,   256,   257,   267,   268,   270,
     271,   273,   274,   283,   285,   287,   288,   289,   290,   291,
     292,   301,   313,   317,   327,   343,   344,   346,   347,   348,
       3,   175,   194,   195,   145,   163,    13,    13,    44,   120,
     322,   324,    12,   120,   322,     3,   173,   325,   198,     3,
      75,    87,    90,   314,   173,   325,    45,     3,   314,   173,
     325,    19,   325,   325,   332,   333,   334,   335,   336,   337,
     337,   339,   339,   339,   339,   117,   240,   309,   310,   340,
     340,   340,   341,   341,   342,   342,   342,   195,   177,    30,
     191,   234,   178,   179,    28,   325,     3,   286,   286,     3,
     242,   276,   325,    12,    12,   325,    12,   234,   303,   325,
     105,   236,    30,     3,   166,   168,   170,    30,    12,    12,
      12,   191,    92,   176,   187,    12,   101,   196,   105,   342,
     325,   101,   230,   120,   171,   323,   198,   230,   171,    12,
       3,    13,    13,    12,   118,    24,    29,     3,    45,   162,
     207,    12,     3,    45,   325,    28,   178,   176,   181,   242,
      28,    30,    30,    30,   268,    30,   325,   325,    30,   132,
     240,   305,   307,   308,   311,   315,    54,   293,   294,   296,
     234,    30,   237,   171,   167,    35,   169,   325,   325,   240,
     249,   275,   279,   281,   118,   188,   190,   196,   109,   182,
     183,   185,   186,   197,    45,   172,   230,   231,   232,   325,
      44,   324,    13,   198,   101,   258,   198,     3,   173,   198,
     330,   176,    12,   325,    12,    13,    13,    30,   304,   306,
      12,    65,   300,   295,   293,   294,    19,   172,    13,    13,
      28,   282,    30,   189,   112,    13,   184,   105,   233,   201,
     207,    13,    53,    58,   260,   262,   264,    13,    12,     3,
      13,   180,    30,   325,   258,   234,    13,    30,   109,   297,
     234,   296,   300,   302,   168,     3,   242,   243,   244,   247,
     251,   254,   268,   269,   272,   274,   278,   284,   242,   325,
      19,   276,    19,    25,   170,    19,    19,   105,   266,   330,
     261,   263,   264,   259,    23,   198,   182,    13,   307,   118,
     298,    13,    28,   253,    12,    12,    12,    13,   249,    30,
     190,     3,   185,   172,   265,   105,   264,    28,    30,   262,
     234,   290,   325,    13,    13,    30,   299,   170,   234,   243,
      61,   325,   325,   240,   275,   242,   277,   280,   281,    19,
      28,   261,    30,   171,   102,   242,    13,    13,    28,    30,
      13,   266,   235,   118,   243,   243,   325,   276,   242,   255,
      13,    30,    61,   243,   277,     3,   243,   244,   251,   268,
     274,    13,    28,    12,    12,    12,   243,   325,   325,   240,
     275,    13,    13,    28,    30,   243,   325,   276,    13,    30,
     277,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   107,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   118,   119,   120,   120,   121,
     122,   122,   123,   124,   125,   126,   126,   127,   127,   128,
     128,   129,   130,   130,   131,   131,   132,   132,   133,   134,
     135,   135,   136,   137,   137,   138,   138,   138,   138,   139,
     140,   141,   142,   143,   143,   144,   144,   144,   145,   145,
     146,   146,   146,   148,   149,   147,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   155,   156,   156,   157,   158,
     159,   160,   160,   161,   162,   163,   163,   164,   164,   164,
     165,   165,   165,   166,   167,   167,   168,   169,   169,   170,
     171,   171,   172,   172,   173,   173,   174,   175,   175,   176,
     176,   177,   177,   179,   180,   178,   181,   182,   182,   183,
     184,   184,   185,   185,   186,   187,   188,   189,   189,   190,
     191,   191,   192,   193,   194,   195,   196,   197,   197,   198,
     198,   199,   200,   201,   201,   202,   202,   203,   203,   204,
     205,   205,   206,   207,   207,   208,   209,   210,   211,   211,
     212,   213,   213,   214,   214,   215,   216,   217,   217,   218,
     218,   219,   220,   221,   222,   222,   223,   223,   224,   225,
     226,   227,   227,   228,   228,   228,   228,   229,   230,   231,
     231,   232,   233,   233,   234,   235,   236,   236,   237,   237,
     237,   238,   238,   239,   240,   241,   241,   242,   242,   242,
     242,   242,   242,   243,   243,   243,   243,   243,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   245,   246,   247,   248,   249,   249,   249,   249,   249,
     249,   249,   250,   251,   253,   252,   255,   254,   256,   256,
     257,   258,   258,   259,   259,   260,   260,   261,   261,   262,
     262,   262,   263,   264,   264,   265,   265,   266,   267,   268,
     269,   270,   271,   271,   272,   272,   273,   274,   275,   275,
     276,   276,   277,   277,   278,   279,   279,   280,   281,   282,
     282,   283,   284,   285,   286,   286,   287,   288,   289,   290,
     291,   292,   292,   292,   293,   293,   294,   295,   295,   296,
     297,   298,   299,   299,   300,   301,   302,   302,   303,   304,
     304,   305,   306,   306,   307,   307,   308,   308,   309,   310,
     311,   311,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   313,   313,   313,   314,   315,   315,   315,   316,   316,
     317,   317,   317,   317,   317,   318,   319,   319,   320,   320,
     320,   320,   321,   321,   321,   321,   322,   323,   323,   324,
     325,   326,   326,   327,   328,   328,   328,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   330,
     330,   331,   331,   332,   332,   333,   333,   334,   334,   335,
     335,   336,   336,   336,   337,   337,   337,   337,   337,   337,
     338,   338,   339,   339,   339,   339,   340,   340,   340,   341,
     341,   341,   341,   342,   342,   342,   342,   342,   343,   344,
     345,   345,   345,   345,   345,   346,   346,   346,   346,   347,
     348,   349,   350,   350,   351
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
       1,     0,     1,     1,     1,     0,     3,     3,     4,     1,
       0,     1,     1,     0,     0,     7,     1,     1,     0,     2,
       3,     0,     3,     1,     4,     2,     2,     3,     0,     1,
       1,     1,     1,     4,     4,     1,     3,     1,     0,     1,
       0,     5,     5,     1,     0,     1,     0,     1,     0,     2,
       3,     0,     7,     1,     0,     2,     7,     3,     1,     0,
       2,     3,     0,     2,     1,     3,     3,     2,     0,     1,
       1,     3,     1,     7,     1,     0,     1,     0,     2,     3,
       3,     2,     0,     1,     1,     1,     1,     3,     4,     1,
       0,     2,     3,     0,     3,     2,     2,     0,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     0,     8,     0,     8,     3,     5,
       5,     4,     4,     2,     0,     2,     0,     3,     0,     4,
       3,     3,     4,     3,     1,     3,     0,     1,     5,     1,
       5,     7,     1,     1,     1,     1,     9,     1,     1,     0,
       1,     0,     1,     0,     9,     1,     1,     1,     2,     3,
       0,     7,     7,     3,     1,     0,     3,     3,     3,     3,
       5,     3,     4,     1,     1,     0,     2,     2,     0,     5,
       3,     2,     3,     0,     2,     5,     1,     0,     4,     1,
       0,     2,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     6,     3,     3,     5,     4,     4,
       4,     6,     6,     6,     8,     2,     3,     0,     4,     4,
       4,     6,     4,     4,     4,     4,     2,     2,     0,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     2,     0,     5
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
#line 399 "grammer.y"
                                {modifier = "public";}
#line 2408 "grammer.tab.c"
    break;

  case 6: /* modifier: "protected"  */
#line 400 "grammer.y"
                        {modifier = "protected";}
#line 2414 "grammer.tab.c"
    break;

  case 7: /* modifier: "private"  */
#line 401 "grammer.y"
                                {modifier = "private";}
#line 2420 "grammer.tab.c"
    break;

  case 24: /* integral_type: "byte"  */
#line 429 "grammer.y"
                                { curr_type = "byte";}
#line 2426 "grammer.tab.c"
    break;

  case 25: /* integral_type: "short"  */
#line 430 "grammer.y"
                                { curr_type = "short";}
#line 2432 "grammer.tab.c"
    break;

  case 26: /* integral_type: "int"  */
#line 431 "grammer.y"
                                { curr_type = "int";}
#line 2438 "grammer.tab.c"
    break;

  case 27: /* integral_type: "long"  */
#line 432 "grammer.y"
                                { curr_type = "long";}
#line 2444 "grammer.tab.c"
    break;

  case 28: /* integral_type: "char"  */
#line 433 "grammer.y"
                                { curr_type = "char";}
#line 2450 "grammer.tab.c"
    break;

  case 29: /* floating_point_type: "float"  */
#line 436 "grammer.y"
                                {curr_type = "float";}
#line 2456 "grammer.tab.c"
    break;

  case 30: /* floating_point_type: "double"  */
#line 437 "grammer.y"
                                {curr_type = "double";}
#line 2462 "grammer.tab.c"
    break;

  case 56: /* un_name: TOK_IDENTIFIER  */
#line 497 "grammer.y"
                                        {curr_type = string((yyvsp[0].s));}
#line 2468 "grammer.tab.c"
    break;

  case 57: /* un_name: un_name "." TOK_IDENTIFIER  */
#line 498 "grammer.y"
                                                {curr_type = curr_type + '.' + string((yyvsp[0].s));}
#line 2474 "grammer.tab.c"
    break;

  case 80: /* class_declaration: normal_class_declaration  */
#line 554 "grammer.y"
                                                {cum_table.push_back(block_table[current_stack]);
                                block_table[current_stack].clear();
                                current_stack--;
                                // cout<<parent_class<<"1\n";
                                int i = parent_class.size() - 1;
                                while(i>=0 && parent_class[i]!='.') i--;
                                if(i != -1)
                                parent_class = parent_class.substr(0,i);
                                else parent_class = "";
                                // cout<<i<<" "<<parent_class<<"2\n";
                                }
#line 2490 "grammer.tab.c"
    break;

  case 83: /* $@1: %empty  */
#line 570 "grammer.y"
                              {curr_type = "class";class_dec_flag = 1;}
#line 2496 "grammer.tab.c"
    break;

  case 84: /* $@2: %empty  */
#line 570 "grammer.y"
                                                                                            {current_stack++;}
#line 2502 "grammer.tab.c"
    break;

  case 119: /* variable_declarator_id: TOK_IDENTIFIER dims.opt  */
#line 646 "grammer.y"
                                                {block_table[current_stack][(yyvsp[-1].s)] = curr_type; }
#line 2508 "grammer.tab.c"
    break;

  case 126: /* method_declaration: modifier.multiopt method_header method_body  */
#line 661 "grammer.y"
                                                                {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2514 "grammer.tab.c"
    break;

  case 132: /* result: "void"  */
#line 673 "grammer.y"
                                {curr_type = "void";}
#line 2520 "grammer.tab.c"
    break;

  case 133: /* $@3: %empty  */
#line 676 "grammer.y"
  {method_dec_flag = 1;}
#line 2526 "grammer.tab.c"
    break;

  case 134: /* $@4: %empty  */
#line 676 "grammer.y"
                                                   {method_dec_flag = 0; current_stack++;}
#line 2532 "grammer.tab.c"
    break;

  case 136: /* hold_TOK_IDENTIFIER: TOK_IDENTIFIER  */
#line 679 "grammer.y"
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
#line 2564 "grammer.tab.c"
    break;

  case 231: /* statement: while_statement  */
#line 937 "grammer.y"
                                        {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2570 "grammer.tab.c"
    break;

  case 232: /* statement: for_statement  */
#line 938 "grammer.y"
                                {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2576 "grammer.tab.c"
    break;

  case 262: /* if_then_statement: hold_TOK_if "(" expression ")" statement  */
#line 984 "grammer.y"
                                                                {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2582 "grammer.tab.c"
    break;

  case 263: /* hold_TOK_if: "if"  */
#line 987 "grammer.y"
              {current_stack++;}
#line 2588 "grammer.tab.c"
    break;

  case 264: /* $@5: %empty  */
#line 990 "grammer.y"
                                                             {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;current_stack++;}
#line 2594 "grammer.tab.c"
    break;

  case 265: /* if_then_else_statement: hold_TOK_if "(" expression ")" statement_no_short_if $@5 "else" statement  */
#line 990 "grammer.y"
                                                                                                                                                                                                                        {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2600 "grammer.tab.c"
    break;

  case 266: /* $@6: %empty  */
#line 993 "grammer.y"
                                                             {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;current_stack++;}
#line 2606 "grammer.tab.c"
    break;

  case 267: /* if_then_else_statement_no_short_if: hold_TOK_if "(" expression ")" statement_no_short_if $@6 "else" statement_no_short_if  */
#line 993 "grammer.y"
                                                                                                                                                                                                                                        {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
#line 2612 "grammer.tab.c"
    break;

  case 289: /* hold_TOK_while: "while"  */
#line 1041 "grammer.y"
                   {current_stack++;}
#line 2618 "grammer.tab.c"
    break;

  case 297: /* hold_TOK_for: "for"  */
#line 1060 "grammer.y"
              {current_stack++;}
#line 2624 "grammer.tab.c"
    break;


#line 2628 "grammer.tab.c"

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

#line 1385 "grammer.y"



/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
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
