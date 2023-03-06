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
#line 1 "parser.y"


/* PROLOGUE */

#include <bits/stdc++.h>
using namespace std;

extern FILE *yyin;
extern int yylineno;
#define YYDEBUG 1
// Data structures to store the tree
vector<pair<string,vector<int>>> nodes;
int startNode;


void yyerror(char const *);
int createNode(string);
void addChild(int, int);


#line 92 "parser.tab.c"

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

#include "parser.tab.h"
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
  YYSYMBOL_148_type_parameters_opt = 148,  /* type_parameters.opt  */
  YYSYMBOL_149_class_extends_opt = 149,    /* class_extends.opt  */
  YYSYMBOL_150_class_implements_opt = 150, /* class_implements.opt  */
  YYSYMBOL_151_class_permits_opt = 151,    /* class_permits.opt  */
  YYSYMBOL_type_parameters = 152,          /* type_parameters  */
  YYSYMBOL_type_parameter_list = 153,      /* type_parameter_list  */
  YYSYMBOL_154_com_type_parameter_multiopt = 154, /* com_type_parameter.multiopt  */
  YYSYMBOL_class_extends = 155,            /* class_extends  */
  YYSYMBOL_class_implements = 156,         /* class_implements  */
  YYSYMBOL_interface_type_list = 157,      /* interface_type_list  */
  YYSYMBOL_158_com_interface_type_multiopt = 158, /* com_interface_type.multiopt  */
  YYSYMBOL_class_permits = 159,            /* class_permits  */
  YYSYMBOL_class_body = 160,               /* class_body  */
  YYSYMBOL_161_class_body_declaration_multiopt = 161, /* class_body_declaration.multiopt  */
  YYSYMBOL_class_body_declaration = 162,   /* class_body_declaration  */
  YYSYMBOL_class_member_declaration = 163, /* class_member_declaration  */
  YYSYMBOL_variable_declarator_list = 164, /* variable_declarator_list  */
  YYSYMBOL_165_com_variable_declarator_multiopt = 165, /* com_variable_declarator.multiopt  */
  YYSYMBOL_variable_declarator = 166,      /* variable_declarator  */
  YYSYMBOL_167_eq_variable_initializer_opt = 167, /* eq_variable_initializer.opt  */
  YYSYMBOL_variable_declarator_id = 168,   /* variable_declarator_id  */
  YYSYMBOL_169_dims_opt = 169,             /* dims.opt  */
  YYSYMBOL_variable_initializer = 170,     /* variable_initializer  */
  YYSYMBOL_171_type_arguments_opt = 171,   /* type_arguments.opt  */
  YYSYMBOL_method_declaration = 172,       /* method_declaration  */
  YYSYMBOL_method_header = 173,            /* method_header  */
  YYSYMBOL_174_throws_opt = 174,           /* throws.opt  */
  YYSYMBOL_result = 175,                   /* result  */
  YYSYMBOL_method_declarator = 176,        /* method_declarator  */
  YYSYMBOL_177_formal_parameter_list_opt = 177, /* formal_parameter_list.opt  */
  YYSYMBOL_formal_parameter_list = 178,    /* formal_parameter_list  */
  YYSYMBOL_179_com_formal_parameter_multiopt = 179, /* com_formal_parameter.multiopt  */
  YYSYMBOL_formal_parameter = 180,         /* formal_parameter  */
  YYSYMBOL_variable_arity_parameter = 181, /* variable_arity_parameter  */
  YYSYMBOL_throws = 182,                   /* throws  */
  YYSYMBOL_exception_type_list = 183,      /* exception_type_list  */
  YYSYMBOL_184_com_exception_type_multiopt = 184, /* com_exception_type.multiopt  */
  YYSYMBOL_exception_type = 185,           /* exception_type  */
  YYSYMBOL_method_body = 186,              /* method_body  */
  YYSYMBOL_instance_initializer = 187,     /* instance_initializer  */
  YYSYMBOL_constructor_declaration = 188,  /* constructor_declaration  */
  YYSYMBOL_constructor_declarator = 189,   /* constructor_declarator  */
  YYSYMBOL_simple_type_name = 190,         /* simple_type_name  */
  YYSYMBOL_constructor_body = 191,         /* constructor_body  */
  YYSYMBOL_192_block_statements_opt = 192, /* block_statements.opt  */
  YYSYMBOL_193_argument_list_opt = 193,    /* argument_list.opt  */
  YYSYMBOL_enum_declaration = 194,         /* enum_declaration  */
  YYSYMBOL_enum_body = 195,                /* enum_body  */
  YYSYMBOL_196_com_opt = 196,              /* com.opt  */
  YYSYMBOL_197_enum_body_declarations_opt = 197, /* enum_body_declarations.opt  */
  YYSYMBOL_198_enum_constant_list_opt = 198, /* enum_constant_list.opt  */
  YYSYMBOL_enum_constant_list = 199,       /* enum_constant_list  */
  YYSYMBOL_200_com_enum_constant_multiopt = 200, /* com_enum_constant.multiopt  */
  YYSYMBOL_enum_constant = 201,            /* enum_constant  */
  YYSYMBOL_202_class_body_opt = 202,       /* class_body.opt  */
  YYSYMBOL_enum_body_declarations = 203,   /* enum_body_declarations  */
  YYSYMBOL_record_declaration = 204,       /* record_declaration  */
  YYSYMBOL_record_header = 205,            /* record_header  */
  YYSYMBOL_206_record_component_list_opt = 206, /* record_component_list.opt  */
  YYSYMBOL_record_component_list = 207,    /* record_component_list  */
  YYSYMBOL_208_com_record_component_multiopt = 208, /* com_record_component.multiopt  */
  YYSYMBOL_record_component = 209,         /* record_component  */
  YYSYMBOL_variable_arity_record_component = 210, /* variable_arity_record_component  */
  YYSYMBOL_record_body = 211,              /* record_body  */
  YYSYMBOL_212_record_body_declaration_multiopt = 212, /* record_body_declaration.multiopt  */
  YYSYMBOL_record_body_declaration = 213,  /* record_body_declaration  */
  YYSYMBOL_compact_constructor_declaration = 214, /* compact_constructor_declaration  */
  YYSYMBOL_interface_declaration = 215,    /* interface_declaration  */
  YYSYMBOL_normal_interface_declaration = 216, /* normal_interface_declaration  */
  YYSYMBOL_217_interface_extends_opt = 217, /* interface_extends.opt  */
  YYSYMBOL_218_interface_permits_opt = 218, /* interface_permits.opt  */
  YYSYMBOL_interface_extends = 219,        /* interface_extends  */
  YYSYMBOL_interface_permits = 220,        /* interface_permits  */
  YYSYMBOL_interface_body = 221,           /* interface_body  */
  YYSYMBOL_222_interface_member_declaration_multiopt = 222, /* interface_member_declaration.multiopt  */
  YYSYMBOL_interface_member_declaration = 223, /* interface_member_declaration  */
  YYSYMBOL_interface_method_declaration = 224, /* interface_method_declaration  */
  YYSYMBOL_array_initializer = 225,        /* array_initializer  */
  YYSYMBOL_226_variable_initializer_list_opt = 226, /* variable_initializer_list.opt  */
  YYSYMBOL_variable_initializer_list = 227, /* variable_initializer_list  */
  YYSYMBOL_228_com_variable_initializer_multiopt = 228, /* com_variable_initializer.multiopt  */
  YYSYMBOL_block = 229,                    /* block  */
  YYSYMBOL_block_statements = 230,         /* block_statements  */
  YYSYMBOL_231_block_statement_multiopt = 231, /* block_statement.multiopt  */
  YYSYMBOL_block_statement = 232,          /* block_statement  */
  YYSYMBOL_local_class_or_interface_declaration = 233, /* local_class_or_interface_declaration  */
  YYSYMBOL_local_variable_declaration_statement = 234, /* local_variable_declaration_statement  */
  YYSYMBOL_local_variable_declaration = 235, /* local_variable_declaration  */
  YYSYMBOL_local_variable_type = 236,      /* local_variable_type  */
  YYSYMBOL_statement = 237,                /* statement  */
  YYSYMBOL_statement_no_short_if = 238,    /* statement_no_short_if  */
  YYSYMBOL_statement_without_trailing_substatement = 239, /* statement_without_trailing_substatement  */
  YYSYMBOL_empty_statement = 240,          /* empty_statement  */
  YYSYMBOL_labeled_statement = 241,        /* labeled_statement  */
  YYSYMBOL_labeled_statement_no_short_if = 242, /* labeled_statement_no_short_if  */
  YYSYMBOL_expression_statement = 243,     /* expression_statement  */
  YYSYMBOL_statement_expression = 244,     /* statement_expression  */
  YYSYMBOL_if_then_statement = 245,        /* if_then_statement  */
  YYSYMBOL_if_then_else_statement = 246,   /* if_then_else_statement  */
  YYSYMBOL_if_then_else_statement_no_short_if = 247, /* if_then_else_statement_no_short_if  */
  YYSYMBOL_assert_statement = 248,         /* assert_statement  */
  YYSYMBOL_switch_statement = 249,         /* switch_statement  */
  YYSYMBOL_switch_block = 250,             /* switch_block  */
  YYSYMBOL_251_switch_rule_multiopt = 251, /* switch_rule.multiopt  */
  YYSYMBOL_252_switch_block_statement_group_multiopt = 252, /* switch_block_statement_group.multiopt  */
  YYSYMBOL_253_switch_label_col_multiopt = 253, /* switch_label_col.multiopt  */
  YYSYMBOL_switch_rule = 254,              /* switch_rule  */
  YYSYMBOL_switch_block_statement_group = 255, /* switch_block_statement_group  */
  YYSYMBOL_switch_label = 256,             /* switch_label  */
  YYSYMBOL_257_com_case_constant_multiopt = 257, /* com_case_constant.multiopt  */
  YYSYMBOL_case_constant = 258,            /* case_constant  */
  YYSYMBOL_while_statement = 259,          /* while_statement  */
  YYSYMBOL_while_statement_no_short_if = 260, /* while_statement_no_short_if  */
  YYSYMBOL_do_statement = 261,             /* do_statement  */
  YYSYMBOL_for_statement = 262,            /* for_statement  */
  YYSYMBOL_for_statement_no_short_if = 263, /* for_statement_no_short_if  */
  YYSYMBOL_basic_for_statement = 264,      /* basic_for_statement  */
  YYSYMBOL_265_for_init_opt = 265,         /* for_init.opt  */
  YYSYMBOL_266_expression_opt = 266,       /* expression.opt  */
  YYSYMBOL_267_for_update_opt = 267,       /* for_update.opt  */
  YYSYMBOL_basic_for_statement_no_short_if = 268, /* basic_for_statement_no_short_if  */
  YYSYMBOL_for_init = 269,                 /* for_init  */
  YYSYMBOL_for_update = 270,               /* for_update  */
  YYSYMBOL_statement_expression_list = 271, /* statement_expression_list  */
  YYSYMBOL_272_com_statement_expression_multiopt = 272, /* com_statement_expression.multiopt  */
  YYSYMBOL_enhanced_for_statement = 273,   /* enhanced_for_statement  */
  YYSYMBOL_enhanced_for_statement_no_short_if = 274, /* enhanced_for_statement_no_short_if  */
  YYSYMBOL_break_statement = 275,          /* break_statement  */
  YYSYMBOL_276_IDENTIFIER_opt = 276,       /* IDENTIFIER.opt  */
  YYSYMBOL_yield_statement = 277,          /* yield_statement  */
  YYSYMBOL_continue_statement = 278,       /* continue_statement  */
  YYSYMBOL_return_statement = 279,         /* return_statement  */
  YYSYMBOL_throw_statement = 280,          /* throw_statement  */
  YYSYMBOL_synchronized_statement = 281,   /* synchronized_statement  */
  YYSYMBOL_try_statement = 282,            /* try_statement  */
  YYSYMBOL_283_catches_opt = 283,          /* catches.opt  */
  YYSYMBOL_catches = 284,                  /* catches  */
  YYSYMBOL_285_catch_clause_multiopt = 285, /* catch_clause.multiopt  */
  YYSYMBOL_catch_clause = 286,             /* catch_clause  */
  YYSYMBOL_catch_formal_parameter = 287,   /* catch_formal_parameter  */
  YYSYMBOL_catch_type = 288,               /* catch_type  */
  YYSYMBOL_289_vt_class_type_multiopt = 289, /* vt_class_type.multiopt  */
  YYSYMBOL_finally = 290,                  /* finally  */
  YYSYMBOL_try_with_resources_statement = 291, /* try_with_resources_statement  */
  YYSYMBOL_292_finally_opt = 292,          /* finally.opt  */
  YYSYMBOL_resource_specification = 293,   /* resource_specification  */
  YYSYMBOL_294_semcol_opt = 294,           /* semcol.opt  */
  YYSYMBOL_resource_list = 295,            /* resource_list  */
  YYSYMBOL_296_semcol_resource_multiopt = 296, /* semcol_resource.multiopt  */
  YYSYMBOL_resource = 297,                 /* resource  */
  YYSYMBOL_variable_access = 298,          /* variable_access  */
  YYSYMBOL_pattern = 299,                  /* pattern  */
  YYSYMBOL_type_pattern = 300,             /* type_pattern  */
  YYSYMBOL_primary = 301,                  /* primary  */
  YYSYMBOL_primary_no_new_array = 302,     /* primary_no_new_array  */
  YYSYMBOL_class_instance_creation_expression = 303, /* class_instance_creation_expression  */
  YYSYMBOL_unqualified_class_instance_creation_expression = 304, /* unqualified_class_instance_creation_expression  */
  YYSYMBOL_field_access = 305,             /* field_access  */
  YYSYMBOL_array_access = 306,             /* array_access  */
  YYSYMBOL_method_invocation = 307,        /* method_invocation  */
  YYSYMBOL_argument_list = 308,            /* argument_list  */
  YYSYMBOL_309_com_expression_multiopt = 309, /* com_expression.multiopt  */
  YYSYMBOL_method_reference = 310,         /* method_reference  */
  YYSYMBOL_array_creation_expression = 311, /* array_creation_expression  */
  YYSYMBOL_dim_exprs = 312,                /* dim_exprs  */
  YYSYMBOL_313_dim_expr_multiopt = 313,    /* dim_expr.multiopt  */
  YYSYMBOL_dim_expr = 314,                 /* dim_expr  */
  YYSYMBOL_expression = 315,               /* expression  */
  YYSYMBOL_assignment_expression = 316,    /* assignment_expression  */
  YYSYMBOL_assignment = 317,               /* assignment  */
  YYSYMBOL_left_hand_side = 318,           /* left_hand_side  */
  YYSYMBOL_assignment_operator = 319,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 320,   /* conditional_expression  */
  YYSYMBOL_conditional_or_expression = 321, /* conditional_or_expression  */
  YYSYMBOL_conditional_and_expression = 322, /* conditional_and_expression  */
  YYSYMBOL_inclusive_or_expression = 323,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 324,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 325,           /* and_expression  */
  YYSYMBOL_equality_expression = 326,      /* equality_expression  */
  YYSYMBOL_relational_expression = 327,    /* relational_expression  */
  YYSYMBOL_instanceof_expression = 328,    /* instanceof_expression  */
  YYSYMBOL_shift_expression = 329,         /* shift_expression  */
  YYSYMBOL_additive_expression = 330,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 331, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 332,         /* unary_expression  */
  YYSYMBOL_pre_increment_expression = 333, /* pre_increment_expression  */
  YYSYMBOL_pre_decrement_expression = 334, /* pre_decrement_expression  */
  YYSYMBOL_unary_expression_not_plus_minus = 335, /* unary_expression_not_plus_minus  */
  YYSYMBOL_postfix_expression = 336,       /* postfix_expression  */
  YYSYMBOL_post_increment_expression = 337, /* post_increment_expression  */
  YYSYMBOL_post_decrement_expression = 338, /* post_decrement_expression  */
  YYSYMBOL_cast_expression = 339,          /* cast_expression  */
  YYSYMBOL_340_additional_bound_multiopt = 340, /* additional_bound.multiopt  */
  YYSYMBOL_switch_expression = 341         /* switch_expression  */
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
#define YYLAST   1905

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  235
/* YYNRULES -- Number of rules.  */
#define YYNRULES  454
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  738

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
       0,   379,   379,   382,   383,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   399,   400,   404,   405,
     408,   409,   412,   413,   416,   417,   418,   419,   420,   423,
     424,   427,   428,   431,   432,   433,   436,   439,   440,   443,
     446,   447,   450,   453,   456,   459,   460,   463,   464,   467,
     468,   471,   474,   475,   478,   479,   484,   485,   491,   494,
     497,   498,   501,   504,   505,   508,   509,   510,   511,   514,
     517,   520,   523,   526,   527,   530,   531,   532,   535,   536,
     541,   542,   543,   546,   549,   550,   553,   554,   557,   558,
     561,   562,   565,   568,   571,   572,   575,   578,   581,   584,
     585,   588,   591,   594,   595,   598,   599,   600,   603,   604,
     605,   608,   611,   612,   615,   618,   619,   622,   625,   626,
     629,   630,   633,   634,   637,   640,   641,   644,   645,   648,
     649,   652,   655,   656,   659,   662,   663,   666,   667,   670,
     673,   676,   679,   680,   683,   686,   687,   690,   693,   696,
     699,   702,   705,   706,   709,   710,   713,   716,   719,   720,
     723,   724,   727,   728,   731,   734,   735,   738,   742,   743,
     747,   750,   753,   756,   757,   760,   763,   764,   768,   769,
     773,   776,   779,   780,   783,   784,   787,   793,   796,   799,
     800,   803,   804,   807,   810,   813,   816,   817,   820,   821,
     822,   823,   829,   835,   838,   839,   842,   845,   846,   851,
     854,   857,   858,   861,   862,   863,   866,   867,   870,   873,
     876,   877,   880,   881,   882,   883,   884,   885,   888,   889,
     890,   891,   892,   895,   896,   897,   898,   899,   900,   901,
     902,   903,   904,   905,   906,   907,   910,   913,   916,   919,
     922,   923,   924,   925,   926,   927,   928,   931,   934,   937,
     940,   941,   944,   947,   948,   951,   952,   955,   956,   959,
     960,   963,   964,   965,   968,   971,   972,   975,   976,   979,
     982,   985,   988,   991,   992,   995,   996,   999,  1002,  1003,
    1006,  1007,  1010,  1011,  1014,  1017,  1018,  1021,  1024,  1027,
    1028,  1031,  1034,  1037,  1040,  1041,  1044,  1047,  1050,  1053,
    1056,  1059,  1060,  1061,  1064,  1065,  1068,  1071,  1072,  1075,
    1078,  1081,  1084,  1085,  1088,  1091,  1094,  1095,  1098,  1101,
    1102,  1105,  1108,  1109,  1112,  1113,  1116,  1117,  1120,  1123,
    1128,  1129,  1132,  1133,  1134,  1135,  1136,  1137,  1138,  1139,
    1140,  1144,  1145,  1146,  1149,  1152,  1153,  1154,  1157,  1158,
    1161,  1162,  1163,  1164,  1165,  1168,  1171,  1172,  1175,  1176,
    1177,  1178,  1181,  1182,  1183,  1184,  1187,  1190,  1191,  1194,
    1197,  1200,  1201,  1204,  1207,  1208,  1209,  1212,  1213,  1214,
    1215,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1223,  1226,
    1227,  1230,  1231,  1234,  1235,  1238,  1239,  1242,  1243,  1246,
    1247,  1250,  1251,  1252,  1255,  1256,  1257,  1258,  1259,  1260,
    1263,  1264,  1267,  1268,  1269,  1270,  1273,  1274,  1275,  1278,
    1279,  1280,  1281,  1284,  1285,  1286,  1287,  1288,  1291,  1293,
    1295,  1296,  1297,  1298,  1299,  1302,  1303,  1304,  1305,  1308,
    1311,  1314,  1317,  1318,  1321
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
  "class_declaration", "normal_class_declaration", "type_parameters.opt",
  "class_extends.opt", "class_implements.opt", "class_permits.opt",
  "type_parameters", "type_parameter_list", "com_type_parameter.multiopt",
  "class_extends", "class_implements", "interface_type_list",
  "com_interface_type.multiopt", "class_permits", "class_body",
  "class_body_declaration.multiopt", "class_body_declaration",
  "class_member_declaration", "variable_declarator_list",
  "com_variable_declarator.multiopt", "variable_declarator",
  "eq_variable_initializer.opt", "variable_declarator_id", "dims.opt",
  "variable_initializer", "type_arguments.opt", "method_declaration",
  "method_header", "throws.opt", "result", "method_declarator",
  "formal_parameter_list.opt", "formal_parameter_list",
  "com_formal_parameter.multiopt", "formal_parameter",
  "variable_arity_parameter", "throws", "exception_type_list",
  "com_exception_type.multiopt", "exception_type", "method_body",
  "instance_initializer", "constructor_declaration",
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
  "if_then_else_statement", "if_then_else_statement_no_short_if",
  "assert_statement", "switch_statement", "switch_block",
  "switch_rule.multiopt", "switch_block_statement_group.multiopt",
  "switch_label_col.multiopt", "switch_rule",
  "switch_block_statement_group", "switch_label",
  "com_case_constant.multiopt", "case_constant", "while_statement",
  "while_statement_no_short_if", "do_statement", "for_statement",
  "for_statement_no_short_if", "basic_for_statement", "for_init.opt",
  "expression.opt", "for_update.opt", "basic_for_statement_no_short_if",
  "for_init", "for_update", "statement_expression_list",
  "com_statement_expression.multiopt", "enhanced_for_statement",
  "enhanced_for_statement_no_short_if", "break_statement",
  "IDENTIFIER.opt", "yield_statement", "continue_statement",
  "return_statement", "throw_statement", "synchronized_statement",
  "try_statement", "catches.opt", "catches", "catch_clause.multiopt",
  "catch_clause", "catch_formal_parameter", "catch_type",
  "vt_class_type.multiopt", "finally", "try_with_resources_statement",
  "finally.opt", "resource_specification", "semcol.opt", "resource_list",
  "semcol_resource.multiopt", "resource", "variable_access", "pattern",
  "type_pattern", "primary", "primary_no_new_array",
  "class_instance_creation_expression",
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

#define YYPACT_NINF (-620)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-449)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,    90,    65,  -620,  -620,  -620,  -620,  -620,  -620,    85,
      50,    23,  -620,  -620,  -620,  -620,  -620,    41,   213,  -620,
    -620,   222,   182,  -620,  1218,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,   270,   173,  -620,  -620,   279,   323,  -620,
     325,  -620,  -620,  -620,   326,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,   221,  -620,   306,   313,   268,   313,   313,   315,
     317,  -620,   345,   288,  -620,   361,   273,  -620,   314,   367,
    -620,  -620,   337,  -620,   365,   361,   268,  -620,   372,   380,
     382,  -620,   404,  -620,   361,   331,  -620,   437,   268,   361,
    -620,  -620,   394,  -620,   380,   338,   377,  -620,  -620,   414,
     399,   416,   378,   402,  -620,  -620,  -620,   222,   324,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,    60,  -620,
    -620,  -620,  -620,  -620,   113,  -620,   411,  -620,  -620,  -620,
     329,   380,   345,   222,   330,  -620,   389,    39,   372,   361,
     421,  -620,   405,   417,   382,  -620,  -620,  -620,   435,   403,
     406,  -620,   428,  -620,  -620,   440,  -620,   382,  -620,  -620,
    -620,    47,     7,  -620,  -620,  -620,  -620,   380,  1124,  -620,
     346,  -620,   404,   434,     0,  -620,  -620,   412,   437,   127,
     361,  -620,   434,   144,  -620,   361,   361,  -620,  -620,  -620,
    1124,   995,  1124,  1124,  1124,  1124,   437,   124,   442,  -620,
    1124,   483,   443,   175,   419,  -620,  -620,  1705,  1726,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  1747,  -620,    -7,   448,
     358,   420,   458,    51,    15,  -620,   179,   136,   184,  -620,
    -620,  -620,  -620,   230,  -620,  -620,  -620,  -620,   155,  -620,
    -620,   222,  -620,  -620,  1528,  -620,  -620,  -620,  -620,  -620,
    -620,  1258,  -620,  1568,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,   380,  -620,  1568,  -620,  -620,  -620,
     115,  -620,  -620,  -620,   457,   459,  -620,  -620,  -620,  -620,
     427,    48,   471,   372,  1124,  -620,  1124,    24,   372,  1124,
     433,    35,   372,  1124,   460,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  1124,  1124,  1124,
    1124,  1124,  1124,  1124,  1124,  1124,  1124,  1124,  1124,  1124,
      29,  1124,  1124,  1124,  1124,  1124,  1124,  1124,  1124,  -620,
    -620,   382,  -620,  -620,   409,     3,   481,   260,  1124,  -620,
    1124,   487,   487,  1438,   474,   484,  1124,   488,   490,  1124,
       6,  -620,   507,  1124,  -620,   512,  -620,   415,  -620,  -620,
    -620,  -620,  -620,  -620,   469,   523,  -620,  -620,  -620,  -620,
    -620,   505,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,   147,
     259,  -620,  -620,  -620,   230,   258,   266,    17,     3,   445,
      22,   526,  1124,  -620,   772,    -1,   495,  -620,  1124,    -1,
     495,   531,   542,   534,   535,   540,   361,   217,  -620,  -620,
     550,   510,   330,   546,  -620,   556,   515,  1124,  -620,   533,
     448,   358,   420,   458,    51,    15,    15,   179,   179,   179,
     179,   559,  -620,  -620,  -620,   136,   136,   136,   184,   184,
    -620,  -620,  -620,   481,  -620,  -620,  -620,   552,   445,  1438,
     229,  -620,   536,   537,   545,   466,  1767,  1124,   538,  -620,
    1124,  1124,   544,  1809,   521,   475,  1124,   547,  -620,  1168,
    -620,   495,  -620,  -620,   543,  -620,  -620,   361,   479,  -620,
     570,  1258,  -620,  -620,   553,   891,  -620,   406,  -620,   541,
     574,  -620,  -620,  1124,  -620,   494,  -620,  1124,   139,   586,
     372,  -620,  -620,  -620,  -620,  1124,  -620,  -620,  -620,  1124,
     445,   570,  -620,  -620,  1124,  -620,  -620,  -620,   579,   569,
    -620,   572,  -620,  -620,   587,  -620,   590,   594,  -620,   408,
    -620,   578,  -620,  -620,   175,    38,   597,   551,   554,  -620,
     521,   598,  -620,  -620,  -620,   580,   891,  -620,   380,  -620,
    -620,  -620,  1624,   599,  -620,  -620,  -620,   513,  -620,  -620,
    -620,   402,  -620,  -620,  1124,  -620,   330,   602,    62,  -620,
     607,   611,   624,   615,  -620,  -620,   617,   601,  1124,  1124,
     614,  1124,  1473,   494,   475,  -620,   621,   608,  -620,   475,
    -620,   521,   551,  -620,  1438,   523,  -620,   620,    63,  -620,
     622,  -620,   623,   539,  -620,  -620,  1124,  -620,    62,  -620,
     625,  -620,  1124,  -620,  -620,   495,  -620,   627,   630,   205,
     616,   619,   637,   638,   639,  -620,   591,   592,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  1809,  1712,   641,
    -620,  -620,  -620,  -620,  -620,  -620,   361,   652,  -620,  -620,
     891,  -620,  -620,  -620,   -14,  -620,   628,    87,   725,   646,
    -620,   633,  1438,  -620,   205,  1473,  1767,  1124,  1124,  1438,
    -620,   380,   523,   475,  -620,  -620,  -620,  -620,   648,  -620,
     640,  -620,  -620,  -620,  -620,  -620,   643,  -620,  -620,  -620,
     658,  -620,  -620,  -620,   647,   649,   663,   664,  -620,   582,
    -620,  -620,  1124,  -620,  1348,  -620,  1438,  1124,  1124,  1473,
    1473,   361,  -620,  -620,  -620,   675,   659,   629,  -620,   380,
    1473,   205,  1473,  -620,   680,  -620,  1473,  -620
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      61,     0,     0,     2,    58,    64,    60,    17,     1,    74,
       0,     0,    63,    65,    66,    67,    68,     4,     0,    62,
      56,     0,     0,    77,     0,    73,    75,    80,    81,    82,
      76,   187,    16,     0,     0,    69,     8,     0,     0,    10,
       0,     7,     6,     5,     0,    11,     9,    12,    14,    13,
      15,     3,     0,    57,     0,    85,    89,    85,    85,    57,
       0,    70,     0,    87,    84,     0,     0,    88,   190,     0,
      71,    72,    41,    95,     0,     0,    89,    86,    56,   100,
      35,    97,   163,   156,     0,   192,   189,   174,    89,     0,
      39,    40,    93,    92,    96,    91,    48,   122,    33,     0,
      98,     0,     0,   159,   162,   166,   193,     0,     0,   191,
      21,    24,    28,    30,    29,    26,    27,    25,     0,    18,
      20,    22,    23,    19,    31,    32,     0,   173,   177,   179,
       0,   453,     0,     0,     0,    90,     0,     0,   123,     0,
       0,   158,   161,   164,    79,   197,   188,   178,     0,     0,
      36,   172,   175,   183,   171,    42,    94,    79,   104,    83,
      44,     0,    53,    49,    45,    50,    34,    99,   155,   104,
       0,   160,     0,   194,     4,   180,    37,     0,     0,     4,
       0,   452,   101,     4,    47,     0,     0,    51,    52,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,   446,     0,   445,   340,   346,   351,   347,   348,   349,
     154,   350,   341,   367,   380,   382,     0,   381,   399,   401,
     403,   405,   407,   409,   411,   419,   414,   422,   426,   429,
     433,   434,   437,   440,   447,   448,   443,   444,     4,   157,
     165,     0,   201,   195,     0,   199,   200,   196,   198,    38,
     176,     4,   181,     0,   109,   184,   105,   108,   106,   107,
     182,   185,   110,   147,    43,   102,     0,   103,    54,    55,
     446,   347,   348,   442,     0,     0,   435,   438,   436,   439,
       0,     0,     0,   123,     0,   441,   155,     0,   123,     0,
       0,     0,   123,     0,   365,   390,   396,   388,   391,   392,
     389,   393,   387,   394,   395,   397,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
     450,    78,   130,   129,     0,     0,     0,    56,     0,   246,
       0,   305,   305,     0,     0,     0,   291,     0,     0,     0,
       0,   221,     0,     0,   220,   384,   216,     0,   217,   233,
     152,   212,   213,   214,     0,     0,   215,   222,   234,   223,
     235,     0,   224,   225,   236,   237,   226,   238,   227,   283,
     284,   239,   245,   240,   241,   243,   242,   244,   313,   346,
     349,   250,   251,   252,     0,   253,   254,    56,     0,   128,
       0,     0,     0,   345,     0,     0,   119,   378,   155,     0,
     119,   356,     0,     0,     0,    57,     0,     0,   344,   352,
       0,     0,   169,   355,   353,     0,     0,     0,   383,     0,
     402,   404,   406,   408,   410,   413,   412,   415,   417,   416,
     418,   420,   339,   421,   338,   423,   424,   425,   427,   428,
     432,   430,   431,     0,   146,   202,   145,     0,   128,     0,
       0,   304,     0,     0,    56,     0,   289,     0,     0,   290,
       0,     0,     0,     0,   315,     0,     0,     0,   209,     4,
     218,   119,   219,   113,   116,   249,   124,     0,     0,   127,
       4,     4,   186,   451,     0,   205,   374,   118,   372,   376,
       0,   375,   373,   155,   370,     0,   360,   155,     0,     0,
     123,   368,   358,   168,   167,   155,   369,   359,   366,     0,
     128,     4,   125,   247,     0,   260,   303,   307,     0,   296,
     300,     0,   288,   295,     0,   308,     0,     0,   309,   336,
     334,   330,   333,   335,     0,   347,     0,     0,   311,   318,
     315,     0,   306,   211,   117,   111,     0,   114,   144,   140,
     143,   148,     0,     0,   132,   136,   138,     0,   379,   208,
     121,   159,   204,   120,     0,   377,   169,     0,   268,   454,
       0,   357,     0,     0,   400,   126,     0,     0,     0,     0,
     298,   291,     0,     0,     0,   329,     0,   331,     4,     0,
     312,   316,   327,   314,     0,     0,   115,   141,     0,   149,
     134,   151,   206,     0,   354,   363,     0,   276,   270,   266,
       0,   361,   155,   371,   362,   119,   261,     0,     0,     0,
       0,    56,     0,     0,     0,   257,     0,   222,   229,   230,
     231,   232,   285,   286,   262,   310,   328,     0,     0,     0,
     324,   317,   326,   325,   280,   112,     0,     0,   137,     4,
       0,   203,   278,   279,     0,   267,     0,     0,     0,     0,
     131,     0,     0,   299,   293,     0,   289,     0,     0,     0,
     332,   323,     0,     0,   142,   139,   135,   207,   275,   264,
       0,   270,   263,   265,   272,   273,     0,   364,   282,   301,
       0,   292,   297,   248,   296,     0,     0,     0,   258,   321,
     320,   319,     0,   269,     4,   271,     0,     0,   291,     0,
       0,     0,   277,   274,   287,     0,     0,     0,   281,   322,
       0,   293,     0,   302,     0,   259,     0,   294
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -620,  -620,  -171,  -620,  -620,   -80,    57,  -620,  -620,  -620,
    -124,   -64,  -620,  -110,   562,  -620,  -620,  -620,  -620,  -620,
    -620,   548,  -620,  -620,  -620,   -11,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,   549,    14,
    -620,    72,  -620,   -29,  -620,   -39,  -620,  -620,  -620,  -620,
     612,  -620,  -620,   563,   530,   525,  -620,  -620,  -620,    95,
    -620,  -573,  -404,  -539,  -134,  -620,   463,  -418,   368,   255,
     190,  -620,  -620,    54,  -620,  -620,  -620,  -620,    59,   318,
    -620,  -620,  -620,   455,   234,   232,  -284,  -620,  -620,   153,
    -620,  -620,  -620,  -620,   561,   149,  -620,  -620,  -620,  -620,
    -620,  -620,   557,  -620,  -620,  -620,  -620,  -620,     4,  -229,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,   -87,  -620,
    -620,  -620,  -155,    20,  -620,   252,  -620,  -620,  -301,  -620,
     -58,  -126,  -446,  -620,  -620,  -620,  -620,  -461,  -620,  -620,
    -620,  -620,  -620,   143,  -620,  -620,    49,    76,  -620,  -595,
    -620,    26,  -620,  -620,  -620,  -620,  -620,  -620,    73,  -576,
       8,  -620,  -620,  -620,  -619,  -620,  -620,  -620,  -620,   410,
    -620,  -620,  -620,    79,  -620,  -620,   200,   203,  -620,   156,
    -620,  -620,  -620,   152,  -620,  -620,  -620,  -620,  -620,  -620,
     111,  -620,  -620,  -620,  -457,  -620,   -50,    40,    44,    71,
      91,  -620,  -620,  -620,  -620,   478,  -620,   261,  -146,  -620,
     122,  -620,  -620,  -510,  -620,   452,   454,   451,   461,   456,
     -38,  -620,    16,    18,   -28,   -59,   226,   253,  -620,   289,
     384,   447,  -620,  -620,  -620
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    24,    51,    10,   354,   119,   120,   121,   122,
     123,   124,   125,   497,    73,    90,    91,   181,    97,   136,
     137,   164,   165,   187,   188,   201,     3,     4,     5,     6,
       9,    12,    13,    14,    15,    16,    17,    25,   173,   356,
      27,    63,    76,    66,   134,    64,    74,    92,    77,    67,
      81,   100,   135,   513,   183,   267,   256,   482,   555,   483,
     557,   484,   498,   569,    98,   257,   398,   488,   336,   458,
     563,   564,   610,   565,   566,   489,   559,   607,   560,   455,
     258,   259,   399,   400,   492,   357,   202,    28,    83,   142,
     170,   103,   104,   143,   105,   514,   171,    29,    88,   126,
     127,   152,   128,   129,   154,   179,   260,   261,   262,    31,
      85,   108,    86,   109,   146,   174,   247,   248,   570,   571,
     572,   612,   359,   360,   479,   361,   362,   363,   364,   365,
     366,   636,   367,   368,   369,   638,   370,   371,   372,   373,
     639,   374,   375,   579,   667,   618,   664,   619,   665,   620,
     688,   662,   376,   640,   377,   378,   641,   379,   531,   468,
     700,   642,   532,   701,   533,   590,   380,   643,   381,   462,
     382,   383,   384,   385,   386,   387,   547,   548,   601,   549,
     649,   682,   709,   600,   388,   653,   475,   596,   541,   597,
     542,   543,   443,   444,   203,   204,   205,   206,   207,   208,
     209,   210,   294,   211,   212,   406,   499,   407,   213,   214,
     215,   216,   307,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   155,   237
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    79,   414,   244,   166,   530,   502,   118,   253,   584,
      33,    94,   266,   163,   150,   630,   544,   606,   473,   442,
      79,    30,   358,   666,   263,   131,    20,   415,   263,  -150,
     242,    26,    78,   454,   490,   658,   308,   163,   423,   616,
     522,   -59,    78,   177,   617,   275,   316,    95,    96,   317,
      78,  -337,   318,   319,    80,   702,     1,   314,   161,   130,
     408,   268,   269,   147,    80,     8,   481,   266,  -337,   690,
     185,    23,    99,    80,    18,   167,    80,   554,    80,   110,
      19,   111,   162,   263,   112,   148,   320,   315,   657,   113,
     162,   689,   404,     7,   186,   114,   144,   309,   118,   416,
     495,   115,   585,   116,   251,   243,   663,   251,    21,   710,
     416,   417,   702,   117,   418,   616,   264,   692,  -150,   690,
     617,   687,   157,   491,   500,   351,    80,   286,    80,    68,
      69,   273,   281,   276,   277,   278,   279,    99,   413,   287,
     616,   285,   726,   421,   288,   617,   637,   426,   282,   412,
      80,   408,   324,   283,   420,    11,   325,   149,   425,   289,
    -256,   428,   429,    99,   333,   529,  -256,    80,   673,    80,
     405,   409,   540,   333,    80,    80,    53,  -256,   246,   270,
     456,   270,   270,   270,   270,    80,   333,    54,   245,   270,
     544,   326,   275,   254,   460,   474,   441,   254,   327,   291,
     469,   389,   663,   472,   292,   334,    34,   477,    20,   189,
     328,   321,    35,   530,   334,   530,    32,   338,   322,   577,
     323,   670,   193,   580,    59,    20,   195,   334,   251,   637,
     331,   583,   252,    80,   271,    60,   271,   271,   271,   271,
     355,   509,    80,   456,   271,   251,   510,   329,   274,   265,
     358,   330,   254,   280,   333,    80,   251,   524,   494,   525,
    -170,   272,   358,   272,   272,   272,   272,   450,   451,   452,
     530,   272,  -255,   637,   637,  -447,   435,   436,  -255,  -447,
     196,   518,    55,  -448,   637,   465,   637,  -448,   459,  -255,
     637,    96,   197,   389,    52,   199,   448,   449,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,    80,
     270,   270,   270,   270,   270,   270,   270,   270,   496,   562,
     550,   534,   501,    80,   536,   537,    56,   419,    57,    58,
     551,   424,   437,   438,   439,   440,    61,    65,   669,   445,
     446,   447,   390,   493,    62,    70,   540,    71,    72,   573,
     562,    75,   508,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,    78,   271,   271,   271,   271,   271,
     271,   271,   271,   391,    82,   704,   582,    84,   587,    87,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   270,   272,   272,   272,   272,   272,   272,   272,   272,
      89,   523,    93,    96,    99,    80,   101,   102,   107,   389,
     573,   -35,    78,   132,   -46,   133,   389,   138,   139,    53,
     286,   141,   140,   558,   151,   145,   160,   648,   494,   389,
     153,   158,   287,   168,   390,   169,   172,   288,   175,   645,
      78,   389,   627,   628,   650,   469,   271,   178,   176,   180,
     177,   239,   289,   241,   284,   355,   290,   249,   310,   110,
     311,   111,   539,   293,   112,   391,   312,   313,   355,   113,
     402,   404,   403,   272,   411,   114,    80,   392,   422,   427,
     355,   115,   608,   116,   457,   358,   466,   110,   562,   111,
     461,  -384,   112,   117,  -384,   286,   467,   113,  -384,   480,
     470,  -384,   471,   114,   393,  -384,   332,   287,   270,   115,
    -384,   116,   288,   694,   573,   -35,  -384,   545,  -384,   476,
     478,   117,   696,  -384,   286,  -384,   481,   289,   711,  -446,
    -384,   706,   707,  -446,   635,   485,   287,   487,   490,   149,
     394,   288,   389,   503,   272,   504,   654,   505,   506,   703,
     390,    80,   507,   511,   389,   512,   289,   390,   515,   516,
     517,   519,   -19,   271,   521,   528,   526,   527,   535,   392,
     390,   725,   469,   459,   538,   546,   251,   552,   556,   389,
     491,   391,   390,  -133,   681,   574,  -384,   576,   391,   581,
     272,   588,   558,   727,   728,   578,   393,   589,   568,   605,
     592,   391,   591,   593,   733,   270,   735,   594,   595,   598,
     737,   604,   609,   391,   699,   615,   599,   523,   611,  -314,
     621,   708,   389,   622,   389,   389,   389,   623,   624,   389,
     625,   626,   394,   629,   646,   395,   539,    80,   647,   656,
     671,   659,   660,   672,   661,    80,   674,   675,   668,   676,
     677,   678,   679,  -228,   683,   685,   691,   729,   724,   697,
     271,   635,   654,   698,   389,   355,   389,   712,   713,   389,
     389,   716,   699,   715,   708,   717,   719,   720,   724,   718,
     389,   389,   389,   390,   721,   392,   389,   272,   730,   731,
     732,   545,   392,   736,   156,   390,   106,   159,   396,   238,
     655,   270,   453,   355,   255,   392,   182,   335,   520,   184,
      80,   586,   393,   686,   391,   684,   486,   392,   272,   393,
     390,   401,   561,   567,   613,   614,   391,   395,    20,   189,
     190,   553,   393,   240,   723,   250,   644,   191,   722,   734,
     714,   192,   193,   693,   393,   194,   195,   695,   394,   705,
     602,   391,   463,   603,   652,   394,   271,   651,   680,   410,
     575,   430,   432,   390,   431,   390,   390,   390,   394,   434,
     390,     0,     0,   433,     0,    20,   189,   190,     0,     0,
     394,     0,     0,   272,   191,     0,     0,     0,   192,   193,
     396,     0,   194,   195,   391,     0,   391,   391,   391,     0,
     196,   391,     0,     0,     0,   390,     0,   390,     0,     0,
     390,   390,   197,   198,     0,   199,   349,   176,   392,     0,
       0,   390,   390,   390,     0,     0,   251,   390,     0,     0,
     392,   200,     0,     0,     0,     0,   391,     0,   391,     0,
       0,   391,   391,   395,     0,   393,     0,   196,     0,     0,
     395,     0,   391,   391,   391,   392,     0,   393,   391,   197,
     198,     0,   199,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,     0,     0,   200,     0,
       0,   394,   393,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   394,    20,   189,   190,     0,   392,     0,
     392,   392,   392,   191,     0,   392,   396,   192,   193,     0,
       0,   194,   195,   396,     0,     0,     0,     0,   394,     0,
       0,     0,     0,     0,     0,   393,   396,   393,   393,   393,
       0,     0,   393,     0,     0,     0,     0,     0,   396,     0,
     392,     0,   392,     0,     0,   392,   392,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   392,   392,   392,     0,
       0,   394,   392,   394,   394,   394,   196,   393,   394,   393,
       0,     0,   393,   393,     0,     0,   395,     0,   197,   198,
       0,   199,     0,   393,   393,   393,     0,     0,   395,   393,
       0,     0,   495,     0,     0,     0,     0,   200,    20,   189,
     190,     0,     0,   394,     0,   394,     0,   191,   394,   394,
       0,   192,   193,   395,     0,   194,   195,     0,     0,   394,
     394,   394,     0,     0,     0,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   396,
       0,     0,     0,     0,     0,   110,     0,   111,     0,     0,
     112,   396,     0,     0,     0,   113,   395,     0,   395,   395,
     395,   114,     0,   395,     0,     0,     0,   115,     0,   116,
     196,     0,     0,     0,     0,     0,   396,     0,     0,   117,
       0,     0,   197,   198,     0,   199,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,     0,
     395,   200,     0,   395,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,   395,   395,     0,     0,   396,
     395,   396,   396,   396,     0,     0,   396,    20,   189,   190,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     192,   193,     0,     0,   194,   195,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   396,     0,   396,     0,     0,   396,   396,     0,     0,
       0,   337,   189,     0,     0,     0,     0,   396,   396,   396,
     338,     0,     0,   396,     0,   193,     0,     0,     0,   195,
       0,     0,     0,     0,     0,     0,     0,     0,   339,   196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,   198,     0,   199,     0,     0,   340,   110,   341,
     111,  -210,     0,   112,     0,   342,  -210,   343,   113,     0,
     200,     0,     0,     0,   114,   344,   345,     0,     0,     0,
     115,     0,   116,   196,     0,     0,     0,     0,     0,     0,
     346,     0,   117,     0,     0,   197,   347,   348,   199,   349,
       0,   337,   189,   350,   351,     0,    36,   352,   353,   251,
     338,     0,     0,  -210,    37,   193,     0,     0,     0,   195,
      38,     0,    39,     0,     0,     0,     0,     0,   339,     0,
       0,    40,     0,     0,     0,     0,    41,    42,    43,    44,
       0,    45,     0,    46,    47,     0,     0,   340,   110,   341,
     111,    48,    49,   112,     0,   342,    50,   343,   113,     0,
       0,     0,     0,     0,   114,   344,   345,     0,     0,     0,
     115,     0,   116,   196,     0,     0,     0,     0,     0,     0,
     346,     0,   117,     0,     0,   197,   347,   348,   199,   349,
       0,   337,   189,   350,   351,     0,     0,   352,   353,   251,
     338,     0,     0,  -153,     0,   193,     0,     0,     0,   195,
       0,     0,     0,     0,     0,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   340,   110,   341,
     111,   616,     0,   112,     0,   342,   617,   343,   113,     0,
       0,     0,     0,     0,   114,   344,   345,     0,     0,     0,
     115,     0,   116,   196,     0,     0,     0,     0,     0,     0,
     346,     0,   117,     0,     0,   197,   347,   348,   199,   349,
       0,   464,   189,   350,   351,     0,     0,   352,   353,   251,
     338,     0,     0,     0,     0,   193,     0,     0,     0,   195,
       0,     0,     0,     0,     0,     0,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,   631,   189,     0,     0,
       0,     0,     0,     0,     0,   338,     0,   340,     0,   341,
     193,     0,     0,     0,   195,   342,     0,   343,     0,     0,
       0,     0,     0,   339,     0,   344,   345,     0,     0,     0,
       0,     0,     0,   196,     0,     0,     0,     0,     0,     0,
     346,     0,   340,     0,   341,   197,   347,   348,   199,   349,
     342,    78,   343,   350,     0,     0,     0,   352,   353,   251,
     632,   633,     0,     0,     0,     0,     0,     0,   196,     0,
       0,     0,     0,     0,     0,   346,     0,     0,     0,    62,
     197,   347,   348,   199,   349,     0,     0,     0,   350,     0,
       0,   397,   634,   353,   251,     0,    36,     0,   110,     0,
     111,     0,     0,   112,    37,     0,     0,     0,   113,     0,
      38,     0,    39,     0,   114,     0,     0,     0,     0,    62,
     115,    40,   116,     0,     0,     0,    41,    42,    43,    44,
       0,    45,   117,    46,    47,     0,    36,     0,   110,     0,
     111,    48,    49,   112,    37,   332,    50,    78,   113,     0,
      38,     0,    39,     0,   114,     0,     0,     0,     0,     0,
     115,    40,   116,     0,     0,     0,    41,    42,    43,    44,
       0,    45,   117,    46,    47,     0,     0,     0,     0,     0,
       0,    48,    49,     0,     0,   332,    50,     0,     0,     0,
       0,     0,    36,     0,   110,     0,   111,     0,     0,   112,
       0,     0,     0,     0,   113,     0,     0,     0,    39,     0,
     114,     0,     0,     0,     0,     0,   115,     0,   116,     0,
       0,     0,    41,    42,    43,     0,     0,    45,   117,    46,
      47,     0,     0,  -385,     0,    78,  -385,    48,    49,     0,
    -385,     0,    50,  -385,     0,     0,     0,  -385,     0,     0,
       0,     0,  -385,     0,  -386,     0,     0,  -386,  -385,     0,
    -385,  -386,     0,     0,  -386,  -385,     0,  -385,  -386,     0,
       0,     0,  -385,  -386,     0,   295,     0,     0,   296,  -386,
      36,  -386,   297,     0,     0,   298,  -386,     0,  -386,   299,
      78,   189,     0,  -386,   300,     0,    39,     0,     0,   338,
     301,     0,   302,     0,   193,     0,     0,   303,   195,   304,
      41,    42,    43,     0,   305,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,    48,    49,     0,  -385,     0,
      50,     0,    78,   189,     0,     0,     0,   110,     0,   111,
       0,   338,   112,     0,     0,     0,     0,   113,     0,  -386,
       0,     0,     0,   114,     0,     0,     0,     0,     0,   115,
       0,   116,   196,     0,     0,     0,     0,     0,     0,     0,
     306,   117,     0,     0,   197,     0,     0,   199,     0,   110,
       0,   111,     0,   351,   112,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,   114,     0,     0,     0,     0,
       0,   115,     0,   116,   196,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,   197,     0,     0,   199,
       0,     0,     0,     0,     0,   351
};

static const yytype_int16 yycheck[] =
{
      11,    65,   286,   174,   138,   466,   410,    87,   179,   519,
      21,    75,   183,   137,   124,   591,   473,   556,    12,   320,
      84,    17,   251,   618,   179,    89,     3,     3,   183,    12,
      30,    17,     3,    30,    12,   608,    43,   161,     3,    53,
     458,     0,     3,    44,    58,   191,    31,    76,    31,    34,
       3,    13,    37,    38,    65,   674,    76,     6,    19,    88,
      12,   185,   186,     3,    75,     0,     3,   238,    30,   664,
      63,    30,    24,    84,    24,   139,    87,   481,    89,    50,
      30,    52,    43,   238,    55,    25,    71,    36,    25,    60,
      43,   105,    44,     3,    87,    66,   107,   104,   178,    75,
     101,    72,   520,    74,   101,   105,   616,   101,    85,   682,
      75,    87,   731,    84,    90,    53,   180,    30,   101,   714,
      58,   660,   133,   101,   408,    96,   137,    12,   139,    57,
      58,   190,   196,   192,   193,   194,   195,    24,   284,    24,
      53,   200,   718,   289,    29,    58,   592,   293,    24,   283,
     161,    12,    16,    29,   288,    70,    20,    44,   292,    44,
      13,   307,   308,    24,   244,   466,    19,   178,   629,   180,
     280,   281,   473,   253,   185,   186,     3,    30,   174,   190,
     335,   192,   193,   194,   195,   196,   266,    14,   174,   200,
     647,     7,   338,   179,   340,   350,   320,   183,    14,    24,
     346,   251,   712,   349,    29,   244,    24,   353,     3,     4,
      26,    32,    30,   674,   253,   676,     3,    12,    39,   503,
      41,   625,    17,   507,     3,     3,    21,   266,   101,   675,
     241,   515,   105,   244,   190,    14,   192,   193,   194,   195,
     251,    24,   253,   398,   200,   101,    29,    17,   191,   105,
     479,    21,   238,   196,   334,   266,   101,    28,   404,    30,
     105,   190,   491,   192,   193,   194,   195,   326,   327,   328,
     731,   200,    13,   719,   720,    17,   314,   315,    19,    21,
      75,   427,     3,    17,   730,   343,   732,    21,    28,    30,
     736,    31,    87,   343,    24,    90,   324,   325,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   405,   490,
     475,   467,   409,   334,   470,   471,     3,   287,     3,     3,
     476,   291,   316,   317,   318,   319,    30,    69,   622,   321,
     322,   323,   251,   402,    31,    30,   647,    30,     3,   495,
     521,    63,   416,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,     3,   321,   322,   323,   324,   325,
     326,   327,   328,   251,   101,   676,   510,    63,   524,    12,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   402,   321,   322,   323,   324,   325,   326,   327,   328,
      63,   459,    37,    31,    24,   416,    24,     3,    77,   459,
     556,     3,     3,    19,    37,    77,   466,     3,    19,     3,
      12,    19,    44,   487,    13,   101,    37,   598,   574,   479,
     101,   101,    24,    12,   343,    30,    19,    29,     3,   594,
       3,   491,   588,   589,   599,   591,   402,    19,    45,     9,
      44,   105,    44,    19,    12,   466,    13,    45,    10,    50,
     102,    52,   473,    44,    55,   343,    46,     9,   479,    60,
      13,    44,    13,   402,     3,    66,   487,   251,    45,    19,
     491,    72,   562,    74,     3,   714,    12,    50,   659,    52,
       3,     8,    55,    84,    11,    12,    12,    60,    15,    30,
      12,    18,    12,    66,   251,    22,    97,    24,   519,    72,
      27,    74,    29,   668,   660,     3,    33,   473,    35,    12,
     105,    84,   668,    40,    12,    42,     3,    44,   683,    17,
      47,   677,   678,    21,   592,    30,    24,    92,    12,    44,
     251,    29,   592,    12,   473,     3,   604,    13,    13,   675,
     459,   562,    12,     3,   604,    45,    44,   466,    12,     3,
      45,    28,     3,   519,    12,    99,    30,    30,    30,   343,
     479,   717,   718,    28,    30,    54,   101,    30,    35,   629,
     101,   459,   491,    13,   648,    44,   103,    13,   466,     3,
     519,    12,   656,   719,   720,   101,   343,    28,    45,    19,
      13,   479,    30,    13,   730,   616,   732,    13,    30,    12,
     736,    13,    13,   491,   672,    13,    65,   675,   105,    65,
      13,   679,   672,    12,   674,   675,   676,     3,    13,   679,
      13,    30,   343,    19,    13,   251,   647,   648,    30,    19,
      13,    19,    19,    13,   105,   656,    30,    28,    23,    12,
      12,    12,    61,    61,    13,     3,    28,   721,   716,    13,
     616,   719,   720,    30,   714,   676,   716,    19,    28,   719,
     720,    13,   730,    30,   732,    28,    13,    13,   736,    30,
     730,   731,   732,   592,   102,   459,   736,   616,    13,    30,
      61,   647,   466,    13,   132,   604,    84,   134,   251,   169,
     605,   712,   334,   714,   179,   479,   157,   244,   453,   161,
     721,   521,   459,   659,   592,   656,   398,   491,   647,   466,
     629,   266,   488,   491,   571,   576,   604,   343,     3,     4,
       5,   479,   479,   172,   714,   178,   593,    12,   712,   731,
     691,    16,    17,   667,   491,    20,    21,   668,   459,   676,
     550,   629,   342,   550,   602,   466,   712,   601,   647,   281,
     499,   309,   311,   672,   310,   674,   675,   676,   479,   313,
     679,    -1,    -1,   312,    -1,     3,     4,     5,    -1,    -1,
     491,    -1,    -1,   712,    12,    -1,    -1,    -1,    16,    17,
     343,    -1,    20,    21,   672,    -1,   674,   675,   676,    -1,
      75,   679,    -1,    -1,    -1,   714,    -1,   716,    -1,    -1,
     719,   720,    87,    88,    -1,    90,    91,    45,   592,    -1,
      -1,   730,   731,   732,    -1,    -1,   101,   736,    -1,    -1,
     604,   106,    -1,    -1,    -1,    -1,   714,    -1,   716,    -1,
      -1,   719,   720,   459,    -1,   592,    -1,    75,    -1,    -1,
     466,    -1,   730,   731,   732,   629,    -1,   604,   736,    87,
      88,    -1,    90,   479,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,   106,    -1,
      -1,   592,   629,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   604,     3,     4,     5,    -1,   672,    -1,
     674,   675,   676,    12,    -1,   679,   459,    16,    17,    -1,
      -1,    20,    21,   466,    -1,    -1,    -1,    -1,   629,    -1,
      -1,    -1,    -1,    -1,    -1,   672,   479,   674,   675,   676,
      -1,    -1,   679,    -1,    -1,    -1,    -1,    -1,   491,    -1,
     714,    -1,   716,    -1,    -1,   719,   720,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   730,   731,   732,    -1,
      -1,   672,   736,   674,   675,   676,    75,   714,   679,   716,
      -1,    -1,   719,   720,    -1,    -1,   592,    -1,    87,    88,
      -1,    90,    -1,   730,   731,   732,    -1,    -1,   604,   736,
      -1,    -1,   101,    -1,    -1,    -1,    -1,   106,     3,     4,
       5,    -1,    -1,   714,    -1,   716,    -1,    12,   719,   720,
      -1,    16,    17,   629,    -1,    20,    21,    -1,    -1,   730,
     731,   732,    -1,    -1,    -1,   736,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   592,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,
      55,   604,    -1,    -1,    -1,    60,   672,    -1,   674,   675,
     676,    66,    -1,   679,    -1,    -1,    -1,    72,    -1,    74,
      75,    -1,    -1,    -1,    -1,    -1,   629,    -1,    -1,    84,
      -1,    -1,    87,    88,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   714,    -1,
     716,   106,    -1,   719,   720,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   730,   731,   732,    -1,    -1,   672,
     736,   674,   675,   676,    -1,    -1,   679,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      16,    17,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   714,    -1,   716,    -1,    -1,   719,   720,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,    -1,   730,   731,   732,
      12,    -1,    -1,   736,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    -1,    90,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    -1,    57,    58,    59,    60,    -1,
     106,    -1,    -1,    -1,    66,    67,    68,    -1,    -1,    -1,
      72,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    84,    -1,    -1,    87,    88,    89,    90,    91,
      -1,     3,     4,    95,    96,    -1,    48,    99,   100,   101,
      12,    -1,    -1,   105,    56,    17,    -1,    -1,    -1,    21,
      62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    -1,    85,    86,    -1,    -1,    49,    50,    51,
      52,    93,    94,    55,    -1,    57,    98,    59,    60,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    -1,    -1,    -1,
      72,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    84,    -1,    -1,    87,    88,    89,    90,    91,
      -1,     3,     4,    95,    96,    -1,    -1,    99,   100,   101,
      12,    -1,    -1,   105,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    55,    -1,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    -1,    -1,    -1,
      72,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    84,    -1,    -1,    87,    88,    89,    90,    91,
      -1,     3,     4,    95,    96,    -1,    -1,    99,   100,   101,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    49,    -1,    51,
      17,    -1,    -1,    -1,    21,    57,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    49,    -1,    51,    87,    88,    89,    90,    91,
      57,     3,    59,    95,    -1,    -1,    -1,    99,   100,   101,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    31,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,
      -1,     3,    99,   100,   101,    -1,    48,    -1,    50,    -1,
      52,    -1,    -1,    55,    56,    -1,    -1,    -1,    60,    -1,
      62,    -1,    64,    -1,    66,    -1,    -1,    -1,    -1,    31,
      72,    73,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    86,    -1,    48,    -1,    50,    -1,
      52,    93,    94,    55,    56,    97,    98,     3,    60,    -1,
      62,    -1,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,
      -1,    -1,    78,    79,    80,    -1,    -1,    83,    84,    85,
      86,    -1,    -1,     8,    -1,     3,    11,    93,    94,    -1,
      15,    -1,    98,    18,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27,    -1,     8,    -1,    -1,    11,    33,    -1,
      35,    15,    -1,    -1,    18,    40,    -1,    42,    22,    -1,
      -1,    -1,    47,    27,    -1,     8,    -1,    -1,    11,    33,
      48,    35,    15,    -1,    -1,    18,    40,    -1,    42,    22,
       3,     4,    -1,    47,    27,    -1,    64,    -1,    -1,    12,
      33,    -1,    35,    -1,    17,    -1,    -1,    40,    21,    42,
      78,    79,    80,    -1,    47,    83,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    -1,   103,    -1,
      98,    -1,     3,     4,    -1,    -1,    -1,    50,    -1,    52,
      -1,    12,    55,    -1,    -1,    -1,    -1,    60,    -1,   103,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    84,    -1,    -1,    87,    -1,    -1,    90,    -1,    50,
      -1,    52,    -1,    96,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    96
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    76,   108,   133,   134,   135,   136,     3,     0,   137,
     111,    70,   138,   139,   140,   141,   142,   143,    24,    30,
       3,    85,   132,    30,   109,   144,   146,   147,   194,   204,
     215,   216,     3,   132,    24,    30,    48,    56,    62,    64,
      73,    78,    79,    80,    81,    83,    85,    86,    93,    94,
      98,   110,    24,     3,    14,     3,     3,     3,     3,     3,
      14,    30,    31,   148,   152,    69,   150,   156,   148,   148,
      30,    30,     3,   121,   153,    63,   149,   155,     3,   118,
     132,   157,   101,   195,    63,   217,   219,    12,   205,    63,
     122,   123,   154,    37,   118,   150,    31,   125,   171,    24,
     158,    24,     3,   198,   199,   201,   157,    77,   218,   220,
      50,    52,    55,    60,    66,    72,    74,    84,   112,   113,
     114,   115,   116,   117,   118,   119,   206,   207,   209,   210,
     150,   118,    19,    77,   151,   159,   126,   127,     3,    19,
      44,    19,   196,   200,   132,   101,   221,     3,    25,    44,
     120,    13,   208,   101,   211,   340,   121,   132,   101,   160,
      37,    19,    43,   117,   128,   129,   171,   118,    12,    30,
     197,   203,    19,   145,   222,     3,    45,    44,    19,   212,
       9,   124,   145,   161,   128,    63,    87,   130,   131,     4,
       5,    12,    16,    17,    20,    21,    75,    87,    88,    90,
     106,   132,   193,   301,   302,   303,   304,   305,   306,   307,
     308,   310,   311,   315,   316,   317,   318,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   341,   161,   105,
     201,    19,    30,   105,   109,   146,   215,   223,   224,    45,
     209,   101,   105,   109,   146,   162,   163,   172,   187,   188,
     213,   214,   215,   229,   118,   105,   109,   162,   117,   117,
     132,   305,   306,   332,   113,   315,   332,   332,   332,   332,
     113,   118,    24,    29,    12,   332,    12,    24,    29,    44,
      13,    24,    29,    44,   309,     8,    11,    15,    18,    22,
      27,    33,    35,    40,    42,    47,   103,   319,    43,   104,
      10,   102,    46,     9,     6,    36,    31,    34,    37,    38,
      71,    32,    39,    41,    16,    20,     7,    14,    26,    17,
      21,   132,    97,   112,   152,   173,   175,     3,    12,    30,
      49,    51,    57,    59,    67,    68,    82,    88,    89,    91,
      95,    96,    99,   100,   112,   132,   146,   192,   216,   229,
     230,   232,   233,   234,   235,   236,   237,   239,   240,   241,
     243,   244,   245,   246,   248,   249,   259,   261,   262,   264,
     273,   275,   277,   278,   279,   280,   281,   282,   291,   303,
     307,   317,   333,   334,   336,   337,   338,     3,   173,   189,
     190,   190,    13,    13,    44,   120,   312,   314,    12,   120,
     312,     3,   171,   315,   193,     3,    75,    87,    90,   304,
     171,   315,    45,     3,   304,   171,   315,    19,   315,   315,
     322,   323,   324,   325,   326,   327,   327,   329,   329,   329,
     329,   117,   235,   299,   300,   330,   330,   330,   331,   331,
     332,   332,   332,   175,    30,   186,   229,     3,   176,    28,
     315,     3,   276,   276,     3,   237,    12,    12,   266,   315,
      12,    12,   315,    12,   229,   293,    12,   315,   105,   231,
      30,     3,   164,   166,   168,    30,   186,    92,   174,   182,
      12,   101,   191,   332,   315,   101,   225,   120,   169,   313,
     193,   225,   169,    12,     3,    13,    13,    12,   118,    24,
      29,     3,    45,   160,   202,    12,     3,    45,   315,    28,
     176,    12,   174,   237,    28,    30,    30,    30,    99,   235,
     244,   265,   269,   271,   315,    30,   315,   315,    30,   132,
     235,   295,   297,   298,   301,   305,    54,   283,   284,   286,
     229,   315,    30,   232,   169,   165,    35,   167,   118,   183,
     185,   191,   109,   177,   178,   180,   181,   192,    45,   170,
     225,   226,   227,   315,    44,   314,    13,   193,   101,   250,
     193,     3,   171,   193,   320,   174,   177,   315,    12,    28,
     272,    30,    13,    13,    13,    30,   294,   296,    12,    65,
     290,   285,   283,   284,    13,    19,   170,   184,   112,    13,
     179,   105,   228,   196,   202,    13,    53,    58,   252,   254,
     256,    13,    12,     3,    13,    13,    30,   315,   315,    19,
     266,     3,    67,    68,    99,   237,   238,   239,   242,   247,
     260,   263,   268,   274,   250,   229,    13,    30,   109,   287,
     229,   286,   290,   292,   237,   166,    19,    25,   168,    19,
      19,   105,   258,   320,   253,   255,   256,   251,    23,   193,
     169,    13,    13,   244,    30,    28,    12,    12,    12,    61,
     297,   118,   288,    13,   185,     3,   180,   170,   257,   105,
     256,    28,    30,   254,   229,   280,   315,    13,    30,   237,
     267,   270,   271,   238,   235,   265,   315,   315,   237,   289,
     168,   229,    19,    28,   253,    30,    13,    28,    30,    13,
      13,   102,   258,   230,   237,   315,   266,   238,   238,   118,
      13,    30,    61,   238,   267,   238,    13,   238
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
     146,   146,   146,   147,   148,   148,   149,   149,   150,   150,
     151,   151,   152,   153,   154,   154,   155,   156,   157,   158,
     158,   159,   160,   161,   161,   162,   162,   162,   163,   163,
     163,   164,   165,   165,   166,   167,   167,   168,   169,   169,
     170,   170,   171,   171,   172,   173,   173,   174,   174,   175,
     175,   176,   177,   177,   178,   179,   179,   180,   180,   181,
     182,   183,   184,   184,   185,   186,   186,   187,   188,   189,
     190,   191,   192,   192,   193,   193,   194,   195,   196,   196,
     197,   197,   198,   198,   199,   200,   200,   201,   202,   202,
     203,   204,   205,   206,   206,   207,   208,   208,   209,   209,
     210,   211,   212,   212,   213,   213,   214,   215,   216,   217,
     217,   218,   218,   219,   220,   221,   222,   222,   223,   223,
     223,   223,   224,   225,   226,   226,   227,   228,   228,   229,
     230,   231,   231,   232,   232,   232,   233,   233,   234,   235,
     236,   236,   237,   237,   237,   237,   237,   237,   238,   238,
     238,   238,   238,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   240,   241,   242,   243,
     244,   244,   244,   244,   244,   244,   244,   245,   246,   247,
     248,   248,   249,   250,   250,   251,   251,   252,   252,   253,
     253,   254,   254,   254,   255,   256,   256,   257,   257,   258,
     259,   260,   261,   262,   262,   263,   263,   264,   265,   265,
     266,   266,   267,   267,   268,   269,   269,   270,   271,   272,
     272,   273,   274,   275,   276,   276,   277,   278,   279,   280,
     281,   282,   282,   282,   283,   283,   284,   285,   285,   286,
     287,   288,   289,   289,   290,   291,   292,   292,   293,   294,
     294,   295,   296,   296,   297,   297,   298,   298,   299,   300,
     301,   301,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   303,   303,   303,   304,   305,   305,   305,   306,   306,
     307,   307,   307,   307,   307,   308,   309,   309,   310,   310,
     310,   310,   311,   311,   311,   311,   312,   313,   313,   314,
     315,   316,   316,   317,   318,   318,   318,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   320,
     320,   321,   321,   322,   322,   323,   323,   324,   324,   325,
     325,   326,   326,   326,   327,   327,   327,   327,   327,   327,
     328,   328,   329,   329,   329,   329,   330,   330,   330,   331,
     331,   331,   331,   332,   332,   332,   332,   332,   333,   334,
     335,   335,   335,   335,   335,   336,   336,   336,   336,   337,
     338,   339,   340,   340,   341
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
       1,     1,     1,     8,     1,     0,     1,     0,     1,     0,
       1,     0,     3,     2,     3,     0,     2,     2,     2,     3,
       0,     3,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     2,     3,     0,     2,     2,     0,     2,     1,     0,
       1,     1,     1,     0,     3,     3,     4,     1,     0,     1,
       1,     5,     1,     0,     2,     3,     0,     3,     1,     4,
       2,     2,     3,     0,     1,     1,     1,     1,     4,     4,
       1,     3,     1,     0,     1,     0,     5,     5,     1,     0,
       1,     0,     1,     0,     2,     3,     0,     7,     1,     0,
       2,     7,     3,     1,     0,     2,     3,     0,     2,     1,
       3,     3,     2,     0,     1,     1,     3,     1,     7,     1,
       0,     1,     0,     2,     3,     3,     2,     0,     1,     1,
       1,     1,     3,     4,     1,     0,     2,     3,     0,     3,
       2,     2,     0,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     7,
       3,     5,     5,     4,     4,     2,     0,     2,     0,     3,
       0,     4,     3,     3,     4,     3,     1,     3,     0,     1,
       5,     5,     7,     1,     1,     1,     1,     9,     1,     0,
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
  case 2: /* input: compilation_unit  */
#line 379 "parser.y"
                                        {(yyval.i)=createNode("input");startNode=(yyval.i);if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2311 "parser.tab.c"
    break;

  case 3: /* modifier.multiopt: modifier.multiopt modifier  */
#line 382 "parser.y"
                                                {(yyval.i)=createNode("modifier.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2317 "parser.tab.c"
    break;

  case 4: /* modifier.multiopt: %empty  */
#line 383 "parser.y"
                                {(yyval.i)=-1;}
#line 2323 "parser.tab.c"
    break;

  case 5: /* modifier: "public"  */
#line 386 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2329 "parser.tab.c"
    break;

  case 6: /* modifier: "protected"  */
#line 387 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2335 "parser.tab.c"
    break;

  case 7: /* modifier: "private"  */
#line 388 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2341 "parser.tab.c"
    break;

  case 8: /* modifier: "abstract"  */
#line 389 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2347 "parser.tab.c"
    break;

  case 9: /* modifier: "static"  */
#line 390 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2353 "parser.tab.c"
    break;

  case 10: /* modifier: "final"  */
#line 391 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2359 "parser.tab.c"
    break;

  case 11: /* modifier: "sealed"  */
#line 392 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2365 "parser.tab.c"
    break;

  case 12: /* modifier: "strictfp"  */
#line 393 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2371 "parser.tab.c"
    break;

  case 13: /* modifier: "transitive"  */
#line 394 "parser.y"
                                        {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2377 "parser.tab.c"
    break;

  case 14: /* modifier: "transient"  */
#line 395 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2383 "parser.tab.c"
    break;

  case 15: /* modifier: "volatile"  */
#line 396 "parser.y"
                                {(yyval.i)=createNode("modifier");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2389 "parser.tab.c"
    break;

  case 16: /* dot_ind.multiopt: dot_ind.multiopt "." TOK_IDENTIFIER  */
#line 399 "parser.y"
                                                                {(yyval.i)=createNode("dot_ind.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2395 "parser.tab.c"
    break;

  case 17: /* dot_ind.multiopt: %empty  */
#line 400 "parser.y"
                                {(yyval.i)=-1;}
#line 2401 "parser.tab.c"
    break;

  case 18: /* type: primitive_type  */
#line 404 "parser.y"
                                        {(yyval.i)=createNode("type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2407 "parser.tab.c"
    break;

  case 19: /* type: reference_type  */
#line 405 "parser.y"
                                        {(yyval.i)=createNode("type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2413 "parser.tab.c"
    break;

  case 20: /* primitive_type: numeric_type  */
#line 408 "parser.y"
                                {(yyval.i)=createNode("primitive_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2419 "parser.tab.c"
    break;

  case 21: /* primitive_type: "boolean"  */
#line 409 "parser.y"
                                {(yyval.i)=createNode("primitive_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2425 "parser.tab.c"
    break;

  case 22: /* numeric_type: integral_type  */
#line 412 "parser.y"
                                {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2431 "parser.tab.c"
    break;

  case 23: /* numeric_type: floating_point_type  */
#line 413 "parser.y"
                                        {(yyval.i)=createNode("numeric_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2437 "parser.tab.c"
    break;

  case 24: /* integral_type: "byte"  */
#line 416 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2443 "parser.tab.c"
    break;

  case 25: /* integral_type: "short"  */
#line 417 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2449 "parser.tab.c"
    break;

  case 26: /* integral_type: "int"  */
#line 418 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2455 "parser.tab.c"
    break;

  case 27: /* integral_type: "long"  */
#line 419 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2461 "parser.tab.c"
    break;

  case 28: /* integral_type: "char"  */
#line 420 "parser.y"
                                {(yyval.i)=createNode("integral_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2467 "parser.tab.c"
    break;

  case 29: /* floating_point_type: "float"  */
#line 423 "parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2473 "parser.tab.c"
    break;

  case 30: /* floating_point_type: "double"  */
#line 424 "parser.y"
                                {(yyval.i)=createNode("floating_point_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2479 "parser.tab.c"
    break;

  case 31: /* reference_type: class_or_interface_type  */
#line 427 "parser.y"
                                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2485 "parser.tab.c"
    break;

  case 32: /* reference_type: array_type  */
#line 428 "parser.y"
                                {(yyval.i)=createNode("reference_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2491 "parser.tab.c"
    break;

  case 33: /* class_or_interface_type: TOK_IDENTIFIER type_arguments.opt  */
#line 431 "parser.y"
                                                        {(yyval.i)=createNode("class_or_interface_type");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2497 "parser.tab.c"
    break;

  case 34: /* class_or_interface_type: class_or_interface_type "." TOK_IDENTIFIER type_arguments.opt  */
#line 432 "parser.y"
                                                                                        {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2503 "parser.tab.c"
    break;

  case 35: /* class_or_interface_type: un_name  */
#line 433 "parser.y"
                                {(yyval.i)=createNode("class_or_interface_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2509 "parser.tab.c"
    break;

  case 36: /* array_type: class_or_interface_type dims  */
#line 436 "parser.y"
                                                {(yyval.i)=createNode("array_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2515 "parser.tab.c"
    break;

  case 37: /* dims: "[" "]"  */
#line 439 "parser.y"
                                {(yyval.i)=createNode("dims");addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2521 "parser.tab.c"
    break;

  case 38: /* dims: dims "[" "]"  */
#line 440 "parser.y"
                                        {(yyval.i)=createNode("dims");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2527 "parser.tab.c"
    break;

  case 39: /* type_parameter: TOK_IDENTIFIER type_bound.opt  */
#line 443 "parser.y"
                                                        {(yyval.i)=createNode("type_parameter");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2533 "parser.tab.c"
    break;

  case 40: /* type_bound.opt: type_bound  */
#line 446 "parser.y"
                                {(yyval.i)=createNode("type_bound.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2539 "parser.tab.c"
    break;

  case 41: /* type_bound.opt: %empty  */
#line 447 "parser.y"
                                {(yyval.i)=-1;}
#line 2545 "parser.tab.c"
    break;

  case 42: /* type_bound: "extends" class_or_interface_type additional_bound.multiopt  */
#line 450 "parser.y"
                                                                                        {(yyval.i)=createNode("type_bound");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2551 "parser.tab.c"
    break;

  case 43: /* additional_bound: "&" class_or_interface_type  */
#line 453 "parser.y"
                                                        {(yyval.i)=createNode("additional_bound");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2557 "parser.tab.c"
    break;

  case 44: /* type_arguments: "<" type_argument_list ">"  */
#line 456 "parser.y"
                                                        {(yyval.i)=createNode("type_arguments");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2563 "parser.tab.c"
    break;

  case 45: /* type_argument_list: type_argument.multiopt type_argument  */
#line 459 "parser.y"
                                                        {(yyval.i)=createNode("type_argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2569 "parser.tab.c"
    break;

  case 46: /* type_argument_list: %empty  */
#line 460 "parser.y"
                                {(yyval.i)=-1;}
#line 2575 "parser.tab.c"
    break;

  case 47: /* type_argument.multiopt: type_argument.multiopt "," type_argument  */
#line 463 "parser.y"
                                                                {(yyval.i)=createNode("type_argument.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2581 "parser.tab.c"
    break;

  case 48: /* type_argument.multiopt: %empty  */
#line 464 "parser.y"
                                {(yyval.i)=-1;}
#line 2587 "parser.tab.c"
    break;

  case 49: /* type_argument: reference_type  */
#line 467 "parser.y"
                                        {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2593 "parser.tab.c"
    break;

  case 50: /* type_argument: wildcard  */
#line 468 "parser.y"
                                {(yyval.i)=createNode("type_argument");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2599 "parser.tab.c"
    break;

  case 51: /* wildcard: "?" wildcard_bounds.opt  */
#line 471 "parser.y"
                                                {(yyval.i)=createNode("wildcard");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2605 "parser.tab.c"
    break;

  case 52: /* wildcard_bounds.opt: wildcard_bounds  */
#line 474 "parser.y"
                                        {(yyval.i)=createNode("wildcard_bounds.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2611 "parser.tab.c"
    break;

  case 53: /* wildcard_bounds.opt: %empty  */
#line 475 "parser.y"
                                {(yyval.i)=-1;}
#line 2617 "parser.tab.c"
    break;

  case 54: /* wildcard_bounds: "extends" reference_type  */
#line 478 "parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2623 "parser.tab.c"
    break;

  case 55: /* wildcard_bounds: "super" reference_type  */
#line 479 "parser.y"
                                                {(yyval.i)=createNode("wildcard_bounds");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2629 "parser.tab.c"
    break;

  case 56: /* un_name: TOK_IDENTIFIER  */
#line 484 "parser.y"
                                        {(yyval.i)=createNode("un_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2635 "parser.tab.c"
    break;

  case 57: /* un_name: un_name "." TOK_IDENTIFIER  */
#line 485 "parser.y"
                                                {(yyval.i)=createNode("un_name");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2641 "parser.tab.c"
    break;

  case 58: /* compilation_unit: ordinary_compilation_unit  */
#line 491 "parser.y"
                                                {(yyval.i)=createNode("compilation_unit");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2647 "parser.tab.c"
    break;

  case 59: /* ordinary_compilation_unit: package_declaration.opt import_declaration.multiopt top_level_class_or_interface_declaration.multiopt  */
#line 494 "parser.y"
                                                                                                                        {(yyval.i)=createNode("ordinary_compilation_unit");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2653 "parser.tab.c"
    break;

  case 60: /* package_declaration.opt: package_declaration  */
#line 497 "parser.y"
                                        {(yyval.i)=createNode("package_declaration.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2659 "parser.tab.c"
    break;

  case 61: /* package_declaration.opt: %empty  */
#line 498 "parser.y"
                                {(yyval.i)=-1;}
#line 2665 "parser.tab.c"
    break;

  case 62: /* package_declaration: "package" TOK_IDENTIFIER dot_ind.multiopt ";"  */
#line 501 "parser.y"
                                                                        {(yyval.i)=createNode("package_declaration");addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2671 "parser.tab.c"
    break;

  case 63: /* import_declaration.multiopt: import_declaration.multiopt import_declaration  */
#line 504 "parser.y"
                                                                        {(yyval.i)=createNode("import_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2677 "parser.tab.c"
    break;

  case 64: /* import_declaration.multiopt: %empty  */
#line 505 "parser.y"
                                {(yyval.i)=-1;}
#line 2683 "parser.tab.c"
    break;

  case 65: /* import_declaration: single_type_import_declaration  */
#line 508 "parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2689 "parser.tab.c"
    break;

  case 66: /* import_declaration: type_import_on_demand_declaration  */
#line 509 "parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2695 "parser.tab.c"
    break;

  case 67: /* import_declaration: single_static_import_declaration  */
#line 510 "parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2701 "parser.tab.c"
    break;

  case 68: /* import_declaration: static_import_on_demand_declaration  */
#line 511 "parser.y"
                                                        {(yyval.i)=createNode("import_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2707 "parser.tab.c"
    break;

  case 69: /* single_type_import_declaration: "import" un_name ";"  */
#line 514 "parser.y"
                                                {(yyval.i)=createNode("single_type_import_declaration");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2713 "parser.tab.c"
    break;

  case 70: /* type_import_on_demand_declaration: "import" un_name "." "*" ";"  */
#line 517 "parser.y"
                                                                {(yyval.i)=createNode("type_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2719 "parser.tab.c"
    break;

  case 71: /* single_static_import_declaration: "import" "static" un_name "." TOK_IDENTIFIER ";"  */
#line 520 "parser.y"
                                                                                {(yyval.i)=createNode("single_static_import_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2725 "parser.tab.c"
    break;

  case 72: /* static_import_on_demand_declaration: "import" "static" un_name "." "*" ";"  */
#line 523 "parser.y"
                                                                        {(yyval.i)=createNode("static_import_on_demand_declaration");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2731 "parser.tab.c"
    break;

  case 73: /* top_level_class_or_interface_declaration.multiopt: top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration  */
#line 526 "parser.y"
                                                                                                                {(yyval.i)=createNode("top_level_class_or_interface_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2737 "parser.tab.c"
    break;

  case 74: /* top_level_class_or_interface_declaration.multiopt: %empty  */
#line 527 "parser.y"
                                {(yyval.i)=-1;}
#line 2743 "parser.tab.c"
    break;

  case 75: /* top_level_class_or_interface_declaration: class_declaration  */
#line 530 "parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2749 "parser.tab.c"
    break;

  case 76: /* top_level_class_or_interface_declaration: interface_declaration  */
#line 531 "parser.y"
                                        {(yyval.i)=createNode("top_level_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2755 "parser.tab.c"
    break;

  case 77: /* top_level_class_or_interface_declaration: ";"  */
#line 532 "parser.y"
                                {(yyval.i)=createNode("top_level_class_or_interface_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2761 "parser.tab.c"
    break;

  case 78: /* com_type_name.multiopt: com_type_name.multiopt "," un_name  */
#line 535 "parser.y"
                                                        {(yyval.i)=createNode("com_type_name.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2767 "parser.tab.c"
    break;

  case 79: /* com_type_name.multiopt: %empty  */
#line 536 "parser.y"
                                {(yyval.i)=-1;}
#line 2773 "parser.tab.c"
    break;

  case 80: /* class_declaration: normal_class_declaration  */
#line 541 "parser.y"
                                                {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2779 "parser.tab.c"
    break;

  case 81: /* class_declaration: enum_declaration  */
#line 542 "parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2785 "parser.tab.c"
    break;

  case 82: /* class_declaration: record_declaration  */
#line 543 "parser.y"
                                        {(yyval.i)=createNode("class_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2791 "parser.tab.c"
    break;

  case 83: /* normal_class_declaration: modifier.multiopt "class" TOK_IDENTIFIER type_parameters.opt class_extends.opt class_implements.opt class_permits.opt class_body  */
#line 546 "parser.y"
                                                                                                                                                        {(yyval.i)=createNode("normal_class_declaration");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2797 "parser.tab.c"
    break;

  case 84: /* type_parameters.opt: type_parameters  */
#line 549 "parser.y"
                                        {(yyval.i)=createNode("type_parameters.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2803 "parser.tab.c"
    break;

  case 85: /* type_parameters.opt: %empty  */
#line 550 "parser.y"
                                {(yyval.i)=-1;}
#line 2809 "parser.tab.c"
    break;

  case 86: /* class_extends.opt: class_extends  */
#line 553 "parser.y"
                                {(yyval.i)=createNode("class_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2815 "parser.tab.c"
    break;

  case 87: /* class_extends.opt: %empty  */
#line 554 "parser.y"
                                {(yyval.i)=-1;}
#line 2821 "parser.tab.c"
    break;

  case 88: /* class_implements.opt: class_implements  */
#line 557 "parser.y"
                                        {(yyval.i)=createNode("class_implements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2827 "parser.tab.c"
    break;

  case 89: /* class_implements.opt: %empty  */
#line 558 "parser.y"
                                {(yyval.i)=-1;}
#line 2833 "parser.tab.c"
    break;

  case 90: /* class_permits.opt: class_permits  */
#line 561 "parser.y"
                                {(yyval.i)=createNode("class_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2839 "parser.tab.c"
    break;

  case 91: /* class_permits.opt: %empty  */
#line 562 "parser.y"
                                {(yyval.i)=-1;}
#line 2845 "parser.tab.c"
    break;

  case 92: /* type_parameters: "<" type_parameter_list ">"  */
#line 565 "parser.y"
                                                        {(yyval.i)=createNode("type_parameters");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2851 "parser.tab.c"
    break;

  case 93: /* type_parameter_list: type_parameter com_type_parameter.multiopt  */
#line 568 "parser.y"
                                                                {(yyval.i)=createNode("type_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2857 "parser.tab.c"
    break;

  case 94: /* com_type_parameter.multiopt: com_type_parameter.multiopt "," type_parameter  */
#line 571 "parser.y"
                                                                        {(yyval.i)=createNode("com_type_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2863 "parser.tab.c"
    break;

  case 95: /* com_type_parameter.multiopt: %empty  */
#line 572 "parser.y"
                                {(yyval.i)=-1;}
#line 2869 "parser.tab.c"
    break;

  case 96: /* class_extends: "extends" class_or_interface_type  */
#line 575 "parser.y"
                                                        {(yyval.i)=createNode("class_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2875 "parser.tab.c"
    break;

  case 97: /* class_implements: "implements" interface_type_list  */
#line 578 "parser.y"
                                                        {(yyval.i)=createNode("class_implements");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2881 "parser.tab.c"
    break;

  case 98: /* interface_type_list: class_or_interface_type com_interface_type.multiopt  */
#line 581 "parser.y"
                                                                        {(yyval.i)=createNode("interface_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2887 "parser.tab.c"
    break;

  case 99: /* com_interface_type.multiopt: com_interface_type.multiopt "," class_or_interface_type  */
#line 584 "parser.y"
                                                                                {(yyval.i)=createNode("com_interface_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2893 "parser.tab.c"
    break;

  case 100: /* com_interface_type.multiopt: %empty  */
#line 585 "parser.y"
                                {(yyval.i)=-1;}
#line 2899 "parser.tab.c"
    break;

  case 101: /* class_permits: "permits" un_name com_type_name.multiopt  */
#line 588 "parser.y"
                                                                {(yyval.i)=createNode("class_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2905 "parser.tab.c"
    break;

  case 102: /* class_body: "{" class_body_declaration.multiopt "}"  */
#line 591 "parser.y"
                                                                        {(yyval.i)=createNode("class_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 2911 "parser.tab.c"
    break;

  case 103: /* class_body_declaration.multiopt: class_body_declaration.multiopt class_body_declaration  */
#line 594 "parser.y"
                                                                                {(yyval.i)=createNode("class_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2917 "parser.tab.c"
    break;

  case 104: /* class_body_declaration.multiopt: %empty  */
#line 595 "parser.y"
                                {(yyval.i)=-1;}
#line 2923 "parser.tab.c"
    break;

  case 105: /* class_body_declaration: class_member_declaration  */
#line 598 "parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2929 "parser.tab.c"
    break;

  case 106: /* class_body_declaration: instance_initializer  */
#line 599 "parser.y"
                                        {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2935 "parser.tab.c"
    break;

  case 107: /* class_body_declaration: constructor_declaration  */
#line 600 "parser.y"
                                                {(yyval.i)=createNode("class_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2941 "parser.tab.c"
    break;

  case 108: /* class_member_declaration: method_declaration  */
#line 603 "parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2947 "parser.tab.c"
    break;

  case 109: /* class_member_declaration: class_declaration  */
#line 604 "parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2953 "parser.tab.c"
    break;

  case 110: /* class_member_declaration: interface_declaration  */
#line 605 "parser.y"
                                        {(yyval.i)=createNode("class_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2959 "parser.tab.c"
    break;

  case 111: /* variable_declarator_list: variable_declarator com_variable_declarator.multiopt  */
#line 608 "parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2965 "parser.tab.c"
    break;

  case 112: /* com_variable_declarator.multiopt: com_variable_declarator.multiopt "," variable_declarator  */
#line 611 "parser.y"
                                                                                {(yyval.i)=createNode("com_variable_declarator.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2971 "parser.tab.c"
    break;

  case 113: /* com_variable_declarator.multiopt: %empty  */
#line 612 "parser.y"
                                {(yyval.i)=-1;}
#line 2977 "parser.tab.c"
    break;

  case 114: /* variable_declarator: variable_declarator_id eq_variable_initializer.opt  */
#line 615 "parser.y"
                                                                        {(yyval.i)=createNode("variable_declarator");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2983 "parser.tab.c"
    break;

  case 115: /* eq_variable_initializer.opt: "=" variable_initializer  */
#line 618 "parser.y"
                                                {(yyval.i)=createNode("eq_variable_initializer.opt");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 2989 "parser.tab.c"
    break;

  case 116: /* eq_variable_initializer.opt: %empty  */
#line 619 "parser.y"
                                {(yyval.i)=-1;}
#line 2995 "parser.tab.c"
    break;

  case 117: /* variable_declarator_id: TOK_IDENTIFIER dims.opt  */
#line 622 "parser.y"
                                                {(yyval.i)=createNode("variable_declarator_id");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3001 "parser.tab.c"
    break;

  case 118: /* dims.opt: dims  */
#line 625 "parser.y"
                        {(yyval.i)=createNode("dims.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3007 "parser.tab.c"
    break;

  case 119: /* dims.opt: %empty  */
#line 626 "parser.y"
                                {(yyval.i)=-1;}
#line 3013 "parser.tab.c"
    break;

  case 120: /* variable_initializer: expression  */
#line 629 "parser.y"
                                {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3019 "parser.tab.c"
    break;

  case 121: /* variable_initializer: array_initializer  */
#line 630 "parser.y"
                                        {(yyval.i)=createNode("variable_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3025 "parser.tab.c"
    break;

  case 122: /* type_arguments.opt: type_arguments  */
#line 633 "parser.y"
                                        {(yyval.i)=createNode("type_arguments.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3031 "parser.tab.c"
    break;

  case 123: /* type_arguments.opt: %empty  */
#line 634 "parser.y"
                                {(yyval.i)=-1;}
#line 3037 "parser.tab.c"
    break;

  case 124: /* method_declaration: modifier.multiopt method_header method_body  */
#line 637 "parser.y"
                                                                {(yyval.i)=createNode("method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3043 "parser.tab.c"
    break;

  case 125: /* method_header: result method_declarator throws.opt  */
#line 640 "parser.y"
                                                        {(yyval.i)=createNode("method_header");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3049 "parser.tab.c"
    break;

  case 126: /* method_header: type_parameters result method_declarator throws.opt  */
#line 641 "parser.y"
                                                                        {(yyval.i)=createNode("method_header");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3055 "parser.tab.c"
    break;

  case 127: /* throws.opt: throws  */
#line 644 "parser.y"
                                {(yyval.i)=createNode("throws.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3061 "parser.tab.c"
    break;

  case 128: /* throws.opt: %empty  */
#line 645 "parser.y"
                                {(yyval.i)=-1;}
#line 3067 "parser.tab.c"
    break;

  case 129: /* result: type  */
#line 648 "parser.y"
                        {(yyval.i)=createNode("result");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3073 "parser.tab.c"
    break;

  case 130: /* result: "void"  */
#line 649 "parser.y"
                                {(yyval.i)=createNode("result");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3079 "parser.tab.c"
    break;

  case 131: /* method_declarator: TOK_IDENTIFIER "(" formal_parameter_list.opt ")" dims.opt  */
#line 652 "parser.y"
                                                                                        {(yyval.i)=createNode("method_declarator");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3085 "parser.tab.c"
    break;

  case 132: /* formal_parameter_list.opt: formal_parameter_list  */
#line 655 "parser.y"
                                        {(yyval.i)=createNode("formal_parameter_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3091 "parser.tab.c"
    break;

  case 133: /* formal_parameter_list.opt: %empty  */
#line 656 "parser.y"
                                {(yyval.i)=-1;}
#line 3097 "parser.tab.c"
    break;

  case 134: /* formal_parameter_list: formal_parameter com_formal_parameter.multiopt  */
#line 659 "parser.y"
                                                                        {(yyval.i)=createNode("formal_parameter_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3103 "parser.tab.c"
    break;

  case 135: /* com_formal_parameter.multiopt: com_formal_parameter.multiopt "," formal_parameter  */
#line 662 "parser.y"
                                                                        {(yyval.i)=createNode("com_formal_parameter.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3109 "parser.tab.c"
    break;

  case 136: /* com_formal_parameter.multiopt: %empty  */
#line 663 "parser.y"
                                {(yyval.i)=-1;}
#line 3115 "parser.tab.c"
    break;

  case 137: /* formal_parameter: modifier.multiopt type variable_declarator_id  */
#line 666 "parser.y"
                                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3121 "parser.tab.c"
    break;

  case 138: /* formal_parameter: variable_arity_parameter  */
#line 667 "parser.y"
                                                {(yyval.i)=createNode("formal_parameter");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3127 "parser.tab.c"
    break;

  case 139: /* variable_arity_parameter: modifier.multiopt type "..." TOK_IDENTIFIER  */
#line 670 "parser.y"
                                                                        {(yyval.i)=createNode("variable_arity_parameter");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3133 "parser.tab.c"
    break;

  case 140: /* throws: "throws" exception_type_list  */
#line 673 "parser.y"
                                                        {(yyval.i)=createNode("throws");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3139 "parser.tab.c"
    break;

  case 141: /* exception_type_list: exception_type com_exception_type.multiopt  */
#line 676 "parser.y"
                                                                {(yyval.i)=createNode("exception_type_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3145 "parser.tab.c"
    break;

  case 142: /* com_exception_type.multiopt: com_exception_type.multiopt "," exception_type  */
#line 679 "parser.y"
                                                                        {(yyval.i)=createNode("com_exception_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3151 "parser.tab.c"
    break;

  case 143: /* com_exception_type.multiopt: %empty  */
#line 680 "parser.y"
                                {(yyval.i)=-1;}
#line 3157 "parser.tab.c"
    break;

  case 144: /* exception_type: class_or_interface_type  */
#line 683 "parser.y"
                                                {(yyval.i)=createNode("exception_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3163 "parser.tab.c"
    break;

  case 145: /* method_body: block  */
#line 686 "parser.y"
                        {(yyval.i)=createNode("method_body");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3169 "parser.tab.c"
    break;

  case 146: /* method_body: ";"  */
#line 687 "parser.y"
                                {(yyval.i)=createNode("method_body");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3175 "parser.tab.c"
    break;

  case 147: /* instance_initializer: block  */
#line 690 "parser.y"
                        {(yyval.i)=createNode("instance_initializer");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3181 "parser.tab.c"
    break;

  case 148: /* constructor_declaration: modifier.multiopt constructor_declarator throws.opt constructor_body  */
#line 693 "parser.y"
                                                                                        {(yyval.i)=createNode("constructor_declaration");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3187 "parser.tab.c"
    break;

  case 149: /* constructor_declarator: simple_type_name "(" formal_parameter_list.opt ")"  */
#line 696 "parser.y"
                                                                                {(yyval.i)=createNode("constructor_declarator");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3193 "parser.tab.c"
    break;

  case 150: /* simple_type_name: TOK_IDENTIFIER  */
#line 699 "parser.y"
                                        {(yyval.i)=createNode("simple_type_name");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3199 "parser.tab.c"
    break;

  case 151: /* constructor_body: "{" block_statements.opt "}"  */
#line 702 "parser.y"
                                                        {(yyval.i)=createNode("constructor_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3205 "parser.tab.c"
    break;

  case 152: /* block_statements.opt: block_statements  */
#line 705 "parser.y"
                                        {(yyval.i)=createNode("block_statements.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3211 "parser.tab.c"
    break;

  case 153: /* block_statements.opt: %empty  */
#line 706 "parser.y"
                                {(yyval.i)=-1;}
#line 3217 "parser.tab.c"
    break;

  case 154: /* argument_list.opt: argument_list  */
#line 709 "parser.y"
                                {(yyval.i)=createNode("argument_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3223 "parser.tab.c"
    break;

  case 155: /* argument_list.opt: %empty  */
#line 710 "parser.y"
                                {(yyval.i)=-1;}
#line 3229 "parser.tab.c"
    break;

  case 156: /* enum_declaration: modifier.multiopt "enum" TOK_IDENTIFIER class_implements.opt enum_body  */
#line 713 "parser.y"
                                                                                                {(yyval.i)=createNode("enum_declaration");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3235 "parser.tab.c"
    break;

  case 157: /* enum_body: "{" enum_constant_list.opt com.opt enum_body_declarations.opt "}"  */
#line 716 "parser.y"
                                                                                                {(yyval.i)=createNode("enum_body");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3241 "parser.tab.c"
    break;

  case 158: /* com.opt: ","  */
#line 719 "parser.y"
                                {(yyval.i)=createNode("com.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3247 "parser.tab.c"
    break;

  case 159: /* com.opt: %empty  */
#line 720 "parser.y"
                                {(yyval.i)=-1;}
#line 3253 "parser.tab.c"
    break;

  case 160: /* enum_body_declarations.opt: enum_body_declarations  */
#line 723 "parser.y"
                                                {(yyval.i)=createNode("enum_body_declarations.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3259 "parser.tab.c"
    break;

  case 161: /* enum_body_declarations.opt: %empty  */
#line 724 "parser.y"
                                {(yyval.i)=-1;}
#line 3265 "parser.tab.c"
    break;

  case 162: /* enum_constant_list.opt: enum_constant_list  */
#line 727 "parser.y"
                                        {(yyval.i)=createNode("enum_constant_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3271 "parser.tab.c"
    break;

  case 163: /* enum_constant_list.opt: %empty  */
#line 728 "parser.y"
                                {(yyval.i)=-1;}
#line 3277 "parser.tab.c"
    break;

  case 164: /* enum_constant_list: enum_constant com_enum_constant.multiopt  */
#line 731 "parser.y"
                                                                {(yyval.i)=createNode("enum_constant_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3283 "parser.tab.c"
    break;

  case 165: /* com_enum_constant.multiopt: com_enum_constant.multiopt "," enum_constant  */
#line 734 "parser.y"
                                                                        {(yyval.i)=createNode("com_enum_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3289 "parser.tab.c"
    break;

  case 166: /* com_enum_constant.multiopt: %empty  */
#line 735 "parser.y"
                                {(yyval.i)=-1;}
#line 3295 "parser.tab.c"
    break;

  case 167: /* enum_constant: TOK_IDENTIFIER "[" "(" argument_list.opt ")" "]" class_body.opt  */
#line 738 "parser.y"
                                                                                                {(yyval.i)=createNode("enum_constant");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3301 "parser.tab.c"
    break;

  case 168: /* class_body.opt: class_body  */
#line 742 "parser.y"
                                {(yyval.i)=createNode("class_body.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3307 "parser.tab.c"
    break;

  case 169: /* class_body.opt: %empty  */
#line 743 "parser.y"
                                {(yyval.i)=-1;}
#line 3313 "parser.tab.c"
    break;

  case 170: /* enum_body_declarations: ";" class_body_declaration.multiopt  */
#line 747 "parser.y"
                                                                {(yyval.i)=createNode("enum_body_declarations");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3319 "parser.tab.c"
    break;

  case 171: /* record_declaration: modifier.multiopt "record" TOK_IDENTIFIER type_parameters.opt record_header class_implements.opt record_body  */
#line 750 "parser.y"
                                                                                                                                        {(yyval.i)=createNode("record_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3325 "parser.tab.c"
    break;

  case 172: /* record_header: "(" record_component_list.opt ")"  */
#line 753 "parser.y"
                                                                {(yyval.i)=createNode("record_header");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3331 "parser.tab.c"
    break;

  case 173: /* record_component_list.opt: record_component_list  */
#line 756 "parser.y"
                                        {(yyval.i)=createNode("record_component_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3337 "parser.tab.c"
    break;

  case 174: /* record_component_list.opt: %empty  */
#line 757 "parser.y"
                                {(yyval.i)=-1;}
#line 3343 "parser.tab.c"
    break;

  case 175: /* record_component_list: record_component com_record_component.multiopt  */
#line 760 "parser.y"
                                                                        {(yyval.i)=createNode("record_component_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3349 "parser.tab.c"
    break;

  case 176: /* com_record_component.multiopt: com_record_component.multiopt "," record_component  */
#line 763 "parser.y"
                                                                        {(yyval.i)=createNode("com_record_component.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3355 "parser.tab.c"
    break;

  case 177: /* com_record_component.multiopt: %empty  */
#line 764 "parser.y"
                                {(yyval.i)=-1;}
#line 3361 "parser.tab.c"
    break;

  case 178: /* record_component: type TOK_IDENTIFIER  */
#line 768 "parser.y"
                                        {(yyval.i)=createNode("record_component");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3367 "parser.tab.c"
    break;

  case 179: /* record_component: variable_arity_record_component  */
#line 769 "parser.y"
                                                        {(yyval.i)=createNode("record_component");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3373 "parser.tab.c"
    break;

  case 180: /* variable_arity_record_component: type "..." TOK_IDENTIFIER  */
#line 773 "parser.y"
                                                        {(yyval.i)=createNode("variable_arity_record_component");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3379 "parser.tab.c"
    break;

  case 181: /* record_body: "{" record_body_declaration.multiopt "}"  */
#line 776 "parser.y"
                                                                        {(yyval.i)=createNode("record_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3385 "parser.tab.c"
    break;

  case 182: /* record_body_declaration.multiopt: record_body_declaration.multiopt record_body_declaration  */
#line 779 "parser.y"
                                                                                {(yyval.i)=createNode("record_body_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3391 "parser.tab.c"
    break;

  case 183: /* record_body_declaration.multiopt: %empty  */
#line 780 "parser.y"
                                {(yyval.i)=-1;}
#line 3397 "parser.tab.c"
    break;

  case 184: /* record_body_declaration: class_body_declaration  */
#line 783 "parser.y"
                                                {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3403 "parser.tab.c"
    break;

  case 185: /* record_body_declaration: compact_constructor_declaration  */
#line 784 "parser.y"
                                                        {(yyval.i)=createNode("record_body_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3409 "parser.tab.c"
    break;

  case 186: /* compact_constructor_declaration: modifier.multiopt simple_type_name constructor_body  */
#line 787 "parser.y"
                                                                        {(yyval.i)=createNode("compact_constructor_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3415 "parser.tab.c"
    break;

  case 187: /* interface_declaration: normal_interface_declaration  */
#line 793 "parser.y"
                                                {(yyval.i)=createNode("interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3421 "parser.tab.c"
    break;

  case 188: /* normal_interface_declaration: modifier.multiopt "interface" TOK_IDENTIFIER type_parameters.opt interface_extends.opt interface_permits.opt interface_body  */
#line 796 "parser.y"
                                                                                                                                                {(yyval.i)=createNode("normal_interface_declaration");if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3427 "parser.tab.c"
    break;

  case 189: /* interface_extends.opt: interface_extends  */
#line 799 "parser.y"
                                        {(yyval.i)=createNode("interface_extends.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3433 "parser.tab.c"
    break;

  case 190: /* interface_extends.opt: %empty  */
#line 800 "parser.y"
                                {(yyval.i)=-1;}
#line 3439 "parser.tab.c"
    break;

  case 191: /* interface_permits.opt: interface_permits  */
#line 803 "parser.y"
                                        {(yyval.i)=createNode("interface_permits.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3445 "parser.tab.c"
    break;

  case 192: /* interface_permits.opt: %empty  */
#line 804 "parser.y"
                                {(yyval.i)=-1;}
#line 3451 "parser.tab.c"
    break;

  case 193: /* interface_extends: "extends" interface_type_list  */
#line 807 "parser.y"
                                                        {(yyval.i)=createNode("interface_extends");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3457 "parser.tab.c"
    break;

  case 194: /* interface_permits: "permits" un_name com_type_name.multiopt  */
#line 810 "parser.y"
                                                                {(yyval.i)=createNode("interface_permits");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3463 "parser.tab.c"
    break;

  case 195: /* interface_body: "{" interface_member_declaration.multiopt "}"  */
#line 813 "parser.y"
                                                                        {(yyval.i)=createNode("interface_body");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3469 "parser.tab.c"
    break;

  case 196: /* interface_member_declaration.multiopt: interface_member_declaration.multiopt interface_member_declaration  */
#line 816 "parser.y"
                                                                                        {(yyval.i)=createNode("interface_member_declaration.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3475 "parser.tab.c"
    break;

  case 197: /* interface_member_declaration.multiopt: %empty  */
#line 817 "parser.y"
                                {(yyval.i)=-1;}
#line 3481 "parser.tab.c"
    break;

  case 198: /* interface_member_declaration: interface_method_declaration  */
#line 820 "parser.y"
                                                {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3487 "parser.tab.c"
    break;

  case 199: /* interface_member_declaration: class_declaration  */
#line 821 "parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3493 "parser.tab.c"
    break;

  case 200: /* interface_member_declaration: interface_declaration  */
#line 822 "parser.y"
                                        {(yyval.i)=createNode("interface_member_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3499 "parser.tab.c"
    break;

  case 201: /* interface_member_declaration: ";"  */
#line 823 "parser.y"
                                {(yyval.i)=createNode("interface_member_declaration");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3505 "parser.tab.c"
    break;

  case 202: /* interface_method_declaration: modifier.multiopt method_header method_body  */
#line 829 "parser.y"
                                                                {(yyval.i)=createNode("interface_method_declaration");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3511 "parser.tab.c"
    break;

  case 203: /* array_initializer: "{" variable_initializer_list.opt com.opt "}"  */
#line 835 "parser.y"
                                                                        {(yyval.i)=createNode("array_initializer");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3517 "parser.tab.c"
    break;

  case 204: /* variable_initializer_list.opt: variable_initializer_list  */
#line 838 "parser.y"
                                                {(yyval.i)=createNode("variable_initializer_list.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3523 "parser.tab.c"
    break;

  case 205: /* variable_initializer_list.opt: %empty  */
#line 839 "parser.y"
                                {(yyval.i)=-1;}
#line 3529 "parser.tab.c"
    break;

  case 206: /* variable_initializer_list: variable_initializer com_variable_initializer.multiopt  */
#line 842 "parser.y"
                                                                                {(yyval.i)=createNode("variable_initializer_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3535 "parser.tab.c"
    break;

  case 207: /* com_variable_initializer.multiopt: com_variable_initializer.multiopt "," variable_initializer  */
#line 845 "parser.y"
                                                                                {(yyval.i)=createNode("com_variable_initializer.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3541 "parser.tab.c"
    break;

  case 208: /* com_variable_initializer.multiopt: %empty  */
#line 846 "parser.y"
                                {(yyval.i)=-1;}
#line 3547 "parser.tab.c"
    break;

  case 209: /* block: "{" block_statements.opt "}"  */
#line 851 "parser.y"
                                                        {(yyval.i)=createNode("block");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3553 "parser.tab.c"
    break;

  case 210: /* block_statements: block_statement block_statement.multiopt  */
#line 854 "parser.y"
                                                                {(yyval.i)=createNode("block_statements");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3559 "parser.tab.c"
    break;

  case 211: /* block_statement.multiopt: block_statement.multiopt block_statement  */
#line 857 "parser.y"
                                                                {(yyval.i)=createNode("block_statement.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3565 "parser.tab.c"
    break;

  case 212: /* block_statement.multiopt: %empty  */
#line 858 "parser.y"
                                {(yyval.i)=-1;}
#line 3571 "parser.tab.c"
    break;

  case 213: /* block_statement: local_class_or_interface_declaration  */
#line 861 "parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3577 "parser.tab.c"
    break;

  case 214: /* block_statement: local_variable_declaration_statement  */
#line 862 "parser.y"
                                                        {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3583 "parser.tab.c"
    break;

  case 215: /* block_statement: statement  */
#line 863 "parser.y"
                                {(yyval.i)=createNode("block_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3589 "parser.tab.c"
    break;

  case 216: /* local_class_or_interface_declaration: class_declaration  */
#line 866 "parser.y"
                                        {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3595 "parser.tab.c"
    break;

  case 217: /* local_class_or_interface_declaration: normal_interface_declaration  */
#line 867 "parser.y"
                                                {(yyval.i)=createNode("local_class_or_interface_declaration");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3601 "parser.tab.c"
    break;

  case 218: /* local_variable_declaration_statement: local_variable_declaration ";"  */
#line 870 "parser.y"
                                                        {(yyval.i)=createNode("local_variable_declaration_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3607 "parser.tab.c"
    break;

  case 219: /* local_variable_declaration: local_variable_type variable_declarator_list  */
#line 873 "parser.y"
                                                                {(yyval.i)=createNode("local_variable_declaration");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3613 "parser.tab.c"
    break;

  case 220: /* local_variable_type: type  */
#line 876 "parser.y"
                        {(yyval.i)=createNode("local_variable_type");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3619 "parser.tab.c"
    break;

  case 221: /* local_variable_type: "var"  */
#line 877 "parser.y"
                                {(yyval.i)=createNode("local_variable_type");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3625 "parser.tab.c"
    break;

  case 222: /* statement: statement_without_trailing_substatement  */
#line 880 "parser.y"
                                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3631 "parser.tab.c"
    break;

  case 223: /* statement: labeled_statement  */
#line 881 "parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3637 "parser.tab.c"
    break;

  case 224: /* statement: if_then_statement  */
#line 882 "parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3643 "parser.tab.c"
    break;

  case 225: /* statement: if_then_else_statement  */
#line 883 "parser.y"
                                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3649 "parser.tab.c"
    break;

  case 226: /* statement: while_statement  */
#line 884 "parser.y"
                                        {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3655 "parser.tab.c"
    break;

  case 227: /* statement: for_statement  */
#line 885 "parser.y"
                                {(yyval.i)=createNode("statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3661 "parser.tab.c"
    break;

  case 228: /* statement_no_short_if: statement_without_trailing_substatement  */
#line 888 "parser.y"
                                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3667 "parser.tab.c"
    break;

  case 229: /* statement_no_short_if: labeled_statement_no_short_if  */
#line 889 "parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3673 "parser.tab.c"
    break;

  case 230: /* statement_no_short_if: if_then_else_statement_no_short_if  */
#line 890 "parser.y"
                                                        {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3679 "parser.tab.c"
    break;

  case 231: /* statement_no_short_if: while_statement_no_short_if  */
#line 891 "parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3685 "parser.tab.c"
    break;

  case 232: /* statement_no_short_if: for_statement_no_short_if  */
#line 892 "parser.y"
                                                {(yyval.i)=createNode("statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3691 "parser.tab.c"
    break;

  case 233: /* statement_without_trailing_substatement: block  */
#line 895 "parser.y"
                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3697 "parser.tab.c"
    break;

  case 234: /* statement_without_trailing_substatement: empty_statement  */
#line 896 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3703 "parser.tab.c"
    break;

  case 235: /* statement_without_trailing_substatement: expression_statement  */
#line 897 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3709 "parser.tab.c"
    break;

  case 236: /* statement_without_trailing_substatement: assert_statement  */
#line 898 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3715 "parser.tab.c"
    break;

  case 237: /* statement_without_trailing_substatement: switch_statement  */
#line 899 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3721 "parser.tab.c"
    break;

  case 238: /* statement_without_trailing_substatement: do_statement  */
#line 900 "parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3727 "parser.tab.c"
    break;

  case 239: /* statement_without_trailing_substatement: break_statement  */
#line 901 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3733 "parser.tab.c"
    break;

  case 240: /* statement_without_trailing_substatement: continue_statement  */
#line 902 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3739 "parser.tab.c"
    break;

  case 241: /* statement_without_trailing_substatement: return_statement  */
#line 903 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3745 "parser.tab.c"
    break;

  case 242: /* statement_without_trailing_substatement: synchronized_statement  */
#line 904 "parser.y"
                                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3751 "parser.tab.c"
    break;

  case 243: /* statement_without_trailing_substatement: throw_statement  */
#line 905 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3757 "parser.tab.c"
    break;

  case 244: /* statement_without_trailing_substatement: try_statement  */
#line 906 "parser.y"
                                {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3763 "parser.tab.c"
    break;

  case 245: /* statement_without_trailing_substatement: yield_statement  */
#line 907 "parser.y"
                                        {(yyval.i)=createNode("statement_without_trailing_substatement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3769 "parser.tab.c"
    break;

  case 246: /* empty_statement: ";"  */
#line 910 "parser.y"
                                {(yyval.i)=createNode("empty_statement");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3775 "parser.tab.c"
    break;

  case 247: /* labeled_statement: TOK_IDENTIFIER ":" statement  */
#line 913 "parser.y"
                                                        {(yyval.i)=createNode("labeled_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3781 "parser.tab.c"
    break;

  case 248: /* labeled_statement_no_short_if: TOK_IDENTIFIER ":" statement_no_short_if  */
#line 916 "parser.y"
                                                                {(yyval.i)=createNode("labeled_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3787 "parser.tab.c"
    break;

  case 249: /* expression_statement: statement_expression ";"  */
#line 919 "parser.y"
                                                {(yyval.i)=createNode("expression_statement");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3793 "parser.tab.c"
    break;

  case 250: /* statement_expression: assignment  */
#line 922 "parser.y"
                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3799 "parser.tab.c"
    break;

  case 251: /* statement_expression: pre_increment_expression  */
#line 923 "parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3805 "parser.tab.c"
    break;

  case 252: /* statement_expression: pre_decrement_expression  */
#line 924 "parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3811 "parser.tab.c"
    break;

  case 253: /* statement_expression: post_increment_expression  */
#line 925 "parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3817 "parser.tab.c"
    break;

  case 254: /* statement_expression: post_decrement_expression  */
#line 926 "parser.y"
                                                {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3823 "parser.tab.c"
    break;

  case 255: /* statement_expression: method_invocation  */
#line 927 "parser.y"
                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3829 "parser.tab.c"
    break;

  case 256: /* statement_expression: class_instance_creation_expression  */
#line 928 "parser.y"
                                                        {(yyval.i)=createNode("statement_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3835 "parser.tab.c"
    break;

  case 257: /* if_then_statement: "if" "(" expression ")" statement  */
#line 931 "parser.y"
                                                                {(yyval.i)=createNode("if_then_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3841 "parser.tab.c"
    break;

  case 258: /* if_then_else_statement: "if" "(" expression ")" statement_no_short_if "else" statement  */
#line 934 "parser.y"
                                                                                                {(yyval.i)=createNode("if_then_else_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3847 "parser.tab.c"
    break;

  case 259: /* if_then_else_statement_no_short_if: "if" "(" expression ")" statement_no_short_if "else" statement_no_short_if  */
#line 937 "parser.y"
                                                                                                        {(yyval.i)=createNode("if_then_else_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3853 "parser.tab.c"
    break;

  case 260: /* assert_statement: "assert" expression ";"  */
#line 940 "parser.y"
                                                {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3859 "parser.tab.c"
    break;

  case 261: /* assert_statement: "assert" expression ":" expression ";"  */
#line 941 "parser.y"
                                                                        {(yyval.i)=createNode("assert_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3865 "parser.tab.c"
    break;

  case 262: /* switch_statement: "switch" "(" expression ")" switch_block  */
#line 944 "parser.y"
                                                                        {(yyval.i)=createNode("switch_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3871 "parser.tab.c"
    break;

  case 263: /* switch_block: "{" switch_rule switch_rule.multiopt ";"  */
#line 947 "parser.y"
                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3877 "parser.tab.c"
    break;

  case 264: /* switch_block: "{" switch_block_statement_group.multiopt switch_label_col.multiopt "}"  */
#line 948 "parser.y"
                                                                                                        {(yyval.i)=createNode("switch_block");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3883 "parser.tab.c"
    break;

  case 265: /* switch_rule.multiopt: switch_rule.multiopt switch_rule  */
#line 951 "parser.y"
                                                        {(yyval.i)=createNode("switch_rule.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3889 "parser.tab.c"
    break;

  case 266: /* switch_rule.multiopt: %empty  */
#line 952 "parser.y"
                                {(yyval.i)=-1;}
#line 3895 "parser.tab.c"
    break;

  case 267: /* switch_block_statement_group.multiopt: switch_block_statement_group.multiopt switch_block_statement_group  */
#line 955 "parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3901 "parser.tab.c"
    break;

  case 268: /* switch_block_statement_group.multiopt: %empty  */
#line 956 "parser.y"
                                {(yyval.i)=-1;}
#line 3907 "parser.tab.c"
    break;

  case 269: /* switch_label_col.multiopt: switch_label_col.multiopt switch_label ":"  */
#line 959 "parser.y"
                                                                {(yyval.i)=createNode("switch_label_col.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3913 "parser.tab.c"
    break;

  case 270: /* switch_label_col.multiopt: %empty  */
#line 960 "parser.y"
                                {(yyval.i)=-1;}
#line 3919 "parser.tab.c"
    break;

  case 271: /* switch_rule: switch_label "->" expression ";"  */
#line 963 "parser.y"
                                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3925 "parser.tab.c"
    break;

  case 272: /* switch_rule: switch_label "->" block  */
#line 964 "parser.y"
                                                {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3931 "parser.tab.c"
    break;

  case 273: /* switch_rule: switch_label "->" throw_statement  */
#line 965 "parser.y"
                                                        {(yyval.i)=createNode("switch_rule");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3937 "parser.tab.c"
    break;

  case 274: /* switch_block_statement_group: switch_label ":" switch_label_col.multiopt block_statements  */
#line 968 "parser.y"
                                                                                        {(yyval.i)=createNode("switch_block_statement_group");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3943 "parser.tab.c"
    break;

  case 275: /* switch_label: "case" case_constant com_case_constant.multiopt  */
#line 971 "parser.y"
                                                                        {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3949 "parser.tab.c"
    break;

  case 276: /* switch_label: "default"  */
#line 972 "parser.y"
                                {(yyval.i)=createNode("switch_label");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3955 "parser.tab.c"
    break;

  case 277: /* com_case_constant.multiopt: com_case_constant.multiopt "," case_constant  */
#line 975 "parser.y"
                                                                        {(yyval.i)=createNode("com_case_constant.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3961 "parser.tab.c"
    break;

  case 278: /* com_case_constant.multiopt: %empty  */
#line 976 "parser.y"
                                {(yyval.i)=-1;}
#line 3967 "parser.tab.c"
    break;

  case 279: /* case_constant: conditional_expression  */
#line 979 "parser.y"
                                                {(yyval.i)=createNode("case_constant");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3973 "parser.tab.c"
    break;

  case 280: /* while_statement: "while" "(" expression ")" statement  */
#line 982 "parser.y"
                                                                {(yyval.i)=createNode("while_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3979 "parser.tab.c"
    break;

  case 281: /* while_statement_no_short_if: "while" "(" expression ")" statement_no_short_if  */
#line 985 "parser.y"
                                                                                {(yyval.i)=createNode("while_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3985 "parser.tab.c"
    break;

  case 282: /* do_statement: "do" statement "while" "(" expression ")" ";"  */
#line 988 "parser.y"
                                                                                {(yyval.i)=createNode("do_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 3991 "parser.tab.c"
    break;

  case 283: /* for_statement: basic_for_statement  */
#line 991 "parser.y"
                                        {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 3997 "parser.tab.c"
    break;

  case 284: /* for_statement: enhanced_for_statement  */
#line 992 "parser.y"
                                                {(yyval.i)=createNode("for_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4003 "parser.tab.c"
    break;

  case 285: /* for_statement_no_short_if: basic_for_statement_no_short_if  */
#line 995 "parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4009 "parser.tab.c"
    break;

  case 286: /* for_statement_no_short_if: enhanced_for_statement_no_short_if  */
#line 996 "parser.y"
                                                        {(yyval.i)=createNode("for_statement_no_short_if");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4015 "parser.tab.c"
    break;

  case 287: /* basic_for_statement: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement  */
#line 999 "parser.y"
                                                                                                                {(yyval.i)=createNode("basic_for_statement");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4021 "parser.tab.c"
    break;

  case 288: /* for_init.opt: for_init  */
#line 1002 "parser.y"
                                {(yyval.i)=createNode("for_init.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4027 "parser.tab.c"
    break;

  case 289: /* for_init.opt: %empty  */
#line 1003 "parser.y"
                                {(yyval.i)=-1;}
#line 4033 "parser.tab.c"
    break;

  case 290: /* expression.opt: expression  */
#line 1006 "parser.y"
                                {(yyval.i)=createNode("expression.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4039 "parser.tab.c"
    break;

  case 291: /* expression.opt: %empty  */
#line 1007 "parser.y"
                                {(yyval.i)=-1;}
#line 4045 "parser.tab.c"
    break;

  case 292: /* for_update.opt: for_update  */
#line 1010 "parser.y"
                                {(yyval.i)=createNode("for_update.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4051 "parser.tab.c"
    break;

  case 293: /* for_update.opt: %empty  */
#line 1011 "parser.y"
                                {(yyval.i)=-1;}
#line 4057 "parser.tab.c"
    break;

  case 294: /* basic_for_statement_no_short_if: "for" "(" for_init.opt ";" expression.opt ";" for_update.opt ")" statement_no_short_if  */
#line 1014 "parser.y"
                                                                                                                        {(yyval.i)=createNode("basic_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-8].s)));addChild((yyval.i),createNode((yyvsp[-7].s)));if((yyvsp[-6].i) !=-1)addChild((yyval.i),(yyvsp[-6].i));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4063 "parser.tab.c"
    break;

  case 295: /* for_init: statement_expression_list  */
#line 1017 "parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4069 "parser.tab.c"
    break;

  case 296: /* for_init: local_variable_declaration  */
#line 1018 "parser.y"
                                                {(yyval.i)=createNode("for_init");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4075 "parser.tab.c"
    break;

  case 297: /* for_update: statement_expression_list  */
#line 1021 "parser.y"
                                                {(yyval.i)=createNode("for_update");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4081 "parser.tab.c"
    break;

  case 298: /* statement_expression_list: statement_expression com_statement_expression.multiopt  */
#line 1024 "parser.y"
                                                                                {(yyval.i)=createNode("statement_expression_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4087 "parser.tab.c"
    break;

  case 299: /* com_statement_expression.multiopt: com_statement_expression.multiopt "," statement_expression  */
#line 1027 "parser.y"
                                                                                {(yyval.i)=createNode("com_statement_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4093 "parser.tab.c"
    break;

  case 300: /* com_statement_expression.multiopt: %empty  */
#line 1028 "parser.y"
                                {(yyval.i)=-1;}
#line 4099 "parser.tab.c"
    break;

  case 301: /* enhanced_for_statement: "for" "(" local_variable_declaration ":" expression ")" statement  */
#line 1031 "parser.y"
                                                                                                {(yyval.i)=createNode("enhanced_for_statement");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4105 "parser.tab.c"
    break;

  case 302: /* enhanced_for_statement_no_short_if: "for" "(" local_variable_declaration ":" expression ")" statement_no_short_if  */
#line 1034 "parser.y"
                                                                                                                {(yyval.i)=createNode("enhanced_for_statement_no_short_if");addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4111 "parser.tab.c"
    break;

  case 303: /* break_statement: "break" IDENTIFIER.opt ";"  */
#line 1037 "parser.y"
                                                        {(yyval.i)=createNode("break_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4117 "parser.tab.c"
    break;

  case 304: /* IDENTIFIER.opt: TOK_IDENTIFIER  */
#line 1040 "parser.y"
                                        {(yyval.i)=createNode("IDENTIFIER.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4123 "parser.tab.c"
    break;

  case 305: /* IDENTIFIER.opt: %empty  */
#line 1041 "parser.y"
                                {(yyval.i)=-1;}
#line 4129 "parser.tab.c"
    break;

  case 306: /* yield_statement: "yield" expression ";"  */
#line 1044 "parser.y"
                                                {(yyval.i)=createNode("yield_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4135 "parser.tab.c"
    break;

  case 307: /* continue_statement: "continue" IDENTIFIER.opt ";"  */
#line 1047 "parser.y"
                                                        {(yyval.i)=createNode("continue_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4141 "parser.tab.c"
    break;

  case 308: /* return_statement: "return" expression.opt ";"  */
#line 1050 "parser.y"
                                                        {(yyval.i)=createNode("return_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4147 "parser.tab.c"
    break;

  case 309: /* throw_statement: "throw" expression ";"  */
#line 1053 "parser.y"
                                                {(yyval.i)=createNode("throw_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4153 "parser.tab.c"
    break;

  case 310: /* synchronized_statement: "synchronized" "(" expression ")" block  */
#line 1056 "parser.y"
                                                                        {(yyval.i)=createNode("synchronized_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4159 "parser.tab.c"
    break;

  case 311: /* try_statement: "try" block catches  */
#line 1059 "parser.y"
                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4165 "parser.tab.c"
    break;

  case 312: /* try_statement: "try" block catches.opt finally  */
#line 1060 "parser.y"
                                                        {(yyval.i)=createNode("try_statement");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4171 "parser.tab.c"
    break;

  case 313: /* try_statement: try_with_resources_statement  */
#line 1061 "parser.y"
                                                {(yyval.i)=createNode("try_statement");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4177 "parser.tab.c"
    break;

  case 314: /* catches.opt: catches  */
#line 1064 "parser.y"
                                {(yyval.i)=createNode("catches.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4183 "parser.tab.c"
    break;

  case 315: /* catches.opt: %empty  */
#line 1065 "parser.y"
                                {(yyval.i)=-1;}
#line 4189 "parser.tab.c"
    break;

  case 316: /* catches: catch_clause catch_clause.multiopt  */
#line 1068 "parser.y"
                                                        {(yyval.i)=createNode("catches");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4195 "parser.tab.c"
    break;

  case 317: /* catch_clause.multiopt: catch_clause.multiopt catch_clause  */
#line 1071 "parser.y"
                                                        {(yyval.i)=createNode("catch_clause.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4201 "parser.tab.c"
    break;

  case 318: /* catch_clause.multiopt: %empty  */
#line 1072 "parser.y"
                                {(yyval.i)=-1;}
#line 4207 "parser.tab.c"
    break;

  case 319: /* catch_clause: "catch" "(" catch_formal_parameter ")" block  */
#line 1075 "parser.y"
                                                                        {(yyval.i)=createNode("catch_clause");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4213 "parser.tab.c"
    break;

  case 320: /* catch_formal_parameter: modifier.multiopt catch_type variable_declarator_id  */
#line 1078 "parser.y"
                                                                        {(yyval.i)=createNode("catch_formal_parameter");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4219 "parser.tab.c"
    break;

  case 321: /* catch_type: class_or_interface_type vt_class_type.multiopt  */
#line 1081 "parser.y"
                                                                        {(yyval.i)=createNode("catch_type");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4225 "parser.tab.c"
    break;

  case 322: /* vt_class_type.multiopt: vt_class_type.multiopt "|" class_or_interface_type  */
#line 1084 "parser.y"
                                                                                {(yyval.i)=createNode("vt_class_type.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4231 "parser.tab.c"
    break;

  case 323: /* vt_class_type.multiopt: %empty  */
#line 1085 "parser.y"
                                {(yyval.i)=-1;}
#line 4237 "parser.tab.c"
    break;

  case 324: /* finally: "finally" block  */
#line 1088 "parser.y"
                                        {(yyval.i)=createNode("finally");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4243 "parser.tab.c"
    break;

  case 325: /* try_with_resources_statement: "try" resource_specification block catches.opt finally.opt  */
#line 1091 "parser.y"
                                                                                {(yyval.i)=createNode("try_with_resources_statement");addChild((yyval.i),createNode((yyvsp[-4].s)));if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4249 "parser.tab.c"
    break;

  case 326: /* finally.opt: finally  */
#line 1094 "parser.y"
                                {(yyval.i)=createNode("finally.opt");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4255 "parser.tab.c"
    break;

  case 327: /* finally.opt: %empty  */
#line 1095 "parser.y"
                                {(yyval.i)=-1;}
#line 4261 "parser.tab.c"
    break;

  case 328: /* resource_specification: "(" resource_list semcol.opt ")"  */
#line 1098 "parser.y"
                                                                {(yyval.i)=createNode("resource_specification");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4267 "parser.tab.c"
    break;

  case 329: /* semcol.opt: ";"  */
#line 1101 "parser.y"
                                {(yyval.i)=createNode("semcol.opt");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4273 "parser.tab.c"
    break;

  case 330: /* semcol.opt: %empty  */
#line 1102 "parser.y"
                                {(yyval.i)=-1;}
#line 4279 "parser.tab.c"
    break;

  case 331: /* resource_list: resource semcol_resource.multiopt  */
#line 1105 "parser.y"
                                                        {(yyval.i)=createNode("resource_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4285 "parser.tab.c"
    break;

  case 332: /* semcol_resource.multiopt: semcol_resource.multiopt ";" resource  */
#line 1108 "parser.y"
                                                                {(yyval.i)=createNode("semcol_resource.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4291 "parser.tab.c"
    break;

  case 333: /* semcol_resource.multiopt: %empty  */
#line 1109 "parser.y"
                                {(yyval.i)=-1;}
#line 4297 "parser.tab.c"
    break;

  case 334: /* resource: local_variable_declaration  */
#line 1112 "parser.y"
                                                {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4303 "parser.tab.c"
    break;

  case 335: /* resource: variable_access  */
#line 1113 "parser.y"
                                        {(yyval.i)=createNode("resource");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4309 "parser.tab.c"
    break;

  case 336: /* variable_access: un_name  */
#line 1116 "parser.y"
                                {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4315 "parser.tab.c"
    break;

  case 337: /* variable_access: field_access  */
#line 1117 "parser.y"
                                {(yyval.i)=createNode("variable_access");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4321 "parser.tab.c"
    break;

  case 338: /* pattern: type_pattern  */
#line 1120 "parser.y"
                                {(yyval.i)=createNode("pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4327 "parser.tab.c"
    break;

  case 339: /* type_pattern: local_variable_declaration  */
#line 1123 "parser.y"
                                                {(yyval.i)=createNode("type_pattern");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4333 "parser.tab.c"
    break;

  case 340: /* primary: primary_no_new_array  */
#line 1128 "parser.y"
                                        {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4339 "parser.tab.c"
    break;

  case 341: /* primary: array_creation_expression  */
#line 1129 "parser.y"
                                                {(yyval.i)=createNode("primary");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4345 "parser.tab.c"
    break;

  case 342: /* primary_no_new_array: TOK_LITERAL  */
#line 1132 "parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4351 "parser.tab.c"
    break;

  case 343: /* primary_no_new_array: "this"  */
#line 1133 "parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4357 "parser.tab.c"
    break;

  case 344: /* primary_no_new_array: un_name "." "this"  */
#line 1134 "parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4363 "parser.tab.c"
    break;

  case 345: /* primary_no_new_array: "(" expression ")"  */
#line 1135 "parser.y"
                                                {(yyval.i)=createNode("primary_no_new_array");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4369 "parser.tab.c"
    break;

  case 346: /* primary_no_new_array: class_instance_creation_expression  */
#line 1136 "parser.y"
                                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4375 "parser.tab.c"
    break;

  case 347: /* primary_no_new_array: field_access  */
#line 1137 "parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4381 "parser.tab.c"
    break;

  case 348: /* primary_no_new_array: array_access  */
#line 1138 "parser.y"
                                {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4387 "parser.tab.c"
    break;

  case 349: /* primary_no_new_array: method_invocation  */
#line 1139 "parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4393 "parser.tab.c"
    break;

  case 350: /* primary_no_new_array: method_reference  */
#line 1140 "parser.y"
                                        {(yyval.i)=createNode("primary_no_new_array");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4399 "parser.tab.c"
    break;

  case 351: /* class_instance_creation_expression: unqualified_class_instance_creation_expression  */
#line 1144 "parser.y"
                                                                        {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4405 "parser.tab.c"
    break;

  case 352: /* class_instance_creation_expression: un_name "." unqualified_class_instance_creation_expression  */
#line 1145 "parser.y"
                                                                                {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4411 "parser.tab.c"
    break;

  case 353: /* class_instance_creation_expression: primary "." unqualified_class_instance_creation_expression  */
#line 1146 "parser.y"
                                                                                {(yyval.i)=createNode("class_instance_creation_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4417 "parser.tab.c"
    break;

  case 354: /* unqualified_class_instance_creation_expression: "new" class_or_interface_type "(" argument_list.opt ")" class_body.opt  */
#line 1149 "parser.y"
                                                                                                        {(yyval.i)=createNode("unqualified_class_instance_creation_expression");addChild((yyval.i),createNode((yyvsp[-5].s)));if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4423 "parser.tab.c"
    break;

  case 355: /* field_access: primary "." TOK_IDENTIFIER  */
#line 1152 "parser.y"
                                                {(yyval.i)=createNode("field_access");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4429 "parser.tab.c"
    break;

  case 356: /* field_access: "super" "." TOK_IDENTIFIER  */
#line 1153 "parser.y"
                                                        {(yyval.i)=createNode("field_access");addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4435 "parser.tab.c"
    break;

  case 357: /* field_access: un_name "." "super" "." TOK_IDENTIFIER  */
#line 1154 "parser.y"
                                                                        {(yyval.i)=createNode("field_access");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));addChild((yyval.i),createNode((yyvsp[-1].s)));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4441 "parser.tab.c"
    break;

  case 358: /* array_access: un_name "[" expression "]"  */
#line 1157 "parser.y"
                                                        {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4447 "parser.tab.c"
    break;

  case 359: /* array_access: primary_no_new_array "[" expression "]"  */
#line 1158 "parser.y"
                                                                {(yyval.i)=createNode("array_access");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4453 "parser.tab.c"
    break;

  case 360: /* method_invocation: un_name "(" argument_list.opt ")"  */
#line 1161 "parser.y"
                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4459 "parser.tab.c"
    break;

  case 361: /* method_invocation: un_name "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1162 "parser.y"
                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4465 "parser.tab.c"
    break;

  case 362: /* method_invocation: primary "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1163 "parser.y"
                                                                                {(yyval.i)=createNode("method_invocation");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4471 "parser.tab.c"
    break;

  case 363: /* method_invocation: "super" "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1164 "parser.y"
                                                                                        {(yyval.i)=createNode("method_invocation");addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4477 "parser.tab.c"
    break;

  case 364: /* method_invocation: un_name "." "super" "." TOK_IDENTIFIER "(" argument_list.opt ")"  */
#line 1165 "parser.y"
                                                                                                        {(yyval.i)=createNode("method_invocation");if((yyvsp[-7].i) !=-1)addChild((yyval.i),(yyvsp[-7].i));addChild((yyval.i),createNode((yyvsp[-6].s)));addChild((yyval.i),createNode((yyvsp[-5].s)));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4483 "parser.tab.c"
    break;

  case 365: /* argument_list: expression com_expression.multiopt  */
#line 1168 "parser.y"
                                                        {(yyval.i)=createNode("argument_list");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4489 "parser.tab.c"
    break;

  case 366: /* com_expression.multiopt: com_expression.multiopt "," expression  */
#line 1171 "parser.y"
                                                                {(yyval.i)=createNode("com_expression.multiopt");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4495 "parser.tab.c"
    break;

  case 367: /* com_expression.multiopt: %empty  */
#line 1172 "parser.y"
                                {(yyval.i)=-1;}
#line 4501 "parser.tab.c"
    break;

  case 368: /* method_reference: un_name "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1175 "parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4507 "parser.tab.c"
    break;

  case 369: /* method_reference: primary "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1176 "parser.y"
                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-3].i) !=-1)addChild((yyval.i),(yyvsp[-3].i));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4513 "parser.tab.c"
    break;

  case 370: /* method_reference: "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1177 "parser.y"
                                                                        {(yyval.i)=createNode("method_reference");addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4519 "parser.tab.c"
    break;

  case 371: /* method_reference: un_name "." "super" "::" type_arguments.opt TOK_IDENTIFIER  */
#line 1178 "parser.y"
                                                                                        {(yyval.i)=createNode("method_reference");if((yyvsp[-5].i) !=-1)addChild((yyval.i),(yyvsp[-5].i));addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4525 "parser.tab.c"
    break;

  case 372: /* array_creation_expression: "new" primitive_type dim_exprs dims.opt  */
#line 1181 "parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4531 "parser.tab.c"
    break;

  case 373: /* array_creation_expression: "new" class_or_interface_type dim_exprs dims.opt  */
#line 1182 "parser.y"
                                                                        {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4537 "parser.tab.c"
    break;

  case 374: /* array_creation_expression: "new" primitive_type dims array_initializer  */
#line 1183 "parser.y"
                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4543 "parser.tab.c"
    break;

  case 375: /* array_creation_expression: "new" class_or_interface_type dims array_initializer  */
#line 1184 "parser.y"
                                                                                {(yyval.i)=createNode("array_creation_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4549 "parser.tab.c"
    break;

  case 376: /* dim_exprs: dim_expr dim_expr.multiopt  */
#line 1187 "parser.y"
                                                {(yyval.i)=createNode("dim_exprs");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4555 "parser.tab.c"
    break;

  case 377: /* dim_expr.multiopt: dim_expr.multiopt dim_expr  */
#line 1190 "parser.y"
                                                {(yyval.i)=createNode("dim_expr.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4561 "parser.tab.c"
    break;

  case 378: /* dim_expr.multiopt: %empty  */
#line 1191 "parser.y"
                                {(yyval.i)=-1;}
#line 4567 "parser.tab.c"
    break;

  case 379: /* dim_expr: "[" expression "]"  */
#line 1194 "parser.y"
                                                {(yyval.i)=createNode("dim_expr");addChild((yyval.i),createNode((yyvsp[-2].s)));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4573 "parser.tab.c"
    break;

  case 380: /* expression: assignment_expression  */
#line 1197 "parser.y"
                                        {(yyval.i)=createNode("expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4579 "parser.tab.c"
    break;

  case 381: /* assignment_expression: conditional_expression  */
#line 1200 "parser.y"
                                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4585 "parser.tab.c"
    break;

  case 382: /* assignment_expression: assignment  */
#line 1201 "parser.y"
                                {(yyval.i)=createNode("assignment_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4591 "parser.tab.c"
    break;

  case 383: /* assignment: left_hand_side assignment_operator expression  */
#line 1204 "parser.y"
                                                                {(yyval.i)=createNode("assignment");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4597 "parser.tab.c"
    break;

  case 384: /* left_hand_side: un_name  */
#line 1207 "parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4603 "parser.tab.c"
    break;

  case 385: /* left_hand_side: field_access  */
#line 1208 "parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4609 "parser.tab.c"
    break;

  case 386: /* left_hand_side: array_access  */
#line 1209 "parser.y"
                                {(yyval.i)=createNode("left_hand_side");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4615 "parser.tab.c"
    break;

  case 387: /* assignment_operator: "="  */
#line 1212 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4621 "parser.tab.c"
    break;

  case 388: /* assignment_operator: "*="  */
#line 1213 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4627 "parser.tab.c"
    break;

  case 389: /* assignment_operator: "/="  */
#line 1214 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4633 "parser.tab.c"
    break;

  case 390: /* assignment_operator: "%="  */
#line 1215 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4639 "parser.tab.c"
    break;

  case 391: /* assignment_operator: "+="  */
#line 1216 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4645 "parser.tab.c"
    break;

  case 392: /* assignment_operator: "-="  */
#line 1217 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4651 "parser.tab.c"
    break;

  case 393: /* assignment_operator: "<<="  */
#line 1218 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4657 "parser.tab.c"
    break;

  case 394: /* assignment_operator: ">>="  */
#line 1219 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4663 "parser.tab.c"
    break;

  case 395: /* assignment_operator: ">>>="  */
#line 1220 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4669 "parser.tab.c"
    break;

  case 396: /* assignment_operator: "&="  */
#line 1221 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4675 "parser.tab.c"
    break;

  case 397: /* assignment_operator: "^="  */
#line 1222 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4681 "parser.tab.c"
    break;

  case 398: /* assignment_operator: "|="  */
#line 1223 "parser.y"
                                {(yyval.i)=createNode("assignment_operator");addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4687 "parser.tab.c"
    break;

  case 399: /* conditional_expression: conditional_or_expression  */
#line 1226 "parser.y"
                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4693 "parser.tab.c"
    break;

  case 400: /* conditional_expression: conditional_or_expression "?" expression ":" conditional_expression  */
#line 1227 "parser.y"
                                                                                                {(yyval.i)=createNode("conditional_expression");if((yyvsp[-4].i) !=-1)addChild((yyval.i),(yyvsp[-4].i));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4699 "parser.tab.c"
    break;

  case 401: /* conditional_or_expression: conditional_and_expression  */
#line 1230 "parser.y"
                                                {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4705 "parser.tab.c"
    break;

  case 402: /* conditional_or_expression: conditional_or_expression "||" conditional_and_expression  */
#line 1231 "parser.y"
                                                                                        {(yyval.i)=createNode("conditional_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4711 "parser.tab.c"
    break;

  case 403: /* conditional_and_expression: inclusive_or_expression  */
#line 1234 "parser.y"
                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4717 "parser.tab.c"
    break;

  case 404: /* conditional_and_expression: conditional_and_expression "&&" inclusive_or_expression  */
#line 1235 "parser.y"
                                                                                {(yyval.i)=createNode("conditional_and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4723 "parser.tab.c"
    break;

  case 405: /* inclusive_or_expression: exclusive_or_expression  */
#line 1238 "parser.y"
                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4729 "parser.tab.c"
    break;

  case 406: /* inclusive_or_expression: inclusive_or_expression "|" exclusive_or_expression  */
#line 1239 "parser.y"
                                                                                {(yyval.i)=createNode("inclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4735 "parser.tab.c"
    break;

  case 407: /* exclusive_or_expression: and_expression  */
#line 1242 "parser.y"
                                        {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4741 "parser.tab.c"
    break;

  case 408: /* exclusive_or_expression: exclusive_or_expression "^" and_expression  */
#line 1243 "parser.y"
                                                                {(yyval.i)=createNode("exclusive_or_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4747 "parser.tab.c"
    break;

  case 409: /* and_expression: equality_expression  */
#line 1246 "parser.y"
                                        {(yyval.i)=createNode("and_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4753 "parser.tab.c"
    break;

  case 410: /* and_expression: and_expression "&" equality_expression  */
#line 1247 "parser.y"
                                                                {(yyval.i)=createNode("and_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4759 "parser.tab.c"
    break;

  case 411: /* equality_expression: relational_expression  */
#line 1250 "parser.y"
                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4765 "parser.tab.c"
    break;

  case 412: /* equality_expression: equality_expression "==" relational_expression  */
#line 1251 "parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4771 "parser.tab.c"
    break;

  case 413: /* equality_expression: equality_expression "!=" relational_expression  */
#line 1252 "parser.y"
                                                                        {(yyval.i)=createNode("equality_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4777 "parser.tab.c"
    break;

  case 414: /* relational_expression: shift_expression  */
#line 1255 "parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4783 "parser.tab.c"
    break;

  case 415: /* relational_expression: relational_expression "<" shift_expression  */
#line 1256 "parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4789 "parser.tab.c"
    break;

  case 416: /* relational_expression: relational_expression ">" shift_expression  */
#line 1257 "parser.y"
                                                                {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4795 "parser.tab.c"
    break;

  case 417: /* relational_expression: relational_expression "<=" shift_expression  */
#line 1258 "parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4801 "parser.tab.c"
    break;

  case 418: /* relational_expression: relational_expression ">=" shift_expression  */
#line 1259 "parser.y"
                                                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4807 "parser.tab.c"
    break;

  case 419: /* relational_expression: instanceof_expression  */
#line 1260 "parser.y"
                                        {(yyval.i)=createNode("relational_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4813 "parser.tab.c"
    break;

  case 420: /* instanceof_expression: relational_expression "instanceof" reference_type  */
#line 1263 "parser.y"
                                                                        {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4819 "parser.tab.c"
    break;

  case 421: /* instanceof_expression: relational_expression "instanceof" pattern  */
#line 1264 "parser.y"
                                                                {(yyval.i)=createNode("instanceof_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4825 "parser.tab.c"
    break;

  case 422: /* shift_expression: additive_expression  */
#line 1267 "parser.y"
                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4831 "parser.tab.c"
    break;

  case 423: /* shift_expression: shift_expression "<<" additive_expression  */
#line 1268 "parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4837 "parser.tab.c"
    break;

  case 424: /* shift_expression: shift_expression ">>" additive_expression  */
#line 1269 "parser.y"
                                                                {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4843 "parser.tab.c"
    break;

  case 425: /* shift_expression: shift_expression ">>>" additive_expression  */
#line 1270 "parser.y"
                                                                        {(yyval.i)=createNode("shift_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4849 "parser.tab.c"
    break;

  case 426: /* additive_expression: multiplicative_expression  */
#line 1273 "parser.y"
                                                {(yyval.i)=createNode("additive_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4855 "parser.tab.c"
    break;

  case 427: /* additive_expression: additive_expression "+" multiplicative_expression  */
#line 1274 "parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4861 "parser.tab.c"
    break;

  case 428: /* additive_expression: additive_expression "-" multiplicative_expression  */
#line 1275 "parser.y"
                                                                        {(yyval.i)=createNode("additive_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4867 "parser.tab.c"
    break;

  case 429: /* multiplicative_expression: unary_expression  */
#line 1278 "parser.y"
                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4873 "parser.tab.c"
    break;

  case 430: /* multiplicative_expression: multiplicative_expression "*" unary_expression  */
#line 1279 "parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4879 "parser.tab.c"
    break;

  case 431: /* multiplicative_expression: multiplicative_expression "/" unary_expression  */
#line 1280 "parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4885 "parser.tab.c"
    break;

  case 432: /* multiplicative_expression: multiplicative_expression "%" unary_expression  */
#line 1281 "parser.y"
                                                                        {(yyval.i)=createNode("multiplicative_expression");if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4891 "parser.tab.c"
    break;

  case 433: /* unary_expression: pre_increment_expression  */
#line 1284 "parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4897 "parser.tab.c"
    break;

  case 434: /* unary_expression: pre_decrement_expression  */
#line 1285 "parser.y"
                                                {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4903 "parser.tab.c"
    break;

  case 435: /* unary_expression: "+" unary_expression  */
#line 1286 "parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4909 "parser.tab.c"
    break;

  case 436: /* unary_expression: "-" unary_expression  */
#line 1287 "parser.y"
                                                {(yyval.i)=createNode("unary_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4915 "parser.tab.c"
    break;

  case 437: /* unary_expression: unary_expression_not_plus_minus  */
#line 1288 "parser.y"
                                                        {(yyval.i)=createNode("unary_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4921 "parser.tab.c"
    break;

  case 438: /* pre_increment_expression: "++" unary_expression  */
#line 1291 "parser.y"
                                                {(yyval.i)=createNode("pre_increment_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4927 "parser.tab.c"
    break;

  case 439: /* pre_decrement_expression: "--" unary_expression  */
#line 1293 "parser.y"
                                                {(yyval.i)=createNode("pre_decrement_expression");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4933 "parser.tab.c"
    break;

  case 440: /* unary_expression_not_plus_minus: postfix_expression  */
#line 1295 "parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4939 "parser.tab.c"
    break;

  case 441: /* unary_expression_not_plus_minus: "~" unary_expression  */
#line 1296 "parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4945 "parser.tab.c"
    break;

  case 442: /* unary_expression_not_plus_minus: "!" unary_expression  */
#line 1297 "parser.y"
                                                {(yyval.i)=createNode("unary_expression_not_plus_minus");addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4951 "parser.tab.c"
    break;

  case 443: /* unary_expression_not_plus_minus: cast_expression  */
#line 1298 "parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4957 "parser.tab.c"
    break;

  case 444: /* unary_expression_not_plus_minus: switch_expression  */
#line 1299 "parser.y"
                                        {(yyval.i)=createNode("unary_expression_not_plus_minus");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4963 "parser.tab.c"
    break;

  case 445: /* postfix_expression: primary  */
#line 1302 "parser.y"
                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4969 "parser.tab.c"
    break;

  case 446: /* postfix_expression: un_name  */
#line 1303 "parser.y"
                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4975 "parser.tab.c"
    break;

  case 447: /* postfix_expression: post_increment_expression  */
#line 1304 "parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4981 "parser.tab.c"
    break;

  case 448: /* postfix_expression: post_decrement_expression  */
#line 1305 "parser.y"
                                                {(yyval.i)=createNode("postfix_expression");if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 4987 "parser.tab.c"
    break;

  case 449: /* post_increment_expression: postfix_expression "++"  */
#line 1308 "parser.y"
                                                {(yyval.i)=createNode("post_increment_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4993 "parser.tab.c"
    break;

  case 450: /* post_decrement_expression: postfix_expression "--"  */
#line 1311 "parser.y"
                                                {(yyval.i)=createNode("post_decrement_expression");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));addChild((yyval.i),createNode((yyvsp[0].s)));}
#line 4999 "parser.tab.c"
    break;

  case 451: /* cast_expression: "(" primitive_type ")" unary_expression  */
#line 1314 "parser.y"
                                                                {(yyval.i)=createNode("cast_expression");addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5005 "parser.tab.c"
    break;

  case 452: /* additional_bound.multiopt: additional_bound.multiopt additional_bound  */
#line 1317 "parser.y"
                                                                {(yyval.i)=createNode("additional_bound.multiopt");if((yyvsp[-1].i) !=-1)addChild((yyval.i),(yyvsp[-1].i));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5011 "parser.tab.c"
    break;

  case 453: /* additional_bound.multiopt: %empty  */
#line 1318 "parser.y"
                                {(yyval.i)=-1;}
#line 5017 "parser.tab.c"
    break;

  case 454: /* switch_expression: "switch" "(" expression ")" switch_block  */
#line 1321 "parser.y"
                                                                        {(yyval.i)=createNode("switch_expression");addChild((yyval.i),createNode((yyvsp[-4].s)));addChild((yyval.i),createNode((yyvsp[-3].s)));if((yyvsp[-2].i) !=-1)addChild((yyval.i),(yyvsp[-2].i));addChild((yyval.i),createNode((yyvsp[-1].s)));if((yyvsp[0].i) !=-1)addChild((yyval.i),(yyvsp[0].i));}
#line 5023 "parser.tab.c"
    break;


#line 5027 "parser.tab.c"

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

#line 1324 "parser.y"



/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

string fix_escape_chars(string s) {
	string res = "";
	char prev = ' ';
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		char next = (i+1 < s.length()) ? s[i+1] : ' ';
		if (c == '\\' && prev != '\\' && next != '"') {
			res += "\\\\";
		} else {
			res += c;
		}
		prev = c;
	}
	return res;
}

string replace_quotes(string s) {
	string res = "";
	char prev = ' ';
	for (char c: s) {
		if (c == '"' && prev != '\\') {
			res += "\\\"";
		} else {
			res += c;
		}
		prev = c;
	}
	return res;
}

int createNode(string lbl) {
	vector<int> v;
	nodes.push_back({replace_quotes(fix_escape_chars(lbl)), v});
	// cout << "Node Created - " << lbl << endl;
	return nodes.size()-1;
}

void addChild(int parent, int child) {
	nodes[parent].second.push_back(child);
	// cout << "Added Child - " << label[parent] << "->" << label[child] << endl;
}

int get_leaf_or_multi_child_node(int node) {
	if (nodes[node].second.size() == 1) {
		return get_leaf_or_multi_child_node(nodes[node].second[0]);
	}
	return node;
}

void fix_ast(int node) {
	// if child node has only one child remove the child node and add the child of child node to parent node
	for (int i = 0; i < nodes[node].second.size(); i++) {
		int child = nodes[node].second[i];
		fix_ast(child);
		int final_child = get_leaf_or_multi_child_node(child);
		if (final_child != child) {
			// if (nodes[final_child].second.size() != 0) {
			// 	nodes[final_child].first = nodes[child].first;
			// }
			nodes[node].second[i] = final_child;
			// cout << "----Fixed AST - " << nodes[node].first << "->" << nodes[child].first << " to " << nodes[node].first << "->" << nodes[final_child].first << endl;
		}
	}
}

void build_graph() {
	freopen("out.dot", "w", stdout);
	cout << "// dot -Tps out.dot -o out.ps\n\n"
		 << "graph \"Abstract Syntax Tree\"\n"
		 << "{\n"
    	 << "\tfontname=\"Helvetica,Arial,sans-serif\"\n"
    	 << "\tnode [fontsize=10, width=\".2\", height=\".2\", margin=0]\n"
		 << "\tedge [fontsize=6]\n"
    	 << "\tgraph[fontsize=8];\n\n"
    	 << "\tlabel=\"Abstract Syntax Tree\"\n\n";

	queue<int> nodesQueue;
	nodesQueue.push(startNode);
	while (!nodesQueue.empty()) {
		int node = nodesQueue.front();
		nodesQueue.pop();
		cout << "\tn" << node << " ;\n";
		cout << "\tn" << node << " [label=\"" << nodes[node].first << "\"] ;\n";
		for (int child: nodes[node].second) {
			cout << "\tn" << node << " -- " << 'n' << child << " ;\n";
			nodesQueue.push(child);
		}
		cout << endl;
	}

	cout << "}" << endl;
}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
//   yydebug=1;
	yyparse();
	fclose(yyin);
	// fix_ast(startNode);
	build_graph();
	return 0;
}
