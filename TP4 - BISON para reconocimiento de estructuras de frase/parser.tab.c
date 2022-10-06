
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
char tipo[20];

int yylex();
int yyerror (char *s);

int yywrap(){
  return(1);
}



/* Line 189 of yacc.c  */
#line 99 "parser.tab.c"

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
#line 52 "parser.y"

  struct {
    char* cadena;
    int entero;
  } myStruct;



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
#define YYLAST   762

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNRULES -- Number of states.  */
#define YYNSTATES  310

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
      21,    23,    25,    31,    36,    42,    47,    49,    53,    59,
      66,    72,    79,    82,    83,    89,    91,    93,    95,    97,
      99,   101,   104,   108,   111,   113,   116,   123,   129,   130,
     133,   139,   147,   153,   159,   164,   169,   174,   178,   182,
     185,   188,   190,   195,   199,   203,   206,   209,   213,   216,
     219,   224,   230,   235,   240,   242,   243,   249,   252,   254,
     257,   258,   263,   264,   271,   275,   277,   279,   281,   283,
     285,   287,   290,   291,   296,   297,   301,   302,   307,   308,
     312,   314,   316,   318,   320,   322,   324,   326,   328,   330,
     332,   338,   343,   349,   354,   358,   363,   365,   368,   369,
     374,   376,   377,   384,   385,   390,   392,   394,   396,   400,
     402,   404,   406,   408,   410,   412,   418,   420,   424,   426,
     430,   432,   436,   440,   442,   446,   450,   454,   458,   460,
     464,   468,   470,   474,   478,   482,   484,   487,   490,   493,
     496,   498,   500,   502,   504,   506,   508,   513,   518,   522,
     526,   530,   533,   536,   538,   542,   544,   546,   548,   552,
     554,   556,   558,   560,   562
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      79,     0,    -1,    -1,    79,    80,    -1,    87,    -1,    98,
      -1,    82,    57,    -1,    84,    -1,    81,    -1,     1,    57,
      -1,    55,    -1,    56,    -1,    44,    53,    58,    83,    59,
      -1,    44,    53,    58,    59,    -1,   111,    53,    58,    83,
      59,    -1,   111,    53,    58,    59,    -1,   111,    -1,   111,
      60,    83,    -1,    44,    53,    58,    59,    87,    -1,    44,
      53,    58,    85,    59,    87,    -1,   111,    53,    58,    59,
      87,    -1,   111,    53,    58,    85,    59,    87,    -1,   111,
      53,    -1,    -1,   111,    53,    60,    86,    85,    -1,    88,
      -1,    89,    -1,    91,    -1,    93,    -1,    96,    -1,    97,
      -1,   122,    57,    -1,    61,    90,    62,    -1,    61,    62,
      -1,    80,    -1,    90,    80,    -1,    39,    58,   122,    59,
      87,    92,    -1,    41,    58,   122,    59,    87,    -1,    -1,
      40,    87,    -1,    36,    58,   122,    59,    87,    -1,    37,
      80,    36,    58,   122,    59,    57,    -1,    38,    58,    94,
      59,    87,    -1,    95,    57,   122,    57,   122,    -1,    57,
     122,    57,   122,    -1,    95,    57,    57,   122,    -1,    95,
      57,   122,    57,    -1,    57,    57,   122,    -1,    95,    57,
      57,    -1,    57,    57,    -1,   111,   101,    -1,   101,    -1,
      42,   137,    63,    87,    -1,    43,    63,    87,    -1,    53,
      63,    87,    -1,    33,    57,    -1,    32,    57,    -1,    31,
     122,    57,    -1,    31,    57,    -1,    30,    57,    -1,   105,
     111,    53,    57,    -1,   105,   112,   111,    53,    57,    -1,
     105,   113,    53,    57,    -1,   105,   118,    53,    57,    -1,
      99,    -1,    -1,   112,   111,   100,   101,    57,    -1,   106,
      57,    -1,   102,    -1,   101,   102,    -1,    -1,    53,    60,
     103,   102,    -1,    -1,    53,    64,   122,    60,   104,   102,
      -1,    53,    64,   122,    -1,    53,    -1,    22,    -1,    23,
      -1,    21,    -1,    24,    -1,    25,    -1,   111,   101,    -1,
      -1,    51,   111,   107,   101,    -1,    -1,    51,   108,   101,
      -1,    -1,    52,   111,   109,   101,    -1,    -1,    52,   110,
     101,    -1,   113,    -1,   118,    -1,    45,    -1,    46,    -1,
      47,    -1,    48,    -1,    49,    -1,    50,    -1,    35,    -1,
      34,    -1,    29,    53,    61,   114,    62,    -1,    29,    61,
     114,    62,    -1,    28,    53,    61,   114,    62,    -1,    28,
      61,   114,    62,    -1,   111,   115,    57,    -1,   111,   115,
      57,   114,    -1,   116,    -1,   115,   116,    -1,    -1,    53,
      60,   117,   116,    -1,    53,    -1,    -1,    26,    53,   119,
      61,   120,    62,    -1,    -1,    53,    60,   121,   120,    -1,
      53,    -1,   123,    -1,   125,    -1,   132,   124,   123,    -1,
      64,    -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,
     126,    -1,   126,    65,   122,    63,   125,    -1,   127,    -1,
     127,     8,   126,    -1,   128,    -1,   128,     9,   127,    -1,
     129,    -1,   129,    10,   128,    -1,   129,    11,   128,    -1,
     130,    -1,   130,    66,   129,    -1,   130,    67,   129,    -1,
     130,    12,   129,    -1,   130,    13,   129,    -1,   131,    -1,
     131,    68,   130,    -1,   131,    69,   130,    -1,   132,    -1,
     132,    70,   132,    -1,   132,    71,   132,    -1,   132,    72,
     132,    -1,   134,    -1,    18,   132,    -1,    19,   132,    -1,
     133,   132,    -1,    27,   132,    -1,    73,    -1,    70,    -1,
      68,    -1,    69,    -1,    74,    -1,   136,    -1,   134,    75,
     122,    76,    -1,   134,    58,   135,    59,    -1,   134,    58,
      59,    -1,   134,    77,    53,    -1,   134,    20,    53,    -1,
     134,    18,    -1,   134,    19,    -1,   123,    -1,   123,    60,
     135,    -1,    53,    -1,   137,    -1,    54,    -1,    58,   122,
      59,    -1,   138,    -1,     7,    -1,     6,    -1,     3,    -1,
       4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    63,    66,    67,    68,    69,    70,    71,
      74,    75,    80,    81,    82,    83,    86,    87,    90,    91,
      92,    93,    96,    97,    97,   104,   105,   106,   107,   108,
     109,   112,   115,   116,   119,   120,   123,   124,   127,   128,
     131,   132,   133,   136,   137,   138,   139,   140,   141,   142,
     145,   146,   149,   150,   151,   154,   155,   156,   157,   158,
     164,   165,   166,   167,   168,   171,   171,   172,   175,   176,
     179,   179,   180,   180,   181,   182,   185,   186,   187,   188,
     189,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   198,   201,   202,   203,   204,   205,   206,   209,   210,
     213,   214,   215,   216,   219,   220,   223,   224,   227,   227,
     228,   231,   231,   234,   234,   235,   241,   244,   245,   248,
     249,   250,   251,   252,   255,   256,   259,   260,   263,   264,
     267,   268,   269,   272,   273,   274,   275,   276,   279,   280,
     281,   284,   285,   286,   287,   290,   291,   292,   293,   294,
     297,   298,   299,   300,   301,   304,   305,   306,   307,   308,
     309,   310,   311,   314,   315,   318,   319,   320,   321,   324,
     325,   326,   329,   330,   331
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
  "parametrosFuncion", "$@1", "sentencia", "sentExpresion",
  "sentCompuesta", "listaSentencias", "sentSeleccion", "sentElse",
  "sentIteracion", "cuerpoFor", "declaracionFor", "sentEtiquetado",
  "sentSalto", "declaracion", "espDeclaracion", "$@2", "variasVariables",
  "inicializacion", "$@3", "$@4", "espAlmacenamiento", "declaraciones",
  "$@5", "$@6", "$@7", "$@8", "tipoDeDato", "calificadorTipo",
  "espStructUnion", "declaracionesStruct", "variasVariablesStruct",
  "inicializacionStruct", "$@9", "espEnum", "$@10", "listaIdentificadores",
  "$@11", "expresion", "expAsignacion", "operAsig", "expCondicional",
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
     305,   306,   307,   308,   309,   310,   311,    59,    40,    41,
      44,   123,   125,    58,    61,    63,    60,    62,    43,    45,
      42,    47,    37,    38,    33,    91,    93,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    79,    80,    80,    80,    80,    80,    80,
      81,    81,    82,    82,    82,    82,    83,    83,    84,    84,
      84,    84,    85,    86,    85,    87,    87,    87,    87,    87,
      87,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      93,    93,    93,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    96,    96,    96,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,   100,    99,    99,   101,   101,
     103,   102,   104,   102,   102,   102,   105,   105,   105,   105,
     105,   106,   107,   106,   108,   106,   109,   106,   110,   106,
     106,   106,   111,   111,   111,   111,   111,   111,   112,   112,
     113,   113,   113,   113,   114,   114,   115,   115,   117,   116,
     116,   119,   118,   121,   120,   120,   122,   123,   123,   124,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   127,
     128,   128,   128,   129,   129,   129,   129,   129,   130,   130,
     130,   131,   131,   131,   131,   132,   132,   132,   132,   132,
     133,   133,   133,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   136,   136,   136,   136,   137,
     137,   137,   138,   138,   138
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     1,     1,     2,
       1,     1,     5,     4,     5,     4,     1,     3,     5,     6,
       5,     6,     2,     0,     5,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     1,     2,     6,     5,     0,     2,
       5,     7,     5,     5,     4,     4,     4,     3,     3,     2,
       2,     1,     4,     3,     3,     2,     2,     3,     2,     2,
       4,     5,     4,     4,     1,     0,     5,     2,     1,     2,
       0,     4,     0,     6,     3,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     0,     3,     0,     4,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     5,     4,     3,     4,     1,     2,     0,     4,
       1,     0,     6,     0,     4,     1,     1,     1,     3,     1,
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
       2,     0,     1,     0,   172,   173,   174,   171,   170,     0,
       0,    78,    76,    77,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,    99,    98,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,    97,
      84,    88,   165,   167,    10,    11,     0,     0,   152,   153,
     151,   150,   154,     3,     8,     0,     7,     4,    25,    26,
      27,    28,    29,    30,     5,    64,     0,     0,     0,     0,
      90,    91,     0,   116,   117,   124,   126,   128,   130,   133,
     138,   141,     0,   145,   155,   166,   169,     9,   165,   146,
     147,   111,   149,     0,     0,     0,     0,    59,    58,     0,
      56,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,    86,     0,     0,    33,    34,     0,     6,
       0,     0,     0,     0,    67,    75,    81,    68,    65,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,   121,   122,   123,   119,     0,     0,     0,     0,
     148,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,    75,     0,     0,     0,
      51,     0,     0,     0,     0,    53,     0,    85,     0,    89,
       0,    54,   168,    32,    35,     0,     0,     0,     0,     0,
      70,     0,    69,     0,     0,   127,   141,   129,   131,   132,
     136,   137,   134,   135,   139,   140,   142,   143,   144,   118,
     160,   158,   163,     0,     0,   159,     0,     0,   110,     0,
     106,   103,     0,   101,     0,     0,    49,     0,     0,     0,
      50,     0,     0,    52,    13,     0,     0,    16,    83,    87,
      60,     0,    62,    63,    15,     0,     0,     0,    74,     0,
       0,     0,   157,   156,   115,     0,   102,   108,   104,   107,
     100,    40,     0,    47,     0,    42,    48,     0,    38,    37,
      18,    12,     0,    22,     0,    61,    20,    14,     0,    71,
      72,    66,   125,   164,   113,   112,     0,   105,     0,    44,
      45,    46,     0,    36,    19,    23,    17,    16,    21,     0,
       0,   109,    41,    43,    39,     0,    73,   114,    24,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    53,    54,    55,   235,    56,   236,   305,    57,
      58,    59,   118,    60,   293,    61,   168,   169,    62,    63,
      64,    65,   193,   126,   127,   247,   299,    66,    67,   178,
     110,   180,   112,   159,    69,    70,   160,   219,   220,   286,
      71,   157,   255,   300,    72,    73,   149,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   213,    84,    85,
      86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -214
static const yytype_int16 yypact[] =
{
    -214,   264,  -214,   -40,  -214,  -214,  -214,  -214,  -214,   688,
     688,  -214,  -214,  -214,  -214,  -214,   -12,   688,   -39,   -25,
     -23,   574,    -4,     9,  -214,  -214,   -26,   471,    11,    16,
      30,    93,    27,     4,  -214,  -214,  -214,  -214,  -214,  -214,
      14,    14,    29,  -214,  -214,  -214,   688,   323,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,    36,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,   155,    55,    49,    14,
    -214,  -214,    58,  -214,  -214,    51,   110,   112,    45,    12,
       3,    92,   688,     0,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,    74,    14,    76,    14,  -214,  -214,    62,
    -214,  -214,   688,   102,   193,   688,   688,    80,   530,    81,
      91,  -214,    91,  -214,   530,    87,  -214,  -214,   397,  -214,
      94,    14,    97,    98,  -214,   -16,    91,  -214,  -214,  -214,
     688,   688,   688,   688,   688,   688,   688,   688,   688,   688,
     688,  -214,  -214,  -214,  -214,  -214,   688,   688,   688,   688,
    -214,  -214,  -214,   101,   602,   688,   108,   105,    14,   115,
     107,    14,   109,  -214,   111,   118,   -48,   631,   114,   120,
      91,    91,   119,   121,   530,  -214,   169,    91,    91,    91,
      91,  -214,  -214,  -214,  -214,   122,   129,   128,   130,   175,
    -214,   688,  -214,    91,   123,  -214,   -21,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,   131,   133,   132,  -214,   141,   134,   135,   -20,
    -214,  -214,   136,  -214,   530,   688,   688,   140,   530,   659,
      91,   530,   530,  -214,   530,   150,   152,   -22,    91,    91,
    -214,   170,  -214,  -214,   530,   153,   167,    91,   171,   -10,
     688,   688,  -214,  -214,   172,   168,  -214,  -214,    14,  -214,
    -214,  -214,   174,  -214,   688,  -214,   688,   178,   189,  -214,
    -214,  -214,   530,   176,    14,  -214,  -214,  -214,   530,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,   115,  -214,   180,  -214,
    -214,   688,   530,  -214,  -214,  -214,  -214,   188,  -214,    91,
     141,  -214,  -214,  -214,  -214,    14,  -214,  -214,  -214,   196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -214,  -214,   -17,  -214,  -214,  -180,  -214,  -182,  -214,   -79,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,   -89,  -125,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,    -1,   185,   186,   -91,  -214,  -213,  -214,
     187,  -214,   -46,  -214,   -19,  -141,  -214,     5,   125,   126,
     -53,    22,   -55,  -214,    -6,  -214,  -214,     6,  -214,   228,
    -214
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      68,   192,    99,    89,    90,   162,   259,   246,   209,   245,
     103,    92,   190,   212,    93,   170,   191,    87,   151,   152,
     153,   177,    94,   179,   135,   136,    68,   115,    95,   175,
     117,   273,   102,   218,    97,   181,    96,   258,   274,   111,
     113,    91,   189,   166,   190,   192,    68,   281,   191,   146,
     147,   148,   192,   100,   192,   133,   134,   109,   154,    34,
      35,    36,    37,    38,    39,   120,   101,   217,   128,   104,
     222,   139,   140,   301,   105,   155,   150,   156,   137,   138,
     198,   199,   230,   164,   204,   205,   172,   173,   106,   238,
     108,   239,   114,   119,   296,   233,     4,     5,     6,     7,
       8,   184,   125,   171,   249,   192,   141,   142,   143,   144,
     212,   194,   124,   192,   192,   129,   130,    68,   131,   163,
     186,   132,   279,   308,   192,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   158,   214,   161,   165,   176,
     206,   207,   208,   174,   166,   261,   182,   185,   227,   265,
     187,   188,   268,   269,   210,   270,   145,   200,   201,   202,
     203,   215,   146,   147,   148,   276,   216,   287,   218,   221,
     224,   223,   248,   228,   306,   237,   225,   229,   231,   240,
     232,    16,   241,    18,    19,   242,   250,   243,   237,    24,
      25,   251,   252,   294,   254,   257,   256,   264,   260,   298,
      34,    35,    36,    37,    38,    39,   262,   263,   253,   271,
     267,   272,   277,   304,    34,    35,    36,    37,    38,    39,
      34,    35,    36,    37,    38,    39,   278,   275,   234,   292,
     285,   280,   284,   288,   244,   291,   295,   302,    34,    35,
      36,    37,    38,    39,   196,   289,   166,   290,   274,   273,
     167,   121,   122,   123,   307,   282,   195,   283,   197,   107,
       0,     0,     0,     0,     2,     3,     0,     4,     5,     6,
       7,     8,   303,   297,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   309,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     0,    46,     0,     3,    47,     4,     5,     6,     7,
       8,     0,    48,    49,    50,     0,     0,    51,    52,     0,
       0,     9,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
       0,    46,     0,     0,    47,   116,     0,     0,     0,     0,
       0,    48,    49,    50,     0,     0,    51,    52,     3,     0,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,    46,     0,     0,    47,   183,
       0,     0,     0,     0,     0,    48,    49,    50,     0,     0,
      51,    52,     3,     0,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
       0,     0,    47,     4,     5,     6,     7,     8,     0,    48,
      49,    50,     0,     0,    51,    52,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
      20,    21,    22,    23,     0,     0,    26,    27,    28,    29,
       0,    30,    31,    32,     0,     0,     0,     4,     5,     6,
       7,     8,     0,    42,    43,     0,     0,     0,    46,     0,
       0,    47,     9,    10,     0,     0,     0,     0,    48,    49,
      50,    17,     0,    51,    52,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,     0,     0,     0,     0,     0,    88,    43,    17,
       0,    98,    46,     0,     4,     5,     6,     7,     8,     0,
       0,     0,    48,    49,    50,     0,     0,    51,    52,     9,
      10,     0,     0,     0,     0,    88,    43,     0,    17,     0,
      46,   211,     4,     5,     6,     7,     8,     0,     0,     0,
      48,    49,    50,     0,     0,    51,    52,     9,    10,     0,
       0,     0,     0,     0,    88,    43,    17,     0,   226,    46,
       0,     4,     5,     6,     7,     8,     0,     0,     0,    48,
      49,    50,     0,     0,    51,    52,     9,    10,     0,     0,
       0,     0,    88,    43,     0,    17,   266,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,    50,
       0,     0,    51,    52,     0,     0,     0,     0,     0,     0,
       0,    88,    43,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,    50,     0,
       0,    51,    52
};

static const yytype_int16 yycheck[] =
{
       1,   126,    21,     9,    10,    96,   219,   189,   149,   189,
      27,    17,    60,   154,    53,   104,    64,    57,    18,    19,
      20,   110,    61,   112,    12,    13,    27,    46,    53,   108,
      47,    53,    58,    53,    57,   114,    61,    57,    60,    40,
      41,    53,    58,    53,    60,   170,    47,    57,    64,    70,
      71,    72,   177,    57,   179,    10,    11,    53,    58,    45,
      46,    47,    48,    49,    50,    66,    57,   158,    69,    58,
     161,    68,    69,   286,    58,    75,    82,    77,    66,    67,
     133,   134,   171,   102,   139,   140,   105,   106,    58,   178,
      63,   180,    63,    57,   274,   174,     3,     4,     5,     6,
       7,   118,    53,   104,   193,   230,    14,    15,    16,    17,
     251,   130,    57,   238,   239,    57,    65,   118,     8,    57,
     121,     9,   247,   305,   249,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    61,   155,    61,    36,    58,
     146,   147,   148,    63,    53,   224,    59,    53,   167,   228,
      53,    53,   231,   232,    53,   234,    64,   135,   136,   137,
     138,    53,    70,    71,    72,   244,    61,   258,    53,    62,
      59,    62,   191,    59,   299,   176,    58,    57,    59,    57,
      59,    26,    53,    28,    29,    57,    63,    57,   189,    34,
      35,    60,    59,   272,    53,    60,    62,    57,    62,   278,
      45,    46,    47,    48,    49,    50,   225,   226,    76,    59,
     229,    59,    59,   292,    45,    46,    47,    48,    49,    50,
      45,    46,    47,    48,    49,    50,    59,    57,    59,    40,
      62,    60,    60,    59,    59,    57,    60,    57,    45,    46,
      47,    48,    49,    50,   250,   264,    53,   266,    60,    53,
      57,    66,    66,    66,   300,   250,   131,   251,   132,    31,
      -1,    -1,    -1,    -1,     0,     1,    -1,     3,     4,     5,
       6,     7,   291,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   305,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    -1,     1,    61,     3,     4,     5,     6,
       7,    -1,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      -1,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    -1,    -1,    73,    74,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,    -1,
      73,    74,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      -1,    -1,    61,     3,     4,     5,     6,     7,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    53,    54,    -1,    -1,    -1,    58,    -1,
      -1,    61,    18,    19,    -1,    -1,    -1,    -1,    68,    69,
      70,    27,    -1,    73,    74,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    53,    54,    27,
      -1,    57,    58,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    68,    69,    70,    -1,    -1,    73,    74,    18,
      19,    -1,    -1,    -1,    -1,    53,    54,    -1,    27,    -1,
      58,    59,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      68,    69,    70,    -1,    -1,    73,    74,    18,    19,    -1,
      -1,    -1,    -1,    -1,    53,    54,    27,    -1,    57,    58,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    68,
      69,    70,    -1,    -1,    73,    74,    18,    19,    -1,    -1,
      -1,    -1,    53,    54,    -1,    27,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,
      -1,    73,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    79,     0,     1,     3,     4,     5,     6,     7,    18,
      19,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    58,    61,    68,    69,
      70,    73,    74,    80,    81,    82,    84,    87,    88,    89,
      91,    93,    96,    97,    98,    99,   105,   106,   111,   112,
     113,   118,   122,   123,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   136,   137,   138,    57,    53,   132,
     132,    53,   132,    53,    61,    53,    61,    57,    57,   122,
      57,    57,    58,    80,    58,    58,    58,   137,    63,    53,
     108,   111,   110,   111,    63,   122,    62,    80,    90,    57,
     111,   112,   113,   118,    57,    53,   101,   102,   111,    57,
      65,     8,     9,    10,    11,    12,    13,    66,    67,    68,
      69,    14,    15,    16,    17,    64,    70,    71,    72,   124,
     132,    18,    19,    20,    58,    75,    77,   119,    61,   111,
     114,    61,   114,    57,   122,    36,    53,    57,    94,    95,
     101,   111,   122,   122,    63,    87,    58,   101,   107,   101,
     109,    87,    59,    62,    80,    53,   111,    53,    53,    58,
      60,    64,   102,   100,   122,   126,   132,   127,   128,   128,
     129,   129,   129,   129,   130,   130,   132,   132,   132,   123,
      53,    59,   123,   135,   122,    53,    61,   114,    53,   115,
     116,    62,   114,    62,    59,    58,    57,   122,    59,    57,
     101,    59,    59,    87,    59,    83,    85,   111,   101,   101,
      57,    53,    57,    57,    59,    83,    85,   103,   122,   101,
      63,    60,    59,    76,    53,   120,    62,    60,    57,   116,
      62,    87,   122,   122,    57,    87,    57,   122,    87,    87,
      87,    59,    59,    53,    60,    57,    87,    59,    59,   102,
      60,    57,   125,   135,    60,    62,   117,   114,    59,   122,
     122,    57,    40,    92,    87,    60,    83,   111,    87,   104,
     121,   116,    57,   122,    87,    86,   102,   120,    85,   111
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
    {nroLineaAnterior = (yyvsp[(2) - (2)].myStruct.entero);}
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

  case 9:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {printf("\tEn linea %d", (yyvsp[(1) - (2)].myStruct.entero));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {printf("[COMENTARIO]\n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {printf("[COMENTARIO]\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (2)].myStruct.cadena), tipo);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (3)].myStruct.cadena), tipo);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia de Expresion",(yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Inicio sentencia Compuesta",(yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Seleccion",(yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Iteracion",(yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Etiquetado",(yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Salto",(yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Fin sentencia Compuesta",(yyvsp[(3) - (3)].myStruct.entero));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {ListaSentencias=agregarListaSentencias(ListaSentencias,"Fin sentencia Compuesta",(yyvsp[(2) - (2)].myStruct.entero));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {strcat((yyvsp[(1) - (2)].myStruct.cadena), " "); strcat((yyvsp[(1) - (2)].myStruct.cadena), tipo); strcpy(tipo, (yyvsp[(1) - (2)].myStruct.cadena));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (2)].myStruct.cadena), tipo);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (4)].myStruct.cadena), tipo);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (3)].myStruct.cadena), tipo);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (1)].myStruct.cadena), tipo);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {strcat((yyvsp[(1) - (2)].myStruct.cadena), " "); strcat((yyvsp[(1) - (2)].myStruct.cadena), tipo); strcpy(tipo, (yyvsp[(1) - (2)].myStruct.cadena));;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {strcat((yyvsp[(1) - (2)].myStruct.cadena), " "); strcat((yyvsp[(1) - (2)].myStruct.cadena), tipo); strcpy(tipo, (yyvsp[(1) - (2)].myStruct.cadena));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 201 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (5)].myStruct.cadena), (yyvsp[(1) - (5)].myStruct.cadena));;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (5)].myStruct.cadena), (yyvsp[(1) - (5)].myStruct.cadena));;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (2)].myStruct.cadena), tipo);;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (1)].myStruct.cadena), tipo);;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(2) - (2)].myStruct.cadena), (yyvsp[(1) - (2)].myStruct.cadena));;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (2)].myStruct.cadena), "int");;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, (yyvsp[(1) - (1)].myStruct.cadena), "int");;}
    break;



/* Line 1455 of yacc.c  */
#line 2083 "parser.tab.c"
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
#line 334 "parser.y"


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
