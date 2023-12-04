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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    NUMBER = 258,                  /* NUMBER  */
    ID = 259,                      /* ID  */
    STRINGNAME = 260,              /* STRINGNAME  */
    FLOAT_NUMBER = 261,            /* FLOAT_NUMBER  */
    INC = 262,                     /* INC  */
    DEC = 263,                     /* DEC  */
    LPAREN = 264,                  /* LPAREN  */
    RPAREN = 265,                  /* RPAREN  */
    RELAND = 266,                  /* RELAND  */
    REOR = 267,                    /* REOR  */
    NOT = 268,                     /* NOT  */
    BOOLOR = 269,                  /* BOOLOR  */
    BOOLAND = 270,                 /* BOOLAND  */
    RELGREAT = 271,                /* RELGREAT  */
    RELLESS = 272,                 /* RELLESS  */
    RELGREATEQUAL = 273,           /* RELGREATEQUAL  */
    RELLESSEQUAL = 274,            /* RELLESSEQUAL  */
    RELNOTEQUAL = 275,             /* RELNOTEQUAL  */
    RELEQUAL = 276,                /* RELEQUAL  */
    ELSE = 277,                    /* ELSE  */
    LBRACE = 278,                  /* LBRACE  */
    RBRACE = 279,                  /* RBRACE  */
    IF = 280,                      /* IF  */
    DO = 281,                      /* DO  */
    WHILE = 282,                   /* WHILE  */
    SWITCH = 283,                  /* SWITCH  */
    BREAK = 284,                   /* BREAK  */
    CONTINUE = 285,                /* CONTINUE  */
    CASE = 286,                    /* CASE  */
    DEFAULT = 287                  /* DEFAULT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUMBER 258
#define ID 259
#define STRINGNAME 260
#define FLOAT_NUMBER 261
#define INC 262
#define DEC 263
#define LPAREN 264
#define RPAREN 265
#define RELAND 266
#define REOR 267
#define NOT 268
#define BOOLOR 269
#define BOOLAND 270
#define RELGREAT 271
#define RELLESS 272
#define RELGREATEQUAL 273
#define RELLESSEQUAL 274
#define RELNOTEQUAL 275
#define RELEQUAL 276
#define ELSE 277
#define LBRACE 278
#define RBRACE 279
#define IF 280
#define DO 281
#define WHILE 282
#define SWITCH 283
#define BREAK 284
#define CONTINUE 285
#define CASE 286
#define DEFAULT 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "prob1.y"
 // these are all attributes
	int dval;
	char lexeme[20];
	struct Node *node;
	char *String;
	float fval;
	struct charac_node *Charac_node;

#line 140 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
