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
int yylex();
int yyerror(char *);
int eflag=0;
extern FILE * yyin;
int count = 0, count_label = 0;
int label_count = 0;
char **stack ;
char **stackWhile ; // for continue
char **stackWhile2 ; // for break
int stack_count_while = 0; // for continue
int stack_count_while2 = 0; // for break;
// char **stack_else;
char **switch_out;
char **expr_label;
int expr_label_count =0 ;
int stack_count = 0;
int switch_out_count = 0;
int switch_label_count = 0;
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

void PreorderTraversal(struct Node*);
void PostorderTraversal(struct Node*);
char *gen_var();
char *gen_label();
char *gen_out_fun();
char *itoa(int num);
void initialize();

#line 121 "y.tab.c"

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

#line 247 "y.tab.c"

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
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_STRINGNAME = 5,                 /* STRINGNAME  */
  YYSYMBOL_FLOAT_NUMBER = 6,               /* FLOAT_NUMBER  */
  YYSYMBOL_INC = 7,                        /* INC  */
  YYSYMBOL_DEC = 8,                        /* DEC  */
  YYSYMBOL_LPAREN = 9,                     /* LPAREN  */
  YYSYMBOL_RPAREN = 10,                    /* RPAREN  */
  YYSYMBOL_RELAND = 11,                    /* RELAND  */
  YYSYMBOL_REOR = 12,                      /* REOR  */
  YYSYMBOL_NOT = 13,                       /* NOT  */
  YYSYMBOL_BOOLOR = 14,                    /* BOOLOR  */
  YYSYMBOL_BOOLAND = 15,                   /* BOOLAND  */
  YYSYMBOL_RELGREAT = 16,                  /* RELGREAT  */
  YYSYMBOL_RELLESS = 17,                   /* RELLESS  */
  YYSYMBOL_RELGREATEQUAL = 18,             /* RELGREATEQUAL  */
  YYSYMBOL_RELLESSEQUAL = 19,              /* RELLESSEQUAL  */
  YYSYMBOL_RELNOTEQUAL = 20,               /* RELNOTEQUAL  */
  YYSYMBOL_RELEQUAL = 21,                  /* RELEQUAL  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_LBRACE = 23,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 24,                    /* RBRACE  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_DO = 26,                        /* DO  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_SWITCH = 28,                    /* SWITCH  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 30,                  /* CONTINUE  */
  YYSYMBOL_CASE = 31,                      /* CASE  */
  YYSYMBOL_DEFAULT = 32,                   /* DEFAULT  */
  YYSYMBOL_33_ = 33,                       /* ';'  */
  YYSYMBOL_34_ = 34,                       /* '('  */
  YYSYMBOL_35_ = 35,                       /* ')'  */
  YYSYMBOL_36_ = 36,                       /* '{'  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_38_ = 38,                       /* ':'  */
  YYSYMBOL_39_ = 39,                       /* '='  */
  YYSYMBOL_40_ = 40,                       /* '+'  */
  YYSYMBOL_41_ = 41,                       /* '-'  */
  YYSYMBOL_42_ = 42,                       /* '*'  */
  YYSYMBOL_43_ = 43,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_slist = 45,                     /* slist  */
  YYSYMBOL_slist1 = 46,                    /* slist1  */
  YYSYMBOL_47_1 = 47,                      /* $@1  */
  YYSYMBOL_48_2 = 48,                      /* $@2  */
  YYSYMBOL_switch = 49,                    /* switch  */
  YYSYMBOL_50_3 = 50,                      /* $@3  */
  YYSYMBOL_cases = 51,                     /* cases  */
  YYSYMBOL_52_4 = 52,                      /* $@4  */
  YYSYMBOL_53_5 = 53,                      /* $@5  */
  YYSYMBOL_type = 54,                      /* type  */
  YYSYMBOL_do_while = 55,                  /* do_while  */
  YYSYMBOL_56_6 = 56,                      /* $@6  */
  YYSYMBOL_while_loop = 57,                /* while_loop  */
  YYSYMBOL_58_7 = 58,                      /* $@7  */
  YYSYMBOL_59_8 = 59,                      /* $@8  */
  YYSYMBOL_if_control = 60,                /* if_control  */
  YYSYMBOL_61_9 = 61,                      /* $@9  */
  YYSYMBOL_else_add_on = 62,               /* else_add_on  */
  YYSYMBOL_63_10 = 63,                     /* $@10  */
  YYSYMBOL_condition = 64,                 /* condition  */
  YYSYMBOL_sub_condition = 65,             /* sub_condition  */
  YYSYMBOL_boolop = 66,                    /* boolop  */
  YYSYMBOL_relop = 67,                     /* relop  */
  YYSYMBOL_EXPR1 = 68,                     /* EXPR1  */
  YYSYMBOL_TERM1 = 69,                     /* TERM1  */
  YYSYMBOL_FACT1 = 70,                     /* FACT1  */
  YYSYMBOL_FIX1 = 71,                      /* FIX1  */
  YYSYMBOL_stmt = 72,                      /* stmt  */
  YYSYMBOL_EXPR = 73,                      /* EXPR  */
  YYSYMBOL_TERM = 74,                      /* TERM  */
  YYSYMBOL_FACT = 75,                      /* FACT  */
  YYSYMBOL_FIX = 76,                       /* FIX  */
  YYSYMBOL_IDTEMP = 77,                    /* IDTEMP  */
  YYSYMBOL_IDTEMP2 = 78                    /* IDTEMP2  */
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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
      34,    35,    42,    40,     2,    41,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    33,
       2,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   120,   120,   122,   123,   124,   125,   126,   128,   130,
     131,   132,   133,   134,   134,   135,   135,   136,   138,   138,
     150,   155,   150,   155,   155,   157,   160,   165,   165,   182,
     187,   182,   204,   204,   218,   218,   228,   230,   232,   232,
     235,   237,   239,   241,   245,   249,   256,   258,   263,   265,
     267,   269,   271,   273,   275,   277,   279,   282,   293,   305,
     306,   318,   330,   332,   349,   370,   387,   408,   417,   419,
     422,   426,   432,   438,   439,   445,   451,   452,   458,   464,
     466,   483,   504,   535,   569,   578,   580,   583,   586,   590,
     593,   599
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
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "ID",
  "STRINGNAME", "FLOAT_NUMBER", "INC", "DEC", "LPAREN", "RPAREN", "RELAND",
  "REOR", "NOT", "BOOLOR", "BOOLAND", "RELGREAT", "RELLESS",
  "RELGREATEQUAL", "RELLESSEQUAL", "RELNOTEQUAL", "RELEQUAL", "ELSE",
  "LBRACE", "RBRACE", "IF", "DO", "WHILE", "SWITCH", "BREAK", "CONTINUE",
  "CASE", "DEFAULT", "';'", "'('", "')'", "'{'", "'}'", "':'", "'='",
  "'+'", "'-'", "'*'", "'/'", "$accept", "slist", "slist1", "$@1", "$@2",
  "switch", "$@3", "cases", "$@4", "$@5", "type", "do_while", "$@6",
  "while_loop", "$@7", "$@8", "if_control", "$@9", "else_add_on", "$@10",
  "condition", "sub_condition", "boolop", "relop", "EXPR1", "TERM1",
  "FACT1", "FIX1", "stmt", "EXPR", "TERM", "FACT", "FIX", "IDTEMP",
  "IDTEMP2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-64)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     246,   -64,    -4,   -64,    13,    13,   -25,   -64,   -64,    -2,
      69,    75,    24,   246,    -5,   246,    30,     2,   -33,   -16,
     -64,   -64,    -6,    40,   -64,   -64,   -64,   120,    23,    60,
     252,   -29,    97,   -64,   -64,   -64,   -64,   246,   -64,   -64,
     246,   246,    69,    69,    69,    69,   -64,    69,   -64,   -64,
     -64,    13,    13,   258,   120,    80,    72,    29,   284,    12,
     -64,   -64,   101,   103,   246,   120,   -64,    77,   -33,   -64,
     -64,    81,   -64,   -64,   -16,   -16,   -64,   -64,   -33,   -64,
     -64,   120,    29,    78,   -64,   -64,   -64,   -64,   -64,   120,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   112,
     112,   112,   112,   112,   -64,   -64,    84,    96,   -64,   204,
      99,   120,    29,    94,   -64,    12,    12,    26,   -64,   -64,
     105,   -64,   100,   -64,   -64,    98,   204,   108,   204,    30,
     111,    29,   -64,   120,   204,   117,   109,    39,   119,   124,
     -64,   -64,   204,   -64,   204,   204,   120,   -64,   121,   120,
     204,   252,   125,   122,   204,   204,   -64,   -64,   -64,   -64,
     -64,   127,   128,   -64,   246,   -64,   -64,   -64,   -64,   -64,
     130,   -64,   246,   137,   -64,   138,    39,   -64
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,    88,    90,    89,     0,     0,     0,    27,    29,     0,
       0,     0,     0,     7,     0,     7,    36,     0,    73,    76,
      79,    85,    87,     0,    90,    80,    82,     0,     0,     0,
       0,     0,    87,    84,    87,     1,     5,     7,     4,    34,
       7,     7,     0,     0,     0,     0,    81,     0,    83,    70,
      71,     0,     0,     0,     0,     0,     0,    38,    45,    59,
      62,    68,    69,     0,     7,     0,    26,     0,    25,    86,
       6,     0,     3,     2,    74,    75,    77,    78,    72,    63,
      65,     0,    39,     0,    67,    69,    32,    47,    46,     0,
      48,    55,    50,    52,    51,    53,    54,    49,    56,     0,
       0,     0,     0,     0,    64,    66,     0,     0,    18,    17,
       0,     0,     0,     0,    37,    57,    58,    44,    60,    61,
       0,    30,     0,    15,    13,     0,    17,     0,    17,    36,
       0,    43,    40,     0,    17,     0,     0,    24,     0,     0,
      35,    11,    17,    10,    17,    17,     0,    42,     0,     0,
      17,     0,     0,     0,    17,    17,    12,     9,     8,    41,
      33,     0,     0,    20,     7,    19,    16,    14,    28,    31,
       0,    23,     7,     0,    21,     0,    24,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -64,    50,   184,   -64,   -64,     0,   -64,    -3,   -64,   -64,
      19,     5,   -64,    10,   -64,   -64,    16,   -64,    46,   -64,
     -51,   126,   -63,   -64,    85,   -11,   -10,   123,    21,    -8,
      54,    57,   170,    95,   102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,   125,   139,   138,   126,   122,   153,   170,   175,
      67,   127,    28,   128,    29,   136,   129,   113,    40,    71,
      56,    57,    89,   101,    58,    59,    60,    61,   130,    18,
      19,    20,    21,    22,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    46,    31,    83,   -91,    14,    69,    42,    43,    27,
      15,    42,    43,    13,   107,    13,    16,    24,    14,   111,
      14,    17,    68,    15,    35,    15,    44,    45,    37,    16,
     110,    16,    30,    47,    17,    41,    17,    13,   114,    78,
      13,    13,    14,    87,    88,    14,    14,    15,    48,   133,
      15,    15,    39,    16,   102,   103,    16,    16,    17,    64,
     132,    17,    17,    36,    13,    38,    99,   100,   146,    14,
     151,   152,     1,     2,    15,     3,     4,     5,     1,    24,
      16,     3,   147,    49,    24,    17,    50,    70,   115,   116,
      72,    73,   118,   119,    65,   159,    74,    75,   161,    25,
      26,    76,    77,    10,    46,    32,    34,    86,   104,    10,
      11,   105,   108,   112,   106,    49,     2,   109,    50,    51,
      52,   120,    62,    49,     2,    32,    50,    51,    52,    63,
     134,   121,   135,    53,   131,   140,   137,    32,    32,    32,
      32,   142,    32,    68,   145,   150,    79,    80,    62,    62,
      85,   149,   154,    55,    54,    63,    63,   155,   160,   165,
      62,    55,   168,   164,    13,   169,   174,    63,   172,    14,
     163,   176,    13,   177,    15,   144,    62,    14,    84,    82,
      16,    33,    15,    63,    62,    17,   117,     0,    16,     0,
       0,    63,     0,    17,    62,    62,    62,    62,    62,     0,
       0,    63,    63,    63,    63,    63,    62,     1,     2,     0,
       3,     4,     5,    63,   171,     0,     0,     0,     0,     0,
       0,     0,   173,     0,     0,     0,     0,     0,    62,     6,
       7,     8,     9,   123,   124,    63,     0,     0,    10,     0,
       0,    62,     0,     0,    62,    11,    32,     0,    63,     1,
       2,    63,     3,     4,     5,     1,     2,    66,     3,     4,
       5,    49,     2,     0,    50,    51,    52,     0,     0,     0,
       0,     6,     7,     8,     9,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    81,    11,     0,    90,    91,     0,     0,    55,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
     141,     0,   143,     0,     0,     0,     0,     0,   148,     0,
       0,     0,     0,    98,    99,   100,   156,     0,   157,   158,
       0,     0,     0,     0,   162,     0,     0,     0,   166,   167
};

static const yytype_int16 yycheck[] =
{
       0,     7,    10,    54,     8,     0,    35,    40,    41,    34,
       0,    40,    41,    13,    65,    15,     0,     4,    13,    82,
      15,     0,    30,    13,     0,    15,    42,    43,    33,    13,
      81,    15,    34,    39,    13,    33,    15,    37,    89,    47,
      40,    41,    37,    14,    15,    40,    41,    37,     8,   112,
      40,    41,    22,    37,    42,    43,    40,    41,    37,    36,
     111,    40,    41,    13,    64,    15,    40,    41,   131,    64,
      31,    32,     3,     4,    64,     6,     7,     8,     3,     4,
      64,     6,   133,     3,     4,    64,     6,    37,    99,   100,
      40,    41,   102,   103,    34,   146,    42,    43,   149,     4,
       5,    44,    45,    34,     7,    10,    11,    35,     7,    34,
      41,     8,    35,    35,    64,     3,     4,    36,     6,     7,
       8,    37,    27,     3,     4,    30,     6,     7,     8,    27,
      36,    35,    27,    13,    35,    37,    36,    42,    43,    44,
      45,    33,    47,   151,    33,    36,    51,    52,    53,    54,
      55,    34,    33,    41,    34,    53,    54,    33,    37,    37,
      65,    41,    35,    38,   164,    37,    29,    65,    38,   164,
     151,    33,   172,   176,   164,   129,    81,   172,    55,    53,
     164,    11,   172,    81,    89,   164,   101,    -1,   172,    -1,
      -1,    89,    -1,   172,    99,   100,   101,   102,   103,    -1,
      -1,    99,   100,   101,   102,   103,   111,     3,     4,    -1,
       6,     7,     8,   111,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,   133,    25,
      26,    27,    28,    29,    30,   133,    -1,    -1,    34,    -1,
      -1,   146,    -1,    -1,   149,    41,   151,    -1,   146,     3,
       4,   149,     6,     7,     8,     3,     4,     5,     6,     7,
       8,     3,     4,    -1,     6,     7,     8,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    34,    41,    -1,    -1,
      -1,    -1,    34,    41,    -1,    11,    12,    -1,    -1,    41,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
     126,    -1,   128,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,    39,    40,    41,   142,    -1,   144,   145,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,   154,   155
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     7,     8,    25,    26,    27,    28,
      34,    41,    45,    49,    55,    57,    60,    72,    73,    74,
      75,    76,    77,    78,     4,    77,    77,    34,    56,    58,
      34,    73,    77,    76,    77,     0,    45,    33,    45,    22,
      62,    33,    40,    41,    42,    43,     7,    39,     8,     3,
       6,     7,     8,    13,    34,    41,    64,    65,    68,    69,
      70,    71,    77,    78,    36,    34,     5,    54,    73,    35,
      45,    63,    45,    45,    74,    74,    75,    75,    73,    77,
      77,    34,    65,    64,    71,    77,    35,    14,    15,    66,
      11,    12,    16,    17,    18,    19,    20,    21,    39,    40,
      41,    67,    42,    43,     7,     8,    45,    64,    35,    36,
      64,    66,    35,    61,    64,    69,    69,    68,    70,    70,
      37,    35,    50,    29,    30,    46,    49,    55,    57,    60,
      72,    35,    64,    66,    36,    27,    59,    36,    48,    47,
      37,    46,    33,    46,    62,    33,    66,    64,    46,    34,
      36,    31,    32,    51,    33,    33,    46,    46,    46,    64,
      37,    64,    46,    54,    38,    37,    46,    46,    35,    37,
      52,    45,    38,    45,    29,    53,    33,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    45,    45,    45,    46,    46,
      46,    46,    46,    47,    46,    48,    46,    46,    50,    49,
      52,    53,    51,    51,    51,    54,    54,    56,    55,    58,
      59,    57,    61,    60,    63,    62,    62,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    72,    72,    73,    73,    73,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      77,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     3,     0,     3,     3,
       2,     2,     3,     0,     4,     0,     4,     0,     0,     8,
       0,     0,     9,     3,     0,     1,     1,     0,     9,     0,
       0,     9,     0,     8,     0,     5,     0,     3,     1,     2,
       4,     6,     5,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     3,     1,     3,     3,     1,     3,     3,     1,
       2,     2,     2,     2,     2,     1,     3,     1,     1,     1,
       1,     1
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
  case 7: /* slist: %empty  */
#line 126 "prob1.y"
          {}
#line 1453 "y.tab.c"
    break;

  case 13: /* $@1: %empty  */
#line 134 "prob1.y"
                         {printf("goto %s \n", stackWhile[stack_count_while -1]);}
#line 1459 "y.tab.c"
    break;

  case 15: /* $@2: %empty  */
#line 135 "prob1.y"
                  {printf("goto %s \n", stackWhile2[stack_count_while2 -1]);}
#line 1465 "y.tab.c"
    break;

  case 17: /* slist1: %empty  */
#line 136 "prob1.y"
          {}
#line 1471 "y.tab.c"
    break;

  case 18: /* $@3: %empty  */
#line 138 "prob1.y"
                            {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	strcpy(expr_label[expr_label_count++], (yyvsp[-1].String));
	temp1 = gen_out_fun();
	strcpy(switch_out[switch_out_count++], temp1);
	
}
#line 1483 "y.tab.c"
    break;

  case 19: /* switch: SWITCH '(' type ')' $@3 '{' cases '}'  */
#line 144 "prob1.y"
                      {
	printf("%s: ", switch_out[switch_out_count-1]);
	expr_label_count--;
	switch_out_count--;
}
#line 1493 "y.tab.c"
    break;

  case 20: /* $@4: %empty  */
#line 150 "prob1.y"
                   {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	strcpy(stack[stack_count++], temp1);	
	printf("ifFalse %s = %s goto %s \n", expr_label[expr_label_count-1], (yyvsp[0].String), temp1);
}
#line 1504 "y.tab.c"
    break;

  case 21: /* $@5: %empty  */
#line 155 "prob1.y"
                  {printf("goto %s \n", switch_out[switch_out_count-1]); printf("%s: ",stack[stack_count-1]); stack_count--;}
#line 1510 "y.tab.c"
    break;

  case 24: /* cases: %empty  */
#line 155 "prob1.y"
                                                                                                                                                             {}
#line 1516 "y.tab.c"
    break;

  case 25: /* type: EXPR  */
#line 157 "prob1.y"
            {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
	strcpy((yyval.String), (yyvsp[0].String));
	}
#line 1525 "y.tab.c"
    break;

  case 26: /* type: STRINGNAME  */
#line 160 "prob1.y"
                       {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
	strcpy((yyval.String), yylval.lexeme);
	}
#line 1534 "y.tab.c"
    break;

  case 27: /* $@6: %empty  */
#line 165 "prob1.y"
              {char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	printf("%s: " , stack[stack_count-1]);}
#line 1542 "y.tab.c"
    break;

  case 28: /* do_while: DO $@6 '{' slist '}' WHILE '(' condition ')'  */
#line 168 "prob1.y"
                          {
	printf("if ");	
	
	printf("%s == TRUE then go to label %s\n", (yyvsp[-1].String), stack[stack_count-1]);
	stack_count--;
	// char *temp1 = (char*)malloc(40 *sizeof(char));
	// temp1 = gen_label();
	// printf("go to label %s\n",temp1);
	
	// strcpy(stack[stack_count++], temp1);
	// strcpy(stack[stack_count++], temp);
	// printf("%s: " , stack[stack_count-1]); stack_count--;
}
#line 1560 "y.tab.c"
    break;

  case 29: /* $@7: %empty  */
#line 182 "prob1.y"
                    {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	strcpy(stackWhile[stack_count_while++], temp1);
	printf("%s: " , stack[stack_count-1]);
	}
#line 1571 "y.tab.c"
    break;

  case 30: /* $@8: %empty  */
#line 187 "prob1.y"
                            {
	printf("if ");	
	char *temp = (char*)malloc(40 *sizeof(char));
	temp = gen_label();
	printf("%s == TRUE then go to label %s\n", (yyvsp[-1].String), temp);
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	strcpy(stackWhile2[stack_count_while2++], temp1);
	printf("go to label %s\n",temp1);
	
	strcpy(stack[stack_count++], temp1);
	strcpy(stack[stack_count++], temp);
	printf("%s: " , stack[stack_count-1]); stack_count--;
}
#line 1590 "y.tab.c"
    break;

  case 31: /* while_loop: WHILE $@7 '(' condition ')' $@8 '{' slist1 '}'  */
#line 200 "prob1.y"
                 {printf("go to label %s\n",stack[stack_count-2]); printf("%s: " , stack[stack_count-1]); stack_count-=2; stack_count_while--;stack_count_while2--;}
#line 1596 "y.tab.c"
    break;

  case 32: /* $@9: %empty  */
#line 204 "prob1.y"
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
#line 1614 "y.tab.c"
    break;

  case 34: /* $@10: %empty  */
#line 218 "prob1.y"
                      {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	printf("%s: " , stack[stack_count-1]); stack_count--; 
	strcpy(stack[stack_count++], temp1);}
#line 1625 "y.tab.c"
    break;

  case 35: /* else_add_on: ELSE $@10 '{' slist1 '}'  */
#line 225 "prob1.y"
        {
		printf("%s: " , stack[stack_count-1]); stack_count--;
	}
#line 1633 "y.tab.c"
    break;

  case 36: /* else_add_on: %empty  */
#line 228 "prob1.y"
          { printf("%s: " , stack[stack_count-1]); stack_count--;}
#line 1639 "y.tab.c"
    break;

  case 37: /* condition: sub_condition boolop condition  */
#line 230 "prob1.y"
                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1647 "y.tab.c"
    break;

  case 38: /* condition: sub_condition  */
#line 232 "prob1.y"
                                                                            {(yyval.String) = (char*)malloc(40 *sizeof(char)); strcpy((yyval.String), (yyvsp[0].String));}
#line 1653 "y.tab.c"
    break;

  case 39: /* condition: NOT sub_condition  */
#line 232 "prob1.y"
                                                                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[0].String));
}
#line 1662 "y.tab.c"
    break;

  case 40: /* condition: NOT sub_condition boolop condition  */
#line 235 "prob1.y"
                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1670 "y.tab.c"
    break;

  case 41: /* condition: NOT '(' condition ')' boolop condition  */
#line 237 "prob1.y"
                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1678 "y.tab.c"
    break;

  case 42: /* condition: '(' condition ')' boolop condition  */
#line 239 "prob1.y"
                                                                                                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1686 "y.tab.c"
    break;

  case 43: /* condition: NOT '(' condition ')'  */
#line 241 "prob1.y"
                                                                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[-1].String));
}
#line 1695 "y.tab.c"
    break;

  case 44: /* sub_condition: EXPR1 relop EXPR1  */
#line 245 "prob1.y"
                                 {
		(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));
}
#line 1705 "y.tab.c"
    break;

  case 45: /* sub_condition: EXPR1  */
#line 249 "prob1.y"
         {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s  \n", (yyval.String), (yyvsp[0].String));
}
#line 1715 "y.tab.c"
    break;

  case 46: /* boolop: BOOLAND  */
#line 256 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&&");}
#line 1722 "y.tab.c"
    break;

  case 47: /* boolop: BOOLOR  */
#line 258 "prob1.y"
                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"||");}
#line 1729 "y.tab.c"
    break;

  case 48: /* relop: RELAND  */
#line 263 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&");}
#line 1736 "y.tab.c"
    break;

  case 49: /* relop: RELEQUAL  */
#line 265 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"==");}
#line 1743 "y.tab.c"
    break;

  case 50: /* relop: RELGREAT  */
#line 267 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">");}
#line 1750 "y.tab.c"
    break;

  case 51: /* relop: RELGREATEQUAL  */
#line 269 "prob1.y"
                                {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">=");}
#line 1757 "y.tab.c"
    break;

  case 52: /* relop: RELLESS  */
#line 271 "prob1.y"
                          {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<");}
#line 1764 "y.tab.c"
    break;

  case 53: /* relop: RELLESSEQUAL  */
#line 273 "prob1.y"
                               {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<=");}
#line 1771 "y.tab.c"
    break;

  case 54: /* relop: RELNOTEQUAL  */
#line 275 "prob1.y"
                              {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"!=");}
#line 1778 "y.tab.c"
    break;

  case 55: /* relop: REOR  */
#line 277 "prob1.y"
                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"|");}
#line 1785 "y.tab.c"
    break;

  case 56: /* relop: '='  */
#line 279 "prob1.y"
                      {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"=");}
#line 1792 "y.tab.c"
    break;

  case 57: /* EXPR1: EXPR1 '+' TERM1  */
#line 282 "prob1.y"
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
#line 1808 "y.tab.c"
    break;

  case 58: /* EXPR1: EXPR1 '-' TERM1  */
#line 293 "prob1.y"
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
#line 1825 "y.tab.c"
    break;

  case 59: /* EXPR1: TERM1  */
#line 305 "prob1.y"
                                        {strcpy((yyval.String), (yyvsp[0].String));}
#line 1831 "y.tab.c"
    break;

  case 60: /* TERM1: TERM1 '*' FACT1  */
#line 306 "prob1.y"
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
#line 1848 "y.tab.c"
    break;

  case 61: /* TERM1: TERM1 '/' FACT1  */
#line 318 "prob1.y"
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
#line 1865 "y.tab.c"
    break;

  case 62: /* TERM1: FACT1  */
#line 330 "prob1.y"
                                       {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 1872 "y.tab.c"
    break;

  case 63: /* FACT1: INC IDTEMP  */
#line 332 "prob1.y"
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
#line 1894 "y.tab.c"
    break;

  case 64: /* FACT1: IDTEMP INC  */
#line 349 "prob1.y"
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
#line 1920 "y.tab.c"
    break;

  case 65: /* FACT1: DEC IDTEMP  */
#line 370 "prob1.y"
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
#line 1942 "y.tab.c"
    break;

  case 66: /* FACT1: IDTEMP2 DEC  */
#line 387 "prob1.y"
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
#line 1968 "y.tab.c"
    break;

  case 67: /* FACT1: '-' FIX1  */
#line 408 "prob1.y"
                            {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 1982 "y.tab.c"
    break;

  case 68: /* FACT1: FIX1  */
#line 417 "prob1.y"
                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 1988 "y.tab.c"
    break;

  case 69: /* FIX1: IDTEMP  */
#line 419 "prob1.y"
                 {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 1996 "y.tab.c"
    break;

  case 70: /* FIX1: NUMBER  */
#line 422 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 2005 "y.tab.c"
    break;

  case 71: /* FIX1: FLOAT_NUMBER  */
#line 426 "prob1.y"
                              {

		}
#line 2013 "y.tab.c"
    break;

  case 72: /* stmt: IDTEMP '=' EXPR  */
#line 432 "prob1.y"
                                 {
				// printf("fsdsf");	
				(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), (yyvsp[-2].String));
				printf("%s = %s\n", (yyvsp[-2].String), (yyvsp[0].String));
				
			}
#line 2025 "y.tab.c"
    break;

  case 73: /* stmt: EXPR  */
#line 438 "prob1.y"
                                  {}
#line 2031 "y.tab.c"
    break;

  case 74: /* EXPR: EXPR '+' TERM  */
#line 439 "prob1.y"
                                {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), gen_var());
			
				printf("%s = %s + %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2042 "y.tab.c"
    break;

  case 75: /* EXPR: EXPR '-' TERM  */
#line 445 "prob1.y"
                                        {
				(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
				
				printf("%s = %s - %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2053 "y.tab.c"
    break;

  case 76: /* EXPR: TERM  */
#line 451 "prob1.y"
                                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 2059 "y.tab.c"
    break;

  case 77: /* TERM: TERM '*' FACT  */
#line 452 "prob1.y"
                              {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
		
				printf("%s = %s * %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2070 "y.tab.c"
    break;

  case 78: /* TERM: TERM '/' FACT  */
#line 458 "prob1.y"
                                        {
				(yyval.String) = (char *)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
		
				printf("%s = %s / %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2081 "y.tab.c"
    break;

  case 79: /* TERM: FACT  */
#line 464 "prob1.y"
                                      {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 2088 "y.tab.c"
    break;

  case 80: /* FACT: INC IDTEMP  */
#line 466 "prob1.y"
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
#line 2110 "y.tab.c"
    break;

  case 81: /* FACT: IDTEMP INC  */
#line 483 "prob1.y"
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
#line 2136 "y.tab.c"
    break;

  case 82: /* FACT: DEC IDTEMP  */
#line 504 "prob1.y"
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
#line 2172 "y.tab.c"
    break;

  case 83: /* FACT: IDTEMP2 DEC  */
#line 535 "prob1.y"
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
#line 2211 "y.tab.c"
    break;

  case 84: /* FACT: '-' FIX  */
#line 569 "prob1.y"
                           {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 2225 "y.tab.c"
    break;

  case 85: /* FACT: FIX  */
#line 578 "prob1.y"
                      {strcpy((yyval.String), (yyvsp[0].String));}
#line 2231 "y.tab.c"
    break;

  case 86: /* FIX: '(' EXPR ')'  */
#line 580 "prob1.y"
                              {
	(yyval.String)  = (char*)malloc(40 *sizeof(char));
		 strcpy((yyval.String), (yyvsp[-1].String));}
#line 2239 "y.tab.c"
    break;

  case 87: /* FIX: IDTEMP  */
#line 583 "prob1.y"
                          {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 2247 "y.tab.c"
    break;

  case 88: /* FIX: NUMBER  */
#line 586 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 2256 "y.tab.c"
    break;

  case 89: /* FIX: FLOAT_NUMBER  */
#line 590 "prob1.y"
                              {

		}
#line 2264 "y.tab.c"
    break;

  case 90: /* IDTEMP: ID  */
#line 593 "prob1.y"
            {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2274 "y.tab.c"
    break;

  case 91: /* IDTEMP2: ID  */
#line 599 "prob1.y"
             {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2284 "y.tab.c"
    break;


#line 2288 "y.tab.c"

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

#line 606 "prob1.y"


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


void initialize(){
	

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
	stackWhile = malloc(50 * sizeof(char *)); // Allocate row pointers
for(int i = 0; i < 50; i++){  stackWhile[i] = malloc(40 * sizeof(char));}
	stackWhile2 = malloc(50 * sizeof(char *)); // Allocate row pointers

for(int i = 0; i < 50; i++){  stackWhile2[i] = malloc(40 * sizeof(char));}

	switch_out = malloc(50 * sizeof(char *)); // Allocate switch's out pointers
for(int i = 0; i < 50; i++){  switch_out[i] = malloc(40 * sizeof(char));}
expr_label = malloc(50 * sizeof(char *)); // Allocate switch's out pointers
for(int i = 0; i < 50; i++){  expr_label[i] = malloc(40 * sizeof(char));}


	if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
	}
	yyparse();
	return 0;
}


