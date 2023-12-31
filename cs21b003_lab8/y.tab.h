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
    FLOAT_NUMBER = 260,            /* FLOAT_NUMBER  */
    INC = 261,                     /* INC  */
    DEC = 262,                     /* DEC  */
    LPAREN = 263,                  /* LPAREN  */
    RPAREN = 264,                  /* RPAREN  */
    RELAND = 265,                  /* RELAND  */
    REOR = 266,                    /* REOR  */
    NOT = 267,                     /* NOT  */
    BOOLOR = 268,                  /* BOOLOR  */
    BOOLAND = 269,                 /* BOOLAND  */
    RELGREAT = 270,                /* RELGREAT  */
    RELLESS = 271,                 /* RELLESS  */
    RELGREATEQUAL = 272,           /* RELGREATEQUAL  */
    RELLESSEQUAL = 273,            /* RELLESSEQUAL  */
    RELNOTEQUAL = 274,             /* RELNOTEQUAL  */
    RELEQUAL = 275,                /* RELEQUAL  */
    ELSE = 276,                    /* ELSE  */
    WHILE = 277,                   /* WHILE  */
    LBRACE = 278,                  /* LBRACE  */
    RBRACE = 279,                  /* RBRACE  */
    IF = 280                       /* IF  */
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
#define FLOAT_NUMBER 260
#define INC 261
#define DEC 262
#define LPAREN 263
#define RPAREN 264
#define RELAND 265
#define REOR 266
#define NOT 267
#define BOOLOR 268
#define BOOLAND 269
#define RELGREAT 270
#define RELLESS 271
#define RELGREATEQUAL 272
#define RELLESSEQUAL 273
#define RELNOTEQUAL 274
#define RELEQUAL 275
#define ELSE 276
#define WHILE 277
#define LBRACE 278
#define RBRACE 279
#define IF 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "prob1.y"
 // these are all attributes
	int dval;
	char lexeme[20];
	struct Node *node;
	char *String;
	float fval;
	struct charac_node *Charac_node;

#line 126 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
