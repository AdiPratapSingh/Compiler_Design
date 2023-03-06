/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_IDENTIFIER = 258,          /* TOK_IDENTIFIER  */
    TOK_LITERAL = 259,             /* TOK_LITERAL  */
    TOK_33 = 260,                  /* "!"  */
    TOK_3361 = 261,                /* "!="  */
    TOK_37 = 262,                  /* "%"  */
    TOK_3761 = 263,                /* "%="  */
    TOK_38 = 264,                  /* "&"  */
    TOK_3838 = 265,                /* "&&"  */
    TOK_3861 = 266,                /* "&="  */
    TOK_40 = 267,                  /* "("  */
    TOK_41 = 268,                  /* ")"  */
    TOK_42 = 269,                  /* "*"  */
    TOK_4261 = 270,                /* "*="  */
    TOK_43 = 271,                  /* "+"  */
    TOK_4343 = 272,                /* "++"  */
    TOK_4361 = 273,                /* "+="  */
    TOK_44 = 274,                  /* ","  */
    TOK_45 = 275,                  /* "-"  */
    TOK_4545 = 276,                /* "--"  */
    TOK_4561 = 277,                /* "-="  */
    TOK_4562 = 278,                /* "->"  */
    TOK_46 = 279,                  /* "."  */
    TOK_464646 = 280,              /* "..."  */
    TOK_47 = 281,                  /* "/"  */
    TOK_4761 = 282,                /* "/="  */
    TOK_58 = 283,                  /* ":"  */
    TOK_5858 = 284,                /* "::"  */
    TOK_59 = 285,                  /* ";"  */
    TOK_60 = 286,                  /* "<"  */
    TOK_6060 = 287,                /* "<<"  */
    TOK_606061 = 288,              /* "<<="  */
    TOK_6061 = 289,                /* "<="  */
    TOK_61 = 290,                  /* "="  */
    TOK_6161 = 291,                /* "=="  */
    TOK_62 = 292,                  /* ">"  */
    TOK_6261 = 293,                /* ">="  */
    TOK_6262 = 294,                /* ">>"  */
    TOK_626261 = 295,              /* ">>="  */
    TOK_626262 = 296,              /* ">>>"  */
    TOK_62626261 = 297,            /* ">>>="  */
    TOK_63 = 298,                  /* "?"  */
    TOK_91 = 299,                  /* "["  */
    TOK_93 = 300,                  /* "]"  */
    TOK_94 = 301,                  /* "^"  */
    TOK_9461 = 302,                /* "^="  */
    TOK_abstract = 303,            /* "abstract"  */
    TOK_assert = 304,              /* "assert"  */
    TOK_boolean = 305,             /* "boolean"  */
    TOK_break = 306,               /* "break"  */
    TOK_byte = 307,                /* "byte"  */
    TOK_case = 308,                /* "case"  */
    TOK_catch = 309,               /* "catch"  */
    TOK_char = 310,                /* "char"  */
    TOK_class = 311,               /* "class"  */
    TOK_continue = 312,            /* "continue"  */
    TOK_default = 313,             /* "default"  */
    TOK_do = 314,                  /* "do"  */
    TOK_double = 315,              /* "double"  */
    TOK_else = 316,                /* "else"  */
    TOK_enum = 317,                /* "enum"  */
    TOK_extends = 318,             /* "extends"  */
    TOK_final = 319,               /* "final"  */
    TOK_finally = 320,             /* "finally"  */
    TOK_float = 321,               /* "float"  */
    TOK_for = 322,                 /* "for"  */
    TOK_if = 323,                  /* "if"  */
    TOK_implements = 324,          /* "implements"  */
    TOK_import = 325,              /* "import"  */
    TOK_instanceof = 326,          /* "instanceof"  */
    TOK_int = 327,                 /* "int"  */
    TOK_interface = 328,           /* "interface"  */
    TOK_long = 329,                /* "long"  */
    TOK_new = 330,                 /* "new"  */
    TOK_package = 331,             /* "package"  */
    TOK_permits = 332,             /* "permits"  */
    TOK_private = 333,             /* "private"  */
    TOK_protected = 334,           /* "protected"  */
    TOK_public = 335,              /* "public"  */
    TOK_record = 336,              /* "record"  */
    TOK_return = 337,              /* "return"  */
    TOK_sealed = 338,              /* "sealed"  */
    TOK_short = 339,               /* "short"  */
    TOK_static = 340,              /* "static"  */
    TOK_strictfp = 341,            /* "strictfp"  */
    TOK_super = 342,               /* "super"  */
    TOK_switch = 343,              /* "switch"  */
    TOK_synchronized = 344,        /* "synchronized"  */
    TOK_this = 345,                /* "this"  */
    TOK_throw = 346,               /* "throw"  */
    TOK_throws = 347,              /* "throws"  */
    TOK_transient = 348,           /* "transient"  */
    TOK_transitive = 349,          /* "transitive"  */
    TOK_try = 350,                 /* "try"  */
    TOK_var = 351,                 /* "var"  */
    TOK_void = 352,                /* "void"  */
    TOK_volatile = 353,            /* "volatile"  */
    TOK_while = 354,               /* "while"  */
    TOK_yield = 355,               /* "yield"  */
    TOK_123 = 356,                 /* "{"  */
    TOK_124 = 357,                 /* "|"  */
    TOK_12461 = 358,               /* "|="  */
    TOK_124124 = 359,              /* "||"  */
    TOK_125 = 360,                 /* "}"  */
    TOK_126 = 361                  /* "~"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "parser.y"

  char* s;
  int i;

#line 175 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (void);

/* "%code provides" blocks.  */
#line 21 "parser.y"

void yyerror (char const*);
int yylex (YYSTYPE*);

#line 194 "parser.tab.h"

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
