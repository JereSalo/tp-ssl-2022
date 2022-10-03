
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
#define YYDEBUG 1

FILE* yyin;

int yylex();
int yyerror (char *s);

int yywrap(){
  return(1);
}



/* Line 189 of yacc.c  */
#line 92 "parser.tab.c"

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
     COMENTARIO_VARIAS_LINEAS = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 44 "parser.y"

    char* cadena;
    int entero;
    float real;



/* Line 214 of yacc.c  */
#line 192 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 204 "parser.tab.c"

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
#define YYLAST   709

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNRULES -- Number of states.  */
#define YYNSTATES  299

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    72,    73,     2,
      58,    59,    70,    68,    60,    69,    77,    71,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,    57,
      66,    64,    67,    65,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,    62,     2,     2,     2,     2,
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
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    14,    16,    18,
      20,    22,    28,    33,    39,    44,    46,    50,    56,    63,
      69,    76,    79,    84,    86,    88,    90,    92,    94,    96,
      99,   103,   106,   108,   111,   118,   124,   125,   128,   134,
     142,   148,   154,   159,   164,   169,   173,   177,   180,   183,
     185,   190,   194,   198,   201,   204,   208,   211,   214,   217,
     219,   224,   230,   235,   240,   244,   247,   250,   252,   255,
     259,   265,   269,   271,   273,   275,   277,   279,   281,   284,
     288,   291,   295,   298,   300,   302,   304,   306,   308,   310,
     312,   314,   316,   318,   324,   329,   335,   340,   344,   349,
     351,   354,   358,   360,   366,   370,   372,   374,   376,   380,
     382,   384,   386,   388,   390,   392,   398,   400,   404,   406,
     410,   412,   416,   420,   422,   426,   430,   434,   438,   440,
     444,   448,   450,   454,   458,   462,   464,   467,   470,   473,
     476,   478,   480,   482,   484,   486,   488,   493,   498,   502,
     506,   510,   513,   516,   518,   522,   524,   526,   528,   532,
     534,   536,   538,   540,   542
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      79,     0,    -1,    -1,    79,    80,    -1,    86,    -1,    97,
      -1,    82,    57,    -1,    84,    -1,    81,    -1,    55,    -1,
      56,    -1,    44,    53,    58,    83,    59,    -1,    44,    53,
      58,    59,    -1,   103,    53,    58,    83,    59,    -1,   103,
      53,    58,    59,    -1,   103,    -1,   103,    60,    83,    -1,
      44,    53,    58,    59,    86,    -1,    44,    53,    58,    85,
      59,    86,    -1,   103,    53,    58,    59,    86,    -1,   103,
      53,    58,    85,    59,    86,    -1,   103,    53,    -1,   103,
      53,    60,    85,    -1,    87,    -1,    88,    -1,    90,    -1,
      92,    -1,    95,    -1,    96,    -1,   111,    57,    -1,    61,
      89,    62,    -1,    61,    62,    -1,    80,    -1,    89,    80,
      -1,    39,    58,   111,    59,    86,    91,    -1,    41,    58,
     111,    59,    86,    -1,    -1,    40,    86,    -1,    36,    58,
     111,    59,    86,    -1,    37,    80,    36,    58,   111,    59,
      57,    -1,    38,    58,    93,    59,    86,    -1,    94,    57,
     111,    57,   111,    -1,    57,   111,    57,   111,    -1,    94,
      57,    57,   111,    -1,    94,    57,   111,    57,    -1,    57,
      57,   111,    -1,    94,    57,    57,    -1,    57,    57,    -1,
     103,    99,    -1,    99,    -1,    42,   126,    63,    86,    -1,
      43,    63,    86,    -1,    53,    63,    86,    -1,    33,    57,
      -1,    32,    57,    -1,    31,   111,    57,    -1,    31,    57,
      -1,    30,    57,    -1,    98,    99,    -1,    98,    -1,   101,
     103,    53,    57,    -1,   101,   104,   103,    53,    57,    -1,
     101,   105,    53,    57,    -1,   101,   109,    53,    57,    -1,
     104,   102,    57,    -1,   104,    57,    -1,   102,    57,    -1,
     100,    -1,    99,   100,    -1,    53,    60,   100,    -1,    53,
      64,   111,    60,   100,    -1,    53,    64,   111,    -1,    53,
      -1,    22,    -1,    23,    -1,    21,    -1,    24,    -1,    25,
      -1,   103,    99,    -1,    51,   103,    99,    -1,    51,    99,
      -1,    52,   103,    99,    -1,    52,    99,    -1,   105,    -1,
     109,    -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    50,    -1,    35,    -1,    34,    -1,    29,    53,
      61,   106,    62,    -1,    29,    61,   106,    62,    -1,    28,
      53,    61,   106,    62,    -1,    28,    61,   106,    62,    -1,
     103,   107,    57,    -1,   103,   107,    57,   106,    -1,   108,
      -1,   107,   108,    -1,    53,    60,   108,    -1,    53,    -1,
      26,    53,    61,   110,    62,    -1,    53,    60,   110,    -1,
      53,    -1,   112,    -1,   114,    -1,   121,   113,   112,    -1,
      64,    -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,
     115,    -1,   115,    65,   111,    63,   114,    -1,   116,    -1,
     116,     8,   115,    -1,   117,    -1,   117,     9,   116,    -1,
     118,    -1,   118,    10,   117,    -1,   118,    11,   117,    -1,
     119,    -1,   119,    66,   118,    -1,   119,    67,   118,    -1,
     119,    12,   118,    -1,   119,    13,   118,    -1,   120,    -1,
     120,    68,   119,    -1,   120,    69,   119,    -1,   121,    -1,
     121,    70,   121,    -1,   121,    71,   121,    -1,   121,    72,
     121,    -1,   123,    -1,    18,   121,    -1,    19,   121,    -1,
     122,   121,    -1,    27,   121,    -1,    73,    -1,    70,    -1,
      68,    -1,    69,    -1,    74,    -1,   125,    -1,   123,    75,
     111,    76,    -1,   123,    58,   124,    59,    -1,   123,    58,
      59,    -1,   123,    77,    53,    -1,   123,    20,    53,    -1,
     123,    18,    -1,   123,    19,    -1,   112,    -1,   112,    60,
     124,    -1,    53,    -1,   126,    -1,    54,    -1,    58,   111,
      59,    -1,   127,    -1,     7,    -1,     6,    -1,     3,    -1,
       4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    54,    57,    58,    59,    60,    61,    64,
      65,    70,    71,    72,    73,    76,    77,    80,    81,    82,
      83,    86,    87,    94,    95,    96,    97,    98,    99,   102,
     105,   106,   109,   110,   113,   114,   117,   118,   121,   122,
     123,   126,   127,   128,   129,   130,   131,   132,   135,   136,
     139,   140,   141,   144,   145,   146,   147,   148,   154,   155,
     158,   159,   160,   161,   162,   163,   164,   167,   168,   171,
     172,   173,   174,   177,   178,   179,   180,   181,   184,   185,
     186,   187,   188,   189,   190,   193,   194,   195,   196,   197,
     198,   201,   202,   205,   206,   207,   208,   211,   212,   215,
     216,   219,   220,   223,   226,   227,   233,   236,   237,   240,
     241,   242,   243,   244,   247,   248,   251,   252,   255,   256,
     259,   260,   261,   264,   265,   266,   267,   268,   271,   272,
     273,   276,   277,   278,   279,   282,   283,   284,   285,   286,
     289,   290,   291,   292,   293,   296,   297,   298,   299,   300,
     301,   302,   303,   306,   307,   310,   311,   312,   313,   316,
     317,   318,   321,   322,   323
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
  "COMENTARIO_UNA_LINEA", "COMENTARIO_VARIAS_LINEAS", "';'", "'('", "')'",
  "','", "'{'", "'}'", "':'", "'='", "'?'", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'&'", "'!'", "'['", "']'", "'.'", "$accept",
  "input", "line", "noC", "prototipo", "parametrosPrototipo", "funciones",
  "parametrosFuncion", "sentencia", "sentExpresion", "sentCompuesta",
  "listaSentencias", "sentSeleccion", "sentElse", "sentIteracion",
  "cuerpoFor", "declaracionFor", "sentEtiquetado", "sentSalto",
  "declaracion", "espDeclaracion", "variasVariables", "inicializacion",
  "espAlmacenamiento", "declaraciones", "tipoDeDato", "calificadorTipo",
  "espStructUnion", "declaracionesStruct", "variasVariablesStruct",
  "inicializacionStruct", "espEnum", "listaIdentificadores", "expresion",
  "expAsignacion", "operAsig", "expCondicional", "expOr", "expAnd",
  "expIgualdad", "expRelacional", "expAditiva", "expMultiplicativa",
  "expUnaria", "operUnario", "expSufijo", "listaArgumentos", "expPrimaria",
  "constante", "constanteEntera", 0
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
     305,   306,   307,   308,   309,   310,   311,    59,    40,    41,
      44,   123,   125,    58,    61,    63,    60,    62,    43,    45,
      42,    47,    37,    38,    33,    91,    93,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    79,    80,    80,    80,    80,    80,    81,
      81,    82,    82,    82,    82,    83,    83,    84,    84,    84,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   100,   100,   101,   101,   101,   101,   101,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   105,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   110,   110,   111,   112,   112,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   118,   118,   118,   118,   118,   119,   119,
     119,   120,   120,   120,   120,   121,   121,   121,   121,   121,
     122,   122,   122,   122,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   125,   125,   125,   125,   126,
     126,   126,   127,   127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     1,     1,     1,
       1,     5,     4,     5,     4,     1,     3,     5,     6,     5,
       6,     2,     4,     1,     1,     1,     1,     1,     1,     2,
       3,     2,     1,     2,     6,     5,     0,     2,     5,     7,
       5,     5,     4,     4,     4,     3,     3,     2,     2,     1,
       4,     3,     3,     2,     2,     3,     2,     2,     2,     1,
       4,     5,     4,     4,     3,     2,     2,     1,     2,     3,
       5,     3,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     5,     4,     3,     4,     1,
       2,     3,     1,     5,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     5,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     4,     4,     3,     3,
       3,     2,     2,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   162,   163,   164,   161,   160,     0,     0,
      75,    73,    74,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    91,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,    87,    88,    89,    90,     0,
       0,   155,   157,     9,    10,     0,     0,   142,   143,   141,
     140,   144,     3,     8,     0,     7,     4,    23,    24,    25,
      26,    27,    28,     5,    59,     0,     0,     0,     0,    83,
      84,     0,   106,   107,   114,   116,   118,   120,   123,   128,
     131,     0,   135,   145,   156,   159,   155,   136,   137,     0,
     139,     0,     0,     0,     0,    57,    56,     0,    54,    53,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    80,
      67,     0,    82,     0,     0,     0,    31,    32,     0,     6,
      58,     0,     0,     0,     0,    66,    72,    78,    65,     0,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   112,   113,   109,     0,     0,
       0,     0,   138,   151,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,    49,     0,     0,     0,     0,    51,     0,     0,     0,
      68,    79,    81,    52,   158,    30,    33,     0,     0,     0,
       0,     0,    64,     0,   117,   131,   119,   121,   122,   126,
     127,   124,   125,   129,   130,   132,   133,   134,   108,   150,
     148,   153,     0,     0,   149,   105,     0,     0,   102,     0,
      99,    96,     0,    94,     0,     0,    47,     0,     0,     0,
      48,     0,     0,    50,    12,     0,     0,    15,    69,    71,
      60,     0,    62,    63,    14,     0,     0,     0,     0,   147,
     146,     0,   103,    95,     0,    97,   100,    93,    38,     0,
      45,     0,    40,    46,     0,    36,    35,    17,    11,     0,
      21,     0,     0,    61,    19,    13,     0,   115,   154,   104,
     101,    98,     0,    42,    43,    44,     0,    34,    18,     0,
      16,    15,    70,    20,    39,    41,    37,    22,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    52,    53,    54,   235,    55,   236,    56,    57,
      58,   118,    59,   287,    60,   169,   170,    61,    62,    63,
      64,   127,   110,    65,    66,   161,    68,    69,   162,   219,
     220,    70,   216,    71,    72,   151,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,   212,    83,    84,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -209
static const yytype_int16 yypact[] =
{
    -209,   268,  -209,  -209,  -209,  -209,  -209,  -209,   610,   610,
    -209,  -209,  -209,  -209,  -209,   -45,   610,   -41,   -34,   -39,
     506,   -36,   -33,  -209,  -209,   -29,   447,    -5,     1,     7,
     165,    11,    25,  -209,  -209,  -209,  -209,  -209,  -209,   231,
     231,    17,  -209,  -209,  -209,   610,   327,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,    26,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,    37,   659,    35,    45,   597,  -209,
    -209,    42,  -209,  -209,    49,    92,    96,    47,     4,     0,
     167,   610,    14,  -209,  -209,  -209,  -209,  -209,  -209,    55,
    -209,    57,    62,    58,    62,  -209,  -209,    63,  -209,  -209,
     610,    86,   212,   610,   610,    60,   182,    66,   -23,    37,
    -209,    37,    37,    37,   182,    67,  -209,  -209,   387,  -209,
      37,    84,    62,    87,    88,  -209,    -4,    37,  -209,    82,
      37,  -209,   610,   610,   610,   610,   610,   610,   610,   610,
     610,   610,   610,  -209,  -209,  -209,  -209,  -209,   610,   610,
     610,   610,  -209,  -209,  -209,    94,   524,   610,    95,    98,
      62,    99,    83,    62,    93,  -209,   100,   103,   531,   105,
     101,    37,    37,   106,   114,   182,  -209,     2,    37,   610,
    -209,    37,    37,  -209,  -209,  -209,  -209,   118,   104,   135,
     136,   507,  -209,   131,  -209,    24,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,   102,   137,   119,  -209,   139,   140,   141,   144,   -13,
    -209,  -209,   143,  -209,   182,   610,   610,   154,   182,   603,
      37,   182,   182,  -209,   182,   138,   157,   -18,  -209,   162,
    -209,   160,  -209,  -209,   182,   168,   169,   610,   610,  -209,
    -209,    98,  -209,  -209,    99,    62,  -209,  -209,  -209,   170,
    -209,   610,  -209,   610,   173,   186,  -209,  -209,  -209,   182,
     172,    62,    37,  -209,  -209,  -209,   182,  -209,  -209,  -209,
    -209,  -209,   176,  -209,  -209,   610,   182,  -209,  -209,    62,
    -209,   174,  -209,  -209,  -209,  -209,  -209,  -209,   192
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,    -3,  -209,  -209,  -185,  -209,  -186,   -78,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,    -9,  -105,  -209,   178,    -1,   183,   184,   -81,  -209,
    -208,   188,     3,   -19,  -142,  -209,    16,   134,   113,   -73,
      40,   -54,  -209,    -6,  -209,  -209,    34,  -209,   234,  -209
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      67,    97,    87,    88,   180,   246,   245,   180,    89,   208,
      90,   256,    91,   164,   211,   180,   137,   138,    95,    93,
      92,    98,   180,   101,    99,    67,   115,    94,   176,   100,
     109,   112,   153,   154,   155,   270,   183,   178,   111,   113,
     218,   179,   271,   117,   255,    67,   280,    33,    34,    35,
      36,    37,    38,   102,   191,   120,   178,   135,   136,   103,
     179,   234,   197,   198,   121,   104,   180,   130,   141,   142,
     139,   140,   156,   238,   106,   152,   180,   180,   107,   217,
     114,   166,   222,   119,   173,   174,   290,   203,   204,   157,
     108,   158,   125,   171,   148,   149,   150,   233,   126,   131,
     133,   172,   181,   297,   182,   134,   211,    33,    34,    35,
      36,    37,    38,   193,   132,   186,   159,    67,   160,   163,
     165,   188,   167,   175,   177,   180,   184,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   187,   213,   192,
     189,   190,   205,   206,   207,   221,   258,   209,   214,   227,
     262,   215,   218,   265,   266,   223,   267,   241,   229,   224,
     239,   225,   248,   230,   228,   231,   274,   292,     3,     4,
       5,     6,     7,   232,   281,   240,   237,   199,   200,   201,
     202,   143,   144,   145,   146,     3,     4,     5,     6,     7,
     237,   288,   242,   243,   247,   250,   249,   268,   293,   251,
       8,     9,   252,   253,   254,   257,   259,   260,   296,    16,
     264,   261,    19,    20,    21,    22,   269,   273,    25,    26,
      27,    28,   272,    29,    30,    31,   286,   275,   276,   282,
     285,   147,   289,   294,   271,    41,    42,   148,   149,   150,
      45,   195,   283,    46,   284,   270,   129,   196,   122,   123,
      47,    48,    49,   124,   279,    50,    51,    33,    34,    35,
      36,    37,    38,   277,   105,   108,   295,   194,     2,   168,
     291,     3,     4,     5,     6,     7,    33,    34,    35,    36,
      37,    38,   278,     0,   108,     0,     8,     9,   298,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,    45,     0,     0,    46,
       3,     4,     5,     6,     7,     0,    47,    48,    49,     0,
       0,    50,    51,     0,     0,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,    45,     0,     0,    46,   116,
       3,     4,     5,     6,     7,    47,    48,    49,     0,     0,
      50,    51,     0,     0,     0,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,    45,     0,     0,    46,   185,
       3,     4,     5,     6,     7,    47,    48,    49,     0,     0,
      50,    51,     0,     0,     0,     8,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,    45,     0,     0,    46,     3,
       4,     5,     6,     7,     0,    47,    48,    49,     0,     0,
      50,    51,     0,     0,     8,     9,     0,     3,     4,     5,
       6,     7,     0,    16,     3,     4,     5,     6,     7,     0,
       0,     0,     8,     9,     0,     0,     0,     0,     0,     8,
       9,    16,    33,    34,    35,    36,    37,    38,    16,    86,
      42,     0,     0,    96,    45,     0,   244,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    86,    42,    50,
      51,     0,    45,   210,    86,    42,     0,     0,   226,    45,
       0,     0,    47,    48,    49,     0,     0,    50,    51,    47,
      48,    49,     0,     0,    50,    51,     3,     4,     5,     6,
       7,     0,     0,     3,     4,     5,     6,     7,     0,     0,
       0,     8,     9,    15,     0,    17,    18,     0,     8,     9,
      16,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,   128,     0,    86,    42,     0,     0,
     263,    45,     0,    86,    42,     0,     0,     0,    45,     0,
       0,    47,    48,    49,     0,     0,    50,    51,    47,    48,
      49,     0,     0,    50,    51,    15,     0,    17,    18,     0,
       0,     0,     0,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38
};

static const yytype_int16 yycheck[] =
{
       1,    20,     8,     9,   109,   191,   191,   112,    53,   151,
      16,   219,    53,    94,   156,   120,    12,    13,    57,    53,
      61,    57,   127,    26,    57,    26,    45,    61,   106,    58,
      39,    40,    18,    19,    20,    53,   114,    60,    39,    40,
      53,    64,    60,    46,    57,    46,   254,    45,    46,    47,
      48,    49,    50,    58,    58,    64,    60,    10,    11,    58,
      64,    59,   135,   136,    65,    58,   171,    68,    68,    69,
      66,    67,    58,   178,    63,    81,   181,   182,    53,   160,
      63,   100,   163,    57,   103,   104,   271,   141,   142,    75,
      53,    77,    57,   102,    70,    71,    72,   175,    53,    57,
       8,   102,   111,   289,   113,     9,   248,    45,    46,    47,
      48,    49,    50,   132,    65,   118,    61,   118,    61,    61,
      57,   122,    36,    63,    58,   230,    59,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,    53,   157,    57,
      53,    53,   148,   149,   150,    62,   224,    53,    53,   168,
     228,    53,    53,   231,   232,    62,   234,    53,    57,    59,
     179,    58,    60,   172,    59,    59,   244,   272,     3,     4,
       5,     6,     7,    59,   255,    57,   177,   137,   138,   139,
     140,    14,    15,    16,    17,     3,     4,     5,     6,     7,
     191,   269,    57,    57,    63,    76,    59,    59,   276,    60,
      18,    19,    62,    62,    60,    62,   225,   226,   286,    27,
     229,    57,    30,    31,    32,    33,    59,    57,    36,    37,
      38,    39,    60,    41,    42,    43,    40,    59,    59,    59,
      57,    64,    60,    57,    60,    53,    54,    70,    71,    72,
      58,   247,   261,    61,   263,    53,    68,   134,    65,    65,
      68,    69,    70,    65,   251,    73,    74,    45,    46,    47,
      48,    49,    50,   247,    30,    53,   285,   133,     0,    57,
     271,     3,     4,     5,     6,     7,    45,    46,    47,    48,
      49,    50,   248,    -1,    53,    -1,    18,    19,   289,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    -1,    -1,    61,
       3,     4,     5,     6,     7,    -1,    68,    69,    70,    -1,
      -1,    73,    74,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    -1,    -1,    61,    62,
       3,     4,     5,     6,     7,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    -1,    -1,    61,    62,
       3,     4,     5,     6,     7,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    -1,    -1,    61,     3,
       4,     5,     6,     7,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    -1,    -1,    18,    19,    -1,     3,     4,     5,
       6,     7,    -1,    27,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    18,
      19,    27,    45,    46,    47,    48,    49,    50,    27,    53,
      54,    -1,    -1,    57,    58,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    53,    54,    73,
      74,    -1,    58,    59,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    68,    69,    70,    -1,    -1,    73,    74,    68,
      69,    70,    -1,    -1,    73,    74,     3,     4,     5,     6,
       7,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    18,    19,    26,    -1,    28,    29,    -1,    18,    19,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    -1,    53,    54,    -1,    -1,
      57,    58,    -1,    53,    54,    -1,    -1,    -1,    58,    -1,
      -1,    68,    69,    70,    -1,    -1,    73,    74,    68,    69,
      70,    -1,    -1,    73,    74,    26,    -1,    28,    29,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    79,     0,     3,     4,     5,     6,     7,    18,    19,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    58,    61,    68,    69,    70,
      73,    74,    80,    81,    82,    84,    86,    87,    88,    90,
      92,    95,    96,    97,    98,   101,   102,   103,   104,   105,
     109,   111,   112,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   125,   126,   127,    53,   121,   121,    53,
     121,    53,    61,    53,    61,    57,    57,   111,    57,    57,
      58,    80,    58,    58,    58,   126,    63,    53,    53,    99,
     100,   103,    99,   103,    63,   111,    62,    80,    89,    57,
      99,   103,   104,   105,   109,    57,    53,    99,    57,   102,
     103,    57,    65,     8,     9,    10,    11,    12,    13,    66,
      67,    68,    69,    14,    15,    16,    17,    64,    70,    71,
      72,   113,   121,    18,    19,    20,    58,    75,    77,    61,
      61,   103,   106,    61,   106,    57,   111,    36,    57,    93,
      94,    99,   103,   111,   111,    63,    86,    58,    60,    64,
     100,    99,    99,    86,    59,    62,    80,    53,   103,    53,
      53,    58,    57,   111,   115,   121,   116,   117,   117,   118,
     118,   118,   118,   119,   119,   121,   121,   121,   112,    53,
      59,   112,   124,   111,    53,    53,   110,   106,    53,   107,
     108,    62,   106,    62,    59,    58,    57,   111,    59,    57,
      99,    59,    59,    86,    59,    83,    85,   103,   100,   111,
      57,    53,    57,    57,    59,    83,    85,    63,    60,    59,
      76,    60,    62,    62,    60,    57,   108,    62,    86,   111,
     111,    57,    86,    57,   111,    86,    86,    86,    59,    59,
      53,    60,    60,    57,    86,    59,    59,   114,   124,   110,
     108,   106,    59,   111,   111,    57,    40,    91,    86,    60,
      83,   103,   100,    86,    57,   111,    86,    85,   103
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
#line 54 "parser.y"
    {printf("====================\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 58 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    {printf("[PROTOTIPO]\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    {printf("[FUNCION]\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    {printf("[COMENTARIO]\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {printf("[COMENTARIO]\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {printf("[SENT. COMPUESTA]\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {printf("[SENT. SELECCION]\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {printf("[SENT. ITERACION]\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {printf("[SENT. ETIQUETADO]\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {printf("[SENT. SALTO]\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {printf("Switch ");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {printf("If sin Else ");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {printf("If con Else ");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {printf("While ");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {printf("DoWhile ");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {printf("For ");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {printf("[DECLARACION]\n");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {printf("Signed ");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {printf("Signed ");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {printf("Unsigned ");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {printf("Unsigned ");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {printf("Char ");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {printf("Double ");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {printf("Float ");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {printf("Int ");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {printf("Long ");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    {printf("Short ");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 201 "parser.y"
    {printf("Const ");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {printf("Volatile ");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {printf("Struct ");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {printf("Struct ");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {printf("Union ");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {printf("Union ");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {printf("Enum ");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {printf("[SENT. EXPRESION]");;}
    break;



/* Line 1455 of yacc.c  */
#line 2049 "parser.tab.c"
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
#line 326 "parser.y"


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

  getch();
  fclose(yyin);

return 0;
}


/* Notas: Terminar declaraciones y ver conflicto en sentElse */
