
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
int nroLineaAnterior=1;

int yylex();
int yyerror (char *s);

int yywrap(){
  return(1);
}

char tipo [20];



/* Line 189 of yacc.c  */
#line 98 "parser.tab.c"

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
#line 52 "parser.y"

    char* cadena;
    int entero;



/* Line 214 of yacc.c  */
#line 198 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 210 "parser.tab.c"

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
#define YYLAST   774

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  169
/* YYNRULES -- Number of states.  */
#define YYNSTATES  305

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,     2,     2,    74,    75,     2,
      60,    61,    72,    70,    62,    71,    79,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    58,
      68,    66,    69,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,     2,     2,     2,     2,
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
      57,    63,    70,    76,    83,    86,    91,    93,    95,    97,
      99,   101,   103,   106,   110,   113,   115,   118,   125,   131,
     132,   135,   141,   149,   155,   161,   166,   171,   176,   180,
     184,   187,   190,   192,   197,   201,   205,   208,   211,   215,
     218,   221,   224,   226,   231,   237,   242,   247,   251,   254,
     257,   259,   262,   263,   268,   269,   276,   280,   282,   284,
     286,   288,   290,   292,   295,   299,   302,   306,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   335,
     340,   346,   351,   355,   360,   362,   365,   369,   371,   377,
     381,   383,   385,   387,   391,   393,   395,   397,   399,   401,
     403,   409,   411,   415,   417,   421,   423,   427,   431,   433,
     437,   441,   445,   449,   451,   455,   459,   461,   465,   469,
     473,   475,   478,   481,   484,   487,   489,   491,   493,   495,
     497,   499,   504,   509,   513,   517,   521,   524,   527,   529,
     533,   535,   537,   539,   543,   545,   547,   549,   551,   553
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    -1,    81,    82,    -1,    89,    -1,   100,
      -1,    85,    58,    -1,    87,    -1,    84,    -1,    83,    -1,
       1,    59,    -1,    57,    -1,    55,    -1,    56,    -1,    44,
      53,    60,    86,    61,    -1,    44,    53,    60,    61,    -1,
     108,    53,    60,    86,    61,    -1,   108,    53,    60,    61,
      -1,   108,    -1,   108,    62,    86,    -1,    44,    53,    60,
      61,    89,    -1,    44,    53,    60,    88,    61,    89,    -1,
     108,    53,    60,    61,    89,    -1,   108,    53,    60,    88,
      61,    89,    -1,   108,    53,    -1,   108,    53,    62,    88,
      -1,    90,    -1,    91,    -1,    93,    -1,    95,    -1,    98,
      -1,    99,    -1,   116,    58,    -1,    63,    92,    64,    -1,
      63,    64,    -1,    82,    -1,    92,    82,    -1,    39,    60,
     116,    61,    89,    94,    -1,    41,    60,   116,    61,    89,
      -1,    -1,    40,    89,    -1,    36,    60,   116,    61,    89,
      -1,    37,    82,    36,    60,   116,    61,    58,    -1,    38,
      60,    96,    61,    89,    -1,    97,    58,   116,    58,   116,
      -1,    58,   116,    58,   116,    -1,    97,    58,    58,   116,
      -1,    97,    58,   116,    58,    -1,    58,    58,   116,    -1,
      97,    58,    58,    -1,    58,    58,    -1,   108,   102,    -1,
     102,    -1,    42,   131,    65,    89,    -1,    43,    65,    89,
      -1,    53,    65,    89,    -1,    33,    58,    -1,    32,    58,
      -1,    31,   116,    58,    -1,    31,    58,    -1,    30,    58,
      -1,   101,   102,    -1,   101,    -1,   106,   108,    53,    58,
      -1,   106,   109,   108,    53,    58,    -1,   106,   110,    53,
      58,    -1,   106,   114,    53,    58,    -1,   109,   107,    58,
      -1,   109,    58,    -1,   107,    58,    -1,   103,    -1,   102,
     103,    -1,    -1,    53,    62,   104,   103,    -1,    -1,    53,
      66,   116,    62,   105,   103,    -1,    53,    66,   116,    -1,
      53,    -1,    22,    -1,    23,    -1,    21,    -1,    24,    -1,
      25,    -1,   108,   102,    -1,    51,   108,   102,    -1,    51,
     102,    -1,    52,   108,   102,    -1,    52,   102,    -1,   110,
      -1,   114,    -1,    45,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    35,    -1,    34,    -1,    29,
      53,    63,   111,    64,    -1,    29,    63,   111,    64,    -1,
      28,    53,    63,   111,    64,    -1,    28,    63,   111,    64,
      -1,   108,   112,    58,    -1,   108,   112,    58,   111,    -1,
     113,    -1,   112,   113,    -1,    53,    62,   113,    -1,    53,
      -1,    26,    53,    63,   115,    64,    -1,    53,    62,   115,
      -1,    53,    -1,   117,    -1,   119,    -1,   126,   118,   117,
      -1,    66,    -1,    14,    -1,    15,    -1,    16,    -1,    17,
      -1,   120,    -1,   120,    67,   116,    65,   119,    -1,   121,
      -1,   121,     8,   120,    -1,   122,    -1,   122,     9,   121,
      -1,   123,    -1,   123,    10,   122,    -1,   123,    11,   122,
      -1,   124,    -1,   124,    68,   123,    -1,   124,    69,   123,
      -1,   124,    12,   123,    -1,   124,    13,   123,    -1,   125,
      -1,   125,    70,   124,    -1,   125,    71,   124,    -1,   126,
      -1,   126,    72,   126,    -1,   126,    73,   126,    -1,   126,
      74,   126,    -1,   128,    -1,    18,   126,    -1,    19,   126,
      -1,   127,   126,    -1,    27,   126,    -1,    75,    -1,    72,
      -1,    70,    -1,    71,    -1,    76,    -1,   130,    -1,   128,
      77,   116,    78,    -1,   128,    60,   129,    61,    -1,   128,
      60,    61,    -1,   128,    79,    53,    -1,   128,    20,    53,
      -1,   128,    18,    -1,   128,    19,    -1,   117,    -1,   117,
      62,   129,    -1,    53,    -1,   131,    -1,    54,    -1,    60,
     116,    61,    -1,   132,    -1,     7,    -1,     6,    -1,     3,
      -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    61,    64,    65,    66,    67,    68,    69,
      70,    73,    76,    77,    82,    83,    84,    85,    88,    89,
      92,    93,    94,    95,    98,    99,   106,   107,   108,   109,
     110,   111,   114,   117,   118,   121,   122,   125,   126,   129,
     130,   133,   134,   135,   138,   139,   140,   141,   142,   143,
     144,   147,   148,   151,   152,   153,   156,   157,   158,   159,
     160,   166,   167,   170,   171,   172,   173,   174,   175,   176,
     179,   180,   183,   183,   184,   184,   185,   186,   189,   190,
     191,   192,   193,   196,   197,   198,   199,   200,   201,   202,
     205,   206,   207,   208,   209,   210,   213,   214,   217,   218,
     219,   220,   223,   224,   227,   228,   231,   232,   235,   238,
     239,   245,   248,   249,   252,   253,   254,   255,   256,   259,
     260,   263,   264,   267,   268,   271,   272,   273,   276,   277,
     278,   279,   280,   283,   284,   285,   288,   289,   290,   291,
     294,   295,   296,   297,   298,   301,   302,   303,   304,   305,
     308,   309,   310,   311,   312,   313,   314,   315,   318,   319,
     322,   323,   324,   325,   328,   329,   330,   333,   334,   335
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
  "'\\n'", "'('", "')'", "','", "'{'", "'}'", "':'", "'='", "'?'", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'!'", "'['", "']'",
  "'.'", "$accept", "input", "line", "nroLinea", "noC", "prototipo",
  "parametrosPrototipo", "funciones", "parametrosFuncion", "sentencia",
  "sentExpresion", "sentCompuesta", "listaSentencias", "sentSeleccion",
  "sentElse", "sentIteracion", "cuerpoFor", "declaracionFor",
  "sentEtiquetado", "sentSalto", "declaracion", "espDeclaracion",
  "variasVariables", "inicializacion", "$@1", "$@2", "espAlmacenamiento",
  "declaraciones", "tipoDeDato", "calificadorTipo", "espStructUnion",
  "declaracionesStruct", "variasVariablesStruct", "inicializacionStruct",
  "espEnum", "listaIdentificadores", "expresion", "expAsignacion",
  "operAsig", "expCondicional", "expOr", "expAnd", "expIgualdad",
  "expRelacional", "expAditiva", "expMultiplicativa", "expUnaria",
  "operUnario", "expSufijo", "listaArgumentos", "expPrimaria", "constante",
  "constanteEntera", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,    59,    10,
      40,    41,    44,   123,   125,    58,    61,    63,    60,    62,
      43,    45,    42,    47,    37,    38,    33,    91,    93,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    83,    84,    84,    85,    85,    85,    85,    86,    86,
      87,    87,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    89,    90,    91,    91,    92,    92,    93,    93,    94,
      94,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    98,    98,    98,    99,    99,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   104,   103,   105,   103,   103,   103,   106,   106,
     106,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   109,   109,   110,   110,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   115,
     115,   116,   117,   117,   118,   118,   118,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   123,   123,
     123,   123,   123,   124,   124,   124,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   127,   127,   127,   127,   127,
     128,   128,   128,   128,   128,   128,   128,   128,   129,   129,
     130,   130,   130,   130,   131,   131,   131,   132,   132,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     5,     4,     5,     4,     1,     3,
       5,     6,     5,     6,     2,     4,     1,     1,     1,     1,
       1,     1,     2,     3,     2,     1,     2,     6,     5,     0,
       2,     5,     7,     5,     5,     4,     4,     4,     3,     3,
       2,     2,     1,     4,     3,     3,     2,     2,     3,     2,
       2,     2,     1,     4,     5,     4,     4,     3,     2,     2,
       1,     2,     0,     4,     0,     6,     3,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       5,     4,     3,     4,     1,     2,     3,     1,     5,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     3,     3,     2,     2,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   167,   168,   169,   166,   165,     0,
       0,    80,    78,    79,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    96,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,     0,   160,   162,    12,    13,    11,     0,     0,   147,
     148,   146,   145,   149,     3,     9,     8,     0,     7,     4,
      26,    27,    28,    29,    30,    31,     5,    62,     0,     0,
       0,     0,    88,    89,     0,   111,   112,   119,   121,   123,
     125,   128,   133,   136,     0,   140,   150,   161,   164,    10,
     160,   141,   142,     0,   144,     0,     0,     0,     0,    60,
      59,     0,    57,    56,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    85,    70,     0,    87,     0,     0,     0,
      34,    35,     0,     6,    61,     0,     0,     0,     0,    69,
      77,    83,    68,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   116,   117,
     118,   114,     0,     0,     0,     0,   143,   156,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
      54,     0,    72,     0,    71,    84,    86,    55,   163,    33,
      36,     0,     0,     0,     0,     0,    67,     0,   122,   136,
     124,   126,   127,   131,   132,   129,   130,   134,   135,   137,
     138,   139,   113,   155,   153,   158,     0,     0,   154,   110,
       0,     0,   107,     0,   104,   101,     0,    99,     0,     0,
      50,     0,     0,     0,    51,     0,     0,    53,    15,     0,
       0,    18,     0,    76,    63,     0,    65,    66,    17,     0,
       0,     0,     0,   152,   151,     0,   108,   100,     0,   102,
     105,    98,    41,     0,    48,     0,    43,    49,     0,    39,
      38,    20,    14,     0,    24,     0,    73,    74,    64,    22,
      16,     0,   120,   159,   109,   106,   103,     0,    45,    46,
      47,     0,    37,    21,     0,    19,    18,     0,    23,    42,
      44,    40,    25,     0,    75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    54,    55,    56,    57,   239,    58,   240,    59,
      60,    61,   122,    62,   292,    63,   173,   174,    64,    65,
      66,    67,   131,   114,   242,   297,    68,    69,   165,    71,
      72,   166,   223,   224,    73,   220,    74,    75,   155,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   216,
      86,    87,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -216
static const yytype_int16 yypact[] =
{
    -216,   276,  -216,   -50,  -216,  -216,  -216,  -216,  -216,   698,
     698,  -216,  -216,  -216,  -216,  -216,   -36,   698,   -42,   -35,
     -26,   179,   -10,    -8,  -216,  -216,   -37,   489,    -5,    12,
      16,   186,    20,    36,  -216,  -216,  -216,  -216,  -216,  -216,
     218,   218,    42,  -216,  -216,  -216,  -216,   698,   337,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,    -6,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,    47,   376,    54,
      53,   173,  -216,  -216,    55,  -216,  -216,    56,   106,   111,
      35,    41,   -13,    45,   698,    -4,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,    52,  -216,    59,    48,    61,    48,  -216,
    -216,    68,  -216,  -216,   698,    91,   526,   698,   698,    63,
     550,    69,   -31,    47,  -216,    47,    47,    47,   550,    81,
    -216,  -216,   413,  -216,    47,    90,    48,    96,    97,  -216,
     -24,    47,  -216,    86,    47,  -216,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   698,   698,  -216,  -216,  -216,
    -216,  -216,   698,   698,   698,   698,  -216,  -216,  -216,   100,
     611,   698,   101,   103,    48,   104,    98,    48,   105,  -216,
     107,   110,   636,   117,   109,    47,    47,   118,   120,   550,
    -216,   127,  -216,   698,  -216,    47,    47,  -216,  -216,  -216,
    -216,   129,   112,   137,   142,   211,  -216,    99,  -216,     6,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,   143,   146,   130,  -216,   149,
     148,   151,   154,    -9,  -216,  -216,   153,  -216,   550,   698,
     698,   168,   550,   673,    47,   550,   550,  -216,   550,   166,
     167,   -33,    47,   172,  -216,   171,  -216,  -216,   550,   169,
     174,   698,   698,  -216,  -216,   103,  -216,  -216,   104,    48,
    -216,  -216,  -216,   175,  -216,   698,  -216,   698,   180,   200,
    -216,  -216,  -216,   550,   181,    48,  -216,  -216,  -216,  -216,
    -216,   550,  -216,  -216,  -216,  -216,  -216,   183,  -216,  -216,
     698,   550,  -216,  -216,    48,  -216,   184,    47,  -216,  -216,
    -216,  -216,  -216,   189,  -216
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,   -14,  -216,  -216,  -216,  -189,  -216,  -191,   -77,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,   -16,   -94,  -216,  -216,  -216,   177,    -1,   185,
     194,   -93,  -216,  -215,   201,    -3,   -20,  -148,  -216,    22,
     138,   140,   -71,   -78,   -63,  -216,    -7,  -216,  -216,    32,
    -216,   254,  -216
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      70,   101,    91,    92,   250,   168,   249,   212,   260,    89,
      94,    95,   215,   105,   157,   158,   159,    93,    97,   184,
     274,    96,   184,   104,   113,   116,    70,   119,    98,   275,
     184,   182,    99,   180,   121,   183,   195,   184,   182,   115,
     117,   187,   183,   285,   222,   139,   140,    70,   102,   259,
     103,   124,   123,   141,   142,   106,   160,   145,   146,   147,
     148,   149,   150,   203,   204,   205,   206,   125,   201,   202,
     134,   221,   107,   161,   226,   162,   108,   156,   152,   153,
     154,   184,   207,   208,   170,   110,   295,   177,   178,   111,
     175,   184,   184,    34,    35,    36,    37,    38,    39,   185,
     112,   186,   237,   302,   215,   176,   130,   118,   190,   143,
     144,   151,   129,   135,   137,   163,   197,   152,   153,   154,
     138,    70,   164,   136,   167,   192,   169,   171,   179,   181,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     184,   217,   188,   191,   196,   209,   210,   211,   276,   193,
     194,   262,   231,   213,   218,   266,   219,   222,   269,   270,
     234,   271,   225,   243,   251,   245,   286,   233,   228,   227,
     229,   279,    34,    35,    36,    37,    38,    39,   232,   235,
     241,   236,     4,     5,     6,     7,     8,   244,   238,     4,
       5,     6,     7,     8,   241,   246,   293,     9,    10,    16,
     247,    18,    19,   304,   298,   252,    17,   253,   254,   263,
     264,   255,   256,   268,   301,   257,   258,   261,    34,    35,
      36,    37,    38,    39,    40,    41,   265,   272,   273,   278,
     280,   132,    90,    43,   277,   281,   287,   100,   290,    47,
     291,   299,   274,   294,   199,   288,   275,   289,   133,    49,
      50,    51,   284,   126,    52,    53,    34,    35,    36,    37,
      38,    39,   127,    34,    35,    36,    37,    38,    39,   128,
     300,   112,   248,   282,   296,   198,     2,     3,   200,     4,
       5,     6,     7,     8,   283,   109,     0,     0,     0,     0,
       0,     0,     0,   303,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     0,     0,    47,     0,     3,    48,
       4,     5,     6,     7,     8,     0,    49,    50,    51,     0,
       0,    52,    53,     0,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     0,     0,    47,     0,     0,
      48,   120,    16,     0,    18,    19,     0,    49,    50,    51,
      24,    25,    52,    53,     3,     0,     4,     5,     6,     7,
       8,    34,    35,    36,    37,    38,    39,     0,     0,     0,
       0,     9,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     0,     0,    47,     0,     0,    48,   189,     0,     0,
       0,     0,     0,    49,    50,    51,     0,     0,    52,    53,
       3,     0,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     0,     0,    47,
       0,     0,    48,     4,     5,     6,     7,     8,     0,    49,
      50,    51,     0,     0,    52,    53,     0,     0,     9,    10,
       0,    34,    35,    36,    37,    38,    39,    17,     0,   112,
      20,    21,    22,    23,   172,     0,    26,    27,    28,    29,
       0,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
      47,     0,     0,    48,     4,     5,     6,     7,     8,     0,
      49,    50,    51,     0,     0,    52,    53,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,     0,    17,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,     0,     0,     0,
       0,     0,     0,    17,    90,    43,     0,     0,     0,     0,
       0,    47,   214,     0,     0,     0,     4,     5,     6,     7,
       8,    49,    50,    51,     0,     0,    52,    53,     0,    90,
      43,     9,    10,     0,   230,     0,    47,     0,     0,     0,
      17,     4,     5,     6,     7,     8,    49,    50,    51,     0,
       0,    52,    53,     0,     0,     0,     9,    10,     0,     0,
       0,     0,     0,     0,     0,    17,    90,    43,     0,     0,
       0,   267,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,    50,    51,     0,     0,    52,    53,
       0,    90,    43,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    50,
      51,     0,     0,    52,    53
};

static const yytype_int16 yycheck[] =
{
       1,    21,     9,    10,   195,    98,   195,   155,   223,    59,
      17,    53,   160,    27,    18,    19,    20,    53,    53,   113,
      53,    63,   116,    60,    40,    41,    27,    47,    63,    62,
     124,    62,    58,   110,    48,    66,    60,   131,    62,    40,
      41,   118,    66,   258,    53,    10,    11,    48,    58,    58,
      58,    67,    58,    12,    13,    60,    60,    70,    71,    14,
      15,    16,    17,   141,   142,   143,   144,    68,   139,   140,
      71,   164,    60,    77,   167,    79,    60,    84,    72,    73,
      74,   175,   145,   146,   104,    65,   275,   107,   108,    53,
     106,   185,   186,    45,    46,    47,    48,    49,    50,   115,
      53,   117,   179,   294,   252,   106,    53,    65,   122,    68,
      69,    66,    58,    58,     8,    63,   136,    72,    73,    74,
       9,   122,    63,    67,    63,   126,    58,    36,    65,    60,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     234,   161,    61,    53,    58,   152,   153,   154,   242,    53,
      53,   228,   172,    53,    53,   232,    53,    53,   235,   236,
     176,   238,    64,   183,    65,    53,   259,    58,    61,    64,
      60,   248,    45,    46,    47,    48,    49,    50,    61,    61,
     181,    61,     3,     4,     5,     6,     7,    58,    61,     3,
       4,     5,     6,     7,   195,    58,   273,    18,    19,    26,
      58,    28,    29,   297,   281,    62,    27,    61,    78,   229,
     230,    62,    64,   233,   291,    64,    62,    64,    45,    46,
      47,    48,    49,    50,    51,    52,    58,    61,    61,    58,
      61,    58,    53,    54,    62,    61,    61,    58,    58,    60,
      40,    58,    53,    62,   251,   265,    62,   267,    71,    70,
      71,    72,   255,    68,    75,    76,    45,    46,    47,    48,
      49,    50,    68,    45,    46,    47,    48,    49,    50,    68,
     290,    53,    61,   251,   275,   137,     0,     1,   138,     3,
       4,     5,     6,     7,   252,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    60,    -1,     1,    63,
       3,     4,     5,     6,     7,    -1,    70,    71,    72,    -1,
      -1,    75,    76,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    60,    -1,    -1,
      63,    64,    26,    -1,    28,    29,    -1,    70,    71,    72,
      34,    35,    75,    76,     1,    -1,     3,     4,     5,     6,
       7,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    75,    76,
       1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    60,
      -1,    -1,    63,     3,     4,     5,     6,     7,    -1,    70,
      71,    72,    -1,    -1,    75,    76,    -1,    -1,    18,    19,
      -1,    45,    46,    47,    48,    49,    50,    27,    -1,    53,
      30,    31,    32,    33,    58,    -1,    36,    37,    38,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,     3,     4,     5,     6,     7,    -1,
      70,    71,    72,    -1,    -1,    75,    76,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    53,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    70,    71,    72,    -1,    -1,    75,    76,    -1,    53,
      54,    18,    19,    -1,    58,    -1,    60,    -1,    -1,    -1,
      27,     3,     4,     5,     6,     7,    70,    71,    72,    -1,
      -1,    75,    76,    -1,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    53,    54,    -1,    -1,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    75,    76,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    75,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    81,     0,     1,     3,     4,     5,     6,     7,    18,
      19,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    60,    63,    70,
      71,    72,    75,    76,    82,    83,    84,    85,    87,    89,
      90,    91,    93,    95,    98,    99,   100,   101,   106,   107,
     108,   109,   110,   114,   116,   117,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   130,   131,   132,    59,
      53,   126,   126,    53,   126,    53,    63,    53,    63,    58,
      58,   116,    58,    58,    60,    82,    60,    60,    60,   131,
      65,    53,    53,   102,   103,   108,   102,   108,    65,   116,
      64,    82,    92,    58,   102,   108,   109,   110,   114,    58,
      53,   102,    58,   107,   108,    58,    67,     8,     9,    10,
      11,    12,    13,    68,    69,    70,    71,    14,    15,    16,
      17,    66,    72,    73,    74,   118,   126,    18,    19,    20,
      60,    77,    79,    63,    63,   108,   111,    63,   111,    58,
     116,    36,    58,    96,    97,   102,   108,   116,   116,    65,
      89,    60,    62,    66,   103,   102,   102,    89,    61,    64,
      82,    53,   108,    53,    53,    60,    58,   116,   120,   126,
     121,   122,   122,   123,   123,   123,   123,   124,   124,   126,
     126,   126,   117,    53,    61,   117,   129,   116,    53,    53,
     115,   111,    53,   112,   113,    64,   111,    64,    61,    60,
      58,   116,    61,    58,   102,    61,    61,    89,    61,    86,
      88,   108,   104,   116,    58,    53,    58,    58,    61,    86,
      88,    65,    62,    61,    78,    62,    64,    64,    62,    58,
     113,    64,    89,   116,   116,    58,    89,    58,   116,    89,
      89,    89,    61,    61,    53,    62,   103,    62,    58,    89,
      61,    61,   119,   129,   115,   113,   111,    61,   116,   116,
      58,    40,    94,    89,    62,    86,   108,   105,    89,    58,
     116,    89,    88,   108,   103
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
#line 61 "parser.y"
    {printf("====================\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    {printf("[PROTOTIPO]\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    {printf("[FUNCION]\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    { yyerrok;                  ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    {nroLineaAnterior=(yyvsp[(1) - (1)].entero);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {printf("[COMENTARIO]\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {printf("[COMENTARIO]\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia de Expresion",nroLineaAnterior);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Compuesta",nroLineaAnterior);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Seleccion",nroLineaAnterior);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Iteracion",nroLineaAnterior);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Etiquetado",nroLineaAnterior);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Salto",nroLineaAnterior);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {printf("Switch ");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {printf("If sin Else ");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {printf("If con Else ");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {printf("While ");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {printf("DoWhile ");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {printf("For ");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {printf("Se declara el identificador %s de tipo %s \n", (yyvsp[(1) - (2)].cadena), tipo);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {printf("Se declara el identificador %s de tipo %s \n", (yyvsp[(1) - (4)].cadena), tipo);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {printf("Se declara el identificador %s de tipo %s \n", (yyvsp[(1) - (3)].cadena), tipo);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {printf("Se declara el identificador %s de tipo %s \n", (yyvsp[(1) - (1)].cadena), tipo);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {strcpy(tipo,(yyvsp[(1) - (1)].cadena));;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {strcpy(tipo,(yyvsp[(1) - (1)].cadena));;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {strcpy(tipo,(yyvsp[(1) - (1)].cadena));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {strcpy(tipo,(yyvsp[(1) - (1)].cadena));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {strcpy(tipo,(yyvsp[(1) - (1)].cadena));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {strcpy(tipo,(yyvsp[(1) - (1)].cadena));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {printf("Const ");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {printf("Volatile ");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {printf("Struct ");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    {printf("Struct ");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    {printf("Union ");;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {printf("Union ");;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {printf("Enum ");;}
    break;



/* Line 1455 of yacc.c  */
#line 2090 "parser.tab.c"
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

  getch();
  



return 0;
}


/* Notas: Terminar declaraciones y ver conflicto en sentElse */
