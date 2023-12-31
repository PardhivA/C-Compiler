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
char **stack_else;
int stack_count = 0;
int stack_else_count = 0;
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
char *itoa(int num);
void initialize();

#line 112 "y.tab.c"

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
    WHILE = 280                    /* WHILE  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "prob1.y"
 // these are all attributes
	int dval;
	char lexeme[20];
	struct Node *node;
	char *String;
	float fval;
	struct charac_node *Charac_node;

#line 224 "y.tab.c"

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
  YYSYMBOL_26_ = 26,                       /* ';'  */
  YYSYMBOL_27_ = 27,                       /* '('  */
  YYSYMBOL_28_ = 28,                       /* ')'  */
  YYSYMBOL_29_ = 29,                       /* '{'  */
  YYSYMBOL_30_ = 30,                       /* '}'  */
  YYSYMBOL_31_ = 31,                       /* '='  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_slist = 37,                     /* slist  */
  YYSYMBOL_while_loop = 38,                /* while_loop  */
  YYSYMBOL_39_1 = 39,                      /* $@1  */
  YYSYMBOL_40_2 = 40,                      /* $@2  */
  YYSYMBOL_if_control = 41,                /* if_control  */
  YYSYMBOL_42_3 = 42,                      /* $@3  */
  YYSYMBOL_else_add_on = 43,               /* else_add_on  */
  YYSYMBOL_44_4 = 44,                      /* $@4  */
  YYSYMBOL_condition = 45,                 /* condition  */
  YYSYMBOL_sub_condition = 46,             /* sub_condition  */
  YYSYMBOL_boolop = 47,                    /* boolop  */
  YYSYMBOL_relop = 48,                     /* relop  */
  YYSYMBOL_EXPR1 = 49,                     /* EXPR1  */
  YYSYMBOL_TERM1 = 50,                     /* TERM1  */
  YYSYMBOL_FACT1 = 51,                     /* FACT1  */
  YYSYMBOL_FIX1 = 52,                      /* FIX1  */
  YYSYMBOL_stmt = 53,                      /* stmt  */
  YYSYMBOL_EXPR = 54,                      /* EXPR  */
  YYSYMBOL_TERM = 55,                      /* TERM  */
  YYSYMBOL_FACT = 56,                      /* FACT  */
  YYSYMBOL_FIX = 57,                       /* FIX  */
  YYSYMBOL_IDTEMP = 58,                    /* IDTEMP  */
  YYSYMBOL_IDTEMP2 = 59                    /* IDTEMP2  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
      27,    28,    34,    32,     2,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
       2,    31,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    99,    99,   101,   102,   103,   105,   108,   105,   121,
     121,   135,   135,   145,   147,   149,   149,   152,   154,   156,
     158,   162,   166,   173,   175,   180,   182,   184,   186,   188,
     190,   192,   194,   196,   199,   210,   222,   223,   235,   247,
     249,   266,   287,   318,   352,   361,   363,   366,   370,   376,
     384,   385,   396,   408,   409,   421,   433,   435,   452,   473,
     504,   538,   547,   549,   552,   555,   559,   562,   568
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
  "IF", "WHILE", "';'", "'('", "')'", "'{'", "'}'", "'='", "'+'", "'-'",
  "'*'", "'/'", "$accept", "slist", "while_loop", "$@1", "$@2",
  "if_control", "$@3", "else_add_on", "$@4", "condition", "sub_condition",
  "boolop", "relop", "EXPR1", "TERM1", "FACT1", "FIX1", "stmt", "EXPR",
  "TERM", "FACT", "FIX", "IDTEMP", "IDTEMP2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-68)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      64,   -68,    -4,   -68,    11,    11,    -6,   -68,   114,    59,
      24,    64,     6,     3,   -26,   -22,   -68,   -68,    14,    35,
     -68,   -68,   -68,    69,     4,   -14,    42,   -68,   -68,   -68,
     -68,   -68,    64,    64,   114,   114,   114,   114,   -68,   114,
     -68,   -68,   -68,    11,    11,   119,    69,   100,    27,    79,
     138,    43,   -68,   -68,    74,    58,    69,   -68,    53,   -68,
     -68,   -22,   -22,   -68,   -68,   -26,   -68,   -68,    69,    79,
      57,   -68,   -68,   -68,   -68,   -68,    69,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,    54,    54,    54,    54,
      54,   -68,   -68,    62,    64,    67,    69,    79,    72,   -68,
      43,    43,    66,   -68,   -68,   -68,   101,    79,   -68,    69,
      64,   103,   -68,    69,   -68,   104,    64,   -68,   -68,   105,
     -68
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,    65,    67,    66,     0,     0,     0,     6,     0,     0,
       0,     5,    13,     0,    50,    53,    56,    62,    64,     0,
      67,    57,    59,     0,     0,     0,    64,    61,    64,     1,
       4,    11,     5,     5,     0,     0,     0,     0,    58,     0,
      60,    47,    48,     0,     0,     0,     0,     0,     0,    15,
      22,    36,    39,    45,    46,     0,     0,    63,     0,     3,
       2,    51,    52,    54,    55,    49,    40,    42,     0,    16,
       0,    44,    46,     9,    24,    23,     0,    25,    32,    27,
      29,    28,    30,    31,    26,    33,     0,     0,     0,     0,
       0,    41,    43,     0,     5,     0,     0,     0,     0,    14,
      34,    35,    21,    37,    38,     7,     0,    20,    17,     0,
       5,     0,    12,     0,    19,     0,     5,    18,    10,     0,
       8
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -10,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -30,
      85,   -67,   -68,    48,    21,    23,    90,   -68,     2,    80,
      92,   129,     0,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    24,   111,    12,    98,    32,    58,    48,
      49,    76,    88,    50,    51,    52,    53,    13,    14,    15,
      16,    17,    54,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      18,    30,    96,   -68,    21,    22,    34,    35,    26,    28,
      25,    18,    36,    37,    57,    20,    70,    19,    34,    35,
      38,    23,    59,    60,    29,    19,    93,    31,    19,    33,
     109,    56,    18,    18,    26,    26,    26,    26,    95,    26,
     113,    65,    40,    66,    67,    39,    99,    72,    38,    19,
      19,    19,    19,    19,    19,    73,    19,    41,     2,    42,
      43,    44,     1,    20,     3,    92,   108,     1,     2,     3,
       4,     5,    41,     2,    42,    43,    44,    89,    90,   114,
      91,    45,    94,   117,   106,    97,     8,    47,     6,     7,
     105,     8,    74,    75,    18,   107,    46,     9,    86,    87,
     115,   110,    47,    41,    20,    42,   119,   100,   101,     0,
      18,    19,   103,   104,    61,    62,    18,     1,     2,     3,
       4,     5,    41,     2,    42,    43,    44,    19,    63,    64,
      69,   112,   116,    19,   118,   120,   102,    71,    27,     0,
       0,     8,     0,     0,     0,     0,    68,     9,    77,    78,
       0,     0,    47,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,    87
};

static const yytype_int8 yycheck[] =
{
       0,    11,    69,     7,     4,     5,    32,    33,     8,     9,
       8,    11,    34,    35,    28,     4,    46,     0,    32,    33,
       6,    27,    32,    33,     0,     8,    56,    21,    11,    26,
      97,    27,    32,    33,    34,    35,    36,    37,    68,    39,
     107,    39,     7,    43,    44,    31,    76,    47,     6,    32,
      33,    34,    35,    36,    37,    28,    39,     3,     4,     5,
       6,     7,     3,     4,     5,     7,    96,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7,    34,    35,   109,
       6,    12,    29,   113,    94,    28,    27,    33,    24,    25,
      28,    27,    13,    14,    94,    28,    27,    33,    32,    33,
     110,    29,    33,     3,     4,     5,   116,    86,    87,    -1,
     110,    94,    89,    90,    34,    35,   116,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7,   110,    36,    37,
      45,    30,    29,   116,    30,    30,    88,    47,     9,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    27,    33,    10,    11,
      -1,    -1,    33,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    24,    25,    27,    33,
      37,    38,    41,    53,    54,    55,    56,    57,    58,    59,
       4,    58,    58,    27,    39,    54,    58,    57,    58,     0,
      37,    21,    43,    26,    32,    33,    34,    35,     6,    31,
       7,     3,     5,     6,     7,    12,    27,    33,    45,    46,
      49,    50,    51,    52,    58,    59,    27,    28,    44,    37,
      37,    55,    55,    56,    56,    54,    58,    58,    27,    46,
      45,    52,    58,    28,    13,    14,    47,    10,    11,    15,
      16,    17,    18,    19,    20,    31,    32,    33,    48,    34,
      35,     6,     7,    45,    29,    45,    47,    28,    42,    45,
      50,    50,    49,    51,    51,    28,    37,    28,    45,    47,
      29,    40,    30,    47,    45,    37,    29,    45,    30,    37,
      30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    37,    37,    39,    40,    38,    42,
      41,    44,    43,    43,    45,    45,    45,    45,    45,    45,
      45,    46,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    49,    49,    49,    50,    50,    50,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    53,
      53,    54,    54,    54,    55,    55,    55,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    58,    59
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     2,     0,     0,     0,     9,     0,
       8,     0,     5,     0,     3,     1,     2,     4,     6,     5,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     1,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     3,
       1,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       2,     2,     1,     3,     1,     1,     1,     1,     1
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
  case 5: /* slist: %empty  */
#line 103 "prob1.y"
          {}
#line 1350 "y.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 105 "prob1.y"
                    {char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();strcpy(stack[stack_count++], temp1);
	printf("%s: " , stack[stack_count-1]);
	}
#line 1359 "y.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 108 "prob1.y"
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
#line 1377 "y.tab.c"
    break;

  case 8: /* while_loop: WHILE $@1 '(' condition ')' $@2 '{' slist '}'  */
#line 120 "prob1.y"
                {printf("go to label %s\n",stack[stack_count-2]); printf("%s: " , stack[stack_count-1]); stack_count-=2;}
#line 1383 "y.tab.c"
    break;

  case 9: /* $@3: %empty  */
#line 121 "prob1.y"
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
#line 1401 "y.tab.c"
    break;

  case 11: /* $@4: %empty  */
#line 135 "prob1.y"
                      {
	char *temp1 = (char*)malloc(40 *sizeof(char));
	temp1 = gen_label();
	printf("go to label %s\n",temp1);
	printf("%s: " , stack[stack_count-1]); stack_count--; 
	strcpy(stack[stack_count++], temp1);}
#line 1412 "y.tab.c"
    break;

  case 12: /* else_add_on: ELSE $@4 '{' slist '}'  */
#line 142 "prob1.y"
        {
		printf("%s: " , stack[stack_count-1]); stack_count--;
	}
#line 1420 "y.tab.c"
    break;

  case 13: /* else_add_on: %empty  */
#line 145 "prob1.y"
          { printf("%s: " , stack[stack_count-1]); stack_count--;}
#line 1426 "y.tab.c"
    break;

  case 14: /* condition: sub_condition boolop condition  */
#line 147 "prob1.y"
                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1434 "y.tab.c"
    break;

  case 15: /* condition: sub_condition  */
#line 149 "prob1.y"
                                                                            {(yyval.String) = (char*)malloc(40 *sizeof(char)); strcpy((yyval.String), (yyvsp[0].String));}
#line 1440 "y.tab.c"
    break;

  case 16: /* condition: NOT sub_condition  */
#line 149 "prob1.y"
                                                                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[0].String));
}
#line 1449 "y.tab.c"
    break;

  case 17: /* condition: NOT sub_condition boolop condition  */
#line 152 "prob1.y"
                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));}
#line 1457 "y.tab.c"
    break;

  case 18: /* condition: NOT '(' condition ')' boolop condition  */
#line 154 "prob1.y"
                                                                                                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1465 "y.tab.c"
    break;

  case 19: /* condition: '(' condition ')' boolop condition  */
#line 156 "prob1.y"
                                                                                                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !(%s) %s %s \n", (yyval.String), (yyvsp[-3].String), (yyvsp[-1].String), (yyvsp[0].String)	);}
#line 1473 "y.tab.c"
    break;

  case 20: /* condition: NOT '(' condition ')'  */
#line 158 "prob1.y"
                                                                                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = !%s \n", (yyval.String), (yyvsp[-1].String));
}
#line 1482 "y.tab.c"
    break;

  case 21: /* sub_condition: EXPR1 relop EXPR1  */
#line 162 "prob1.y"
                                 {
		(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s %s %s \n", (yyval.String), (yyvsp[-2].String), (yyvsp[-1].String), (yyvsp[0].String));
}
#line 1492 "y.tab.c"
    break;

  case 22: /* sub_condition: EXPR1  */
#line 166 "prob1.y"
         {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		strcpy((yyval.String),gen_var()); 
		printf("%s = %s  \n", (yyval.String), (yyvsp[0].String));
}
#line 1502 "y.tab.c"
    break;

  case 23: /* boolop: BOOLAND  */
#line 173 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&&");}
#line 1509 "y.tab.c"
    break;

  case 24: /* boolop: BOOLOR  */
#line 175 "prob1.y"
                         {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"||");}
#line 1516 "y.tab.c"
    break;

  case 25: /* relop: RELAND  */
#line 180 "prob1.y"
                 {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"&");}
#line 1523 "y.tab.c"
    break;

  case 26: /* relop: RELEQUAL  */
#line 182 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"==");}
#line 1530 "y.tab.c"
    break;

  case 27: /* relop: RELGREAT  */
#line 184 "prob1.y"
                           {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">");}
#line 1537 "y.tab.c"
    break;

  case 28: /* relop: RELGREATEQUAL  */
#line 186 "prob1.y"
                                {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),">=");}
#line 1544 "y.tab.c"
    break;

  case 29: /* relop: RELLESS  */
#line 188 "prob1.y"
                          {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<");}
#line 1551 "y.tab.c"
    break;

  case 30: /* relop: RELLESSEQUAL  */
#line 190 "prob1.y"
                               {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"<=");}
#line 1558 "y.tab.c"
    break;

  case 31: /* relop: RELNOTEQUAL  */
#line 192 "prob1.y"
                              {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"!=");}
#line 1565 "y.tab.c"
    break;

  case 32: /* relop: REOR  */
#line 194 "prob1.y"
                       {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"|");}
#line 1572 "y.tab.c"
    break;

  case 33: /* relop: '='  */
#line 196 "prob1.y"
                      {(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),"=");}
#line 1579 "y.tab.c"
    break;

  case 34: /* EXPR1: EXPR1 '+' TERM1  */
#line 199 "prob1.y"
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
#line 1595 "y.tab.c"
    break;

  case 35: /* EXPR1: EXPR1 '-' TERM1  */
#line 210 "prob1.y"
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
#line 1612 "y.tab.c"
    break;

  case 36: /* EXPR1: TERM1  */
#line 222 "prob1.y"
                                        {strcpy((yyval.String), (yyvsp[0].String));}
#line 1618 "y.tab.c"
    break;

  case 37: /* TERM1: TERM1 '*' FACT1  */
#line 223 "prob1.y"
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
#line 1635 "y.tab.c"
    break;

  case 38: /* TERM1: TERM1 '/' FACT1  */
#line 235 "prob1.y"
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
#line 1652 "y.tab.c"
    break;

  case 39: /* TERM1: FACT1  */
#line 247 "prob1.y"
                                       {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 1659 "y.tab.c"
    break;

  case 40: /* FACT1: INC IDTEMP  */
#line 249 "prob1.y"
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
#line 1681 "y.tab.c"
    break;

  case 41: /* FACT1: IDTEMP INC  */
#line 266 "prob1.y"
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
#line 1707 "y.tab.c"
    break;

  case 42: /* FACT1: DEC IDTEMP  */
#line 287 "prob1.y"
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
#line 1743 "y.tab.c"
    break;

  case 43: /* FACT1: IDTEMP2 DEC  */
#line 318 "prob1.y"
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
#line 1782 "y.tab.c"
    break;

  case 44: /* FACT1: '-' FIX1  */
#line 352 "prob1.y"
                            {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 1796 "y.tab.c"
    break;

  case 45: /* FACT1: FIX1  */
#line 361 "prob1.y"
                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 1802 "y.tab.c"
    break;

  case 46: /* FIX1: IDTEMP  */
#line 363 "prob1.y"
                 {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 1810 "y.tab.c"
    break;

  case 47: /* FIX1: NUMBER  */
#line 366 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 1819 "y.tab.c"
    break;

  case 48: /* FIX1: FLOAT_NUMBER  */
#line 370 "prob1.y"
                              {

		}
#line 1827 "y.tab.c"
    break;

  case 49: /* stmt: IDTEMP '=' EXPR  */
#line 376 "prob1.y"
                                 {
				// printf("fsdsf");	
				(yyval.String) = (char*)malloc(40 *sizeof(char));
				strcpy((yyval.String), (yyvsp[-2].String));
				printf("%s = %s\n", (yyvsp[-2].String), (yyvsp[0].String));
				// strcat($1, "=");
				// strcat($1, $3);
				// printf("%s", $1);
			}
#line 1841 "y.tab.c"
    break;

  case 50: /* stmt: EXPR  */
#line 384 "prob1.y"
                                  {}
#line 1847 "y.tab.c"
    break;

  case 51: /* EXPR: EXPR '+' TERM  */
#line 385 "prob1.y"
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
#line 1863 "y.tab.c"
    break;

  case 52: /* EXPR: EXPR '-' TERM  */
#line 396 "prob1.y"
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
#line 1880 "y.tab.c"
    break;

  case 53: /* EXPR: TERM  */
#line 408 "prob1.y"
                                       {strcpy((yyval.String), (yyvsp[0].String));}
#line 1886 "y.tab.c"
    break;

  case 54: /* TERM: TERM '*' FACT  */
#line 409 "prob1.y"
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
#line 1903 "y.tab.c"
    break;

  case 55: /* TERM: TERM '/' FACT  */
#line 421 "prob1.y"
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
#line 1920 "y.tab.c"
    break;

  case 56: /* TERM: FACT  */
#line 433 "prob1.y"
                                      {
				 strcpy((yyval.String), (yyvsp[0].String));}
#line 1927 "y.tab.c"
    break;

  case 57: /* FACT: INC IDTEMP  */
#line 435 "prob1.y"
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
#line 1949 "y.tab.c"
    break;

  case 58: /* FACT: IDTEMP INC  */
#line 452 "prob1.y"
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
#line 1975 "y.tab.c"
    break;

  case 59: /* FACT: DEC IDTEMP  */
#line 473 "prob1.y"
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
#line 2011 "y.tab.c"
    break;

  case 60: /* FACT: IDTEMP2 DEC  */
#line 504 "prob1.y"
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
#line 2050 "y.tab.c"
    break;

  case 61: /* FACT: '-' FIX  */
#line 538 "prob1.y"
                           {
			char *temp = (char*)malloc(40 *sizeof(char));
			strcpy(temp, gen_var());
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), temp);
			printf("%s = -1 * %s\n", temp, (yyvsp[0].String));
			// strcat(temp, "= -1 *");
			// strcat(temp, $2);
		 }
#line 2064 "y.tab.c"
    break;

  case 62: /* FACT: FIX  */
#line 547 "prob1.y"
                      {strcpy((yyval.String), (yyvsp[0].String));}
#line 2070 "y.tab.c"
    break;

  case 63: /* FIX: '(' EXPR ')'  */
#line 549 "prob1.y"
                              {
	(yyval.String)  = (char*)malloc(40 *sizeof(char));
		 strcpy((yyval.String), (yyvsp[-1].String));}
#line 2078 "y.tab.c"
    break;

  case 64: /* FIX: IDTEMP  */
#line 552 "prob1.y"
                          {
			(yyval.String) = (char*)malloc(40 *sizeof(char));
			strcpy((yyval.String), (yyvsp[0].String));}
#line 2086 "y.tab.c"
    break;

  case 65: /* FIX: NUMBER  */
#line 555 "prob1.y"
                         {
			(yyval.String) = (char*)malloc(40 *sizeof(char)) ;
			sprintf((yyval.String),"%d", yylval.dval);
		}
#line 2095 "y.tab.c"
    break;

  case 66: /* FIX: FLOAT_NUMBER  */
#line 559 "prob1.y"
                              {

		}
#line 2103 "y.tab.c"
    break;

  case 67: /* IDTEMP: ID  */
#line 562 "prob1.y"
            {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2113 "y.tab.c"
    break;

  case 68: /* IDTEMP2: ID  */
#line 568 "prob1.y"
             {
	(yyval.String) = (char*)malloc(40 *sizeof(char));
		 	strcpy((yyval.String),yylval.lexeme);
			// printf("%s\n", yylval.lexeme);
		 }
#line 2123 "y.tab.c"
    break;


#line 2127 "y.tab.c"

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

#line 575 "prob1.y"


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
	if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
	}
	yyparse();
	return 0;
}


