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

#line 117 "y.tab.c"

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
    WHILE = 280,                   /* WHILE  */
    SWITCH = 281,                  /* SWITCH  */
    BREAK = 282,                   /* BREAK  */
    CASE = 283,                    /* CASE  */
    DEFAULT = 284                  /* DEFAULT  */
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
#define WHILE 280
#define SWITCH 281
#define BREAK 282
#define CASE 283
#define DEFAULT 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 48 "prob1.y"
 // these are all attributes
	int dval;
	char lexeme[20];
	struct Node *node;
	char *String;
	float fval;
	struct charac_node *Charac_node;

#line 237 "y.tab.c"

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
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_SWITCH = 26,                    /* SWITCH  */
  YYSYMBOL_BREAK = 27,                     /* BREAK  */
  YYSYMBOL_CASE = 28,                      /* CASE  */
  YYSYMBOL_DEFAULT = 29,                   /* DEFAULT  */
  YYSYMBOL_30_ = 30,                       /* ';'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '{'  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_35_ = 35,                       /* ':'  */
  YYSYMBOL_36_ = 36,                       /* '='  */
  YYSYMBOL_37_ = 37,                       /* '+'  */
  YYSYMBOL_38_ = 38,                       /* '-'  */
  YYSYMBOL_39_ = 39,                       /* '*'  */
  YYSYMBOL_40_ = 40,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_slist = 42,                     /* slist  */
  YYSYMBOL_switch = 43,                    /* switch  */
  YYSYMBOL_44_1 = 44,                      /* $@1  */
  YYSYMBOL_cases = 45,                     /* cases  */
  YYSYMBOL_46_2 = 46,                      /* $@2  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_while_loop = 48,                /* while_loop  */
  YYSYMBOL_49_4 = 49,                      /* $@4  */
  YYSYMBOL_50_5 = 50,                      /* $@5  */
  YYSYMBOL_if_control = 51,                /* if_control  */
  YYSYMBOL_52_6 = 52,                      /* $@6  */
  YYSYMBOL_else_add_on = 53,               /* else_add_on  */
  YYSYMBOL_54_7 = 54,                      /* $@7  */
  YYSYMBOL_condition = 55,                 /* condition  */
  YYSYMBOL_sub_condition = 56,             /* sub_condition  */
  YYSYMBOL_boolop = 57,                    /* boolop  */
  YYSYMBOL_relop = 58,                     /* relop  */
  YYSYMBOL_EXPR1 = 59,                     /* EXPR1  */
  YYSYMBOL_TERM1 = 60,                     /* TERM1  */
  YYSYMBOL_FACT1 = 61,                     /* FACT1  */
  YYSYMBOL_FIX1 = 62,                      /* FIX1  */
  YYSYMBOL_stmt = 63,                      /* stmt  */
  YYSYMBOL_EXPR = 64,                      /* EXPR  */
  YYSYMBOL_TERM = 65,                      /* TERM  */
  YYSYMBOL_FACT = 66,                      /* FACT  */
  YYSYMBOL_FIX = 67,                       /* FIX  */
  YYSYMBOL_IDTEMP = 68,                    /* IDTEMP  */
  YYSYMBOL_IDTEMP2 = 69                    /* IDTEMP2  */
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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   183

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
      31,    32,    39,    37,     2,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,    30,
       2,    36,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   111,   111,   113,   114,   115,   116,   118,   118,   130,
     136,   130,   136,   136,   140,   144,   140,   157,   157,   171,
     171,   181,   183,   185,   185,   188,   190,   192,   194,   198,
     202,   209,   211,   216,   218,   220,   222,   224,   226,   228,
     230,   232,   235,   246,   258,   259,   271,   283,   285,   302,
     323,   340,   361,   370,   372,   375,   379,   385,   391,   392,
     398,   404,   405,   411,   417,   419,   436,   457,   488,   522,
     531,   533,   536,   539,   543,   546,   552
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
  "IF", "WHILE", "SWITCH", "BREAK", "CASE", "DEFAULT", "';'", "'('", "')'",
  "'{'", "'}'", "':'", "'='", "'+'", "'-'", "'*'", "'/'", "$accept",
  "slist", "switch", "$@1", "cases", "$@2", "$@3", "while_loop", "$@4",
  "$@5", "if_control", "$@6", "else_add_on", "$@7", "condition",
  "sub_condition", "boolop", "relop", "EXPR1", "TERM1", "FACT1", "FIX1",
  "stmt", "EXPR", "TERM", "FACT", "FIX", "IDTEMP", "IDTEMP2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-77)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,   -69,     1,   -69,    10,    10,     3,   -69,    25,   140,
      57,    28,    61,    61,     9,    41,   -14,    14,   -69,   -69,
      -3,    37,   -69,   -69,   -69,   104,    52,   140,    20,    85,
     -69,   -69,   -69,   -69,   -69,   -69,    61,    61,   140,   140,
     140,   140,   -69,   140,   -69,   -69,   -69,    10,    10,   145,
     104,    17,    70,    56,   143,    39,   -69,   -69,    91,   105,
     104,    58,   -69,    81,   -69,   -69,    14,    14,   -69,   -69,
     -14,   -69,   -69,   104,    56,    98,   -69,   -69,   -69,   -69,
     -69,   104,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,    12,    12,    12,    12,    12,   -69,   -69,    99,   -69,
      61,   101,   104,    56,   103,   -69,    39,    39,    44,   -69,
     -69,   -69,   106,   100,    56,   -69,   104,    61,   107,    65,
     -69,   104,   -69,   121,    61,   140,   122,   130,   -69,   -69,
     131,   -14,    61,   -69,   -69,   132,   -69,    61,   111,   -69,
     126,    65,   -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,    73,    75,    74,     0,     0,     0,    14,     0,     0,
       0,     0,     6,     6,    21,     0,    58,    61,    64,    70,
      72,     0,    75,    65,    67,     0,     0,     0,     0,    72,
      69,    72,     1,     5,     4,    19,     6,     6,     0,     0,
       0,     0,    66,     0,    68,    55,    56,     0,     0,     0,
       0,     0,     0,    23,    30,    44,    47,    53,    54,     0,
       0,     0,    71,     0,     3,     2,    59,    60,    62,    63,
      57,    48,    50,     0,    24,     0,    52,    54,    17,    32,
      31,     0,    33,    40,    35,    37,    36,    38,    39,    34,
      41,     0,     0,     0,     0,     0,    49,    51,     0,     7,
       6,     0,     0,     0,     0,    22,    42,    43,    29,    45,
      46,    15,     0,     0,    28,    25,     0,     6,     0,    13,
      20,     0,    27,     0,     6,     0,     0,     0,    26,    18,
       0,     9,     6,     8,    16,     0,    12,     6,     0,    10,
       0,    13,    11
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -11,   -69,   -69,    27,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,    -1,    92,   -68,   -69,    73,    13,
      24,   118,   -69,     2,    84,    88,   160,     0,   -18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,   112,   127,   135,   140,    13,    26,   118,
      14,   104,    36,    63,    52,    53,    81,    93,    54,    55,
      56,    57,    15,    16,    17,    18,    19,    58,    21
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    33,    34,    42,    23,    24,   102,    59,   -76,    29,
      31,    28,    20,    20,    22,    45,     2,    46,    47,    48,
      45,    22,    46,    38,    39,    64,    65,    29,    32,    61,
      35,    59,    59,    43,    25,   116,    20,    20,    29,    29,
      29,    29,    59,    29,    44,    70,   121,    71,    72,    75,
      51,    77,    62,    40,    41,    59,    27,    38,    39,    98,
       1,    22,     3,    59,     1,     2,     3,     4,     5,    79,
      80,    37,   101,    59,    59,    59,    59,    59,    94,    95,
     105,    91,    92,    60,    59,     6,     7,     8,     9,   113,
      99,    42,     9,   125,   126,    38,    39,    96,    59,    10,
      20,   115,    78,    59,   106,   107,   123,    45,     2,    46,
      47,    48,    97,   130,   100,   122,    49,    20,   109,   110,
     128,   136,    66,    67,    20,    29,   138,   131,    68,    69,
     103,   111,    20,   114,   120,    50,   117,    20,   139,   119,
     124,    74,    51,     1,     2,     3,     4,     5,    45,     2,
      46,    47,    48,    82,    83,   129,   141,   132,    84,    85,
      86,    87,    88,    89,   133,   134,   108,   137,   142,    76,
      30,     9,     0,     0,     0,     0,    73,     0,    10,    90,
      91,    92,     0,    51
};

static const yytype_int16 yycheck[] =
{
       0,    12,    13,     6,     4,     5,    74,    25,     7,     9,
      10,     9,    12,    13,     4,     3,     4,     5,     6,     7,
       3,     4,     5,    37,    38,    36,    37,    27,     0,    27,
      21,    49,    50,    36,    31,   103,    36,    37,    38,    39,
      40,    41,    60,    43,     7,    43,   114,    47,    48,    50,
      38,    51,    32,    39,    40,    73,    31,    37,    38,    60,
       3,     4,     5,    81,     3,     4,     5,     6,     7,    13,
      14,    30,    73,    91,    92,    93,    94,    95,    39,    40,
      81,    37,    38,    31,   102,    24,    25,    26,    31,   100,
      32,     6,    31,    28,    29,    37,    38,     6,   116,    38,
     100,   102,    32,   121,    91,    92,   117,     3,     4,     5,
       6,     7,     7,   124,    33,   116,    12,   117,    94,    95,
     121,   132,    38,    39,   124,   125,   137,   125,    40,    41,
      32,    32,   132,    32,    34,    31,    33,   137,    27,    33,
      33,    49,    38,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    10,    11,    34,    30,    35,    15,    16,
      17,    18,    19,    20,    34,    34,    93,    35,   141,    51,
      10,    31,    -1,    -1,    -1,    -1,    31,    -1,    38,    36,
      37,    38,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    24,    25,    26,    31,
      38,    42,    43,    48,    51,    63,    64,    65,    66,    67,
      68,    69,     4,    68,    68,    31,    49,    31,    64,    68,
      67,    68,     0,    42,    42,    21,    53,    30,    37,    38,
      39,    40,     6,    36,     7,     3,     5,     6,     7,    12,
      31,    38,    55,    56,    59,    60,    61,    62,    68,    69,
      31,    64,    32,    54,    42,    42,    65,    65,    66,    66,
      64,    68,    68,    31,    56,    55,    62,    68,    32,    13,
      14,    57,    10,    11,    15,    16,    17,    18,    19,    20,
      36,    37,    38,    58,    39,    40,     6,     7,    55,    32,
      33,    55,    57,    32,    52,    55,    60,    60,    59,    61,
      61,    32,    44,    42,    32,    55,    57,    33,    50,    33,
      34,    57,    55,    42,    33,    28,    29,    45,    55,    34,
      42,    64,    35,    34,    34,    46,    42,    35,    42,    27,
      47,    30,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    42,    42,    42,    44,    43,    46,
      47,    45,    45,    45,    49,    50,    48,    52,    51,    54,
      53,    53,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    59,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    63,    63,    64,
      64,    64,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    68,    69
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     2,     2,     0,     0,     8,     0,
       0,     9,     3,     0,     0,     0,     9,     0,     8,     0,
       5,     0,     3,     1,     2,     4,     6,     5,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     3,     1,     3,
       3,     1,     3,     3,     1,     2,     2,     2,     2,     2,
       1,     3,     1,     1,     1,     1,     1
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
  case 6: /* slist: %empty  */
#line 116 "prob1.y"
          {}
#line 1385 "y.tab.c"
    break;

  case 7: /* $@1: %empty  */
#line 118 "prob1.y"
                            {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	strcpy(expr_label[expr_label_count++], (yyvsp[-1].String));
	temp1 = gen_out_fun();
	strcpy(switch_out[switch_out_count++], temp1);
	
}
#line 1397 "y.tab.c"
    break;

  case 8: /* switch: SWITCH '(' EXPR ')' $@1 '{' cases '}'  */
#line 124 "prob1.y"
                      {
	printf("%s: ", switch_out[switch_out_count-1]);
	expr_label_count--;
	switch_out_count--;
}
#line 1407 "y.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 130 "prob1.y"
                   {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);	
	printf("ifFalse %s = %s goto %s \n", expr_label[expr_label_count-1], (yyvsp[0].String), temp1);
	

}
#line 1419 "y.tab.c"
    break;

  case 10: /* $@3: %empty  */
#line 136 "prob1.y"
                 {printf("goto %s \n", switch_out[switch_out_count-1]); printf("%s: ",stack[stack_count-1]); stack_count--;}
#line 1425 "y.tab.c"
    break;

  case 13: /* cases: %empty  */
#line 136 "prob1.y"
                                                                                                                                                            {}
#line 1431 "y.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 140 "prob1.y"
                    {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	printf("%s: " , stack[stack_count-1]);
	}
#line 1441 "y.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 144 "prob1.y"
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
#line 1459 "y.tab.c"
    break;

  case 16: /* while_loop: WHILE $@4 '(' condition ')' $@5 '{' slist '}'  */
#line 156 "prob1.y"
                {printf("go to label %s\n",stack[stack_count-2]); printf("%s: " , stack[stack_count-1]); stack_count-=2;}
#line 1465 "y.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 157 "prob1.y"
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
#line 1483 "y.tab.c"
    break;

  case 19: /* $@7: %empty  */
#line 171 "prob1.y"
                      {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	printf("%s: " , stack[stack_count-1]); stack_count--; 
	strcpy(stack[stack_count++], temp1);}
#line 1494 "y.tab.c"
    break;

  case 20: /* else_add_on: ELSE $@7 '{' slist '}'  */
#line 178 "prob1.y"
        {
		printf("%s: " , stack[stack_count-1]); stack_count--;
	}
#line 1502 "y.tab.c"
    break;

  case 21: /* else_add_on: %empty  */
#line 181 "prob1.y"
          { printf("%s: " , stack[stack_count-1]); stack_count--;}
#line 1508 "y.tab.c"
    break;

  case 22: /* condition: sub_condition boolop condition  */
#line 183 "prob1.y"
                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1516 "y.tab.c"
    break;

  case 23: /* condition: sub_condition  */
#line 185 "prob1.y"
                                                                            {(yyval.String) = (char*)malloc(40 *sizeof(char)); strcpy((yyval.String), (yyvsp[0].String));}
#line 1522 "y.tab.c"
    break;

  case 24: /* condition: NOT sub_condition  */
#line 185 "prob1.y"
                                                                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[0].String));
}
#line 1531 "y.tab.c"
    break;

  case 25: /* condition: NOT sub_condition boolop condition  */
#line 188 "prob1.y"
                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1539 "y.tab.c"
    break;

  case 26: /* condition: NOT '(' condition ')' boolop condition  */
#line 190 "prob1.y"
                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1547 "y.tab.c"
    break;

  case 27: /* condition: '(' condition ')' boolop condition  */
#line 192 "prob1.y"
                                                                                                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1555 "y.tab.c"
    break;

  case 28: /* condition: NOT '(' condition ')'  */
#line 194 "prob1.y"
                                                                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[-1].String));
}
#line 1564 "y.tab.c"
    break;

  case 29: /* sub_condition: EXPR1 relop EXPR1  */
#line 198 "prob1.y"
                                 {
		(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));
}
#line 1574 "y.tab.c"
    break;

  case 30: /* sub_condition: EXPR1  */
#line 202 "prob1.y"
         {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s  \n", (yyval.String), (yyvsp[0].String));
}
#line 1584 "y.tab.c"
    break;

  case 31: /* boolop: BOOLAND  */
#line 209 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&&");}
#line 1591 "y.tab.c"
    break;

  case 32: /* boolop: BOOLOR  */
#line 211 "prob1.y"
                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"||");}
#line 1598 "y.tab.c"
    break;

  case 33: /* relop: RELAND  */
#line 216 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&");}
#line 1605 "y.tab.c"
    break;

  case 34: /* relop: RELEQUAL  */
#line 218 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"==");}
#line 1612 "y.tab.c"
    break;

  case 35: /* relop: RELGREAT  */
#line 220 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">");}
#line 1619 "y.tab.c"
    break;

  case 36: /* relop: RELGREATEQUAL  */
#line 222 "prob1.y"
                                {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">=");}
#line 1626 "y.tab.c"
    break;

  case 37: /* relop: RELLESS  */
#line 224 "prob1.y"
                          {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<");}
#line 1633 "y.tab.c"
    break;

  case 38: /* relop: RELLESSEQUAL  */
#line 226 "prob1.y"
                               {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<=");}
#line 1640 "y.tab.c"
    break;

  case 39: /* relop: RELNOTEQUAL  */
#line 228 "prob1.y"
                              {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"!=");}
#line 1647 "y.tab.c"
    break;

  case 40: /* relop: REOR  */
#line 230 "prob1.y"
                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"|");}
#line 1654 "y.tab.c"
    break;

  case 41: /* relop: '='  */
#line 232 "prob1.y"
                      {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"=");}
#line 1661 "y.tab.c"
    break;

  case 42: /* EXPR1: EXPR1 '+' TERM1  */
#line 235 "prob1.y"
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
#line 1677 "y.tab.c"
    break;

  case 43: /* EXPR1: EXPR1 '-' TERM1  */
#line 246 "prob1.y"
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
#line 1694 "y.tab.c"
    break;

  case 44: /* EXPR1: TERM1  */
#line 258 "prob1.y"
                                        {strcpy((yyval.String), (yyvsp[0].String));}
#line 1700 "y.tab.c"
    break;

  case 45: /* TERM1: TERM1 '*' FACT1  */
#line 259 "prob1.y"
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
#line 1717 "y.tab.c"
    break;

  case 46: /* TERM1: TERM1 '/' FACT1  */
#line 271 "prob1.y"
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
#line 1734 "y.tab.c"
    break;

  case 47: /* TERM1: FACT1  */
#line 283 "prob1.y"
                                       {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 1741 "y.tab.c"
    break;

  case 48: /* FACT1: INC IDTEMP  */
#line 285 "prob1.y"
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
#line 1763 "y.tab.c"
    break;

  case 49: /* FACT1: IDTEMP INC  */
#line 302 "prob1.y"
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
#line 1789 "y.tab.c"
    break;

  case 50: /* FACT1: DEC IDTEMP  */
#line 323 "prob1.y"
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
#line 1811 "y.tab.c"
    break;

  case 51: /* FACT1: IDTEMP2 DEC  */
#line 340 "prob1.y"
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
#line 1837 "y.tab.c"
    break;

  case 52: /* FACT1: '-' FIX1  */
#line 361 "prob1.y"
                            {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 1851 "y.tab.c"
    break;

  case 53: /* FACT1: FIX1  */
#line 370 "prob1.y"
                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 1857 "y.tab.c"
    break;

  case 54: /* FIX1: IDTEMP  */
#line 372 "prob1.y"
                 {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 1865 "y.tab.c"
    break;

  case 55: /* FIX1: NUMBER  */
#line 375 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 1874 "y.tab.c"
    break;

  case 56: /* FIX1: FLOAT_NUMBER  */
#line 379 "prob1.y"
                              {

		}
#line 1882 "y.tab.c"
    break;

  case 57: /* stmt: IDTEMP '=' EXPR  */
#line 385 "prob1.y"
                                 {
				// printf("fsdsf");	
				(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), (yyvsp[-2].String));
				printf("%s = %s\n", (yyvsp[-2].String), (yyvsp[0].String));
				
			}
#line 1894 "y.tab.c"
    break;

  case 58: /* stmt: EXPR  */
#line 391 "prob1.y"
                                  {}
#line 1900 "y.tab.c"
    break;

  case 59: /* EXPR: EXPR '+' TERM  */
#line 392 "prob1.y"
                                {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), gen_var());
			
				printf("%s = %s + %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 1911 "y.tab.c"
    break;

  case 60: /* EXPR: EXPR '-' TERM  */
#line 398 "prob1.y"
                                        {
				(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
				
				printf("%s = %s - %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 1922 "y.tab.c"
    break;

  case 61: /* EXPR: TERM  */
#line 404 "prob1.y"
                                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 1928 "y.tab.c"
    break;

  case 62: /* TERM: TERM '*' FACT  */
#line 405 "prob1.y"
                              {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
		
				printf("%s = %s * %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 1939 "y.tab.c"
    break;

  case 63: /* TERM: TERM '/' FACT  */
#line 411 "prob1.y"
                                        {
				(yyval.String) = (char *)malloc(40 *sizeof(char));
			strcpy((yyval.String), gen_var());
		
				printf("%s = %s / %s\n", (yyval.String), (yyvsp[-2].String), (yyvsp[0].String));
			}
#line 1950 "y.tab.c"
    break;

  case 64: /* TERM: FACT  */
#line 417 "prob1.y"
                                      {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 1957 "y.tab.c"
    break;

  case 65: /* FACT: INC IDTEMP  */
#line 419 "prob1.y"
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
#line 1979 "y.tab.c"
    break;

  case 66: /* FACT: IDTEMP INC  */
#line 436 "prob1.y"
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
#line 2005 "y.tab.c"
    break;

  case 67: /* FACT: DEC IDTEMP  */
#line 457 "prob1.y"
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
#line 2041 "y.tab.c"
    break;

  case 68: /* FACT: IDTEMP2 DEC  */
#line 488 "prob1.y"
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
#line 2080 "y.tab.c"
    break;

  case 69: /* FACT: '-' FIX  */
#line 522 "prob1.y"
                           {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 2094 "y.tab.c"
    break;

  case 70: /* FACT: FIX  */
#line 531 "prob1.y"
                      {strcpy((yyval.String), (yyvsp[0].String));}
#line 2100 "y.tab.c"
    break;

  case 71: /* FIX: '(' EXPR ')'  */
#line 533 "prob1.y"
                              {
	(yyval.String)  = (char*)malloc(40 *sizeof(char));
		 strcpy((yyval.String), (yyvsp[-1].String));}
#line 2108 "y.tab.c"
    break;

  case 72: /* FIX: IDTEMP  */
#line 536 "prob1.y"
                          {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 2116 "y.tab.c"
    break;

  case 73: /* FIX: NUMBER  */
#line 539 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 2125 "y.tab.c"
    break;

  case 74: /* FIX: FLOAT_NUMBER  */
#line 543 "prob1.y"
                              {

		}
#line 2133 "y.tab.c"
    break;

  case 75: /* IDTEMP: ID  */
#line 546 "prob1.y"
            {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2143 "y.tab.c"
    break;

  case 76: /* IDTEMP2: ID  */
#line 552 "prob1.y"
             {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2153 "y.tab.c"
    break;


#line 2157 "y.tab.c"

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

#line 559 "prob1.y"


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


