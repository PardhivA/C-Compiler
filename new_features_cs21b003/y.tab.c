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
    LBRACE = 277,                  /* LBRACE  */
    RBRACE = 278,                  /* RBRACE  */
    IF = 279,                      /* IF  */
    DO = 280,                      /* DO  */
    WHILE = 281,                   /* WHILE  */
    SWITCH = 282,                  /* SWITCH  */
    BREAK = 283,                   /* BREAK  */
    CONTINUE = 284,                /* CONTINUE  */
    CASE = 285,                    /* CASE  */
    DEFAULT = 286                  /* DEFAULT  */
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
#define LBRACE 277
#define RBRACE 278
#define IF 279
#define DO 280
#define WHILE 281
#define SWITCH 282
#define BREAK 283
#define CONTINUE 284
#define CASE 285
#define DEFAULT 286

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

#line 245 "y.tab.c"

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
  YYSYMBOL_FLOAT_NUMBER = 5,               /* FLOAT_NUMBER  */
  YYSYMBOL_INC = 6,                        /* INC  */
  YYSYMBOL_DEC = 7,                        /* DEC  */
  YYSYMBOL_LPAREN = 8,                     /* LPAREN  */
  YYSYMBOL_RPAREN = 9,                     /* RPAREN  */
  YYSYMBOL_RELAND = 10,                    /* RELAND  */
  YYSYMBOL_REOR = 11,                      /* REOR  */
  YYSYMBOL_NOT = 12,                       /* NOT  */
  YYSYMBOL_BOOLOR = 13,                    /* BOOLOR  */
  YYSYMBOL_BOOLAND = 14,                   /* BOOLAND  */
  YYSYMBOL_RELGREAT = 15,                  /* RELGREAT  */
  YYSYMBOL_RELLESS = 16,                   /* RELLESS  */
  YYSYMBOL_RELGREATEQUAL = 17,             /* RELGREATEQUAL  */
  YYSYMBOL_RELLESSEQUAL = 18,              /* RELLESSEQUAL  */
  YYSYMBOL_RELNOTEQUAL = 19,               /* RELNOTEQUAL  */
  YYSYMBOL_RELEQUAL = 20,                  /* RELEQUAL  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_LBRACE = 22,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 23,                    /* RBRACE  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_SWITCH = 27,                    /* SWITCH  */
  YYSYMBOL_BREAK = 28,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 29,                  /* CONTINUE  */
  YYSYMBOL_CASE = 30,                      /* CASE  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_32_ = 32,                       /* ';'  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* '{'  */
  YYSYMBOL_36_ = 36,                       /* '}'  */
  YYSYMBOL_37_ = 37,                       /* ':'  */
  YYSYMBOL_38_ = 38,                       /* '='  */
  YYSYMBOL_39_ = 39,                       /* '+'  */
  YYSYMBOL_40_ = 40,                       /* '-'  */
  YYSYMBOL_41_ = 41,                       /* '*'  */
  YYSYMBOL_42_ = 42,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_slist = 44,                     /* slist  */
  YYSYMBOL_slist1 = 45,                    /* slist1  */
  YYSYMBOL_46_1 = 46,                      /* $@1  */
  YYSYMBOL_47_2 = 47,                      /* $@2  */
  YYSYMBOL_switch = 48,                    /* switch  */
  YYSYMBOL_49_3 = 49,                      /* $@3  */
  YYSYMBOL_cases = 50,                     /* cases  */
  YYSYMBOL_51_4 = 51,                      /* $@4  */
  YYSYMBOL_52_5 = 52,                      /* $@5  */
  YYSYMBOL_do_while = 53,                  /* do_while  */
  YYSYMBOL_54_6 = 54,                      /* $@6  */
  YYSYMBOL_while_loop = 55,                /* while_loop  */
  YYSYMBOL_56_7 = 56,                      /* $@7  */
  YYSYMBOL_57_8 = 57,                      /* $@8  */
  YYSYMBOL_if_control = 58,                /* if_control  */
  YYSYMBOL_59_9 = 59,                      /* $@9  */
  YYSYMBOL_else_add_on = 60,               /* else_add_on  */
  YYSYMBOL_61_10 = 61,                     /* $@10  */
  YYSYMBOL_condition = 62,                 /* condition  */
  YYSYMBOL_sub_condition = 63,             /* sub_condition  */
  YYSYMBOL_boolop = 64,                    /* boolop  */
  YYSYMBOL_relop = 65,                     /* relop  */
  YYSYMBOL_EXPR1 = 66,                     /* EXPR1  */
  YYSYMBOL_TERM1 = 67,                     /* TERM1  */
  YYSYMBOL_FACT1 = 68,                     /* FACT1  */
  YYSYMBOL_FIX1 = 69,                      /* FIX1  */
  YYSYMBOL_stmt = 70,                      /* stmt  */
  YYSYMBOL_EXPR = 71,                      /* EXPR  */
  YYSYMBOL_TERM = 72,                      /* TERM  */
  YYSYMBOL_FACT = 73,                      /* FACT  */
  YYSYMBOL_FIX = 74,                       /* FIX  */
  YYSYMBOL_IDTEMP = 75,                    /* IDTEMP  */
  YYSYMBOL_IDTEMP2 = 76                    /* IDTEMP2  */
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
#define YYLAST   315

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      33,    34,    41,    39,     2,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    32,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   119,   119,   121,   122,   123,   124,   125,   127,   129,
     130,   131,   132,   133,   133,   134,   134,   135,   137,   137,
     149,   155,   149,   155,   155,   158,   158,   175,   180,   175,
     197,   197,   211,   211,   221,   223,   225,   225,   228,   230,
     232,   234,   238,   242,   249,   251,   256,   258,   260,   262,
     264,   266,   268,   270,   272,   275,   286,   298,   299,   311,
     323,   325,   342,   363,   380,   401,   410,   412,   415,   419,
     425,   431,   432,   438,   444,   445,   451,   457,   459,   476,
     497,   528,   562,   571,   573,   576,   579,   583,   586,   592
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
  "FLOAT_NUMBER", "INC", "DEC", "LPAREN", "RPAREN", "RELAND", "REOR",
  "NOT", "BOOLOR", "BOOLAND", "RELGREAT", "RELLESS", "RELGREATEQUAL",
  "RELLESSEQUAL", "RELNOTEQUAL", "RELEQUAL", "ELSE", "LBRACE", "RBRACE",
  "IF", "DO", "WHILE", "SWITCH", "BREAK", "CONTINUE", "CASE", "DEFAULT",
  "';'", "'('", "')'", "'{'", "'}'", "':'", "'='", "'+'", "'-'", "'*'",
  "'/'", "$accept", "slist", "slist1", "$@1", "$@2", "switch", "$@3",
  "cases", "$@4", "$@5", "do_while", "$@6", "while_loop", "$@7", "$@8",
  "if_control", "$@9", "else_add_on", "$@10", "condition", "sub_condition",
  "boolop", "relop", "EXPR1", "TERM1", "FACT1", "FIX1", "stmt", "EXPR",
  "TERM", "FACT", "FIX", "IDTEMP", "IDTEMP2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-62)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     242,   -62,    -3,   -62,     3,     3,   -19,   -62,   -62,   -16,
     218,    68,    24,   242,    -6,   242,     7,    -2,     4,    13,
     -62,   -62,    -5,    25,   -62,   -62,   -62,    90,    35,     2,
     218,   -31,    42,   -62,   -62,   -62,   -62,   242,   -62,   -62,
     242,   242,   218,   218,   218,   218,   -62,   218,   -62,   -62,
     -62,     3,     3,   250,    90,   123,    52,    53,   261,    47,
     -62,   -62,    75,    85,   242,    90,   -28,   -62,   -62,    49,
     -62,   -62,    13,    13,   -62,   -62,     4,   -62,   -62,    90,
      53,    64,   -62,   -62,   -62,   -62,   -62,    90,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,    72,    72,    72,
      72,    72,   -62,   -62,    23,    69,   -62,   203,    79,    90,
      53,    89,   -62,    47,    47,    76,   -62,   -62,   103,   -62,
     101,   -62,   -62,   115,   203,   120,   203,     7,   126,    53,
     -62,    90,   203,    78,   124,    77,   129,   131,   -62,   -62,
     203,   -62,   203,   203,    90,   -62,   128,    90,   203,   218,
     132,   130,   203,   203,   -62,   -62,   -62,   -62,   -62,   134,
     135,     4,   242,   -62,   -62,   -62,   -62,   -62,   136,   -62,
     242,   148,   -62,   145,    77,   -62
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,    86,    88,    87,     0,     0,     0,    25,    27,     0,
       0,     0,     0,     7,     0,     7,    34,     0,    71,    74,
      77,    83,    85,     0,    88,    78,    80,     0,     0,     0,
       0,     0,    85,    82,    85,     1,     5,     7,     4,    32,
       7,     7,     0,     0,     0,     0,    79,     0,    81,    68,
      69,     0,     0,     0,     0,     0,     0,    36,    43,    57,
      60,    66,    67,     0,     7,     0,     0,    84,     6,     0,
       3,     2,    72,    73,    75,    76,    70,    61,    63,     0,
      37,     0,    65,    67,    30,    45,    44,     0,    46,    53,
      48,    50,    49,    51,    52,    47,    54,     0,     0,     0,
       0,     0,    62,    64,     0,     0,    18,    17,     0,     0,
       0,     0,    35,    55,    56,    42,    58,    59,     0,    28,
       0,    15,    13,     0,    17,     0,    17,    34,     0,    41,
      38,     0,    17,     0,     0,    24,     0,     0,    33,    11,
      17,    10,    17,    17,     0,    40,     0,     0,    17,     0,
       0,     0,    17,    17,    12,     9,     8,    39,    31,     0,
       0,    20,     7,    19,    16,    14,    26,    29,     0,    23,
       7,     0,    21,     0,    24,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,    50,   162,   -62,   -62,     0,   -62,    11,   -62,   -62,
       5,   -62,    10,   -62,   -62,    16,   -62,    54,   -62,   -27,
     137,   -61,   -62,    80,    34,    18,   133,    21,    -8,    91,
     100,   173,    95,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,   123,   137,   136,   124,   120,   151,   168,   173,
     125,    28,   126,    29,   134,   127,   111,    40,    69,    56,
      57,    87,    99,    58,    59,    60,    61,   128,    18,    19,
      20,    21,    22,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    46,    31,    67,   -89,    14,   106,    24,    42,    43,
      15,    42,    43,    13,    27,    13,    16,    30,    14,   109,
      14,    17,    66,    15,    35,    15,    37,    81,    39,    16,
      41,    16,    48,    47,    17,    65,    17,    13,   105,    76,
      13,    13,    14,    42,    43,    14,    14,    15,    46,   131,
      15,    15,   108,    16,    44,    45,    16,    16,    17,   118,
     112,    17,    17,    36,    13,    38,    85,    86,   144,    14,
      64,     1,    24,     3,    15,    49,     2,    50,    51,    52,
      16,   102,   130,    63,   107,    17,    84,    68,   100,   101,
      70,    71,   103,    49,     2,    50,    51,    52,   110,    25,
      26,    10,    53,   119,   145,    32,    34,   149,   150,    63,
      63,   147,    55,   129,   104,    97,    98,   157,   116,   117,
     159,    63,    62,    54,   132,    32,    49,    24,    50,   133,
      55,   113,   114,    72,    73,    63,   135,    32,    32,    32,
      32,   161,    32,    63,    74,    75,    77,    78,    62,    62,
      83,   138,   140,    63,    63,    63,    63,    63,   143,   148,
      62,   152,    13,   153,   158,    63,   163,    14,   166,   162,
      13,   167,    15,   170,    62,    14,   172,   174,    16,   115,
      15,   142,    62,    17,    33,   175,    16,    63,    82,     0,
      80,    17,    62,    62,    62,    62,    62,     0,     0,     0,
      63,     0,     0,    63,    62,     0,     1,     2,     3,     4,
       5,     0,   169,     0,     0,     0,     0,     0,     0,     0,
     171,     1,     2,     3,     4,     5,    62,     6,     7,     8,
       9,   121,   122,     0,     0,     0,    10,     0,     0,    62,
       0,     0,    62,    11,    32,     1,     2,     3,     4,     5,
       0,    10,     0,    49,     2,    50,    51,    52,    11,     0,
       0,     0,     0,     0,     0,     0,     6,     7,     8,     9,
       0,    88,    89,     0,     0,    10,    90,    91,    92,    93,
      94,    95,    11,    79,     0,     0,   139,     0,   141,     0,
      55,     0,     0,     0,   146,     0,     0,     0,     0,    96,
      97,    98,   154,     0,   155,   156,     0,     0,     0,     0,
     160,     0,     0,     0,   164,   165
};

static const yytype_int16 yycheck[] =
{
       0,     6,    10,    34,     7,     0,    34,     4,    39,    40,
       0,    39,    40,    13,    33,    15,     0,    33,    13,    80,
      15,     0,    30,    13,     0,    15,    32,    54,    21,    13,
      32,    15,     7,    38,    13,    33,    15,    37,    65,    47,
      40,    41,    37,    39,    40,    40,    41,    37,     6,   110,
      40,    41,    79,    37,    41,    42,    40,    41,    37,    36,
      87,    40,    41,    13,    64,    15,    13,    14,   129,    64,
      35,     3,     4,     5,    64,     3,     4,     5,     6,     7,
      64,     6,   109,    27,    35,    64,    34,    37,    41,    42,
      40,    41,     7,     3,     4,     5,     6,     7,    34,     4,
       5,    33,    12,    34,   131,    10,    11,    30,    31,    53,
      54,    33,    40,    34,    64,    39,    40,   144,   100,   101,
     147,    65,    27,    33,    35,    30,     3,     4,     5,    26,
      40,    97,    98,    42,    43,    79,    35,    42,    43,    44,
      45,   149,    47,    87,    44,    45,    51,    52,    53,    54,
      55,    36,    32,    97,    98,    99,   100,   101,    32,    35,
      65,    32,   162,    32,    36,   109,    36,   162,    34,    37,
     170,    36,   162,    37,    79,   170,    28,    32,   162,    99,
     170,   127,    87,   162,    11,   174,   170,   131,    55,    -1,
      53,   170,    97,    98,    99,   100,   101,    -1,    -1,    -1,
     144,    -1,    -1,   147,   109,    -1,     3,     4,     5,     6,
       7,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,     3,     4,     5,     6,     7,   131,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    33,    -1,    -1,   144,
      -1,    -1,   147,    40,   149,     3,     4,     5,     6,     7,
      -1,    33,    -1,     3,     4,     5,     6,     7,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      -1,    10,    11,    -1,    -1,    33,    15,    16,    17,    18,
      19,    20,    40,    33,    -1,    -1,   124,    -1,   126,    -1,
      40,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    38,
      39,    40,   140,    -1,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,   152,   153
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    24,    25,    26,    27,
      33,    40,    44,    48,    53,    55,    58,    70,    71,    72,
      73,    74,    75,    76,     4,    75,    75,    33,    54,    56,
      33,    71,    75,    74,    75,     0,    44,    32,    44,    21,
      60,    32,    39,    40,    41,    42,     6,    38,     7,     3,
       5,     6,     7,    12,    33,    40,    62,    63,    66,    67,
      68,    69,    75,    76,    35,    33,    71,    34,    44,    61,
      44,    44,    72,    72,    73,    73,    71,    75,    75,    33,
      63,    62,    69,    75,    34,    13,    14,    64,    10,    11,
      15,    16,    17,    18,    19,    20,    38,    39,    40,    65,
      41,    42,     6,     7,    44,    62,    34,    35,    62,    64,
      34,    59,    62,    67,    67,    66,    68,    68,    36,    34,
      49,    28,    29,    45,    48,    53,    55,    58,    70,    34,
      62,    64,    35,    26,    57,    35,    47,    46,    36,    45,
      32,    45,    60,    32,    64,    62,    45,    33,    35,    30,
      31,    50,    32,    32,    45,    45,    45,    62,    36,    62,
      45,    71,    37,    36,    45,    45,    34,    36,    51,    44,
      37,    44,    28,    52,    32,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    44,    44,    45,    45,
      45,    45,    45,    46,    45,    47,    45,    45,    49,    48,
      51,    52,    50,    50,    50,    54,    53,    56,    57,    55,
      59,    58,    61,    60,    60,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      70,    70,    71,    71,    71,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    74,    75,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     3,     0,     3,     3,
       2,     2,     3,     0,     4,     0,     4,     0,     0,     8,
       0,     0,     9,     3,     0,     0,     9,     0,     0,     9,
       0,     8,     0,     5,     0,     3,     1,     2,     4,     6,
       5,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       3,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     2,     1,     3,     1,     1,     1,     1,     1
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
#line 125 "prob1.y"
          {}
#line 1441 "y.tab.c"
    break;

  case 13: /* $@1: %empty  */
#line 133 "prob1.y"
                         {printf("goto %s \n", stackWhile[stack_count_while -1]);}
#line 1447 "y.tab.c"
    break;

  case 15: /* $@2: %empty  */
#line 134 "prob1.y"
                  {printf("goto %s \n", stackWhile2[stack_count_while2 -1]);}
#line 1453 "y.tab.c"
    break;

  case 17: /* slist1: %empty  */
#line 135 "prob1.y"
          {}
#line 1459 "y.tab.c"
    break;

  case 18: /* $@3: %empty  */
#line 137 "prob1.y"
                            {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	strcpy(expr_label[expr_label_count++], (yyvsp[-1].String));
	temp1 = gen_out_fun();
	strcpy(switch_out[switch_out_count++], temp1);
	
}
#line 1471 "y.tab.c"
    break;

  case 19: /* switch: SWITCH '(' EXPR ')' $@3 '{' cases '}'  */
#line 143 "prob1.y"
                      {
	printf("%s: ", switch_out[switch_out_count-1]);
	expr_label_count--;
	switch_out_count--;
}
#line 1481 "y.tab.c"
    break;

  case 20: /* $@4: %empty  */
#line 149 "prob1.y"
                   {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);	
	printf("ifFalse %s = %s goto %s \n", expr_label[expr_label_count-1], (yyvsp[0].String), temp1);
	

}
#line 1493 "y.tab.c"
    break;

  case 21: /* $@5: %empty  */
#line 155 "prob1.y"
                 {printf("goto %s \n", switch_out[switch_out_count-1]); printf("%s: ",stack[stack_count-1]); stack_count--;}
#line 1499 "y.tab.c"
    break;

  case 24: /* cases: %empty  */
#line 155 "prob1.y"
                                                                                                                                                            {}
#line 1505 "y.tab.c"
    break;

  case 25: /* $@6: %empty  */
#line 158 "prob1.y"
              {char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	printf("%s: " , stack[stack_count-1]);}
#line 1513 "y.tab.c"
    break;

  case 26: /* do_while: DO $@6 '{' slist '}' WHILE '(' condition ')'  */
#line 161 "prob1.y"
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
#line 1531 "y.tab.c"
    break;

  case 27: /* $@7: %empty  */
#line 175 "prob1.y"
                    {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	strcpy(stackWhile[stack_count_while++], temp1);
	printf("%s: " , stack[stack_count-1]);
	}
#line 1542 "y.tab.c"
    break;

  case 28: /* $@8: %empty  */
#line 180 "prob1.y"
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
#line 1561 "y.tab.c"
    break;

  case 29: /* while_loop: WHILE $@7 '(' condition ')' $@8 '{' slist1 '}'  */
#line 193 "prob1.y"
                 {printf("go to label %s\n",stack[stack_count-2]); printf("%s: " , stack[stack_count-1]); stack_count-=2; stack_count_while--;stack_count_while2--;}
#line 1567 "y.tab.c"
    break;

  case 30: /* $@9: %empty  */
#line 197 "prob1.y"
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
#line 1585 "y.tab.c"
    break;

  case 32: /* $@10: %empty  */
#line 211 "prob1.y"
                      {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	printf("%s: " , stack[stack_count-1]); stack_count--; 
	strcpy(stack[stack_count++], temp1);}
#line 1596 "y.tab.c"
    break;

  case 33: /* else_add_on: ELSE $@10 '{' slist1 '}'  */
#line 218 "prob1.y"
        {
		printf("%s: " , stack[stack_count-1]); stack_count--;
	}
#line 1604 "y.tab.c"
    break;

  case 34: /* else_add_on: %empty  */
#line 221 "prob1.y"
          { printf("%s: " , stack[stack_count-1]); stack_count--;}
#line 1610 "y.tab.c"
    break;

  case 35: /* condition: sub_condition boolop condition  */
#line 223 "prob1.y"
                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1618 "y.tab.c"
    break;

  case 36: /* condition: sub_condition  */
#line 225 "prob1.y"
                                                                            {(yyval.String) = (char*)malloc(40 *sizeof(char)); strcpy((yyval.String), (yyvsp[0].String));}
#line 1624 "y.tab.c"
    break;

  case 37: /* condition: NOT sub_condition  */
#line 225 "prob1.y"
                                                                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[0].String));
}
#line 1633 "y.tab.c"
    break;

  case 38: /* condition: NOT sub_condition boolop condition  */
#line 228 "prob1.y"
                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1641 "y.tab.c"
    break;

  case 39: /* condition: NOT '(' condition ')' boolop condition  */
#line 230 "prob1.y"
                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1649 "y.tab.c"
    break;

  case 40: /* condition: '(' condition ')' boolop condition  */
#line 232 "prob1.y"
                                                                                                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1657 "y.tab.c"
    break;

  case 41: /* condition: NOT '(' condition ')'  */
#line 234 "prob1.y"
                                                                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[-1].String));
}
#line 1666 "y.tab.c"
    break;

  case 42: /* sub_condition: EXPR1 relop EXPR1  */
#line 238 "prob1.y"
                                 {
		(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));
}
#line 1676 "y.tab.c"
    break;

  case 43: /* sub_condition: EXPR1  */
#line 242 "prob1.y"
         {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s  \n", (yyval.String), (yyvsp[0].String));
}
#line 1686 "y.tab.c"
    break;

  case 44: /* boolop: BOOLAND  */
#line 249 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&&");}
#line 1693 "y.tab.c"
    break;

  case 45: /* boolop: BOOLOR  */
#line 251 "prob1.y"
                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"||");}
#line 1700 "y.tab.c"
    break;

  case 46: /* relop: RELAND  */
#line 256 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&");}
#line 1707 "y.tab.c"
    break;

  case 47: /* relop: RELEQUAL  */
#line 258 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"==");}
#line 1714 "y.tab.c"
    break;

  case 48: /* relop: RELGREAT  */
#line 260 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">");}
#line 1721 "y.tab.c"
    break;

  case 49: /* relop: RELGREATEQUAL  */
#line 262 "prob1.y"
                                {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">=");}
#line 1728 "y.tab.c"
    break;

  case 50: /* relop: RELLESS  */
#line 264 "prob1.y"
                          {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<");}
#line 1735 "y.tab.c"
    break;

  case 51: /* relop: RELLESSEQUAL  */
#line 266 "prob1.y"
                               {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<=");}
#line 1742 "y.tab.c"
    break;

  case 52: /* relop: RELNOTEQUAL  */
#line 268 "prob1.y"
                              {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"!=");}
#line 1749 "y.tab.c"
    break;

  case 53: /* relop: REOR  */
#line 270 "prob1.y"
                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"|");}
#line 1756 "y.tab.c"
    break;

  case 54: /* relop: '='  */
#line 272 "prob1.y"
                      {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"=");}
#line 1763 "y.tab.c"
    break;

  case 55: /* EXPR1: EXPR1 '+' TERM1  */
#line 275 "prob1.y"
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
#line 1779 "y.tab.c"
    break;

  case 56: /* EXPR1: EXPR1 '-' TERM1  */
#line 286 "prob1.y"
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
#line 1796 "y.tab.c"
    break;

  case 57: /* EXPR1: TERM1  */
#line 298 "prob1.y"
                                        {strcpy((yyval.String), (yyvsp[0].String));}
#line 1802 "y.tab.c"
    break;

  case 58: /* TERM1: TERM1 '*' FACT1  */
#line 299 "prob1.y"
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
#line 1819 "y.tab.c"
    break;

  case 59: /* TERM1: TERM1 '/' FACT1  */
#line 311 "prob1.y"
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
#line 1836 "y.tab.c"
    break;

  case 60: /* TERM1: FACT1  */
#line 323 "prob1.y"
                                       {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 1843 "y.tab.c"
    break;

  case 61: /* FACT1: INC IDTEMP  */
#line 325 "prob1.y"
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
#line 1865 "y.tab.c"
    break;

  case 62: /* FACT1: IDTEMP INC  */
#line 342 "prob1.y"
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
#line 1891 "y.tab.c"
    break;

  case 63: /* FACT1: DEC IDTEMP  */
#line 363 "prob1.y"
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
#line 1913 "y.tab.c"
    break;

  case 64: /* FACT1: IDTEMP2 DEC  */
#line 380 "prob1.y"
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
#line 1939 "y.tab.c"
    break;

  case 65: /* FACT1: '-' FIX1  */
#line 401 "prob1.y"
                            {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 1953 "y.tab.c"
    break;

  case 66: /* FACT1: FIX1  */
#line 410 "prob1.y"
                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 1959 "y.tab.c"
    break;

  case 67: /* FIX1: IDTEMP  */
#line 412 "prob1.y"
                 {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 1967 "y.tab.c"
    break;

  case 68: /* FIX1: NUMBER  */
#line 415 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 1976 "y.tab.c"
    break;

  case 69: /* FIX1: FLOAT_NUMBER  */
#line 419 "prob1.y"
                              {

		}
#line 1984 "y.tab.c"
    break;

  case 70: /* stmt: IDTEMP '=' EXPR  */
#line 425 "prob1.y"
                                 {
				// printf("fsdsf");	
				(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), (yyvsp[-2].String));
				printf("%s = %s\n", (yyvsp[-2].String), (yyvsp[0].String));
				
			}
#line 1996 "y.tab.c"
    break;

  case 71: /* stmt: EXPR  */
#line 431 "prob1.y"
                                  {}
#line 2002 "y.tab.c"
    break;

  case 72: /* EXPR: EXPR '+' TERM  */
#line 432 "prob1.y"
                                {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), gen_var());
			
				printf("%s = %s + %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2013 "y.tab.c"
    break;

  case 73: /* EXPR: EXPR '-' TERM  */
#line 438 "prob1.y"
                                        {
				(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
				
				printf("%s = %s - %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2024 "y.tab.c"
    break;

  case 74: /* EXPR: TERM  */
#line 444 "prob1.y"
                                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 2030 "y.tab.c"
    break;

  case 75: /* TERM: TERM '*' FACT  */
#line 445 "prob1.y"
                              {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
		
				printf("%s = %s * %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2041 "y.tab.c"
    break;

  case 76: /* TERM: TERM '/' FACT  */
#line 451 "prob1.y"
                                        {
				(yyval.String) = (char *)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
		
				printf("%s = %s / %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 2052 "y.tab.c"
    break;

  case 77: /* TERM: FACT  */
#line 457 "prob1.y"
                                      {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 2059 "y.tab.c"
    break;

  case 78: /* FACT: INC IDTEMP  */
#line 459 "prob1.y"
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
#line 2081 "y.tab.c"
    break;

  case 79: /* FACT: IDTEMP INC  */
#line 476 "prob1.y"
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
#line 2107 "y.tab.c"
    break;

  case 80: /* FACT: DEC IDTEMP  */
#line 497 "prob1.y"
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
#line 2143 "y.tab.c"
    break;

  case 81: /* FACT: IDTEMP2 DEC  */
#line 528 "prob1.y"
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
#line 2182 "y.tab.c"
    break;

  case 82: /* FACT: '-' FIX  */
#line 562 "prob1.y"
                           {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 2196 "y.tab.c"
    break;

  case 83: /* FACT: FIX  */
#line 571 "prob1.y"
                      {strcpy((yyval.String), (yyvsp[0].String));}
#line 2202 "y.tab.c"
    break;

  case 84: /* FIX: '(' EXPR ')'  */
#line 573 "prob1.y"
                              {
	(yyval.String)  = (char*)malloc(40 *sizeof(char));
		 strcpy((yyval.String), (yyvsp[-1].String));}
#line 2210 "y.tab.c"
    break;

  case 85: /* FIX: IDTEMP  */
#line 576 "prob1.y"
                          {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 2218 "y.tab.c"
    break;

  case 86: /* FIX: NUMBER  */
#line 579 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 2227 "y.tab.c"
    break;

  case 87: /* FIX: FLOAT_NUMBER  */
#line 583 "prob1.y"
                              {

		}
#line 2235 "y.tab.c"
    break;

  case 88: /* IDTEMP: ID  */
#line 586 "prob1.y"
            {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2245 "y.tab.c"
    break;

  case 89: /* IDTEMP2: ID  */
#line 592 "prob1.y"
             {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2255 "y.tab.c"
    break;


#line 2259 "y.tab.c"

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

#line 599 "prob1.y"


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


