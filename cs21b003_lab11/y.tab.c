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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "prob1.y"

#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int yylex();
int yyerror(char *);
int eflag=0;
extern FILE * yyin;
int count = 0, count_label = 0;
int label_count = 0;
char **stack ;
// char **stack_else;
char **switch_out;
char **expr_label;
int expr_label_count =0 ;
int stack_count = 0;
int switch_out_count = 0;
int switch_label_count = 0;
int arr_size = 1;
//  INC "("ID ")" | "("ID ")" INC | DEC "("ID ")" | "("ID ")" DEC | 

struct  Node{
	struct Node *left;
	struct Node *right;
	struct Node *middle;
	char lexeme[20];
	int dval;
	float fval;
	char token[20];
};

struct charac_node{
	char *if_label;
	char *else_label;
	char *lexeme;
	char *after_label;
};


struct symbolTable{
	char **name;
	char **type;
	// int **val;
	int **addr;
	int cur_index;
	// int par_index;
};

struct symbolTable *tables;
int table_index = 0;
void PreorderTraversal(struct Node*);
void PostorderTraversal(struct Node*);
char *gen_var();
char *gen_label();
char *gen_out_fun();
void gen_addr(int num);
char *itoa(int num);
void initialize();

#line 132 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 263 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_LONGL = 5,                      /* LONGL  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_NUMBER = 8,                     /* NUMBER  */
  YYSYMBOL_ID = 9,                         /* ID  */
  YYSYMBOL_FLOAT_NUMBER = 10,              /* FLOAT_NUMBER  */
  YYSYMBOL_INC = 11,                       /* INC  */
  YYSYMBOL_DEC = 12,                       /* DEC  */
  YYSYMBOL_LPAREN = 13,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 14,                    /* RPAREN  */
  YYSYMBOL_RELAND = 15,                    /* RELAND  */
  YYSYMBOL_REOR = 16,                      /* REOR  */
  YYSYMBOL_NOT = 17,                       /* NOT  */
  YYSYMBOL_BOOLOR = 18,                    /* BOOLOR  */
  YYSYMBOL_BOOLAND = 19,                   /* BOOLAND  */
  YYSYMBOL_RELGREAT = 20,                  /* RELGREAT  */
  YYSYMBOL_RELLESS = 21,                   /* RELLESS  */
  YYSYMBOL_RELGREATEQUAL = 22,             /* RELGREATEQUAL  */
  YYSYMBOL_RELLESSEQUAL = 23,              /* RELLESSEQUAL  */
  YYSYMBOL_RELNOTEQUAL = 24,               /* RELNOTEQUAL  */
  YYSYMBOL_RELEQUAL = 25,                  /* RELEQUAL  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_LBRACE = 27,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 28,                    /* RBRACE  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_SWITCH = 31,                    /* SWITCH  */
  YYSYMBOL_BREAK = 32,                     /* BREAK  */
  YYSYMBOL_CASE = 33,                      /* CASE  */
  YYSYMBOL_DEFAULT = 34,                   /* DEFAULT  */
  YYSYMBOL_35_ = 35,                       /* ';'  */
  YYSYMBOL_36_ = 36,                       /* '{'  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_40_ = 40,                       /* ':'  */
  YYSYMBOL_41_ = 41,                       /* '='  */
  YYSYMBOL_42_ = 42,                       /* '+'  */
  YYSYMBOL_43_ = 43,                       /* '-'  */
  YYSYMBOL_44_ = 44,                       /* '*'  */
  YYSYMBOL_45_ = 45,                       /* '/'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '['  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_slist = 50,                     /* slist  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_switch = 53,                    /* switch  */
  YYSYMBOL_54_3 = 54,                      /* $@3  */
  YYSYMBOL_cases = 55,                     /* cases  */
  YYSYMBOL_56_4 = 56,                      /* $@4  */
  YYSYMBOL_57_5 = 57,                      /* $@5  */
  YYSYMBOL_while_loop = 58,                /* while_loop  */
  YYSYMBOL_59_6 = 59,                      /* $@6  */
  YYSYMBOL_60_7 = 60,                      /* $@7  */
  YYSYMBOL_if_control = 61,                /* if_control  */
  YYSYMBOL_62_8 = 62,                      /* $@8  */
  YYSYMBOL_else_add_on = 63,               /* else_add_on  */
  YYSYMBOL_64_9 = 64,                      /* $@9  */
  YYSYMBOL_condition = 65,                 /* condition  */
  YYSYMBOL_sub_condition = 66,             /* sub_condition  */
  YYSYMBOL_boolop = 67,                    /* boolop  */
  YYSYMBOL_relop = 68,                     /* relop  */
  YYSYMBOL_EXPR1 = 69,                     /* EXPR1  */
  YYSYMBOL_TERM1 = 70,                     /* TERM1  */
  YYSYMBOL_FACT1 = 71,                     /* FACT1  */
  YYSYMBOL_FIX1 = 72,                      /* FIX1  */
  YYSYMBOL_stmt = 73,                      /* stmt  */
  YYSYMBOL_74_10 = 74,                     /* $@10  */
  YYSYMBOL_REC = 75,                       /* REC  */
  YYSYMBOL_TYPE = 76,                      /* TYPE  */
  YYSYMBOL_REC1 = 77,                      /* REC1  */
  YYSYMBOL_78_11 = 78,                     /* $@11  */
  YYSYMBOL_REC2 = 79,                      /* REC2  */
  YYSYMBOL_EXPR = 80,                      /* EXPR  */
  YYSYMBOL_TERM = 81,                      /* TERM  */
  YYSYMBOL_FACT = 82,                      /* FACT  */
  YYSYMBOL_FIX = 83,                       /* FIX  */
  YYSYMBOL_IDALL2 = 84,                    /* IDALL2  */
  YYSYMBOL_85_12 = 85,                     /* $@12  */
  YYSYMBOL_BRACKS2 = 86,                   /* BRACKS2  */
  YYSYMBOL_87_13 = 87,                     /* $@13  */
  YYSYMBOL_IDALL = 88,                     /* IDALL  */
  YYSYMBOL_89_14 = 89,                     /* $@14  */
  YYSYMBOL_BRACKS = 90,                    /* BRACKS  */
  YYSYMBOL_91_15 = 91,                     /* $@15  */
  YYSYMBOL_IDTEMP = 92,                    /* IDTEMP  */
  YYSYMBOL_IDTEMP2 = 93                    /* IDTEMP2  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   232

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      38,    39,    44,    42,    46,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    35,
       2,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   132,   132,   134,   135,   136,   137,   153,   137,   160,
     162,   162,   174,   180,   174,   180,   180,   184,   188,   184,
     201,   201,   215,   215,   225,   227,   229,   229,   232,   234,
     236,   238,   242,   246,   253,   255,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   279,   290,   302,   303,   315,
     327,   329,   346,   367,   384,   405,   414,   416,   419,   423,
     429,   429,   433,   439,   444,   445,   449,   451,   455,   455,
     455,   456,   456,   458,   464,   470,   471,   477,   483,   485,
     502,   523,   554,   588,   597,   599,   602,   605,   609,   613,
     613,   625,   625,   627,   629,   629,   775,   775,   777,   778,
     784
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT",
  "LONGL", "CHAR", "DOUBLE", "NUMBER", "ID", "FLOAT_NUMBER", "INC", "DEC",
  "LPAREN", "RPAREN", "RELAND", "REOR", "NOT", "BOOLOR", "BOOLAND",
  "RELGREAT", "RELLESS", "RELGREATEQUAL", "RELLESSEQUAL", "RELNOTEQUAL",
  "RELEQUAL", "ELSE", "LBRACE", "RBRACE", "IF", "WHILE", "SWITCH", "BREAK",
  "CASE", "DEFAULT", "';'", "'{'", "'}'", "'('", "')'", "':'", "'='",
  "'+'", "'-'", "'*'", "'/'", "','", "'['", "']'", "$accept", "slist",
  "$@1", "$@2", "switch", "$@3", "cases", "$@4", "$@5", "while_loop",
  "$@6", "$@7", "if_control", "$@8", "else_add_on", "$@9", "condition",
  "sub_condition", "boolop", "relop", "EXPR1", "TERM1", "FACT1", "FIX1",
  "stmt", "$@10", "REC", "TYPE", "REC1", "$@11", "REC2", "EXPR", "TERM",
  "FACT", "FIX", "IDALL2", "$@12", "BRACKS2", "$@13", "IDALL", "$@14",
  "BRACKS", "$@15", "IDTEMP", "IDTEMP2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     158,   -84,   -84,   -84,   -84,   -84,   -84,    -6,    -6,    -4,
     -84,    10,   -84,   113,    11,    58,   158,   158,    45,    38,
     -84,   -33,   -21,   -84,   -84,   -84,    49,   -84,   -84,   -84,
      57,    53,   113,   158,   -28,    18,   -84,   -84,   -84,   -84,
     -84,   158,   158,    87,   113,   113,   113,   113,   -84,   -84,
     113,    54,   -84,   -84,    -6,    -6,   165,    57,    69,    72,
      44,   189,    36,   -84,   -84,    71,    57,    33,   -84,   -84,
      81,   -84,   -84,   -84,   -84,   -34,   -84,   -21,   -21,   -84,
     -84,   -33,   111,   -84,   -84,   -84,    57,    44,    88,   -84,
     -84,   -84,   -84,   -84,    57,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,    27,    27,    27,    27,    27,   -84,
     -84,    90,   -84,    89,   158,   113,    87,   -84,   -84,    83,
     -84,    92,    57,    44,    96,   -84,    36,    36,    43,   -84,
     -84,   -84,    98,   158,    99,   -33,   -84,   127,   -84,    93,
      44,   -84,    57,   158,   101,    55,   -84,   -84,   100,   -84,
      54,    57,   -84,   105,   158,   113,   104,   108,   -84,   110,
     -84,   -84,   -84,   115,   -33,   158,   -84,    83,   -84,   107,
     -84,   -84,   158,   106,   -84,   118,    55,   -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,    65,    66,    67,    87,   100,    88,     0,     0,     0,
      17,     0,     6,     0,     0,     0,     9,     9,    24,     0,
      60,    63,    75,    78,    84,    86,    89,    79,    89,    81,
       0,     0,     0,     9,     0,    89,    83,     1,     5,     4,
      22,     9,     9,     0,     0,     0,     0,     0,    80,    82,
       0,    93,    58,    59,     0,     0,     0,     0,     0,     0,
      26,    33,    47,    50,    56,    57,     0,     0,     7,    85,
       0,     3,     2,    99,    61,    72,    94,    73,    74,    76,
      77,    62,     0,    90,    51,    53,     0,    27,     0,    55,
      57,    20,    35,    34,     0,    36,    43,    38,    40,    39,
      41,    42,    37,    44,     0,     0,     0,     0,     0,    52,
      54,     0,    10,     0,     9,     0,     0,    64,    70,    98,
      91,     0,     0,     0,     0,    25,    45,    46,    32,    48,
      49,    18,     0,     9,     0,    68,    71,     0,    95,     0,
      31,    28,     0,     9,     0,    16,     8,    23,    72,    96,
      93,     0,    30,     0,     9,     0,     0,     0,    69,     0,
      92,    29,    21,     0,    12,     9,    11,    98,    19,     0,
      15,    97,     9,     0,    13,     0,    16,    14
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -15,   -84,   -84,   -84,   -84,   -17,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -35,   122,   -83,   -84,
      73,   -11,   -10,   102,   -84,   -84,    47,   -84,   -84,   -84,
      23,    -7,    65,    66,   166,    -2,   -84,    31,   -84,   -84,
     -84,    15,   -84,   -84,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    15,    33,   113,    16,   132,   157,   169,   175,    17,
      31,   144,    18,   124,    41,    70,    59,    60,    94,   106,
      61,    62,    63,    64,    19,    43,    74,    20,   117,   148,
     118,    21,    22,    23,    24,    25,    51,    83,   139,    75,
     119,   138,   159,    76,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      26,    38,    39,     5,   122,    27,    34,   115,    29,    44,
      45,    69,   116,    35,    44,    45,    26,    26,    68,     4,
       5,     6,    88,    46,    47,    67,    71,    72,    65,    48,
      49,   111,    35,    26,    30,    52,     5,    53,    54,    55,
     142,    26,    26,    81,    35,    35,    35,    35,    32,    13,
      35,   121,    84,    85,    65,    65,    90,   151,    37,   125,
      48,    49,    92,    93,    65,    52,     5,    53,    54,    55,
      58,    40,   112,    42,    56,    44,    45,    52,     5,    53,
     107,   108,   109,   110,    65,   104,   105,   141,   155,   156,
      50,    66,    65,   126,   127,    57,    73,   129,   130,   134,
      58,    82,    65,    65,    65,    65,    65,   152,   135,    77,
      78,    91,    79,    80,    26,    35,   161,   114,   146,   120,
      65,     4,     5,     6,     7,     8,   133,   123,   153,   131,
     137,   140,   143,    26,   145,   149,   147,   154,   174,   163,
      65,   150,   162,    26,   165,   166,   116,   172,   164,    65,
     170,    13,   168,   176,    26,    35,    14,   173,   167,   177,
      89,     1,     2,   136,     3,    26,     4,     5,     6,     7,
       8,   158,    26,    52,     5,    53,    54,    55,    87,   128,
      36,   160,   171,     0,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,    12,     0,    13,     0,     0,     0,
       0,    14,     0,    86,    95,    96,     0,     0,    58,    97,
      98,    99,   100,   101,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,   104,   105
};

static const yytype_int16 yycheck[] =
{
       0,    16,    17,     9,    87,     7,    13,    41,     8,    42,
      43,    39,    46,    13,    42,    43,    16,    17,    33,     8,
       9,    10,    57,    44,    45,    32,    41,    42,    30,    11,
      12,    66,    32,    33,    38,     8,     9,    10,    11,    12,
     123,    41,    42,    50,    44,    45,    46,    47,    38,    38,
      50,    86,    54,    55,    56,    57,    58,   140,     0,    94,
      11,    12,    18,    19,    66,     8,     9,    10,    11,    12,
      43,    26,    39,    35,    17,    42,    43,     8,     9,    10,
      44,    45,    11,    12,    86,    42,    43,   122,    33,    34,
      41,    38,    94,   104,   105,    38,     9,   107,   108,   114,
      43,    47,   104,   105,   106,   107,   108,   142,   115,    44,
      45,    39,    46,    47,   114,   115,   151,    36,   133,     8,
     122,     8,     9,    10,    11,    12,    37,    39,   143,    39,
      47,    39,    36,   133,    36,     8,    37,    36,    32,   154,
     142,    48,    37,   143,    40,    37,    46,    40,   155,   151,
     165,    38,    37,    35,   154,   155,    43,   172,    48,   176,
      58,     3,     4,   116,     6,   165,     8,     9,    10,    11,
      12,   148,   172,     8,     9,    10,    11,    12,    56,   106,
      14,   150,   167,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    -1,    -1,
      -1,    43,    -1,    38,    15,    16,    -1,    -1,    43,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     8,     9,    10,    11,    12,    29,
      30,    31,    36,    38,    43,    50,    53,    58,    61,    73,
      76,    80,    81,    82,    83,    84,    93,    84,    93,    93,
      38,    59,    38,    51,    80,    93,    83,     0,    50,    50,
      26,    63,    35,    74,    42,    43,    44,    45,    11,    12,
      41,    85,     8,    10,    11,    12,    17,    38,    43,    65,
      66,    69,    70,    71,    72,    84,    38,    80,    50,    39,
      64,    50,    50,     9,    75,    88,    92,    81,    81,    82,
      82,    80,    47,    86,    84,    84,    38,    66,    65,    72,
      84,    39,    18,    19,    67,    15,    16,    20,    21,    22,
      23,    24,    25,    41,    42,    43,    68,    44,    45,    11,
      12,    65,    39,    52,    36,    41,    46,    77,    79,    89,
       8,    65,    67,    39,    62,    65,    70,    70,    69,    71,
      71,    39,    54,    37,    50,    80,    75,    47,    90,    87,
      39,    65,    67,    36,    60,    36,    50,    37,    78,     8,
      48,    67,    65,    50,    36,    33,    34,    55,    79,    91,
      86,    65,    37,    50,    80,    40,    37,    48,    37,    56,
      50,    90,    40,    50,    32,    57,    35,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    50,    50,    51,    52,    50,    50,
      54,    53,    56,    57,    55,    55,    55,    59,    60,    58,
      62,    61,    64,    63,    63,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    72,    72,    72,
      74,    73,    73,    73,    75,    76,    76,    76,    78,    77,
      77,    79,    79,    80,    80,    80,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    83,    85,
      84,    87,    86,    86,    89,    88,    91,    90,    90,    92,
      93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     0,     0,     6,     0,
       0,     8,     0,     0,     9,     3,     0,     0,     0,     9,
       0,     8,     0,     5,     0,     3,     1,     2,     4,     6,
       5,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       0,     3,     3,     1,     2,     1,     1,     1,     0,     4,
       1,     2,     0,     3,     3,     1,     3,     3,     1,     2,
       2,     2,     2,     2,     1,     3,     1,     1,     1,     0,
       3,     0,     5,     0,     0,     3,     0,     5,     0,     1,
       1
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


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
  case 6: /* $@1: %empty  */
#line 137 "prob1.y"
                    {
		table_index++;
		// printf("cur table index : %d \n", table_index);
		
// tables[table_index].name = malloc(50 * sizeof(char *)); // Allocate name attribute in symbol table
// for(int i = 0; i < 50; i++){  tables[table_index].name[i] = malloc(40 * sizeof(char));}

// tables[table_index].type = malloc(50 * sizeof(char *)); // Allocate type attribute in symbol table
// for(int i = 0; i < 50; i++){  tables[table_index].type[i] = malloc(40 * sizeof(char));}


// tables[table_index].addr = malloc(50 * sizeof(int *)); // Allocate addr attribute in symbol table
// for(int i = 0; i < 50; i++){  tables[table_index].addr[i] = malloc(40 * sizeof(int));}

// tables[table_index].cur_index = 0;
// printf("fsdfds");
	}
#line 1486 "y.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 153 "prob1.y"
                {
		// printf("inside free");
		strcpy(tables[table_index].type[0],"");
		tables[table_index].cur_index =0 ;
		table_index--;
		// printf("cur table index (after returning): %d \n", table_index);
		}
#line 1498 "y.tab.c"
    break;

  case 9: /* slist: %empty  */
#line 160 "prob1.y"
          {}
#line 1504 "y.tab.c"
    break;

  case 10: /* $@3: %empty  */
#line 162 "prob1.y"
                            {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	strcpy(expr_label[expr_label_count++], (yyvsp[-1].String));
	temp1 = gen_out_fun();
	strcpy(switch_out[switch_out_count++], temp1);
	
}
#line 1516 "y.tab.c"
    break;

  case 11: /* switch: SWITCH '(' EXPR ')' $@3 '{' cases '}'  */
#line 168 "prob1.y"
                      {
	printf("%s: ", switch_out[switch_out_count-1]);
	expr_label_count--;
	switch_out_count--;
}
#line 1526 "y.tab.c"
    break;

  case 12: /* $@4: %empty  */
#line 174 "prob1.y"
                   {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);	
	printf("ifFalse %s = %s goto %s \n", expr_label[expr_label_count-1], (yyvsp[0].String), temp1);
	

}
#line 1538 "y.tab.c"
    break;

  case 13: /* $@5: %empty  */
#line 180 "prob1.y"
                 {printf("goto %s \n", switch_out[switch_out_count-1]); printf("%s: ",stack[stack_count-1]); stack_count--;}
#line 1544 "y.tab.c"
    break;

  case 16: /* cases: %empty  */
#line 180 "prob1.y"
                                                                                                                                                            {}
#line 1550 "y.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 184 "prob1.y"
                    {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	printf("%s: " , stack[stack_count-1]);
	}
#line 1560 "y.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 188 "prob1.y"
                            {
	printf("if ");	
	char *temp = (char*)malloc(40 *sizeof(char));
	temp = gen_label();
	printf("%s == TRUE then go to label %s\n", (yyvsp[-1].String), temp);
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	
	strcpy(stack[stack_count++], temp1);
	strcpy(stack[stack_count++], temp);
	printf("%s: " , stack[stack_count-1]); stack_count--;
}
#line 1578 "y.tab.c"
    break;

  case 19: /* while_loop: WHILE $@6 '(' condition ')' $@7 '{' slist '}'  */
#line 200 "prob1.y"
                {printf("go to label %s\n",stack[stack_count-2]); printf("%s: " , stack[stack_count-1]); stack_count-=2;}
#line 1584 "y.tab.c"
    break;

  case 20: /* $@8: %empty  */
#line 201 "prob1.y"
                                 {
	printf("if ");	
	char *temp = (char*)malloc(40 *sizeof(char));
	temp = gen_label();
	printf("%s == TRUE then go to label %s\n", (yyvsp[-1].String), temp);
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	
	strcpy(stack[stack_count++], temp1);
	strcpy(stack[stack_count++], temp);
	printf("%s: " , stack[stack_count-1]); stack_count--;
}
#line 1602 "y.tab.c"
    break;

  case 22: /* $@9: %empty  */
#line 215 "prob1.y"
                      {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	printf("%s: " , stack[stack_count-1]); stack_count--; 
	strcpy(stack[stack_count++], temp1);}
#line 1613 "y.tab.c"
    break;

  case 23: /* else_add_on: ELSE $@9 '{' slist '}'  */
#line 222 "prob1.y"
        {
		printf("%s: " , stack[stack_count-1]); stack_count--;
	}
#line 1621 "y.tab.c"
    break;

  case 24: /* else_add_on: %empty  */
#line 225 "prob1.y"
          { printf("%s: " , stack[stack_count-1]); stack_count--;}
#line 1627 "y.tab.c"
    break;

  case 25: /* condition: sub_condition boolop condition  */
#line 227 "prob1.y"
                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1635 "y.tab.c"
    break;

  case 26: /* condition: sub_condition  */
#line 229 "prob1.y"
                                                                            {(yyval.String) = (char*)malloc(40 *sizeof(char)); strcpy((yyval.String), (yyvsp[0].String));}
#line 1641 "y.tab.c"
    break;

  case 27: /* condition: NOT sub_condition  */
#line 229 "prob1.y"
                                                                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[0].String));
}
#line 1650 "y.tab.c"
    break;

  case 28: /* condition: NOT sub_condition boolop condition  */
#line 232 "prob1.y"
                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1658 "y.tab.c"
    break;

  case 29: /* condition: NOT '(' condition ')' boolop condition  */
#line 234 "prob1.y"
                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1666 "y.tab.c"
    break;

  case 30: /* condition: '(' condition ')' boolop condition  */
#line 236 "prob1.y"
                                                                                                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1674 "y.tab.c"
    break;

  case 31: /* condition: NOT '(' condition ')'  */
#line 238 "prob1.y"
                                                                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[-1].String));
}
#line 1683 "y.tab.c"
    break;

  case 32: /* sub_condition: EXPR1 relop EXPR1  */
#line 242 "prob1.y"
                                 {
		(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));
}
#line 1693 "y.tab.c"
    break;

  case 33: /* sub_condition: EXPR1  */
#line 246 "prob1.y"
         {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s  \n", (yyval.String), (yyvsp[0].String));
}
#line 1703 "y.tab.c"
    break;

  case 34: /* boolop: BOOLAND  */
#line 253 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&&");}
#line 1710 "y.tab.c"
    break;

  case 35: /* boolop: BOOLOR  */
#line 255 "prob1.y"
                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"||");}
#line 1717 "y.tab.c"
    break;

  case 36: /* relop: RELAND  */
#line 260 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&");}
#line 1724 "y.tab.c"
    break;

  case 37: /* relop: RELEQUAL  */
#line 262 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"==");}
#line 1731 "y.tab.c"
    break;

  case 38: /* relop: RELGREAT  */
#line 264 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">");}
#line 1738 "y.tab.c"
    break;

  case 39: /* relop: RELGREATEQUAL  */
#line 266 "prob1.y"
                                {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">=");}
#line 1745 "y.tab.c"
    break;

  case 40: /* relop: RELLESS  */
#line 268 "prob1.y"
                          {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<");}
#line 1752 "y.tab.c"
    break;

  case 41: /* relop: RELLESSEQUAL  */
#line 270 "prob1.y"
                               {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<=");}
#line 1759 "y.tab.c"
    break;

  case 42: /* relop: RELNOTEQUAL  */
#line 272 "prob1.y"
                              {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"!=");}
#line 1766 "y.tab.c"
    break;

  case 43: /* relop: REOR  */
#line 274 "prob1.y"
                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"|");}
#line 1773 "y.tab.c"
    break;

  case 44: /* relop: '='  */
#line 276 "prob1.y"
                      {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"=");}
#line 1780 "y.tab.c"
    break;

  case 45: /* EXPR1: EXPR1 '+' TERM1  */
#line 279 "prob1.y"
                                        {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), gen_var());
				// char temp[20];
				// strcpy(temp, $$);
				// strcat(temp, "=");
				// strcat(temp, $1);
				// strcat(temp, "+");
				// strcat(temp, $3);
				printf("%s = %s + %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 1796 "y.tab.c"
    break;

  case 46: /* EXPR1: EXPR1 '-' TERM1  */
#line 290 "prob1.y"
                                          {
				(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
				// char temp[20];
				// strcpy(temp, $$);
				// strcat(temp,"=");
				// strcat(temp, $1);
				// strcat(temp, "-");
				// strcat(temp, $3);
				// printf("%s", temp);
				printf("%s = %s - %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 1813 "y.tab.c"
    break;

  case 47: /* EXPR1: TERM1  */
#line 302 "prob1.y"
                                        {strcpy((yyval.String), (yyvsp[0].String));}
#line 1819 "y.tab.c"
    break;

  case 48: /* TERM1: TERM1 '*' FACT1  */
#line 303 "prob1.y"
                                {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
			// 	char temp[20];
			// 	strcpy(temp, $$);
			// 	strcat(temp,"=");
			// 	strcat(temp, $1);
			// 	strcat(temp, "*");
			// 	strcat(temp, $3);
				// printf("%s", temp);
				printf("%s = %s * %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 1836 "y.tab.c"
    break;

  case 49: /* TERM1: TERM1 '/' FACT1  */
#line 315 "prob1.y"
                                          {
				(yyval.String) = (char *)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
			// 	char temp[20];
			// 	strcpy(temp, $$);
			// 	strcat(temp,"=");
			// 	strcat(temp, $1);
			// 	strcat(temp, "/");
			// 	strcat(temp, $3);
				// printf("%s", temp);
				printf("%s = %s / %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 1853 "y.tab.c"
    break;

  case 50: /* TERM1: FACT1  */
#line 327 "prob1.y"
                                       {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 1860 "y.tab.c"
    break;

  case 51: /* FACT1: INC IDALL2  */
#line 329 "prob1.y"
                      {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), (yyvsp[0].String));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, (yyvsp[0].String));
				strcat(temp, "+");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($2, "=");
				// strcat($2, temp1);
				printf("%s = %s\n",(yyvsp[0].String) , temp1);
		 }
#line 1882 "y.tab.c"
    break;

  case 52: /* FACT1: IDALL2 INC  */
#line 346 "prob1.y"
                              {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp2[100];
				strcpy(temp2, gen_var());
				printf("%s = %s\n", temp2, (yyvsp[-1].String));
			strcpy((yyval.String), temp2);
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, (yyvsp[-1].String));
				strcat(temp, "+");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				printf("%s = %s\n",(yyvsp[-1].String) , temp1);
	
		 }
#line 1908 "y.tab.c"
    break;

  case 53: /* FACT1: DEC IDALL2  */
#line 367 "prob1.y"
                              { 
				(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), (yyvsp[0].String));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, (yyvsp[0].String));
				strcat(temp, "-");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($2, "=");
				// strcat($2, temp1);
				printf("%s = %s\n",(yyvsp[0].String) , temp1);
		 }
#line 1930 "y.tab.c"
    break;

  case 54: /* FACT1: IDALL2 DEC  */
#line 384 "prob1.y"
                              {
				(yyval.String) = (char*)malloc(40 *sizeof(char));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp2[100];
				strcpy(temp2, gen_var());
				printf("%s = %s\n", temp2, (yyvsp[-1].String));
			strcpy((yyval.String), temp2);
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, (yyvsp[-1].String));
				strcat(temp, "-");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				printf("%s = %s\n",(yyvsp[-1].String) , temp1);
	
		 }
#line 1956 "y.tab.c"
    break;

  case 55: /* FACT1: '-' FIX1  */
#line 405 "prob1.y"
                            {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 1970 "y.tab.c"
    break;

  case 56: /* FACT1: FIX1  */
#line 414 "prob1.y"
                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 1976 "y.tab.c"
    break;

  case 57: /* FIX1: IDALL2  */
#line 416 "prob1.y"
                 {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 1984 "y.tab.c"
    break;

  case 58: /* FIX1: NUMBER  */
#line 419 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 1993 "y.tab.c"
    break;

  case 59: /* FIX1: FLOAT_NUMBER  */
#line 423 "prob1.y"
                              {

		}
#line 2001 "y.tab.c"
    break;

  case 60: /* $@10: %empty  */
#line 429 "prob1.y"
                             {
	strcpy(tables[table_index].type[tables[table_index].cur_index], (yyvsp[0].String));
	}
#line 2009 "y.tab.c"
    break;

  case 62: /* stmt: IDTEMP2 '=' EXPR  */
#line 433 "prob1.y"
                                                  {
				// printf("fsdsf");	
				(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), (yyvsp[-2].String));
				printf("%s = %s\n", (yyvsp[-2].String), (yyvsp[0].String));
				
			}
#line 2021 "y.tab.c"
    break;

  case 63: /* stmt: EXPR  */
#line 439 "prob1.y"
                                  {}
#line 2027 "y.tab.c"
    break;

  case 65: /* TYPE: INT  */
#line 445 "prob1.y"
           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"int");
			// printf("fsdfsdfsfddsdf %s",$$);
			}
#line 2036 "y.tab.c"
    break;

  case 66: /* TYPE: FLOAT  */
#line 449 "prob1.y"
                        {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"float");}
#line 2043 "y.tab.c"
    break;

  case 67: /* TYPE: CHAR  */
#line 451 "prob1.y"
                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"char");}
#line 2050 "y.tab.c"
    break;

  case 68: /* $@11: %empty  */
#line 455 "prob1.y"
                     {printf("%s = %s\n", tables[table_index].name[tables[table_index].cur_index - 1], (yyvsp[0].String));}
#line 2056 "y.tab.c"
    break;

  case 73: /* EXPR: EXPR '+' TERM  */
#line 458 "prob1.y"
                                {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), gen_var());
			
				printf("%s = %s + %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2067 "y.tab.c"
    break;

  case 74: /* EXPR: EXPR '-' TERM  */
#line 464 "prob1.y"
                                        {
				(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
				
				printf("%s = %s - %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2078 "y.tab.c"
    break;

  case 75: /* EXPR: TERM  */
#line 470 "prob1.y"
                                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 2084 "y.tab.c"
    break;

  case 76: /* TERM: TERM '*' FACT  */
#line 471 "prob1.y"
                              {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
		
				printf("%s = %s * %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2095 "y.tab.c"
    break;

  case 77: /* TERM: TERM '/' FACT  */
#line 477 "prob1.y"
                                        {
				(yyval.String) = (char *)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
		
				printf("%s = %s / %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2106 "y.tab.c"
    break;

  case 78: /* TERM: FACT  */
#line 483 "prob1.y"
                                      {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 2113 "y.tab.c"
    break;

  case 79: /* FACT: INC IDALL2  */
#line 485 "prob1.y"
                      {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), (yyvsp[0].String));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, (yyvsp[0].String));
				strcat(temp, "+");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($2, "=");
				// strcat($2, temp1);
				printf("%s = %s\n",(yyvsp[0].String) , temp1);
		 }
#line 2135 "y.tab.c"
    break;

  case 80: /* FACT: IDTEMP2 INC  */
#line 502 "prob1.y"
                               {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp2[100];
				strcpy(temp2, gen_var());
				printf("%s = %s\n", temp2, (yyvsp[-1].String));
			strcpy((yyval.String), temp2);
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, (yyvsp[-1].String));
				strcat(temp, "+");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				printf("%s = %s\n",(yyvsp[-1].String) , temp1);
	
		 }
#line 2161 "y.tab.c"
    break;

  case 81: /* FACT: DEC IDTEMP2  */
#line 523 "prob1.y"
                               { //strcpy($$, $2);
				// char temp[20];
				// strcpy(temp ,gen_var());
				// char temp1[20];
				// strcpy(temp1, temp);
				// strcat(temp, "=");
				// strcat(temp, $2);
				// strcat(temp, "-");
				// strcat(temp, "1");
				// printf("%s", temp);

				// strcat($2, "=");
				// strcat($2, temp1);

				// printf("%s",$2);
				(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), (yyvsp[0].String));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, (yyvsp[0].String));
				strcat(temp, "-");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($2, "=");
				// strcat($2, temp1);
				printf("%s = %s\n",(yyvsp[0].String) , temp1);
		 }
#line 2197 "y.tab.c"
    break;

  case 82: /* FACT: IDTEMP2 DEC  */
#line 554 "prob1.y"
                               {//strcpy($$, $1);
				// char temp[20];
				// strcpy(temp ,gen_var());
				// char temp1[20];
				// strcpy(temp1, temp);
				// strcat(temp, "=");
				// strcat(temp, $1);
				// strcat(temp, "-");
				// strcat(temp, "1");
				// printf("%s", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				// printf("%s",$1);
				(yyval.String) = (char*)malloc(40 *sizeof(char));
				char temp[100];
				strcpy(temp ,gen_var());
				char temp2[100];
				strcpy(temp2, gen_var());
				printf("%s = %s\n", temp2, (yyvsp[-1].String));
			strcpy((yyval.String), temp2);
				char temp1[100];
				strcpy(temp1, temp);
				strcat(temp, " = ");
				strcat(temp, (yyvsp[-1].String));
				strcat(temp, "-");
				strcat(temp, "1");
				printf("%s\n", temp);

				// strcat($1, "=");
				// strcat($1, temp1);
				printf("%s = %s\n",(yyvsp[-1].String) , temp1);
	
		 }
#line 2236 "y.tab.c"
    break;

  case 83: /* FACT: '-' FIX  */
#line 588 "prob1.y"
                           {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 2250 "y.tab.c"
    break;

  case 84: /* FACT: FIX  */
#line 597 "prob1.y"
                      {strcpy((yyval.String), (yyvsp[0].String));}
#line 2256 "y.tab.c"
    break;

  case 85: /* FIX: '(' EXPR ')'  */
#line 599 "prob1.y"
                              {
	(yyval.String)  = (char*)malloc(40 *sizeof(char));
		 strcpy((yyval.String), (yyvsp[-1].String));}
#line 2264 "y.tab.c"
    break;

  case 86: /* FIX: IDALL2  */
#line 602 "prob1.y"
                          {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 2272 "y.tab.c"
    break;

  case 87: /* FIX: NUMBER  */
#line 605 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 2281 "y.tab.c"
    break;

  case 88: /* FIX: FLOAT_NUMBER  */
#line 609 "prob1.y"
                              {

		}
#line 2289 "y.tab.c"
    break;

  case 89: /* $@12: %empty  */
#line 613 "prob1.y"
                  {
	char * temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
		
				printf("%s = %s", temp , (yyvsp[0].String));
				strcpy((yyvsp[0].String) ,temp );
}
#line 2301 "y.tab.c"
    break;

  case 90: /* IDALL2: IDTEMP2 $@12 BRACKS2  */
#line 619 "prob1.y"
          {
	(yyval.String)= (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[-2].String));
	printf("\n");
}
#line 2311 "y.tab.c"
    break;

  case 91: /* $@13: %empty  */
#line 625 "prob1.y"
                     {
	printf("[%d]", yylval.dval);
}
#line 2319 "y.tab.c"
    break;

  case 94: /* $@14: %empty  */
#line 629 "prob1.y"
               {
// printf("cur id temp : %s\n", $1);
if(strcmp(tables[table_index].type[tables[table_index].cur_index], "") == 0){
	
		char* cur_type = (char*)malloc(40 *sizeof(char));
	strcpy(cur_type, tables[table_index].type[tables[table_index].cur_index - 1]);
	bool temp = false;
	for(int i = 0; i <= tables[table_index].cur_index;i++){
		if(!strcmp((yyvsp[0].String), tables[table_index].name[i])){
			if(strcmp(cur_type, tables[table_index].type[i]) == 0){
				printf("error: redclaration of %s\n", (yyvsp[0].String));
				temp = true;
			}
			else{
				printf("error: conflicting types for %s\n", (yyvsp[0].String));
				temp = true;
			}
		}
	}

	if(!temp){
	strcpy(tables[table_index].type[tables[table_index].cur_index],tables[table_index].type[tables[table_index].cur_index - 1] ); 
	
	strcpy(tables[table_index].name[tables[table_index].cur_index], (yyvsp[0].String));
	tables[table_index].addr[tables[table_index].cur_index] = 0;
	
	char* prev = (char*)malloc(40 *sizeof(char));
		strcpy(prev, tables[table_index].type[tables[table_index].cur_index-1] );
		int val= tables[table_index].addr[tables[table_index].cur_index-1];
		
			if(strcmp(prev, "float") == 0)
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 8;
				gen_addr(val + 8);
				
			}
		if(strcmp(prev, "int") == 0)	
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 4;
				gen_addr(val + 4);
				
			}
			if(strcmp(prev, "char") == 0)
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 1;
				gen_addr(val + 1);
				
			}
		
		printf(" %s  %s ", tables[table_index].name[tables[table_index].cur_index], tables[table_index].type[tables[table_index].cur_index]);
		
	}
}
else {
	//printf("inside first variable in multiple dec\n");

	
	
	if(tables[table_index].cur_index == 0){
		strcpy(tables[table_index].name[tables[table_index].cur_index], (yyvsp[0].String));
	tables[table_index].addr[tables[table_index].cur_index] = 0;
	gen_addr(0);
		printf(" %s %s ", tables[table_index].name[tables[table_index].cur_index], tables[table_index].type[tables[table_index].cur_index]);
	
	}
	else {
		char* cur_type = (char*)malloc(40 *sizeof(char));
	strcpy(cur_type, tables[table_index].type[tables[table_index].cur_index ]);
	bool temp = false;
	for(int i = 0; i < tables[table_index].cur_index ;i++){

		if(!strcmp((yyvsp[0].String), tables[table_index].name[i])){
			// printf("current type: %s, table found type: %s", cur_type)
			if(!strcmp(cur_type, tables[table_index].type[i])){
				printf("error: redclaration of %s\n", (yyvsp[0].String));
				temp = true;
				
			}
			else{
				printf("error: conflicting types for %s\n", (yyvsp[0].String));
				temp = true;
			}
		}
	}
		if(!temp){
			strcpy(tables[table_index].name[tables[table_index].cur_index], (yyvsp[0].String));
		char* prev = (char*)malloc(40 *sizeof(char));;
		strcpy(prev, tables[table_index].type[tables[table_index].cur_index-1] );
		int val= tables[table_index].addr[tables[table_index].cur_index-1];
		if(strcmp(prev, "float") == 0)
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 8;
				gen_addr(val + 8);
				
			}
		if(strcmp(prev, "int") == 0)	
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 4;
				gen_addr(val + 4);
				
			}
			if(strcmp(prev, "char") == 0)
			{
				tables[table_index].addr[tables[table_index].cur_index] =val + 1;
				gen_addr(val + 1);
				
			}
		

		printf(" %s %s ", tables[table_index].name[tables[table_index].cur_index], tables[table_index].type[tables[table_index].cur_index]);
		
}
	}
	
	
}


}
#line 2443 "y.tab.c"
    break;

  case 95: /* IDALL: IDTEMP $@14 BRACKS  */
#line 747 "prob1.y"
         {
	if(arr_size != 1){
		if(strcmp(tables[table_index].type[tables[table_index].cur_index], "int") == 0){
			arr_size *= 4;
		printf("%d \n" ,arr_size );
		}
		if(strcmp(tables[table_index].type[tables[table_index].cur_index], "float") == 0){
arr_size *= 8;
		printf("%d \n" ,arr_size );
		}
		if(strcmp(tables[table_index].type[tables[table_index].cur_index], "char") == 0){
arr_size *= 1;
		printf("%d \n" ,arr_size );
		}
		if(tables[table_index].cur_index != 0)
		tables[table_index].addr[tables[table_index].cur_index] = tables[table_index].addr[tables[table_index].cur_index - 1] + arr_size;
		else {
			tables[table_index].addr[tables[table_index].cur_index] = arr_size;
		}
	}
	else {
		printf("\n");
	}
		arr_size = 1;
		tables[table_index].cur_index++;


}
#line 2476 "y.tab.c"
    break;

  case 96: /* $@15: %empty  */
#line 775 "prob1.y"
                    {
	arr_size *= yylval.dval;
}
#line 2484 "y.tab.c"
    break;

  case 99: /* IDTEMP: ID  */
#line 778 "prob1.y"
            {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2494 "y.tab.c"
    break;

  case 100: /* IDTEMP2: ID  */
#line 784 "prob1.y"
             {
	char* cur_type = (char*)malloc(40 *sizeof(char));
	strcpy(cur_type, tables[table_index].type[tables[table_index].cur_index]);
	bool check= false;
	for(int tid = 0; tid <= table_index; ++tid){
		for(int i = 0; i < 50;i++){
			if(!strcmp(yylval.lexeme, strcpy(cur_type, tables[tid].name[i]))){
				check = true;
				// if(!strcmp(cur_type, tables[table_index].type[i])){
				// 	printf("error: conflicting types for %s", yylval.lexeme);
				// }
				// else{
				// 	printf("error: redclaration of %s", yylval.lexeme);
				// }
				
			}
		}
	}

	if(!check){
		printf("var %s is not declared in current scope\n", yylval.lexeme);
	} 
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2525 "y.tab.c"
    break;


#line 2529 "y.tab.c"

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

#line 812 "prob1.y"


char * gen_var(){
	char* temp = (char*)malloc(40 *sizeof(char));
	char temp1[10];
	strcpy(temp, "t");
	sprintf(temp1,"%d", count);
	strcat(temp,temp1);
	count++;
	return temp;
}

char * gen_label(){
	char* temp = (char*)malloc(40 *sizeof(char));
	char temp1[10];
	strcpy(temp, "L");
	sprintf(temp1,"%d", count_label);
	strcat(temp,temp1);
	count_label++;
	return temp;
}
char * gen_out_fun(){
	char* temp = (char*)malloc(40 *sizeof(char));
	char temp1[10];
	strcpy(temp, "OUT");
	sprintf(temp1,"%d", switch_label_count);
	strcat(temp,temp1);
	switch_label_count++;
	return temp;
}

void gen_addr(int num)
{
	/* int  num = 32424; */
/* char hex[5]; */
/* printf("fgsdfdsf");` */
/* sprintf(hex, "%x", num); */
printf("0x%x", num);

}

char *itoa(int num){
	char temp[20];
	int count = 0;
	for(int i = 0;num != 0;i++){
		int rem = num%10;
		temp[i] = rem + 48;
		count++;
	}
	int ind = 0;
	char temp1[20];
	for(int i = count - 1;i>=0;i++){
		temp1[ind++] = temp[i];
	}
	/* strrev(temp); */
	return temp1;
}

void PreorderTraversal(struct Node *head){
	if(head == NULL){return;}
	if(!strcmp(head->token, "OP" )|| !strcmp(head->token, "ID")){
		printf("%s        %s \n", head->token, head->lexeme);
	}
	if(!strcmp(head->token, "NUM")){
		printf("%s        %d\n", head->token, head->dval);
	}
	if(!strcmp(head->token, "FNUM")){
		printf("%s        %f\n", head->token, head->fval);
	}
	if(!strcmp(head->token, "UOP")){
		/* if(strcmp(head->lexeme, "-") == 0){
		printf("%s        %s\n", head->token, head->lexeme);
			printf("%s        %s\n", head->middle->token, head->middle->lexeme); 
		
		}
		else{
		printf("%s        %s\n", head->token, head->lexeme);
		printf("%s        %s\n", head->middle->token, head->middle->lexeme); } */
	printf("%s        %s\n", head->token, head->lexeme);
	PreorderTraversal(head->middle);
	}

	PreorderTraversal(head->left);
	PreorderTraversal(head->right);
}

void PostorderTraversal(struct Node *head){
	if(head == NULL){return;}

	PostorderTraversal(head->left);
	PostorderTraversal(head->right);
	if(!strcmp(head->token, "OP" )|| !strcmp(head->token, "ID")){
		printf("%s        %s \n", head->token, head->lexeme);
	}
	if(!strcmp(head->token, "NUM")){
		printf("%s        %d\n", head->token, head->dval);
	}
	if(!strcmp(head->token, "FNUM")){
		printf("%s        %f\n", head->token, head->fval);
	}
	if(!strcmp(head->token, "UOP")){
		/* if(strcmp(head->lexeme, "-") == 0){
			printf("%s        %s\n", head->middle->token, head->middle->lexeme); 
		printf("%s        %s\n", head->token, head->lexeme);
		
		}
		else{ */
			PostorderTraversal(head->middle);
		printf("%s        %s\n", head->token, head->lexeme);
		//}
	}

}

int yyerror(char *s){
	
  
  printf("Error \n ");
  yyparse();
}

int main(int argc, char* argv[])
{
	printf("------------ INTERMEDIATE CODE ------------- \n");
	stack = malloc(50 * sizeof(char *)); // Allocate row pointers
for(int i = 0; i < 50; i++){  stack[i] = malloc(40 * sizeof(char));}
	switch_out = malloc(50 * sizeof(char *)); // Allocate switch's out pointers
for(int i = 0; i < 50; i++){  switch_out[i] = malloc(40 * sizeof(char));}
expr_label = malloc(50 * sizeof(char *)); // Allocate switch's out pointers
for(int i = 0; i < 50; i++){  expr_label[i] = malloc(40 * sizeof(char));}
	
	
	tables = malloc(10  * sizeof(struct symbolTable));
	table_index = 0;
for(int j =0 ;j < 10;j++){
	tables[j].name = malloc(50 * sizeof(char *)); // Allocate name attribute in symbol table
for(int i = 0; i < 50; i++){  tables[j].name[i] = malloc(40 * sizeof(char));}

tables[j].type = malloc(50 * sizeof(char *)); // Allocate type attribute in symbol table
for(int i = 0; i < 50; i++){  tables[j].type[i] = malloc(40 * sizeof(char));}


tables[j].addr = malloc(50 * sizeof(int *)); // Allocate addr attribute in symbol table
for(int i = 0; i < 50; i++){  tables[j].addr[i] = malloc(40 * sizeof(int));}

tables[j].cur_index = 0;
}

	if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
	}
	yyparse();
	return 0;
}


