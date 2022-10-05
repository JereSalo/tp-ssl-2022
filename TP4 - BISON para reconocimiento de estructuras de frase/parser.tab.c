
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
#line 1 "parser.y"


#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "biblioteca.h"
#define YYDEBUG 1

FILE* yyin;
detalleSentencia *ListaSentencias = NULL;
detalleDeclaraciones *ListaDeclaraciones = NULL;

int nroLineaAnterior=1;

int yylex();
int yyerror (char *s);

int yywrap(){
  return(1);
}

char tipo [20];



/* Line 189 of yacc.c  */
#line 100 "parser.tab.c"

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
     CONSTANTE_OCTAL = 258,
     CONSTANTE_DECIMAL = 259,
     CONSTANTE_HEXADECIMAL = 260,
     CONSTANTE_REAL = 261,
     CONSTANTE_CARACTER = 262,
     OR = 263,
     AND = 264,
     IGUALIGUAL = 265,
     DIFERENTE = 266,
     MAYORIGUAL = 267,
     MENORIGUAL = 268,
     MASIGUAL = 269,
     MENOSIGUAL = 270,
     PORIGUAL = 271,
     DIVISIONGUAL = 272,
     MASMAS = 273,
     MENOSMENOS = 274,
     FLECHA = 275,
     AUTO = 276,
     TYPEDEF = 277,
     STATIC = 278,
     REGISTER = 279,
     EXTERN = 280,
     ENUM = 281,
     SIZEOF = 282,
     UNION = 283,
     STRUCT = 284,
     GOTO = 285,
     RETURN = 286,
     CONTINUE = 287,
     BREAK = 288,
     VOLATILE = 289,
     CONST = 290,
     WHILE = 291,
     DO = 292,
     FOR = 293,
     IF = 294,
     ELSE = 295,
     SWITCH = 296,
     CASE = 297,
     DEFAULT = 298,
     VOID = 299,
     CHAR = 300,
     DOUBLE = 301,
     FLOAT = 302,
     INT = 303,
     LONG = 304,
     SHORT = 305,
     SIGNED = 306,
     UNSIGNED = 307,
     IDENTIFICADOR = 308,
     LITERAL_CADENA = 309,
     COMENTARIO_UNA_LINEA = 310,
     COMENTARIO_VARIAS_LINEAS = 311,
     NRO_LINEA = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 54 "parser.y"

    char* cadena;
    int entero;



/* Line 214 of yacc.c  */
#line 200 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 212 "parser.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   741

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNRULES -- Number of states.  */
#define YYNSTATES  307

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,     2,     2,    73,    74,     2,
      59,    60,    71,    69,    61,    70,    78,    72,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    58,
      67,    65,    68,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    63,     2,     2,     2,     2,
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
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    14,    16,    18,
      20,    23,    25,    27,    29,    35,    40,    46,    51,    53,
      57,    63,    70,    76,    83,    86,    87,    93,    95,    97,
      99,   101,   103,   105,   108,   112,   115,   117,   120,   127,
     133,   134,   137,   143,   151,   157,   163,   168,   173,   178,
     182,   186,   189,   192,   194,   199,   203,   207,   210,   213,
     217,   220,   223,   225,   230,   236,   241,   246,   250,   253,
     255,   258,   259,   264,   265,   272,   276,   278,   280,   282,
     284,   286,   288,   291,   295,   298,   302,   305,   307,   309,
     311,   313,   315,   317,   319,   321,   323,   325,   331,   336,
     342,   347,   351,   356,   358,   361,   362,   367,   369,   370,
     377,   378,   383,   385,   387,   389,   393,   395,   397,   399,
     401,   403,   405,   411,   413,   417,   419,   423,   425,   429,
     433,   435,   439,   443,   447,   451,   453,   457,   461,   463,
     467,   471,   475,   477,   480,   483,   486,   489,   491,   493,
     495,   497,   499,   501,   506,   511,   515,   519,   523,   526,
     529,   531,   535,   537,   539,   541,   545,   547,   549,   551,
     553,   555
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    -1,    80,    81,    -1,    89,    -1,   100,
      -1,    84,    58,    -1,    86,    -1,    83,    -1,    82,    -1,
       1,    58,    -1,    57,    -1,    55,    -1,    56,    -1,    44,
      53,    59,    85,    60,    -1,    44,    53,    59,    60,    -1,
     108,    53,    59,    85,    60,    -1,   108,    53,    59,    60,
      -1,   108,    -1,   108,    61,    85,    -1,    44,    53,    59,
      60,    89,    -1,    44,    53,    59,    87,    60,    89,    -1,
     108,    53,    59,    60,    89,    -1,   108,    53,    59,    87,
      60,    89,    -1,   108,    53,    -1,    -1,   108,    53,    61,
      88,    87,    -1,    90,    -1,    91,    -1,    93,    -1,    95,
      -1,    98,    -1,    99,    -1,   119,    58,    -1,    62,    92,
      63,    -1,    62,    63,    -1,    81,    -1,    92,    81,    -1,
      39,    59,   119,    60,    89,    94,    -1,    41,    59,   119,
      60,    89,    -1,    -1,    40,    89,    -1,    36,    59,   119,
      60,    89,    -1,    37,    81,    36,    59,   119,    60,    58,
      -1,    38,    59,    96,    60,    89,    -1,    97,    58,   119,
      58,   119,    -1,    58,   119,    58,   119,    -1,    97,    58,
      58,   119,    -1,    97,    58,   119,    58,    -1,    58,    58,
     119,    -1,    97,    58,    58,    -1,    58,    58,    -1,   108,
     102,    -1,   102,    -1,    42,   134,    64,    89,    -1,    43,
      64,    89,    -1,    53,    64,    89,    -1,    33,    58,    -1,
      32,    58,    -1,    31,   119,    58,    -1,    31,    58,    -1,
      30,    58,    -1,   101,    -1,   106,   108,    53,    58,    -1,
     106,   109,   108,    53,    58,    -1,   106,   110,    53,    58,
      -1,   106,   115,    53,    58,    -1,   109,   107,    58,    -1,
     107,    58,    -1,   103,    -1,   102,   103,    -1,    -1,    53,
      61,   104,   103,    -1,    -1,    53,    65,   119,    61,   105,
     103,    -1,    53,    65,   119,    -1,    53,    -1,    22,    -1,
      23,    -1,    21,    -1,    24,    -1,    25,    -1,   108,   102,
      -1,    51,   108,   102,    -1,    51,   102,    -1,    52,   108,
     102,    -1,    52,   102,    -1,   110,    -1,   115,    -1,    45,
      -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,
      -1,    35,    -1,    34,    -1,    29,    53,    62,   111,    63,
      -1,    29,    62,   111,    63,    -1,    28,    53,    62,   111,
      63,    -1,    28,    62,   111,    63,    -1,   108,   112,    58,
      -1,   108,   112,    58,   111,    -1,   113,    -1,   112,   113,
      -1,    -1,    53,    61,   114,   113,    -1,    53,    -1,    -1,
      26,    53,   116,    62,   117,    63,    -1,    -1,    53,    61,
     118,   117,    -1,    53,    -1,   120,    -1,   122,    -1,   129,
     121,   120,    -1,    65,    -1,    14,    -1,    15,    -1,    16,
      -1,    17,    -1,   123,    -1,   123,    66,   119,    64,   122,
      -1,   124,    -1,   124,     8,   123,    -1,   125,    -1,   125,
       9,   124,    -1,   126,    -1,   126,    10,   125,    -1,   126,
      11,   125,    -1,   127,    -1,   127,    67,   126,    -1,   127,
      68,   126,    -1,   127,    12,   126,    -1,   127,    13,   126,
      -1,   128,    -1,   128,    69,   127,    -1,   128,    70,   127,
      -1,   129,    -1,   129,    71,   129,    -1,   129,    72,   129,
      -1,   129,    73,   129,    -1,   131,    -1,    18,   129,    -1,
      19,   129,    -1,   130,   129,    -1,    27,   129,    -1,    74,
      -1,    71,    -1,    69,    -1,    70,    -1,    75,    -1,   133,
      -1,   131,    76,   119,    77,    -1,   131,    59,   132,    60,
      -1,   131,    59,    60,    -1,   131,    78,    53,    -1,   131,
      20,    53,    -1,   131,    18,    -1,   131,    19,    -1,   120,
      -1,   120,    61,   132,    -1,    53,    -1,   134,    -1,    54,
      -1,    59,   119,    60,    -1,   135,    -1,     7,    -1,     6,
      -1,     3,    -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    63,    66,    67,    68,    69,    70,    71,
      72,    75,    78,    79,    84,    85,    86,    87,    90,    91,
      94,    95,    96,    97,   100,   101,   101,   108,   109,   110,
     111,   112,   113,   116,   119,   120,   123,   124,   127,   128,
     131,   132,   135,   136,   137,   140,   141,   142,   143,   144,
     145,   146,   149,   150,   153,   154,   155,   158,   159,   160,
     161,   162,   168,   171,   172,   173,   174,   175,   176,   179,
     180,   183,   183,   184,   184,   185,   186,   189,   190,   191,
     192,   193,   196,   197,   198,   199,   200,   201,   202,   205,
     206,   207,   208,   209,   210,   213,   214,   217,   218,   219,
     220,   223,   224,   227,   228,   231,   231,   232,   235,   235,
     238,   238,   239,   245,   248,   249,   252,   253,   254,   255,
     256,   259,   260,   263,   264,   267,   268,   271,   272,   273,
     276,   277,   278,   279,   280,   283,   284,   285,   288,   289,
     290,   291,   294,   295,   296,   297,   298,   301,   302,   303,
     304,   305,   308,   309,   310,   311,   312,   313,   314,   315,
     318,   319,   322,   323,   324,   325,   328,   329,   330,   333,
     334,   335
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANTE_OCTAL", "CONSTANTE_DECIMAL",
  "CONSTANTE_HEXADECIMAL", "CONSTANTE_REAL", "CONSTANTE_CARACTER", "OR",
  "AND", "IGUALIGUAL", "DIFERENTE", "MAYORIGUAL", "MENORIGUAL", "MASIGUAL",
  "MENOSIGUAL", "PORIGUAL", "DIVISIONGUAL", "MASMAS", "MENOSMENOS",
  "FLECHA", "AUTO", "TYPEDEF", "STATIC", "REGISTER", "EXTERN", "ENUM",
  "SIZEOF", "UNION", "STRUCT", "GOTO", "RETURN", "CONTINUE", "BREAK",
  "VOLATILE", "CONST", "WHILE", "DO", "FOR", "IF", "ELSE", "SWITCH",
  "CASE", "DEFAULT", "VOID", "CHAR", "DOUBLE", "FLOAT", "INT", "LONG",
  "SHORT", "SIGNED", "UNSIGNED", "IDENTIFICADOR", "LITERAL_CADENA",
  "COMENTARIO_UNA_LINEA", "COMENTARIO_VARIAS_LINEAS", "NRO_LINEA", "';'",
  "'('", "')'", "','", "'{'", "'}'", "':'", "'='", "'?'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'!'", "'['", "']'", "'.'",
  "$accept", "input", "line", "nroLinea", "noC", "prototipo",
  "parametrosPrototipo", "funciones", "parametrosFuncion", "$@1",
  "sentencia", "sentExpresion", "sentCompuesta", "listaSentencias",
  "sentSeleccion", "sentElse", "sentIteracion", "cuerpoFor",
  "declaracionFor", "sentEtiquetado", "sentSalto", "declaracion",
  "espDeclaracion", "variasVariables", "inicializacion", "$@2", "$@3",
  "espAlmacenamiento", "declaraciones", "tipoDeDato", "calificadorTipo",
  "espStructUnion", "declaracionesStruct", "variasVariablesStruct",
  "inicializacionStruct", "$@4", "espEnum", "$@5", "listaIdentificadores",
  "$@6", "expresion", "expAsignacion", "operAsig", "expCondicional",
  "expOr", "expAnd", "expIgualdad", "expRelacional", "expAditiva",
  "expMultiplicativa", "expUnaria", "operUnario", "expSufijo",
  "listaArgumentos", "expPrimaria", "constante", "constanteEntera", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,    59,    40,
      41,    44,   123,   125,    58,    61,    63,    60,    62,    43,
      45,    42,    47,    37,    38,    33,    91,    93,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    82,    83,    83,    84,    84,    84,    84,    85,    85,
      86,    86,    86,    86,    87,    88,    87,    89,    89,    89,
      89,    89,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    97,    97,    98,    98,    98,    99,    99,    99,
      99,    99,   100,   101,   101,   101,   101,   101,   101,   102,
     102,   104,   103,   105,   103,   103,   103,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   108,
     108,   108,   108,   108,   108,   109,   109,   110,   110,   110,
     110,   111,   111,   112,   112,   114,   113,   113,   116,   115,
     118,   117,   117,   119,   120,   120,   121,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     126,   126,   126,   126,   126,   127,   127,   127,   128,   128,
     128,   128,   129,   129,   129,   129,   129,   130,   130,   130,
     130,   130,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   133,   133,   133,   133,   134,   134,   134,   135,
     135,   135
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     5,     4,     5,     4,     1,     3,
       5,     6,     5,     6,     2,     0,     5,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     1,     2,     6,     5,
       0,     2,     5,     7,     5,     5,     4,     4,     4,     3,
       3,     2,     2,     1,     4,     3,     3,     2,     2,     3,
       2,     2,     1,     4,     5,     4,     4,     3,     2,     1,
       2,     0,     4,     0,     6,     3,     1,     1,     1,     1,
       1,     1,     2,     3,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     5,
       4,     3,     4,     1,     2,     0,     4,     1,     0,     6,
       0,     4,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     3,     3,     2,     2,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   169,   170,   171,   168,   167,     0,
       0,    79,    77,    78,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,    96,    95,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
       0,     0,   162,   164,    12,    13,    11,     0,     0,   149,
     150,   148,   147,   151,     3,     9,     8,     0,     7,     4,
      27,    28,    29,    30,    31,    32,     5,    62,     0,     0,
       0,     0,    87,    88,     0,   113,   114,   121,   123,   125,
     127,   130,   135,   138,     0,   142,   152,   163,   166,    10,
     162,   143,   144,   108,   146,     0,     0,     0,     0,    61,
      60,     0,    58,    57,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    84,    69,     0,    86,     0,     0,     0,
      35,    36,     0,     6,     0,     0,     0,     0,    68,    76,
      82,     0,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   118,   119,   120,   116,
       0,     0,     0,     0,   145,   158,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,    55,     0,
      71,     0,    70,    83,    85,    56,   165,    34,    37,     0,
       0,     0,     0,     0,    67,     0,   124,   138,   126,   128,
     129,   133,   134,   131,   132,   136,   137,   139,   140,   141,
     115,   157,   155,   160,     0,     0,   156,     0,     0,   107,
       0,   103,   100,     0,    98,     0,     0,    51,     0,     0,
       0,    52,     0,     0,    54,    15,     0,     0,    18,     0,
      75,    63,     0,    65,    66,    17,     0,     0,     0,     0,
     154,   153,   112,     0,    99,   105,   101,   104,    97,    42,
       0,    49,     0,    44,    50,     0,    40,    39,    20,    14,
       0,    24,     0,    72,    73,    64,    22,    16,     0,   122,
     161,   110,   109,     0,   102,     0,    46,    47,    48,     0,
      38,    21,    25,    19,    18,     0,    23,     0,   106,    43,
      45,    41,     0,    74,   111,    26,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    54,    55,    56,    57,   236,    58,   237,   302,
      59,    60,    61,   122,    62,   290,    63,   171,   172,    64,
      65,    66,    67,   130,   114,   239,   295,    68,    69,   163,
      71,    72,   164,   220,   221,   283,    73,   161,   253,   297,
      74,    75,   153,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   214,    86,    87,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -209
static const yytype_int16 yypact[] =
{
    -209,   281,  -209,   -24,  -209,  -209,  -209,  -209,  -209,   666,
     666,  -209,  -209,  -209,  -209,  -209,   -17,   666,   -48,   -38,
     -16,   551,    41,    44,  -209,  -209,    -8,   491,    10,    23,
      56,    53,    52,    65,  -209,  -209,  -209,  -209,  -209,  -209,
      48,    48,    55,  -209,  -209,  -209,  -209,   666,   341,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,    62,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,   169,    64,
      70,   125,  -209,  -209,    67,  -209,  -209,    60,   119,   132,
      11,     6,     9,    38,   666,    30,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,    80,   140,    85,   140,  -209,
    -209,    91,  -209,  -209,   666,   121,   185,   666,   666,    95,
     221,   101,   -33,   114,  -209,   114,   114,   114,   221,   109,
    -209,  -209,   416,  -209,   138,   140,   143,   146,  -209,   -30,
     114,   142,   114,  -209,   666,   666,   666,   666,   666,   666,
     666,   666,   666,   666,   666,  -209,  -209,  -209,  -209,  -209,
     666,   666,   666,   666,  -209,  -209,  -209,   152,   570,   666,
     155,   147,   140,   158,   150,   140,   157,  -209,   161,   163,
     589,   176,   165,   114,   114,   177,   186,   221,  -209,    16,
    -209,   666,  -209,   114,   114,  -209,  -209,  -209,  -209,   171,
     192,   189,   191,   134,  -209,   197,  -209,   -27,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,   194,   190,   179,  -209,   212,   203,   206,
     -15,  -209,  -209,   207,  -209,   221,   666,   666,   211,   221,
     647,   114,   221,   221,  -209,   221,   213,   216,   -36,   114,
     217,  -209,   214,  -209,  -209,   221,   219,   229,   666,   666,
    -209,  -209,   232,   231,  -209,  -209,   140,  -209,  -209,  -209,
     237,  -209,   666,  -209,   666,   240,   299,  -209,  -209,  -209,
     221,   260,   140,  -209,  -209,  -209,  -209,  -209,   221,  -209,
    -209,  -209,  -209,   158,  -209,   283,  -209,  -209,   666,   221,
    -209,  -209,  -209,  -209,   288,   114,  -209,   212,  -209,  -209,
    -209,  -209,   140,  -209,  -209,  -209,   224
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,   -18,  -209,  -209,  -209,  -180,  -209,  -185,  -209,
     -77,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,   -34,   -93,  -209,  -209,  -209,   282,    -1,
     286,   289,   -94,  -209,  -208,  -209,   290,  -209,    84,  -209,
     -20,  -142,  -209,   113,   264,   265,   -52,    24,   -31,  -209,
      -7,  -209,  -209,   153,  -209,   374,  -209
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      70,   101,    91,    92,   166,    95,   113,   116,   247,   105,
      94,   210,   257,   246,    96,    97,   213,   271,   139,   140,
     182,   137,   138,   182,    98,   272,    70,   119,   180,   193,
     121,   180,   181,   178,    89,   181,    93,   182,   219,   115,
     117,   185,    99,   256,   150,   151,   152,    70,   155,   156,
     157,   104,   145,   146,   147,   148,     4,     5,     6,     7,
       8,    34,    35,    36,    37,    38,    39,   124,   218,   106,
     132,   223,   173,   141,   142,   298,   235,   154,   143,   144,
     182,   183,   107,   184,   168,   199,   200,   175,   176,   158,
     182,   182,   293,    34,    35,    36,    37,    38,    39,   102,
     234,   112,   103,   149,   188,   174,   159,   213,   160,   150,
     151,   152,   205,   206,   195,   108,   110,   305,   111,   118,
     123,    70,   128,   129,   190,   133,   134,   135,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   182,   215,
     231,   136,   162,   207,   208,   209,   273,   165,   259,   167,
     228,    16,   263,    18,    19,   266,   267,   169,   268,   177,
     179,   240,   284,   201,   202,   203,   204,   112,   276,   186,
      34,    35,    36,    37,    38,    39,    40,    41,   238,    34,
      35,    36,    37,    38,    39,    34,    35,    36,    37,    38,
      39,   189,   238,   291,   245,    16,   191,    18,    19,   192,
     194,   296,   303,    24,    25,   211,   260,   261,   216,   217,
     265,   219,   301,   222,    34,    35,    36,    37,    38,    39,
     224,   225,   226,   230,     4,     5,     6,     7,     8,   241,
      34,    35,    36,    37,    38,    39,   229,   232,   112,     9,
      10,   197,   286,   170,   287,   242,   233,   243,    17,   244,
     250,    20,    21,    22,    23,   249,   251,    26,    27,    28,
      29,   248,    30,    31,    32,   252,   254,   255,   300,   262,
     258,   294,   275,   269,    42,    43,   270,   271,   274,   277,
      47,     2,     3,    48,     4,     5,     6,     7,     8,   278,
      49,    50,    51,   281,   282,    52,    53,   285,   288,     9,
      10,   306,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   292,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   289,
      47,   299,     3,    48,     4,     5,     6,     7,     8,   272,
      49,    50,    51,   131,   125,    52,    53,   126,   127,     9,
      10,   279,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   304,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   196,
      47,   198,   280,    48,   120,   109,     0,     0,     0,     0,
      49,    50,    51,     0,     0,    52,    53,     3,     0,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     0,    47,     0,     0,    48,   187,
       0,     0,     0,     0,     0,    49,    50,    51,     0,     0,
      52,    53,     3,     0,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,     0,
      47,     0,     0,    48,     4,     5,     6,     7,     8,     0,
      49,    50,    51,     0,     0,    52,    53,     0,     0,     9,
      10,     0,     0,     4,     5,     6,     7,     8,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
       0,     0,     4,     5,     6,     7,     8,    17,     0,     0,
       0,     0,     0,     0,    90,    43,     0,     9,    10,   100,
      47,     0,     0,     0,     0,     0,    17,     0,     0,     0,
      49,    50,    51,    90,    43,    52,    53,     0,     0,    47,
     212,     0,     0,     0,     0,     0,     0,     0,     0,    49,
      50,    51,    90,    43,    52,    53,     0,   227,    47,     0,
       4,     5,     6,     7,     8,     0,     0,     0,    49,    50,
      51,     0,     0,    52,    53,     9,    10,     0,     0,     4,
       5,     6,     7,     8,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
      90,    43,     0,     0,     0,   264,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    51,    90,
      43,    52,    53,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    50,    51,     0,     0,
      52,    53
};

static const yytype_int16 yycheck[] =
{
       1,    21,     9,    10,    98,    53,    40,    41,   193,    27,
      17,   153,   220,   193,    62,    53,   158,    53,    12,    13,
     113,    10,    11,   116,    62,    61,    27,    47,    61,    59,
      48,    61,    65,   110,    58,    65,    53,   130,    53,    40,
      41,   118,    58,    58,    71,    72,    73,    48,    18,    19,
      20,    59,    14,    15,    16,    17,     3,     4,     5,     6,
       7,    45,    46,    47,    48,    49,    50,    68,   162,    59,
      71,   165,   106,    67,    68,   283,    60,    84,    69,    70,
     173,   115,    59,   117,   104,   137,   138,   107,   108,    59,
     183,   184,   272,    45,    46,    47,    48,    49,    50,    58,
     177,    53,    58,    65,   122,   106,    76,   249,    78,    71,
      72,    73,   143,   144,   134,    59,    64,   302,    53,    64,
      58,   122,    58,    53,   125,    58,    66,     8,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   231,   159,
     174,     9,    62,   150,   151,   152,   239,    62,   225,    58,
     170,    26,   229,    28,    29,   232,   233,    36,   235,    64,
      59,   181,   256,   139,   140,   141,   142,    53,   245,    60,
      45,    46,    47,    48,    49,    50,    51,    52,   179,    45,
      46,    47,    48,    49,    50,    45,    46,    47,    48,    49,
      50,    53,   193,   270,    60,    26,    53,    28,    29,    53,
      58,   278,   295,    34,    35,    53,   226,   227,    53,    62,
     230,    53,   289,    63,    45,    46,    47,    48,    49,    50,
      63,    60,    59,    58,     3,     4,     5,     6,     7,    58,
      45,    46,    47,    48,    49,    50,    60,    60,    53,    18,
      19,   248,   262,    58,   264,    53,    60,    58,    27,    58,
      60,    30,    31,    32,    33,    61,    77,    36,    37,    38,
      39,    64,    41,    42,    43,    53,    63,    61,   288,    58,
      63,   272,    58,    60,    53,    54,    60,    53,    61,    60,
      59,     0,     1,    62,     3,     4,     5,     6,     7,    60,
      69,    70,    71,    61,    63,    74,    75,    60,    58,    18,
      19,   302,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    61,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    40,
      59,    58,     1,    62,     3,     4,     5,     6,     7,    61,
      69,    70,    71,    71,    68,    74,    75,    68,    68,    18,
      19,   248,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,   297,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,   135,
      59,   136,   249,    62,    63,    31,    -1,    -1,    -1,    -1,
      69,    70,    71,    -1,    -1,    74,    75,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    75,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    -1,    -1,    62,     3,     4,     5,     6,     7,    -1,
      69,    70,    71,    -1,    -1,    74,    75,    -1,    -1,    18,
      19,    -1,    -1,     3,     4,     5,     6,     7,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,     3,     4,     5,     6,     7,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    18,    19,    58,
      59,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      69,    70,    71,    53,    54,    74,    75,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    53,    54,    74,    75,    -1,    58,    59,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    69,    70,
      71,    -1,    -1,    74,    75,    18,    19,    -1,    -1,     3,
       4,     5,     6,     7,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    53,
      54,    74,    75,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    80,     0,     1,     3,     4,     5,     6,     7,    18,
      19,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    59,    62,    69,
      70,    71,    74,    75,    81,    82,    83,    84,    86,    89,
      90,    91,    93,    95,    98,    99,   100,   101,   106,   107,
     108,   109,   110,   115,   119,   120,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   133,   134,   135,    58,
      53,   129,   129,    53,   129,    53,    62,    53,    62,    58,
      58,   119,    58,    58,    59,    81,    59,    59,    59,   134,
      64,    53,    53,   102,   103,   108,   102,   108,    64,   119,
      63,    81,    92,    58,   108,   109,   110,   115,    58,    53,
     102,   107,   108,    58,    66,     8,     9,    10,    11,    12,
      13,    67,    68,    69,    70,    14,    15,    16,    17,    65,
      71,    72,    73,   121,   129,    18,    19,    20,    59,    76,
      78,   116,    62,   108,   111,    62,   111,    58,   119,    36,
      58,    96,    97,   102,   108,   119,   119,    64,    89,    59,
      61,    65,   103,   102,   102,    89,    60,    63,    81,    53,
     108,    53,    53,    59,    58,   119,   123,   129,   124,   125,
     125,   126,   126,   126,   126,   127,   127,   129,   129,   129,
     120,    53,    60,   120,   132,   119,    53,    62,   111,    53,
     112,   113,    63,   111,    63,    60,    59,    58,   119,    60,
      58,   102,    60,    60,    89,    60,    85,    87,   108,   104,
     119,    58,    53,    58,    58,    60,    85,    87,    64,    61,
      60,    77,    53,   117,    63,    61,    58,   113,    63,    89,
     119,   119,    58,    89,    58,   119,    89,    89,    89,    60,
      60,    53,    61,   103,    61,    58,    89,    60,    60,   122,
     132,    61,    63,   114,   111,    60,   119,   119,    58,    40,
      94,    89,    61,    85,   108,   105,    89,   118,   113,    58,
     119,    89,    88,   103,   117,    87,   108
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
        case 3:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    {printf("====================\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    {printf("[PROTOTIPO]\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 69 "parser.y"
    {printf("[FUNCION]\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    {yyerrok;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {nroLineaAnterior=(yyvsp[(1) - (1)].entero);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    {printf("[COMENTARIO]\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    {printf("[COMENTARIO]\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (2)].cadena), tipo);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (3)].cadena), tipo);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia de Expresion",nroLineaAnterior);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Compuesta",nroLineaAnterior);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Seleccion",nroLineaAnterior);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Iteracion",nroLineaAnterior);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Etiquetado",nroLineaAnterior);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Salto",nroLineaAnterior);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    {printf("If sin Else ");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(3) - (4)].cadena), tipo);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {strcat((yyvsp[(2) - (5)].cadena), " "); strcat((yyvsp[(2) - (5)].cadena), tipo); strcpy(tipo, (yyvsp[(2) - (5)].cadena)); ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(4) - (5)].cadena), tipo);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {strcat((yyvsp[(1) - (3)].cadena), " "); strcat((yyvsp[(1) - (3)].cadena), tipo); strcpy(tipo, (yyvsp[(1) - (3)].cadena));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (2)].cadena), tipo);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (4)].cadena), tipo);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (3)].cadena), tipo);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (1)].cadena), tipo);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {strcat((yyvsp[(1) - (3)].cadena), " "); strcat((yyvsp[(1) - (3)].cadena), tipo); strcpy(tipo, (yyvsp[(1) - (3)].cadena));;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (2)].cadena));;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {strcat((yyvsp[(1) - (3)].cadena), " "); strcat((yyvsp[(1) - (3)].cadena), tipo); strcpy(tipo, (yyvsp[(1) - (3)].cadena));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (2)].cadena));;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].cadena));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (5)].cadena), (yyvsp[(1) - (5)].cadena));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (5)].cadena), (yyvsp[(1) - (5)].cadena));;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (2)].cadena), tipo);;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (1)].cadena), tipo);;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (2)].cadena), (yyvsp[(1) - (2)].cadena));;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (2)].cadena), "int");;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (1)].cadena), "int");;}
    break;



/* Line 1455 of yacc.c  */
#line 2097 "parser.tab.c"
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
#line 338 "parser.y"


/* Llamada por yyparse ante un error */
int yyerror (char *s) {
  printf ("%s\n", s);
}


/* Main */
int main (){

  #ifdef BISON_DEBUG
    yydebug = 1;
  #endif

  yyin = fopen("entrada.c","r");
  yyparse();

  fclose(yyin);

  recorrerListaSentencias(ListaSentencias);
  recorrerListaDeclaracionesVariables(ListaDeclaraciones);

  getch();

return 0;
}
