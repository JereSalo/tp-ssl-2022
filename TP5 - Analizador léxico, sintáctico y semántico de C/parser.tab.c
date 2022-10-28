
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
detalleParametros * ListaParametros = NULL;
detalleParametros * ListaArgumentos = NULL;
detalleSentencia * ListaSentencias = NULL;
detalleTablaDeSimbolos * TablaDeSimbolos = NULL;

int contadorParametros = 0;
int contadorParametrosLlamada = 0;
int nroLineaAnterior = 1;
char tipo[20];
char tipoArgumento[20];

int yylex();
int yyerror (char * s);

int yywrap(){
  return(1);
}



/* Line 189 of yacc.c  */
#line 104 "parser.tab.c"

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
#line 57 "parser.y"

  struct {
    char * cadena;
    int entero;
    int esNumerico;
  } myStruct;



/* Line 214 of yacc.c  */
#line 206 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 218 "parser.tab.c"

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
#define YYLAST   727

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNRULES -- Number of states.  */
#define YYNSTATES  311

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
      21,    23,    25,    31,    36,    42,    47,    49,    50,    55,
      61,    68,    74,    81,    84,    85,    91,    93,    95,    97,
      99,   101,   103,   106,   108,   112,   115,   117,   120,   127,
     133,   134,   137,   143,   151,   157,   163,   168,   173,   178,
     182,   186,   189,   192,   194,   199,   203,   207,   210,   213,
     217,   220,   223,   228,   234,   239,   244,   246,   247,   253,
     254,   260,   263,   265,   268,   269,   274,   275,   282,   286,
     288,   290,   292,   294,   296,   298,   301,   304,   306,   308,
     311,   313,   316,   318,   320,   322,   324,   326,   328,   330,
     332,   334,   340,   345,   351,   356,   360,   365,   367,   370,
     371,   376,   378,   379,   386,   387,   392,   394,   396,   398,
     402,   404,   406,   408,   410,   412,   414,   420,   422,   426,
     428,   432,   434,   438,   442,   444,   448,   452,   456,   460,
     462,   466,   470,   472,   476,   480,   484,   486,   489,   492,
     495,   498,   500,   502,   504,   506,   508,   510,   515,   520,
     524,   528,   532,   535,   538,   540,   541,   546,   548,   550,
     552,   556,   558,   560,   562,   564,   566
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      79,     0,    -1,    -1,    79,    80,    -1,    88,    -1,    99,
      -1,    82,    57,    -1,    85,    -1,    81,    -1,     1,    57,
      -1,    55,    -1,    56,    -1,    44,    53,    58,    83,    59,
      -1,    44,    53,    58,    59,    -1,   110,    53,    58,    83,
      59,    -1,   110,    53,    58,    59,    -1,   110,    -1,    -1,
     110,    60,    84,    83,    -1,    44,    53,    58,    59,    90,
      -1,    44,    53,    58,    86,    59,    90,    -1,   110,    53,
      58,    59,    90,    -1,   110,    53,    58,    86,    59,    90,
      -1,   110,    53,    -1,    -1,   110,    53,    60,    87,    86,
      -1,    89,    -1,    90,    -1,    92,    -1,    94,    -1,    97,
      -1,    98,    -1,   121,    57,    -1,    57,    -1,    61,    91,
      62,    -1,    61,    62,    -1,    80,    -1,    91,    80,    -1,
      39,    58,   121,    59,    88,    93,    -1,    41,    58,   121,
      59,    88,    -1,    -1,    40,    88,    -1,    36,    58,   121,
      59,    88,    -1,    37,    80,    36,    58,   121,    59,    57,
      -1,    38,    58,    95,    59,    88,    -1,    96,    57,   121,
      57,   121,    -1,    57,   121,    57,   121,    -1,    96,    57,
      57,   121,    -1,    96,    57,   121,    57,    -1,    57,    57,
     121,    -1,    96,    57,    57,    -1,    57,    57,    -1,   110,
     103,    -1,   103,    -1,    42,   137,    63,    88,    -1,    43,
      63,    88,    -1,    53,    63,    88,    -1,    33,    57,    -1,
      32,    57,    -1,    31,   121,    57,    -1,    31,    57,    -1,
      30,    57,    -1,   107,   110,    53,    57,    -1,   107,   111,
     110,    53,    57,    -1,   107,   112,    53,    57,    -1,   107,
     117,    53,    57,    -1,   100,    -1,    -1,   111,   110,   101,
     103,    57,    -1,    -1,   111,   109,   102,   103,    57,    -1,
     108,    57,    -1,   104,    -1,   103,   104,    -1,    -1,    53,
      60,   105,   104,    -1,    -1,    53,    64,   121,    60,   106,
     104,    -1,    53,    64,   121,    -1,    53,    -1,    22,    -1,
      23,    -1,    21,    -1,    24,    -1,    25,    -1,   110,   103,
      -1,   109,   103,    -1,   112,    -1,   117,    -1,    51,   110,
      -1,    51,    -1,    52,   110,    -1,    52,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,
      35,    -1,    34,    -1,    29,    53,    61,   113,    62,    -1,
      29,    61,   113,    62,    -1,    28,    53,    61,   113,    62,
      -1,    28,    61,   113,    62,    -1,   110,   114,    57,    -1,
     110,   114,    57,   113,    -1,   115,    -1,   114,   115,    -1,
      -1,    53,    60,   116,   115,    -1,    53,    -1,    -1,    26,
      53,   118,    61,   119,    62,    -1,    -1,    53,    60,   120,
     119,    -1,    53,    -1,   122,    -1,   124,    -1,   131,   123,
     122,    -1,    64,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1,   125,    -1,   125,    65,   121,    63,   124,    -1,
     126,    -1,   126,     8,   125,    -1,   127,    -1,   127,     9,
     126,    -1,   128,    -1,   128,    10,   127,    -1,   128,    11,
     127,    -1,   129,    -1,   129,    66,   128,    -1,   129,    67,
     128,    -1,   129,    12,   128,    -1,   129,    13,   128,    -1,
     130,    -1,   130,    68,   129,    -1,   130,    69,   129,    -1,
     131,    -1,   131,    70,   130,    -1,   131,    71,   130,    -1,
     131,    72,   130,    -1,   133,    -1,    18,   131,    -1,    19,
     131,    -1,   132,   131,    -1,    27,   131,    -1,    73,    -1,
      70,    -1,    68,    -1,    69,    -1,    74,    -1,   136,    -1,
     133,    75,   121,    76,    -1,    53,    58,   134,    59,    -1,
      53,    58,    59,    -1,   133,    77,    53,    -1,   133,    20,
      53,    -1,   133,    18,    -1,   133,    19,    -1,   122,    -1,
      -1,   122,    60,   135,   134,    -1,    53,    -1,   137,    -1,
      54,    -1,    58,   121,    59,    -1,   138,    -1,     7,    -1,
       6,    -1,     3,    -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    69,    72,    73,    74,    75,    76,    77,
      80,    81,    86,    87,    88,    89,    92,    93,    93,    96,
      97,    98,    99,   102,   103,   103,   110,   111,   112,   113,
     114,   115,   118,   119,   122,   123,   126,   127,   130,   131,
     134,   135,   138,   139,   140,   143,   144,   145,   146,   147,
     148,   149,   152,   153,   156,   157,   158,   161,   162,   163,
     164,   165,   171,   172,   173,   174,   175,   178,   178,   179,
     179,   180,   183,   184,   187,   187,   188,   188,   189,   190,
     193,   194,   195,   196,   197,   200,   201,   202,   203,   206,
     207,   208,   209,   212,   213,   214,   215,   216,   217,   220,
     221,   224,   225,   226,   227,   230,   231,   234,   235,   238,
     238,   239,   242,   242,   245,   245,   246,   252,   255,   256,
     259,   260,   261,   262,   263,   266,   267,   270,   271,   274,
     275,   278,   279,   280,   283,   284,   285,   286,   287,   290,
     291,   292,   295,   296,   297,   298,   301,   302,   303,   304,
     305,   308,   309,   310,   311,   312,   315,   316,   317,   318,
     319,   320,   321,   322,   325,   326,   326,   329,   336,   337,
     338,   341,   342,   343,   346,   347,   348
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
  "input", "line", "noC", "prototipo", "parametrosPrototipo", "$@1",
  "funciones", "parametrosFuncion", "$@2", "sentencia", "sentExpresion",
  "sentCompuesta", "listaSentencias", "sentSeleccion", "sentElse",
  "sentIteracion", "cuerpoFor", "declaracionFor", "sentEtiquetado",
  "sentSalto", "declaracion", "espDeclaracion", "$@3", "$@4",
  "variasVariables", "inicializacion", "$@5", "$@6", "espAlmacenamiento",
  "declaraciones", "espSigno", "tipoDeDato", "calificadorTipo",
  "espStructUnion", "declaracionesStruct", "variasVariablesStruct",
  "inicializacionStruct", "$@7", "espEnum", "$@8", "listaIdentificadores",
  "$@9", "expresion", "expAsignacion", "operAsig", "expCondicional",
  "expOr", "expAnd", "expIgualdad", "expRelacional", "expAditiva",
  "expMultiplicativa", "expUnaria", "operUnario", "expSufijo",
  "listaArgumentos", "$@10", "expPrimaria", "constante", "constanteEntera", 0
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
      81,    81,    82,    82,    82,    82,    83,    84,    83,    85,
      85,    85,    85,    86,    87,    86,    88,    88,    88,    88,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    98,    99,    99,    99,    99,    99,   101,   100,   102,
     100,   100,   103,   103,   105,   104,   106,   104,   104,   104,
     107,   107,   107,   107,   107,   108,   108,   108,   108,   109,
     109,   109,   109,   110,   110,   110,   110,   110,   110,   111,
     111,   112,   112,   112,   112,   113,   113,   114,   114,   116,
     115,   115,   118,   117,   120,   119,   119,   121,   122,   122,
     123,   123,   123,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   127,   128,   128,   128,   128,   128,   129,
     129,   129,   130,   130,   130,   130,   131,   131,   131,   131,
     131,   132,   132,   132,   132,   132,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   135,   134,   136,   136,   136,
     136,   137,   137,   137,   138,   138,   138
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     1,     1,     2,
       1,     1,     5,     4,     5,     4,     1,     0,     4,     5,
       6,     5,     6,     2,     0,     5,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     1,     2,     6,     5,
       0,     2,     5,     7,     5,     5,     4,     4,     4,     3,
       3,     2,     2,     1,     4,     3,     3,     2,     2,     3,
       2,     2,     4,     5,     4,     4,     1,     0,     5,     0,
       5,     2,     1,     2,     0,     4,     0,     6,     3,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     5,     4,     3,     4,     1,     2,     0,
       4,     1,     0,     6,     0,     4,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     5,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       3,     3,     2,     2,     1,     0,     4,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   174,   175,   176,   173,   172,     0,
       0,    82,    80,    81,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,   100,    99,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,    95,    96,    97,    98,
      90,    92,   167,   169,    10,    11,    33,     0,     0,   153,
     154,   152,   151,   155,     3,     8,     0,     7,     4,    26,
      27,    28,    29,    30,    31,     5,    66,     0,     0,     0,
       0,     0,    87,    88,     0,   117,   118,   125,   127,   129,
     131,   134,   139,   142,     0,   146,   156,   168,   171,     9,
     167,   147,   148,   112,   150,     0,     0,     0,     0,    61,
      60,     0,    58,    57,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    91,     0,     0,     0,    35,    36,     0,
       6,     0,     0,     0,     0,    71,    79,    86,    72,    79,
      85,    69,    67,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   123,   124,   120,
       0,     0,     0,     0,   149,   162,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,    55,     0,   159,
     164,     0,    56,   170,    34,    37,     0,     0,     0,     0,
      74,     0,    73,     0,     0,     0,     0,   128,   142,   130,
     132,   133,   137,   138,   135,   136,   140,   141,   143,   144,
     145,   119,   161,     0,   160,     0,     0,   111,     0,   107,
     104,     0,   102,     0,     0,    51,     0,     0,     0,    52,
       0,     0,    54,    13,     0,     0,    16,   165,   158,    62,
       0,    64,    65,     0,    78,    15,     0,     0,     0,     0,
       0,   157,   116,     0,   103,   109,   105,   108,   101,    42,
       0,    49,     0,    44,    50,     0,    40,    39,    19,    12,
       0,    23,    17,     0,    63,    75,    76,    21,    14,     0,
      70,    68,   126,   114,   113,     0,   106,     0,    46,    47,
      48,     0,    38,    20,    24,     0,   166,     0,    22,     0,
     110,    43,    45,    41,     0,    18,    16,    77,   115,    25,
       0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    54,    55,    56,   234,   295,    57,   235,   304,
      58,    59,    60,   119,    61,   292,    62,   170,   171,    63,
      64,    65,    66,   195,   194,   127,   128,   243,   297,    67,
      68,    69,   162,    71,    72,   163,   218,   219,   285,    73,
     160,   253,   299,    74,    75,   153,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   181,   273,    86,    87,
      88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -221
static const yytype_int16 yypact[] =
{
    -221,   283,  -221,   -24,  -221,  -221,  -221,  -221,  -221,   653,
     653,  -221,  -221,  -221,  -221,  -221,    27,   653,    -9,    28,
      -8,   549,    25,    45,  -221,  -221,    57,   490,    59,    64,
      81,    51,    23,    87,  -221,  -221,  -221,  -221,  -221,  -221,
     191,   191,   -12,  -221,  -221,  -221,  -221,   653,   342,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,    47,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,   229,    89,    95,
     106,   133,  -221,  -221,   103,  -221,  -221,    99,   157,   159,
     100,    29,    56,    21,   653,    -4,  -221,  -221,  -221,  -221,
     111,  -221,  -221,  -221,  -221,   115,   191,   125,   191,  -221,
    -221,   131,  -221,  -221,   653,   153,   105,   653,   653,   127,
     192,   135,  -221,  -221,   567,   192,   132,  -221,  -221,   416,
    -221,   141,   191,   147,   148,  -221,    19,    95,  -221,   -30,
      95,  -221,  -221,  -221,   653,   653,   653,   653,   653,   653,
     653,   653,   653,   653,   653,  -221,  -221,  -221,  -221,  -221,
     653,   653,   653,   653,  -221,  -221,  -221,   149,   653,   150,
     145,   191,   154,   151,   191,   152,  -221,   158,   160,   574,
     161,   155,    95,    95,   162,   167,   192,  -221,   -27,  -221,
     156,   168,  -221,  -221,  -221,  -221,   175,   194,   195,   197,
    -221,   653,  -221,    15,    95,    95,   146,  -221,    -3,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,   172,  -221,   198,   205,   196,    41,  -221,
    -221,   206,  -221,   192,   653,   653,   202,   192,   646,    95,
     192,   192,  -221,   208,   212,   213,   -29,  -221,  -221,  -221,
     216,  -221,  -221,    95,   220,   208,   222,   223,    44,    46,
     653,  -221,   225,   230,  -221,  -221,   191,  -221,  -221,  -221,
     232,  -221,   653,  -221,   653,   236,   255,  -221,  -221,  -221,
     208,   237,  -221,   653,  -221,  -221,  -221,  -221,  -221,   208,
    -221,  -221,  -221,  -221,  -221,   154,  -221,   239,  -221,  -221,
     653,   192,  -221,  -221,  -221,   191,  -221,    95,  -221,   198,
    -221,  -221,  -221,  -221,   191,  -221,   238,  -221,  -221,  -221,
     246
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,   -19,  -221,  -221,  -186,  -221,  -221,  -188,  -221,
    -104,  -221,  -220,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,   -53,   -82,  -221,  -221,  -221,
    -221,   252,    -1,   233,   275,   -86,  -221,  -209,  -221,   287,
    -221,    60,  -221,   -20,  -110,  -221,   108,   215,   219,   -25,
      33,    13,   -44,    -7,  -221,  -221,   109,  -221,  -221,   331,
    -221
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      70,   101,    91,    92,   180,   247,   177,   246,   105,   257,
      94,   182,   165,   268,   155,   156,   157,   130,    34,    35,
      36,    37,    38,    39,   271,   277,    70,   116,   193,   118,
     190,   272,   233,    89,   191,   145,   146,   147,   148,   112,
     113,   139,   140,   211,    95,   192,   114,    70,   192,    99,
     293,   115,    96,   172,     4,     5,     6,     7,     8,   298,
      34,    35,    36,    37,    38,    39,   121,   150,   151,   152,
     132,   158,   232,   159,   245,   216,   300,   154,   221,   190,
      93,    97,   102,   191,   167,   149,   110,   174,   175,    98,
     192,   150,   151,   152,   217,   141,   142,   126,   256,   126,
     185,   280,   103,   281,   120,   173,   208,   209,   210,   305,
     137,   138,   200,   201,   196,   104,   309,   106,    70,   259,
     229,   187,   107,   263,   143,   144,   266,   267,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   213,   108,
     111,   248,   249,   198,   198,   198,   125,   192,   126,   226,
      34,    35,    36,    37,    38,    39,   206,   207,   126,   129,
     133,   275,   169,   180,   134,   135,   192,   192,   136,   114,
     286,   244,   202,   203,   204,   205,   161,   236,    34,    35,
      36,    37,    38,    39,    40,    41,   164,   303,   166,   168,
     176,   183,   236,   178,   186,     4,     5,     6,     7,     8,
     188,   189,   212,   214,   260,   261,   215,   217,   265,   250,
       9,    10,   228,   220,   222,   307,   237,   223,   224,    17,
     227,   230,    20,    21,    22,    23,   231,   238,    26,    27,
      28,    29,   239,    30,    31,    32,    34,    35,    36,    37,
      38,    39,   288,   198,   289,    42,    43,   240,   251,    46,
      47,   252,   241,    48,   242,    16,   255,    18,    19,   262,
      49,    50,    51,    24,    25,    52,    53,   254,   258,    48,
     302,   269,   270,   274,    34,    35,    36,    37,    38,    39,
     276,   278,   279,     2,     3,   283,     4,     5,     6,     7,
       8,   287,   284,   290,   306,   291,   301,   294,   272,   271,
     122,     9,    10,   310,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   131,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   123,     3,    48,     4,     5,     6,     7,     8,
     197,    49,    50,    51,   124,   199,    52,    53,   282,   308,
       9,    10,   109,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,   296,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,    48,   117,     0,     0,     0,     0,     0,
      49,    50,    51,     0,     0,    52,    53,     3,     0,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,    48,   184,     0,
       0,     0,     0,     0,    49,    50,    51,     0,     0,    52,
      53,     3,     0,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
       0,    48,     4,     5,     6,     7,     8,     0,    49,    50,
      51,     0,     0,    52,    53,     0,     0,     9,    10,     0,
       4,     5,     6,     7,     8,     0,    17,     4,     5,     6,
       7,     8,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,     9,    10,    17,     0,     0,     0,     0,     0,
       0,    17,    90,    43,     0,     0,   100,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
      90,    43,    52,    53,     0,    47,   179,    90,    43,     0,
       0,   225,    47,     0,     0,    49,    50,    51,     0,     0,
      52,    53,    49,    50,    51,     0,     0,    52,    53,     4,
       5,     6,     7,     8,     0,     0,     4,     5,     6,     7,
       8,     0,     0,     0,     9,    10,     0,     0,     0,     0,
       0,     9,    10,    17,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      43,     0,     0,   264,    47,     0,    90,    43,     0,     0,
       0,    47,     0,     0,    49,    50,    51,     0,     0,    52,
      53,    49,    50,    51,     0,     0,    52,    53
};

static const yytype_int16 yycheck[] =
{
       1,    21,     9,    10,   114,   193,   110,   193,    27,   218,
      17,   115,    98,   233,    18,    19,    20,    70,    45,    46,
      47,    48,    49,    50,    53,   245,    27,    47,    58,    48,
      60,    60,    59,    57,    64,    14,    15,    16,    17,    40,
      41,    12,    13,   153,    53,   127,    58,    48,   130,    57,
     270,    63,    61,   106,     3,     4,     5,     6,     7,   279,
      45,    46,    47,    48,    49,    50,    67,    70,    71,    72,
      71,    75,   176,    77,    59,   161,   285,    84,   164,    60,
      53,    53,    57,    64,   104,    64,    63,   107,   108,    61,
     172,    70,    71,    72,    53,    66,    67,    53,    57,    53,
     119,    57,    57,    57,    57,   106,   150,   151,   152,   295,
      10,    11,   137,   138,   134,    58,   304,    58,   119,   223,
     173,   122,    58,   227,    68,    69,   230,   231,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   158,    58,
      53,   194,   195,   150,   151,   152,    57,   229,    53,   169,
      45,    46,    47,    48,    49,    50,   143,   144,    53,    53,
      57,   243,    57,   273,    65,     8,   248,   249,     9,    58,
     256,   191,   139,   140,   141,   142,    61,   178,    45,    46,
      47,    48,    49,    50,    51,    52,    61,   291,    57,    36,
      63,    59,   193,    58,    53,     3,     4,     5,     6,     7,
      53,    53,    53,    53,   224,   225,    61,    53,   228,    63,
      18,    19,    57,    62,    62,   297,    60,    59,    58,    27,
      59,    59,    30,    31,    32,    33,    59,    59,    36,    37,
      38,    39,    57,    41,    42,    43,    45,    46,    47,    48,
      49,    50,   262,   250,   264,    53,    54,    53,    76,    57,
      58,    53,    57,    61,    57,    26,    60,    28,    29,    57,
      68,    69,    70,    34,    35,    73,    74,    62,    62,    61,
     290,    59,    59,    57,    45,    46,    47,    48,    49,    50,
      60,    59,    59,     0,     1,    60,     3,     4,     5,     6,
       7,    59,    62,    57,   295,    40,    57,    60,    60,    53,
      67,    18,    19,   304,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    71,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    67,     1,    61,     3,     4,     5,     6,     7,
     135,    68,    69,    70,    67,   136,    73,    74,   250,   299,
      18,    19,    31,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,   273,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    -1,    -1,    73,    74,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    -1,    -1,    73,
      74,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    61,     3,     4,     5,     6,     7,    -1,    68,    69,
      70,    -1,    -1,    73,    74,    -1,    -1,    18,    19,    -1,
       3,     4,     5,     6,     7,    -1,    27,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    18,    19,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      53,    54,    73,    74,    -1,    58,    59,    53,    54,    -1,
      -1,    57,    58,    -1,    -1,    68,    69,    70,    -1,    -1,
      73,    74,    68,    69,    70,    -1,    -1,    73,    74,     3,
       4,     5,     6,     7,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    18,    19,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,    58,    -1,    53,    54,    -1,    -1,
      -1,    58,    -1,    -1,    68,    69,    70,    -1,    -1,    73,
      74,    68,    69,    70,    -1,    -1,    73,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    79,     0,     1,     3,     4,     5,     6,     7,    18,
      19,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    61,    68,
      69,    70,    73,    74,    80,    81,    82,    85,    88,    89,
      90,    92,    94,    97,    98,    99,   100,   107,   108,   109,
     110,   111,   112,   117,   121,   122,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   136,   137,   138,    57,
      53,   131,   131,    53,   131,    53,    61,    53,    61,    57,
      57,   121,    57,    57,    58,    80,    58,    58,    58,   137,
      63,    53,   110,   110,    58,    63,   121,    62,    80,    91,
      57,   110,   111,   112,   117,    57,    53,   103,   104,    53,
     103,   109,   110,    57,    65,     8,     9,    10,    11,    12,
      13,    66,    67,    68,    69,    14,    15,    16,    17,    64,
      70,    71,    72,   123,   131,    18,    19,    20,    75,    77,
     118,    61,   110,   113,    61,   113,    57,   121,    36,    57,
      95,    96,   103,   110,   121,   121,    63,    88,    58,    59,
     122,   134,    88,    59,    62,    80,    53,   110,    53,    53,
      60,    64,   104,    58,   102,   101,   121,   125,   131,   126,
     127,   127,   128,   128,   128,   128,   129,   129,   130,   130,
     130,   122,    53,   121,    53,    61,   113,    53,   114,   115,
      62,   113,    62,    59,    58,    57,   121,    59,    57,   103,
      59,    59,    88,    59,    83,    86,   110,    60,    59,    57,
      53,    57,    57,   105,   121,    59,    83,    86,   103,   103,
      63,    76,    53,   119,    62,    60,    57,   115,    62,    88,
     121,   121,    57,    88,    57,   121,    88,    88,    90,    59,
      59,    53,    60,   135,    57,   104,    60,    90,    59,    59,
      57,    57,   124,    60,    62,   116,   113,    59,   121,   121,
      57,    40,    93,    90,    60,    84,   134,   106,    90,   120,
     115,    57,   121,    88,    87,    83,   110,   104,   119,    86,
     110
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
#line 69 "parser.y"
    {nroLineaAnterior = (yyvsp[(2) - (2)].myStruct.entero);}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    {ListaArgumentos = NULL; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {ListaParametros = NULL; contadorParametros=0; ListaArgumentos = NULL;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {ListaParametros = NULL; contadorParametros=0; ListaArgumentos = NULL; ListaSentencias = agregarListaSentencias(ListaSentencias, "Inicio sentencia Compuesta", (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {printf(" Error sintactico en linea %d\n", (yyvsp[(1) - (2)].myStruct.entero));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (5)].myStruct.cadena), "void", 'F', ListaParametros, contadorParametros, nroLineaAnterior);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (4)].myStruct.cadena), "void", 'F', ListaParametros, contadorParametros, nroLineaAnterior);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (5)].myStruct.cadena), (yyvsp[(1) - (5)].myStruct.cadena), 'F', ListaParametros, contadorParametros, nroLineaAnterior);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (4)].myStruct.cadena), (yyvsp[(1) - (4)].myStruct.cadena), 'F', ListaParametros, contadorParametros, nroLineaAnterior);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {ListaParametros = agregarListaParametros (ListaParametros, NULL, tipo); contadorParametros++;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {ListaParametros = agregarListaParametros (ListaParametros, NULL, tipo); contadorParametros++;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (5)].myStruct.cadena), "void", 'F', ListaParametros, contadorParametros, (yyvsp[(2) - (5)].myStruct.entero));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (6)].myStruct.cadena), "void", 'F', ListaParametros, contadorParametros, (yyvsp[(2) - (6)].myStruct.entero));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (5)].myStruct.cadena), (yyvsp[(1) - (5)].myStruct.cadena), 'F', ListaParametros, contadorParametros, (yyvsp[(2) - (5)].myStruct.entero));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (6)].myStruct.cadena), (yyvsp[(1) - (6)].myStruct.cadena), 'F', ListaParametros, contadorParametros, (yyvsp[(2) - (6)].myStruct.entero));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (2)].myStruct.cadena), tipo, 'V', ListaParametros, 0, (yyvsp[(2) - (2)].myStruct.entero)); ListaParametros=agregarListaParametros (ListaParametros, (yyvsp[(2) - (2)].myStruct.cadena), tipo);contadorParametros++;;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (3)].myStruct.cadena), tipo, 'V', ListaParametros, 0, (yyvsp[(2) - (3)].myStruct.entero)); ListaParametros=agregarListaParametros (ListaParametros, (yyvsp[(2) - (3)].myStruct.cadena), tipo);contadorParametros++;;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {ListaSentencias = agregarListaSentencias(ListaSentencias, "Sentencia de Expresion", (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {ListaSentencias = agregarListaSentencias(ListaSentencias, "Inicio sentencia Compuesta", (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {ListaSentencias = agregarListaSentencias(ListaSentencias, "Sentencia Seleccion", (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {ListaSentencias = agregarListaSentencias(ListaSentencias, "Sentencia Iteracion", (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {ListaSentencias = agregarListaSentencias(ListaSentencias, "Sentencia Etiquetado", (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {ListaSentencias = agregarListaSentencias(ListaSentencias, "Sentencia Salto", (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {ListaSentencias = agregarListaSentencias(ListaSentencias, "Sentencia Vacia", (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {ListaSentencias = agregarListaSentencias(ListaSentencias, "Fin sentencia Compuesta", (yyvsp[(3) - (3)].myStruct.entero));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {ListaSentencias = agregarListaSentencias(ListaSentencias, "Fin sentencia Compuesta", (yyvsp[(2) - (2)].myStruct.entero));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {strcat((yyvsp[(1) - (2)].myStruct.cadena), " "); strcat((yyvsp[(1) - (2)].myStruct.cadena), tipo); strcpy(tipo, (yyvsp[(1) - (2)].myStruct.cadena));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {strcat((yyvsp[(1) - (2)].myStruct.cadena), " "); strcat((yyvsp[(1) - (2)].myStruct.cadena), (yyvsp[(2) - (2)].myStruct.cadena)); strcpy(tipo, (yyvsp[(1) - (2)].myStruct.cadena));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(1) - (2)].myStruct.cadena), tipo, 'V', ListaParametros, contadorParametros, (yyvsp[(1) - (2)].myStruct.entero));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(1) - (4)].myStruct.cadena), tipo, 'V', ListaParametros, contadorParametros, (yyvsp[(1) - (4)].myStruct.entero)); if(!(yyvsp[(3) - (4)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una asignacion de variable\n", (yyvsp[(2) - (4)].myStruct.entero));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(1) - (3)].myStruct.cadena), tipo, 'V', ListaParametros, contadorParametros, (yyvsp[(1) - (3)].myStruct.entero)); if(!(yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una asignacion de variable\n", (yyvsp[(2) - (3)].myStruct.entero));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(1) - (1)].myStruct.cadena), tipo, 'V', ListaParametros, contadorParametros, (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {strcat((yyvsp[(1) - (2)].myStruct.cadena), " "); strcat((yyvsp[(1) - (2)].myStruct.cadena), tipo); strcpy(tipo, (yyvsp[(1) - (2)].myStruct.cadena));;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {strcat((yyvsp[(1) - (2)].myStruct.cadena), " "); strcat((yyvsp[(1) - (2)].myStruct.cadena), tipo); strcpy(tipo, (yyvsp[(1) - (2)].myStruct.cadena));;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    {strcpy(tipo, (yyvsp[(1) - (1)].myStruct.cadena));;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (5)].myStruct.cadena), (yyvsp[(1) - (5)].myStruct.cadena), 'V', ListaParametros, contadorParametros, (yyvsp[(2) - (5)].myStruct.entero));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (5)].myStruct.cadena), (yyvsp[(1) - (5)].myStruct.cadena), 'V', ListaParametros, contadorParametros, (yyvsp[(2) - (5)].myStruct.entero));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(1) - (2)].myStruct.cadena), tipo, 'V', ListaParametros, contadorParametros, (yyvsp[(1) - (2)].myStruct.entero));;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(1) - (1)].myStruct.cadena), tipo, 'V', ListaParametros, contadorParametros, (yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(2) - (2)].myStruct.cadena), (yyvsp[(1) - (2)].myStruct.cadena), 'V', ListaParametros, contadorParametros,(yyvsp[(2) - (2)].myStruct.entero));;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(1) - (2)].myStruct.cadena), "int", 'V', ListaParametros, contadorParametros,(yyvsp[(1) - (2)].myStruct.entero));;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    {TablaDeSimbolos = agregarAListaDeSimbolos(TablaDeSimbolos, (yyvsp[(1) - (1)].myStruct.cadena), "int", 'V', ListaParametros, contadorParametros,(yyvsp[(1) - (1)].myStruct.entero));;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {if ((yyvsp[(1) - (3)].myStruct.esNumerico) != (yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una comparacion\n", (yyvsp[(2) - (3)].myStruct.entero)); else (yyvsp[(2) - (3)].myStruct.esNumerico) = 1;;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    {if ((yyvsp[(1) - (3)].myStruct.esNumerico) != (yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una comparacion\n", (yyvsp[(2) - (3)].myStruct.entero)); else (yyvsp[(2) - (3)].myStruct.esNumerico) = 1;;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    {if ((yyvsp[(1) - (3)].myStruct.esNumerico) != (yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una comparacion\n", (yyvsp[(2) - (3)].myStruct.entero)); else (yyvsp[(2) - (3)].myStruct.esNumerico) = 1;;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    {if ((yyvsp[(1) - (3)].myStruct.esNumerico) != (yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una comparacion\n", (yyvsp[(2) - (3)].myStruct.entero)); else (yyvsp[(2) - (3)].myStruct.esNumerico) = 1;;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    {if (!(yyvsp[(1) - (3)].myStruct.esNumerico) || !(yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una suma\n", (yyvsp[(2) - (3)].myStruct.entero)); else (yyvsp[(2) - (3)].myStruct.esNumerico) = 1;;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    {if (!(yyvsp[(1) - (3)].myStruct.esNumerico) || !(yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una resta\n", (yyvsp[(2) - (3)].myStruct.entero)); else (yyvsp[(2) - (3)].myStruct.esNumerico) = 1;;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    {if (!(yyvsp[(1) - (3)].myStruct.esNumerico) || !(yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una multiplicacion\n", (yyvsp[(2) - (3)].myStruct.entero)); else (yyvsp[(2) - (3)].myStruct.esNumerico) = 1;;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {if (!(yyvsp[(1) - (3)].myStruct.esNumerico) || !(yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una division \n", (yyvsp[(2) - (3)].myStruct.entero)); else (yyvsp[(2) - (3)].myStruct.esNumerico) = 1;;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    {if (!(yyvsp[(1) - (3)].myStruct.esNumerico) || !(yyvsp[(3) - (3)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar un resto\n", (yyvsp[(2) - (3)].myStruct.entero)); else (yyvsp[(2) - (3)].myStruct.esNumerico) = 1;;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    {if (!(yyvsp[(2) - (2)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar un preincremento\n", (yyvsp[(1) - (2)].myStruct.entero)); else (yyvsp[(1) - (2)].myStruct.esNumerico) = 1;;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    {if (!(yyvsp[(2) - (2)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar un predecremento\n", (yyvsp[(1) - (2)].myStruct.entero)); else (yyvsp[(1) - (2)].myStruct.esNumerico) = 1;;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    {(yyval.myStruct.esNumerico) = 1;;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    {verificarExistenciaFuncion((yyvsp[(1) - (4)].myStruct.cadena), ListaArgumentos, TablaDeSimbolos, contadorParametrosLlamada, (yyvsp[(1) - (4)].myStruct.entero)); contadorParametrosLlamada = 0;;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    {if (!(yyvsp[(1) - (2)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar un posincremento\n", (yyvsp[(2) - (2)].myStruct.entero)); else (yyvsp[(2) - (2)].myStruct.esNumerico) = 1;;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    {if (!(yyvsp[(1) - (2)].myStruct.esNumerico)) printf(" Error semantico en linea %d: Tipos de datos incorrectos para realizar una posdecremento\n", (yyvsp[(2) - (2)].myStruct.entero)); else (yyvsp[(2) - (2)].myStruct.esNumerico) = 1;;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 325 "parser.y"
    {ListaArgumentos = agregarListaParametros (ListaArgumentos, NULL, tipoArgumento); contadorParametrosLlamada++;;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    {ListaArgumentos = agregarListaParametros (ListaArgumentos, NULL, tipoArgumento); contadorParametrosLlamada++;;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    {(yyval.myStruct.esNumerico) = buscarVariable(TablaDeSimbolos, (yyvsp[(1) - (1)].myStruct.cadena));
                                          if(buscarVariable(TablaDeSimbolos, (yyvsp[(1) - (1)].myStruct.cadena))){
                                            //strcpy(tipoArgumento, buscarTipoDatoVariable(TablaDeSimbolos, $<myStruct.cadena>1));
                                          } else {
                                            printf(" Error semantico en linea %d: No esta declarada la variable %s \n", (yyvsp[(1) - (1)].myStruct.entero), (yyvsp[(1) - (1)].myStruct.cadena));
                                          }
                                        ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 341 "parser.y"
    {strcpy(tipoArgumento, "int");;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    {strcpy(tipoArgumento, "char");;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 343 "parser.y"
    {strcpy(tipoArgumento, "float");;}
    break;



/* Line 1455 of yacc.c  */
#line 2314 "parser.tab.c"
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
#line 351 "parser.y"


/* Llamada por yyparse ante un error */
int yyerror (char *s) {
  //printf ("%s\n", s);
}


/* Main */
int main (){

  #ifdef BISON_DEBUG
    yydebug = 1;
  #endif

  imprimirErrores();

  yyin = fopen("entrada.c","r");
  yyparse();

  fclose(yyin);

  generarReporte(ListaSentencias, TablaDeSimbolos);
  getch();

return 0;
}
