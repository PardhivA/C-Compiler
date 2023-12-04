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
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    LONGL = 260,                   /* LONGL  */
    CHAR = 261,                    /* CHAR  */
    DOUBLE = 262,                  /* DOUBLE  */
    NUMBER = 263,                  /* NUMBER  */
    ID = 264,                      /* ID  */
    FLOAT_NUMBER = 265,            /* FLOAT_NUMBER  */
    INC = 266,                     /* INC  */
    DEC = 267,                     /* DEC  */
    LPAREN = 268,                  /* LPAREN  */
    RPAREN = 269,                  /* RPAREN  */
    RELAND = 270,                  /* RELAND  */
    REOR = 271,                    /* REOR  */
    NOT = 272,                     /* NOT  */
    BOOLOR = 273,                  /* BOOLOR  */
    BOOLAND = 274,                 /* BOOLAND  */
    RELGREAT = 275,                /* RELGREAT  */
    RELLESS = 276,                 /* RELLESS  */
    RELGREATEQUAL = 277,           /* RELGREATEQUAL  */
    RELLESSEQUAL = 278,            /* RELLESSEQUAL  */
    RELNOTEQUAL = 279,             /* RELNOTEQUAL  */
    RELEQUAL = 280,                /* RELEQUAL  */
    ELSE = 281,                    /* ELSE  */
    LBRACE = 282,                  /* LBRACE  */
    RBRACE = 283,                  /* RBRACE  */
    IF = 284,                      /* IF  */
    WHILE = 285,                   /* WHILE  */
    SWITCH = 286,                  /* SWITCH  */
    BREAK = 287,                   /* BREAK  */
    CASE = 288,                    /* CASE  */
    DEFAULT = 289                  /* DEFAULT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define FLOAT 259
#define LONGL 260
#define CHAR 261
#define DOUBLE 262
#define NUMBER 263
#define ID 264
#define FLOAT_NUMBER 265
#define INC 266
#define DEC 267
#define LPAREN 268
#define RPAREN 269
#define RELAND 270
#define REOR 271
#define NOT 272
#define BOOLOR 273
#define BOOLAND 274
#define RELGREAT 275
#define RELLESS 276
#define RELGREATEQUAL 277
#define RELLESSEQUAL 278
#define RELNOTEQUAL 279
#define RELEQUAL 280
#define ELSE 281
#define LBRACE 282
#define RBRACE 283
#define IF 284
#define WHILE 285
#define SWITCH 286
#define BREAK 287
#define CASE 288
#define DEFAULT 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 63 "prob1.y"
 // these are all attributes
	int dval;
	char lexeme[20];
	struct Node *node;
	char *String;
	int val;
	float fval;
	struct charac_node *Charac_node;

#line 145 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
