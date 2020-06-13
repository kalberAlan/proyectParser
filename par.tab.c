
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "par.y"

#include stdio.h
#include stdlib.h
#include "y.tab.h"
#define YYDEBUG 1
extern int yylex(void);
extern char *yytext;
extern FILE *yyin;
extern int yylineno;


/* Line 189 of yacc.c  */
#line 85 "par.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EXC = 258,
     DOCTYPE = 259,
     HTML = 260,
     LANG = 261,
     IGUAL = 262,
     HEAD = 263,
     META = 264,
     CHARSET = 265,
     UTF = 266,
     TITLE = 267,
     SECTION = 268,
     DIV = 269,
     BODY = 270,
     P = 271,
     H1 = 272,
     H2 = 273,
     H3 = 274,
     H4 = 275,
     H5 = 276,
     H6 = 277,
     EM = 278,
     BR = 279,
     HR = 280,
     STRONG = 281,
     UL = 282,
     OL = 283,
     LI = 284,
     TABLE = 285,
     TR = 286,
     TD = 287,
     TH = 288,
     CAPTION = 289,
     THEAD = 290,
     TFOOT = 291,
     TBODY = 292,
     A = 293,
     LA = 294,
     LC = 295,
     HTTP = 296,
     HTPS = 297,
     FTP = 298,
     FTPS = 299,
     SLASH = 300,
     MARK = 301,
     HASH = 302,
     COMILLAS = 303,
     ANCHO = 304,
     ALTO = 305,
     CLASS = 306,
     NAME = 307,
     JPG = 308,
     DESCRIPTION = 309,
     CONTENT = 310,
     DP = 311,
     KEYWORDS = 312,
     SOURCE = 313,
     ALTE = 314,
     AUTHOR = 315,
     ID = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 188 "par.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNRULES -- Number of states.  */
#define YYNSTATES  396

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    18,    19,    32,    42,    48,    57,
      58,    70,    79,    80,    89,    98,   100,   102,   104,   113,
     114,   123,   132,   134,   136,   138,   140,   142,   144,   146,
     148,   150,   151,   153,   154,   163,   172,   181,   190,   199,
     200,   209,   210,   219,   220,   229,   230,   239,   240,   249,
     250,   259,   260,   266,   267,   273,   282,   291,   300,   310,
     321,   330,   339,   340,   349,   350,   360,   361,   372,   381,
     390,   400,   402,   403,   405,   409,   418,   420,   422,   431,
     440,   449,   457,   466,   475,   484,   486,   492,   498,   504,
     510,   511,   514,   515,   519,   520,   524,   525,   529,   530,
     533,   534,   538,   539,   543,   544,   547,   548,   552,   553,
     554,   555,   564,   565,   566,   577,   578,   579
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,     3,     4,     5,    64,    -1,    39,     5,
      40,    66,    73,    39,    45,     5,    40,    -1,    -1,    39,
       5,     6,     7,    65,    40,    66,    72,    39,    45,     5,
      40,    -1,    39,     8,    40,    67,    70,    39,    45,     8,
      40,    -1,     9,    10,     7,    11,    68,    -1,     9,    52,
       7,    48,    54,    48,    55,     7,    -1,    -1,     9,    52,
       7,    48,    57,    48,    55,     7,    48,    69,    48,    -1,
       9,    52,     7,    48,    60,    48,    55,     7,    -1,    -1,
      39,    12,    40,    71,    39,    45,    12,    40,    -1,    39,
      15,    40,    73,    39,    45,    15,    40,    -1,    74,    -1,
      76,    -1,    77,    -1,    39,    13,    40,    76,    39,    45,
      13,    40,    -1,    -1,    39,    13,    40,    75,    39,    45,
      13,    40,    -1,    39,    14,    40,    77,    39,    45,    14,
      40,    -1,    79,    -1,    66,    -1,   104,    -1,   119,    -1,
      78,    -1,    73,    -1,   104,    -1,    91,    -1,    96,    -1,
      -1,    81,    -1,    -1,    39,    16,    40,    80,    39,    45,
      16,    40,    -1,    39,    16,    40,    88,    39,    45,    16,
      40,    -1,    39,    23,    40,    78,    39,    45,    23,    40,
      -1,    39,    26,    40,    78,    39,    45,    26,    40,    -1,
      39,    46,    40,    78,    39,    45,    46,    40,    -1,    -1,
      39,    17,    40,    82,    39,    45,    17,    40,    -1,    -1,
      39,    18,    40,    83,    39,    45,    18,    40,    -1,    -1,
      39,    19,    40,    84,    39,    45,    19,    40,    -1,    -1,
      39,    20,    40,    85,    39,    45,    20,    40,    -1,    -1,
      39,    21,    40,    86,    39,    45,    21,    40,    -1,    -1,
      39,    22,    40,    87,    39,    45,    22,    40,    -1,    -1,
      51,     7,    48,    89,    48,    -1,    -1,    61,     7,    48,
      90,    48,    -1,    39,    28,    40,    91,    39,    45,    28,
      40,    -1,    39,    28,    40,    78,    39,    45,    28,    40,
      -1,    39,    28,    40,    95,    39,    45,    28,    40,    -1,
      39,    28,    40,    95,    78,    39,    45,    28,    40,    -1,
      39,    28,    40,    95,    78,    91,    39,    45,    28,    40,
      -1,    39,    29,    40,    91,    39,    45,    29,    40,    -1,
      39,    29,    40,    78,    39,    45,    29,    40,    -1,    -1,
      39,    29,    40,    92,    39,    45,    29,    40,    -1,    -1,
      39,    29,    40,    93,    78,    39,    45,    29,    40,    -1,
      -1,    39,    29,    40,    94,    78,    91,    39,    45,    29,
      40,    -1,    39,    27,    40,    91,    39,    45,    27,    40,
      -1,    39,    27,    40,    78,    39,    45,    27,    40,    -1,
      39,    27,    40,    78,    91,    39,    45,    27,    40,    -1,
      78,    -1,    -1,    97,    -1,   101,   102,   103,    -1,    39,
      31,    40,    98,    39,    45,    31,    40,    -1,    99,    -1,
     100,    -1,    39,    33,    40,    77,    39,    45,    33,    98,
      -1,    39,    33,    40,    77,    39,    45,    33,    40,    -1,
      39,    32,    40,    77,    39,    45,    32,    40,    -1,    39,
      32,    40,    77,    45,    32,    40,    -1,    39,    35,    40,
      97,    39,    45,    35,    40,    -1,    39,    36,    40,    97,
      39,    45,    36,    40,    -1,    39,    37,    40,    97,    39,
      45,    37,    40,    -1,   105,    -1,    41,    56,    45,    45,
     106,    -1,    42,    56,    45,    45,   106,    -1,    43,    56,
      45,    45,   106,    -1,    44,    56,    45,    45,   106,    -1,
      -1,   107,    56,    -1,    -1,   108,    56,   111,    -1,    -1,
     109,    56,   115,    -1,    -1,   110,    56,   118,    -1,    -1,
     112,    45,    -1,    -1,   113,    45,   115,    -1,    -1,   114,
      45,   118,    -1,    -1,   116,    47,    -1,    -1,   117,    47,
     118,    -1,    -1,    -1,    -1,    53,    58,     7,    48,   120,
      45,   121,    48,    -1,    -1,    -1,    53,    58,     7,   122,
      59,     7,    48,   123,   124,    48,    -1,    -1,    -1,    49,
       7,    48,   125,    48,    50,     7,    48,   126,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    76,    76,    80,    81,    81,    84,    87,    90,    91,
      91,    92,    95,    95,    98,   101,   102,   103,   106,   107,
     107,   110,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   123,   124,   129,   129,   130,   133,   134,   135,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   146,   146,   147,   147,   150,   151,   152,   153,   154,
     155,   156,   157,   157,   158,   158,   159,   159,   160,   161,
     162,   165,   166,   175,   176,   179,   182,   183,   186,   187,
     190,   191,   194,   197,   200,   203,   206,   207,   208,   209,
     212,   212,   213,   213,   214,   214,   215,   215,   218,   218,
     219,   219,   220,   220,   223,   223,   224,   224,   227,   230,
     230,   230,   231,   231,   231,   234,   234,   234
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EXC", "DOCTYPE", "HTML", "LANG",
  "IGUAL", "HEAD", "META", "CHARSET", "UTF", "TITLE", "SECTION", "DIV",
  "BODY", "P", "H1", "H2", "H3", "H4", "H5", "H6", "EM", "BR", "HR",
  "STRONG", "UL", "OL", "LI", "TABLE", "TR", "TD", "TH", "CAPTION",
  "THEAD", "TFOOT", "TBODY", "A", "LA", "LC", "HTTP", "HTPS", "FTP",
  "FTPS", "SLASH", "MARK", "HASH", "COMILLAS", "ANCHO", "ALTO", "CLASS",
  "NAME", "JPG", "DESCRIPTION", "CONTENT", "DP", "KEYWORDS", "SOURCE",
  "ALTE", "AUTHOR", "ID", "$accept", "sigma", "inicio", "$@1",
  "encabezado", "contcabezado", "metacont", "$@2", "titulo", "$@3",
  "estcuerpo", "cuerpo", "seccion", "$@4", "division", "funcion",
  "ingreso", "parrafo", "$@5", "enfatizadores", "$@6", "$@7", "$@8", "$@9",
  "$@10", "$@11", "selector", "$@12", "$@13", "listas", "$@14", "$@15",
  "$@16", "type", "tabla", "ttr", "element", "tth", "ttd", "tcabeza",
  "tpie", "tcuerpo", "enlaces", "protocolo", "dominio", "$@17", "$@18",
  "$@19", "$@20", "puerto", "$@21", "$@22", "$@23", "ruta", "$@24", "$@25",
  "localizadorint", "imagen", "$@26", "$@27", "$@28", "$@29", "dato",
  "$@30", "$@31", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    65,    64,    66,    67,    68,    69,
      68,    68,    71,    70,    72,    73,    73,    73,    74,    75,
      74,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    80,    79,    79,    81,    81,    81,    82,
      66,    83,    66,    84,    66,    85,    66,    86,    66,    87,
      66,    89,    88,    90,    88,    91,    91,    91,    91,    91,
      91,    91,    92,    91,    93,    91,    94,    91,    91,    91,
      91,    95,    95,    96,    96,    97,    98,    98,    99,    99,
     100,   100,   101,   102,   103,   104,   105,   105,   105,   105,
     107,   106,   108,   106,   109,   106,   110,   106,   112,   111,
     113,   111,   114,   111,   116,   115,   117,   115,   118,   120,
     121,   119,   122,   123,   119,   125,   126,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     9,     0,    12,     9,     5,     8,     0,
      11,     8,     0,     8,     8,     1,     1,     1,     8,     0,
       8,     8,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     8,     8,     8,     8,     8,     0,
       8,     0,     8,     0,     8,     0,     8,     0,     8,     0,
       8,     0,     5,     0,     5,     8,     8,     8,     9,    10,
       8,     8,     0,     8,     0,     9,     0,    10,     8,     8,
       9,     1,     0,     1,     3,     8,     1,     1,     8,     8,
       8,     7,     8,     8,     8,     1,     5,     5,     5,     5,
       0,     2,     0,     3,     0,     3,     0,     3,     0,     2,
       0,     3,     0,     3,     0,     2,     0,     3,     0,     0,
       0,     8,     0,     0,    10,     0,     0,    10
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     2,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
      15,    16,    17,    26,    22,    32,    29,    30,    73,     0,
      24,    85,    25,     0,     0,    39,    41,    43,    45,    47,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,     0,     0,     0,
      90,    90,    90,    90,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,    87,    88,    89,     0,     0,     3,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,    91,    98,
     104,   108,   110,     0,     0,     0,     0,     0,     0,     7,
       0,     0,    40,    42,    44,    46,    48,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,    95,
       0,     0,    97,     0,   113,     0,     0,     0,     5,     0,
       0,     6,    20,    18,    21,    52,    54,    34,    35,    36,
      37,    69,     0,    68,    56,    55,    57,     0,     0,    61,
      60,    63,     0,     0,     0,     0,     0,    75,    82,    38,
      99,   104,   108,   105,   108,   111,     0,     0,     0,     0,
       0,     0,    70,    58,     0,    65,     0,     0,     0,     0,
     101,   103,   107,     0,     0,    83,     0,     0,     0,     0,
      59,    67,     0,    81,     0,     0,   114,    84,    14,     0,
       0,     0,    13,    80,    79,    78,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,    11,     0,     9,
       0,     0,   116,    10,     0,   117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    14,    28,    72,   249,   391,   103,   250,
     100,   113,    30,   111,    31,    32,    33,    34,   117,    35,
      73,    74,    75,    76,    77,    78,   118,   261,   262,    36,
     130,   131,   132,   127,    37,    38,   134,   135,   136,    39,
      69,    98,    40,    41,   186,   187,   188,   189,   190,   285,
     286,   287,   288,   289,   290,   291,   292,    42,   194,   293,
     145,   336,   354,   380,   394
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -285
static const yytype_int16 yypact[] =
{
      12,    35,    45,    47,  -285,    30,    69,  -285,     6,    74,
      37,  -285,    67,    29,    55,    63,    64,    65,    66,    68,
      70,    71,     3,    53,    57,    60,    61,    49,  -285,    75,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,    76,
    -285,  -285,  -285,    37,   109,  -285,  -285,  -285,  -285,  -285,
    -285,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,   123,    94,    95,   101,
     102,   122,   103,   104,   105,   106,   107,   108,   110,   111,
      29,   -33,   112,   112,   113,   113,   113,   114,   117,   112,
     115,   116,   118,   119,   100,   128,   125,    97,  -285,   142,
     120,   151,   150,   127,   124,   126,   129,   130,   131,   132,
     153,   133,   134,  -285,   139,   161,   163,   140,   141,    18,
     143,   144,    31,   145,   146,   148,   149,   152,   154,   155,
     156,   112,   112,    59,   157,  -285,  -285,   158,   159,   160,
    -285,  -285,  -285,  -285,  -285,   138,   162,   117,   164,   165,
     136,   179,   166,   147,   183,   185,   182,   187,   188,   186,
     167,   168,   169,   170,   171,   172,   175,   176,   177,     8,
     184,   180,   181,   189,    17,   190,   191,   192,   193,   194,
     196,   199,   200,   197,   198,   201,  -285,   174,   195,   202,
     203,  -285,  -285,  -285,   204,   208,  -285,   205,   117,    29,
     206,   207,  -285,   216,   210,   212,   213,   214,   215,   217,
     218,   219,   227,  -285,  -285,   211,   229,   224,   222,   233,
     220,   234,   228,   235,   236,    38,   223,   237,   238,   239,
     225,    51,   230,    29,    29,   240,   241,   226,  -285,  -285,
    -285,  -285,  -285,   231,   232,   242,   243,   244,   221,  -285,
     246,   247,  -285,  -285,  -285,  -285,  -285,  -285,   248,   249,
     250,   245,   251,   252,   254,   255,   256,   257,   253,   258,
     260,   261,   262,   263,   259,   265,   266,   267,   274,   264,
     -12,   269,   270,   271,   272,  -285,   268,   273,   275,  -285,
     276,   277,  -285,   278,  -285,   279,   280,   282,  -285,   307,
     283,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,   281,  -285,  -285,  -285,  -285,   289,   288,  -285,
    -285,  -285,   290,   293,   286,   178,   287,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,   284,   294,   298,   302,
     291,   324,  -285,  -285,   297,  -285,   300,   306,   301,   309,
    -285,  -285,  -285,   312,   295,  -285,   304,   305,    36,   308,
    -285,  -285,   310,  -285,    58,   299,  -285,  -285,  -285,   303,
     311,   313,  -285,  -285,  -285,  -285,  -285,   173,   314,   315,
     316,   339,   342,   345,   317,  -285,   318,  -285,   346,  -285,
     320,   323,  -285,  -285,   325,  -285
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -285,  -285,  -285,  -285,     4,  -285,  -285,  -285,  -285,  -285,
    -285,   -13,  -285,  -285,   296,   -79,   -76,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,   -81,
    -285,  -285,  -285,  -285,  -285,   -86,   -90,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,   -41,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,   -56,  -285,  -285,  -284,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,  -285
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      29,   114,   138,   124,   126,   129,   120,   121,   123,   125,
     128,    15,     9,   139,    13,     1,    51,    52,   115,    53,
      16,    17,    18,    19,    20,    21,    54,   324,   116,    55,
      56,    57,    58,   325,    59,    56,    57,    58,    60,     3,
      54,    54,   170,    55,    55,     4,    10,    70,   351,    61,
     352,   175,     5,   219,    54,   179,   180,    55,    56,    57,
      58,   197,   224,    61,    61,    56,    57,    58,    22,     6,
      23,    24,    25,    26,     8,    15,    12,    61,    56,    57,
      58,    11,    27,   273,    16,    17,    18,    19,    20,    21,
     369,   181,   182,   370,   226,    43,   371,   133,   374,   232,
     191,   192,   193,    44,    45,    46,    47,    66,    48,    62,
      49,    50,   245,    63,    67,    68,    64,    65,    71,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      94,    96,   101,   146,   148,    90,    91,    92,    93,    95,
      97,    99,   102,   104,   105,   106,   107,   108,   144,   109,
     110,   119,   122,   133,   280,   281,   137,   149,   151,   150,
     140,   141,   152,   142,   143,   147,   153,    52,   163,   154,
     164,   155,   160,   161,   156,   157,   158,   159,   162,   165,
     166,   200,   167,   168,   169,   171,   246,   172,   173,    59,
     201,   174,   203,   176,   177,   178,   183,   195,   184,   185,
     204,   206,   196,   205,   198,   199,   202,   207,   209,   208,
     348,   247,   210,   211,   212,   243,   248,   215,   213,   214,
     216,   217,   218,   220,   251,   221,   222,   263,   381,   225,
     238,   258,   259,   230,   223,   231,   227,   228,   229,   233,
     234,   260,   235,   236,   244,   264,   237,   265,   266,   242,
     252,   239,   253,   254,   255,   256,   270,   257,   240,   241,
     267,   269,   274,   271,   272,   268,   275,   276,   277,   279,
     278,   282,   284,   299,   375,   350,   283,   295,     0,   294,
     312,   296,   297,     0,   298,   300,     0,   301,   302,   303,
     304,   317,   307,   305,   308,   309,   310,   311,   313,   306,
     314,   315,   316,   322,   318,   319,   320,   321,   326,   323,
     327,   328,   329,   330,   340,   337,   344,   357,   331,   365,
     332,   342,   346,   333,   334,   338,   335,   339,   341,   343,
     345,   347,   349,   353,   355,   356,   359,   360,   362,   358,
     361,   363,   364,   366,   367,   368,   385,   376,   372,   386,
     373,   377,   387,   390,     0,     0,     0,     0,     0,   378,
       0,   379,     0,     0,   384,     0,   389,   388,   392,   382,
     383,   393,     0,   395,     0,   112
};

static const yytype_int16 yycheck[] =
{
      13,    80,    88,    84,    85,    86,    82,    83,    84,    85,
      86,     8,     6,    89,    10,     3,    13,    14,    51,    16,
      17,    18,    19,    20,    21,    22,    23,    39,    61,    26,
      27,    28,    29,    45,    31,    27,    28,    29,    35,     4,
      23,    23,   123,    26,    26,     0,    40,    43,   332,    46,
     334,   127,     5,    45,    23,   131,   132,    26,    27,    28,
      29,   147,    45,    46,    46,    27,    28,    29,    39,    39,
      41,    42,    43,    44,     5,     8,    39,    46,    27,    28,
      29,     7,    53,    45,    17,    18,    19,    20,    21,    22,
      54,    32,    33,    57,   175,    40,    60,    39,    40,   180,
     141,   142,   143,    40,    40,    40,    40,    58,    40,    56,
      40,    40,   198,    56,    39,    39,    56,    56,     9,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
       7,    36,    10,     5,    37,    45,    45,    45,    45,    45,
      39,    39,    39,    39,    39,    39,    39,    39,    48,    39,
      39,    39,    39,    39,   233,   234,    39,    15,     7,    39,
      45,    45,    12,    45,    45,    40,    39,    14,     7,    45,
       7,    45,    39,    39,    45,    45,    45,    45,    39,    39,
      39,    45,    39,    39,    39,    39,   199,    39,    39,    31,
      11,    39,    45,    39,    39,    39,    39,    59,    39,    39,
      17,    19,    40,    18,    40,    40,    40,    20,    22,    21,
      32,     5,    45,    45,    45,     7,     9,    45,    48,    48,
      45,    45,    45,    39,     8,    45,    45,    16,    55,    39,
      56,    13,    13,    39,    45,    39,    45,    45,    45,    40,
      40,    14,    45,    45,    39,    16,    45,    23,    26,    45,
      40,    56,    40,    40,    40,    40,    28,    40,    56,    56,
      27,    27,    39,    28,    28,    45,    29,    29,    29,    39,
      45,    31,    46,    52,   364,   331,    35,    45,    -1,    48,
      27,    39,    39,    -1,    40,    39,    -1,    40,    40,    40,
      40,    28,    40,    48,    40,    40,    40,    40,    40,    48,
      40,    40,    40,    29,    45,    40,    40,    40,    39,    45,
      40,    40,    40,    45,     7,    36,    28,    15,    45,     7,
      45,    40,    29,    47,    47,    45,    48,    45,    45,    40,
      40,    45,    45,    49,    40,    37,    12,    40,    32,    48,
      40,    40,    33,    48,    40,    40,     7,    48,    40,     7,
      40,    48,     7,     7,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    48,    -1,    -1,    48,    -1,    48,    50,    48,    55,
      55,    48,    -1,    48,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    63,     4,     0,     5,    39,    64,     5,     6,
      40,     7,    39,    66,    65,     8,    17,    18,    19,    20,
      21,    22,    39,    41,    42,    43,    44,    53,    66,    73,
      74,    76,    77,    78,    79,    81,    91,    96,    97,   101,
     104,   105,   119,    40,    40,    40,    40,    40,    40,    40,
      40,    13,    14,    16,    23,    26,    27,    28,    29,    31,
      35,    46,    56,    56,    56,    56,    58,    39,    39,   102,
      66,     9,    67,    82,    83,    84,    85,    86,    87,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      45,    45,    45,    45,     7,    45,    36,    39,   103,    39,
      72,    10,    39,    70,    39,    39,    39,    39,    39,    39,
      39,    75,    76,    73,    77,    51,    61,    80,    88,    39,
      78,    78,    39,    78,    91,    78,    91,    95,    78,    91,
      92,    93,    94,    39,    98,    99,   100,    39,    97,    78,
      45,    45,    45,    45,    48,   122,     5,    40,    37,    15,
      39,     7,    12,    39,    45,    45,    45,    45,    45,    45,
      39,    39,    39,     7,     7,    39,    39,    39,    39,    39,
      91,    39,    39,    39,    39,    78,    39,    39,    39,    78,
      78,    32,    33,    39,    39,    39,   106,   107,   108,   109,
     110,   106,   106,   106,   120,    59,    40,    97,    40,    40,
      45,    11,    40,    45,    17,    18,    19,    20,    21,    22,
      45,    45,    45,    48,    48,    45,    45,    45,    45,    45,
      39,    45,    45,    45,    45,    39,    91,    45,    45,    45,
      39,    39,    91,    40,    40,    45,    45,    45,    56,    56,
      56,    56,    45,     7,    39,    97,    73,     5,     9,    68,
      71,     8,    40,    40,    40,    40,    40,    40,    13,    13,
      14,    89,    90,    16,    16,    23,    26,    27,    45,    27,
      28,    28,    28,    45,    39,    29,    29,    29,    45,    39,
      77,    77,    31,    35,    46,   111,   112,   113,   114,   115,
     116,   117,   118,   121,    48,    45,    39,    39,    40,    52,
      39,    40,    40,    40,    40,    48,    48,    40,    40,    40,
      40,    40,    27,    40,    40,    40,    40,    28,    45,    40,
      40,    40,    29,    45,    39,    45,    39,    40,    40,    40,
      45,    45,    45,    47,    47,    48,   123,    36,    45,    45,
       7,    45,    40,    40,    28,    40,    29,    45,    32,    45,
     115,   118,   118,    49,   124,    40,    37,    15,    48,    12,
      40,    40,    32,    40,    33,     7,    48,    40,    40,    54,
      57,    60,    40,    40,    40,    98,    48,    48,    48,    48,
     125,    55,    55,    55,    48,     7,     7,     7,    50,    48,
       7,    69,    48,    48,   126,    48
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 81 "par.y"
    {idioma;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 90 "par.y"
    {entrada;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 91 "par.y"
    {entrada;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 92 "par.y"
    {entrada;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 95 "par.y"
    {entrada;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 107 "par.y"
    {entrada;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 123 "par.y"
    {entrada;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 129 "par.y"
    {entrada;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 138 "par.y"
    {entrada;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 139 "par.y"
    {entrada;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 140 "par.y"
    {entrada;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 141 "par.y"
    {entrada;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 142 "par.y"
    {entrada;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 143 "par.y"
    {entrada;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 146 "par.y"
    {entrada;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 147 "par.y"
    {entrada;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 157 "par.y"
    {int;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 158 "par.y"
    {int;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 159 "par.y"
    {int;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 166 "par.y"
    {int;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 212 "par.y"
    {entrada;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 213 "par.y"
    {entrada;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 214 "par.y"
    {entrada;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 215 "par.y"
    {entrada;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 218 "par.y"
    {entrada;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 219 "par.y"
    {entrada;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 220 "par.y"
    {entrada;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 223 "par.y"
    {entrada;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 224 "par.y"
    {entrada;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 227 "par.y"
    {entrada;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 230 "par.y"
    {entrada;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 230 "par.y"
    {entrada;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 231 "par.y"
    {entrada;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 231 "par.y"
    {entrada;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 234 "par.y"
    {int;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 234 "par.y"
    {int;}
    break;



/* Line 1455 of yacc.c  */
#line 1949 "par.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 237 "par.y"


void  yyerror(char *s)
{
	printf ("\nError sintactico en la linea: %d\n",cont);
}

int main()
{
  yyparse();
printf("funciona");
getchar();
return 0;
}
