/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "test.y" /* yacc.c:339  */

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>

using namespace std;
ast test;
ast test1;
unordered_map <string,int> size_map;
const char *s = "Hello, World!";   

class test123{
	int a;
	public:
	test123(){
		a=5;
	}
	void print_func(){
		cout<<"A is "<<a<<"\n";
	}

};



void yyerror(const char *error_msg);

int counter = 0;
extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
extern int scope_count;
extern "C"
{       
        int yyparse(void);
        int yylex(void);  
        int yywrap()
        {
                return 1;
        }

}

#line 112 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    NUM = 259,
    INT = 260,
    FLOAT = 261,
    CHAR = 262,
    DOUBLE = 263,
    VOID = 264,
    AMP = 265,
    DM = 266,
    DP = 267,
    FOR = 268,
    WHILE = 269,
    IF = 270,
    ELSE = 271,
    MAIN = 272,
    AND = 273,
    OR = 274,
    LE = 275,
    GE = 276,
    EQ = 277,
    NE = 278,
    LT = 279,
    GT = 280
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 47 "test.y" /* yacc.c:355  */

	char* str;
	class node* node;

#line 183 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 200 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      16,    17,    15,    13,    25,    14,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    20,    21,
      22,    23,    24,    27,    28,    29,    30,    31,    32,    33,
      34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    71,    72,    76,    85,    88,    97,   101,
     109,   110,   113,   117,   121,   124,   127,   128,   132,   133,
     134,   135,   138,   140,   142,   143,   146,   147,   148,   149,
     150,   151,   152,   153,   159,   160,   163,   164,   167,   168,
     171,   172,   176,   179,   181,   185,   186,   187,   188,   189,
     193,   194,   195,   196,   199,   204,   209,   214,   219,   224,
     229,   234,   239,   244,   249,   254,   259,   264,   269,   274,
     279,   288,   293,   298,   303,   318,   319,   320,   321,   322,
     325,   327,   330,   331,   332,   333,   334,   335,   336,   337
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "INT", "FLOAT", "CHAR",
  "DOUBLE", "VOID", "AMP", "DM", "DP", "'+'", "'-'", "'*'", "'('", "')'",
  "'['", "']'", "FOR", "WHILE", "IF", "ELSE", "MAIN", "','", "'='", "AND",
  "OR", "LE", "GE", "EQ", "NE", "LT", "GT", "'/'", "'%'", "';'", "'{'",
  "'}'", "$accept", "init", "declaration", "array_st", "array_st_usage",
  "func_declaration", "func_call", "compound_st", "STATEMENT_STRUCTURE",
  "CLOSE", "statement_structure", "statement", "for_stmt", "while_stmt",
  "start_if_stmt", "start_if_compound_st", "if_stmt", "arg_list_optional",
  "arg_list_call", "arg_list_call_actual", "arg_list_actual", "arg_final",
  "assignment_st_for", "assignment_st", "assignment_st_t",
  "assignment_st_f", "type", "expression_for", "expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,    43,    45,    42,    40,    41,    91,    93,
     268,   269,   270,   271,   272,    44,    61,   273,   274,   275,
     276,   277,   278,   279,   280,    47,    37,    59,   123,   125
};
# endif

#define YYPACT_NINF -97

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-97)))

#define YYTABLE_NINF -9

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -97,   189,   -97,    64,     4,   -97,   -97,   -97,   -97,   -97,
       5,    42,    88,   115,    40,   212,   226,   -97,   -97,   -97,
     -97,    -3,     2,   -97,    54,   -97,   -97,    18,     0,   226,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   226,    64,   -97,   103,   240,   240,   226,   -97,   240,
     240,   240,   164,     7,   -12,    -1,   -97,    12,     6,    16,
     116,   246,   -97,   261,     2,     2,    -7,   -97,   -97,   -97,
      78,    35,   281,   -97,   -97,    25,    39,   -97,   -97,    55,
      49,   -97,    74,    60,    71,   -97,   -97,    73,   281,   -97,
      72,    73,   152,   -97,   -97,   -97,    99,   105,   135,   -97,
     -97,    92,   -97,   -97,   -97,   146,   155,   -97,   254,   226,
     129,   129,   -97,   -97,   -97,   132,   132,   195,   140,    -7,
     -97,   -97,    93,   154,   -97,   -97,   -97,   -97,   129,   132,
     129,   129,   129,   129,   129,   129,   132,   142,   251,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   226,
     174,   132,   -97,   -97
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     1,    70,    71,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     2,    73,     3,
      74,     0,    49,    53,     0,    61,    60,    37,     0,     0,
      63,    62,    69,    56,    59,    57,    58,    66,    64,    67,
      65,     0,    68,    72,     0,     0,     0,     0,     6,     0,
       0,     0,    70,     0,     0,     0,    39,     0,    36,     0,
      45,     0,    54,    70,    47,    48,    46,    50,    51,    52,
      35,     0,    35,     7,     5,     0,     0,     9,    55,     0,
      34,    41,     0,     0,     0,    12,    38,     0,     0,    42,
       9,     0,     0,    10,    40,    11,     0,     0,     0,    18,
      13,     0,    17,    20,    19,    28,    29,    21,     0,    43,
       0,     0,    15,    14,    16,     0,     0,    70,     0,    44,
      88,    89,     0,     0,    31,    30,    33,    32,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    25,
      24,    82,    83,    85,    84,    87,    86,    27,    26,    43,
       0,     0,    23,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   180,   -97,   -97,   -97,   -97,   -88,   -97,   -97,
     -97,   -96,   -97,   -97,   -97,   -97,   -97,   136,   -97,   -97,
     -97,   121,    61,   -15,   104,    10,     1,   -97,   -81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    99,    54,    18,    19,    20,    93,   100,   113,
     101,   102,   103,   104,   105,   106,   107,    79,    57,    58,
      80,    81,   118,    21,    22,    23,   108,   137,   122
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    44,    24,    95,    59,   114,    45,    46,    32,    55,
      45,    46,    45,    46,    60,    30,    31,    49,    47,   125,
     127,    56,    47,    72,    47,    73,    61,   124,   126,    75,
     123,    76,    66,   140,    48,    77,    74,    50,    51,    83,
     148,   139,    86,    39,    40,    33,    34,   138,   147,   141,
     142,   143,   144,   145,   146,   153,    41,    52,     4,    67,
      68,    69,    85,   152,    10,    11,    12,    13,    14,    15,
      16,    82,    87,    82,    88,    25,    26,    89,    53,    90,
      27,    56,    28,     5,     6,     7,     8,     9,    91,    82,
      29,    35,    36,    55,   119,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -8,
     129,    92,    96,    97,    98,   109,    45,    46,    37,    38,
      62,   110,   130,   131,   132,   133,   134,   135,    47,    45,
      46,   112,   120,   121,   119,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    64,
      65,   111,    96,    97,    98,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   115,
      92,   136,    96,    97,    98,    25,    26,   128,   116,   149,
      70,    17,    71,   130,   131,   132,   133,   134,   135,     2,
      29,   151,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    25,    26,    84,    94,
     150,    27,     0,    71,     0,    42,     4,     0,     0,     0,
       0,    29,    10,    11,    12,    13,    14,    15,    16,     3,
       4,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    63,     4,     0,     0,     0,     0,     0,
      10,    11,    12,    13,    14,    15,    16,   117,     4,    45,
      46,     0,     0,    78,    10,    11,    12,    13,    14,    15,
      16,    47,    25,    26,     0,     0,     0,    27,     0,    28,
     130,   131,   132,   133,   134,   135,     5,     6,     7,     8,
       9
};

static const yytype_int16 yycheck[] =
{
      15,    16,     1,    91,     4,   101,    13,    14,     3,    24,
      13,    14,    13,    14,    29,    11,    12,    15,    25,   115,
     116,     3,    25,    16,    25,    37,    41,   115,   116,    17,
     111,    25,    47,   129,    37,    19,    37,    35,    36,     4,
     136,   129,     3,     3,     4,     3,     4,   128,   136,   130,
     131,   132,   133,   134,   135,   151,    16,     3,     4,    49,
      50,    51,    37,   151,    10,    11,    12,    13,    14,    15,
      16,    70,    17,    72,    25,    11,    12,     3,    24,    19,
      16,     3,    18,     5,     6,     7,     8,     9,    17,    88,
      26,     3,     4,   108,   109,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    37,
      17,    38,    20,    21,    22,    16,    13,    14,     3,     4,
      17,    16,    29,    30,    31,    32,    33,    34,    25,    13,
      14,    39,     3,     4,   149,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    45,
      46,    16,    20,    21,    22,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    23,
      38,    17,    20,    21,    22,    11,    12,    37,    23,    37,
      16,     1,    18,    29,    30,    31,    32,    33,    34,     0,
      26,    17,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    11,    12,    72,    88,
     149,    16,    -1,    18,    -1,     3,     4,    -1,    -1,    -1,
      -1,    26,    10,    11,    12,    13,    14,    15,    16,     3,
       4,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,     3,     4,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,     3,     4,    13,
      14,    -1,    -1,    17,    10,    11,    12,    13,    14,    15,
      16,    25,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
      29,    30,    31,    32,    33,    34,     5,     6,     7,     8,
       9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    42,    44,    45,
      46,    63,    64,    65,    66,    11,    12,    16,    18,    26,
      11,    12,     3,     3,     4,     3,     4,     3,     4,     3,
       4,    16,     3,    63,    63,    13,    14,    25,    37,    15,
      35,    36,     3,    24,    43,    63,     3,    58,    59,     4,
      63,    63,    17,     3,    64,    64,    63,    65,    65,    65,
      16,    18,    16,    37,    37,    17,    25,    19,    17,    57,
      60,    61,    66,     4,    57,    37,     3,    17,    25,     3,
      19,    17,    38,    47,    61,    47,    20,    21,    22,    42,
      48,    50,    51,    52,    53,    54,    55,    56,    66,    16,
      16,    16,    39,    49,    51,    23,    23,     3,    62,    63,
       3,     4,    68,    68,    47,    51,    47,    51,    37,    17,
      29,    30,    31,    32,    33,    34,    17,    67,    68,    47,
      51,    68,    68,    68,    68,    68,    68,    47,    51,    37,
      62,    17,    47,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    41,    41,    42,    42,    42,    43,    44,
      45,    45,    46,    47,    48,    49,    50,    50,    51,    51,
      51,    51,    52,    52,    53,    53,    54,    55,    56,    56,
      56,    56,    56,    56,    57,    57,    58,    58,    59,    59,
      60,    60,    61,    62,    62,    63,    63,    63,    63,    63,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     2,     3,     4,     4,
       6,     6,     5,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     9,     9,     5,     5,     5,     5,     1,     1,
       3,     3,     3,     3,     1,     0,     1,     0,     3,     1,
       3,     1,     2,     0,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     4,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     3,     3,     3,     3,     3,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 5:
#line 76 "test.y" /* yacc.c:1646  */
    {
		// cout<<"BIG SCOPE\n";
		//cout<<"LINE N1O IS "<<yylineno<<"\n";
		//cout<<"get_identifier is "<<$2->get_identifier()<<"\n";
		(yyvsp[-1].node)->set_size(size_map[(yyvsp[-2].str)]);
		(yyvsp[-1].node)->set_type((yyvsp[-2].str));
		//cout<<"DISPLAY IS "<<"\n";
		//$2->disp_node(); 
		test1.insert(*(yyvsp[-1].node));}
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 85 "test.y" /* yacc.c:1646  */
    {

	}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 88 "test.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->set_size((yyvsp[-1].node)->get_size()*size_map[(yyvsp[-2].str)]);
		(yyvsp[-1].node)->set_type((yyvsp[-2].str));
		// $2->disp_node(); 
		test1.insert(*(yyvsp[-1].node));
	}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "test.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,(yyvsp[-3].str),"","",(yyvsp[-1].str),scope_count);}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 102 "test.y" /* yacc.c:1646  */
    {
	vector<string> temp1{(yyvsp[-3].str),(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)};
    (yyval.str) = conversion(temp1);
	}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 117 "test.y" /* yacc.c:1646  */
    {scope_count+=1;}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 121 "test.y" /* yacc.c:1646  */
    {scope_count-=1;}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 134 "test.y" /* yacc.c:1646  */
    {cout<<"FOOOR LOOP\n";}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 185 "test.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,(yyvsp[-2].str),"",(yyvsp[0].node)->get_value(),0,scope_count);}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 189 "test.y" /* yacc.c:1646  */
    {"ASSIFNMENT T\n";}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 200 "test.y" /* yacc.c:1646  */
    {
		vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].node)->get_value(),(yyvsp[0].str)};
		(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 205 "test.y" /* yacc.c:1646  */
    {
		vector<string> temp1{(yyvsp[-3].str),(yyvsp[-2].str),(yyvsp[-1].node)->get_value(),(yyvsp[0].str)};
		(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 210 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 215 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 220 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 225 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 230 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 235 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 240 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 245 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 250 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 255 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 260 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 265 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 270 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,(yyvsp[0].str),"","",0,scope_count);
		}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 275 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 280 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[0].str)};
		//	cout<<"COVERSION IS "<<conversion(temp1)<<"\n";
		//	cout<<"LINE NO IS "<<yylineno<<"\n";
			(yyval.node) = new node(yylineno,(yyvsp[0].str),"","",0,scope_count);
		//	cout<<"ID DISPLAY IS\n";
		//	$$->disp_node();
		}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 289 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 294 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].node)->get_value()};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 299 "test.y" /* yacc.c:1646  */
    {	
			vector<string> temp1{(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 304 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 318 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 319 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 320 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 321 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 322 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1710 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 339 "test.y" /* yacc.c:1906  */





void yyerror(const char *error_msg) {
	printf("error_msg: %s\n", error_msg);
}

int main(int argc, char *argv[]) {


    size_map["char"]=1;
	size_map["int"]=4;
	size_map["float"]=4;
	size_map["double"]=8;
//	char dest[100];
//	char another[7];
//	cout <<"entered here"<<"\n";
//	strcpy(another,"_c.txt");
//	cout <<"entered here"<<"\n";

	//strcpy(dest,(char *)argv[1]);
	//strcat(dest,another);
	// cout<<"HELLO WORLD\n";
	yyin = fopen(argv[1], "r");
	//yyout= fopen(argv[1],"w");
	if (!yyparse()) {
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}


	test1.display();
	fclose(yyin);
//	fclose(yyout);

	return 0;
}


