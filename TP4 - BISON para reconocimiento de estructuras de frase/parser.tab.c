
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
#define YYLAST   761

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNRULES -- Number of states.  */
#define YYNSTATES  231

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,     2,     2,    73,    74,     2,
      58,    59,    71,    69,    61,    70,    78,    72,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,    60,
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
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    26,    32,    39,    45,    47,    51,    57,    64,    70,
      77,    80,    85,    87,    89,    91,    93,    95,    97,    99,
     101,   104,   108,   111,   113,   116,   123,   129,   130,   133,
     139,   147,   153,   159,   164,   169,   174,   178,   182,   185,
     188,   190,   195,   199,   203,   206,   209,   213,   216,   219,
     223,   225,   228,   230,   232,   234,   236,   238,   240,   244,
     250,   254,   256,   258,   260,   264,   266,   268,   270,   272,
     274,   276,   282,   284,   288,   290,   294,   296,   300,   304,
     306,   310,   314,   318,   322,   324,   328,   332,   334,   338,
     342,   346,   348,   351,   354,   357,   360,   362,   364,   366,
     368,   370,   372,   377,   382,   386,   390,   394,   397,   400,
     402,   406,   408,   410,   412,   416,   418,   420,   422,   424,
     426
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      80,     0,    -1,    -1,    80,    81,    -1,    57,    -1,    87,
      -1,    98,    -1,    82,    -1,    84,    -1,    86,    -1,    44,
      53,    58,    83,    59,    60,    -1,    44,    53,    58,    59,
      60,    -1,   100,    53,    58,    83,    59,    60,    -1,   100,
      53,    58,    59,    60,    -1,   100,    -1,   100,    61,    83,
      -1,    44,    53,    58,    59,    87,    -1,    44,    53,    58,
      85,    59,    87,    -1,   100,    53,    58,    59,    87,    -1,
     100,    53,    58,    85,    59,    87,    -1,   100,    53,    -1,
     100,    53,    61,    85,    -1,    55,    -1,    56,    -1,    88,
      -1,    89,    -1,    91,    -1,    93,    -1,    96,    -1,    97,
      -1,   102,    60,    -1,    62,    90,    63,    -1,    62,    63,
      -1,    81,    -1,    90,    81,    -1,    39,    58,   102,    59,
      87,    92,    -1,    41,    58,   102,    59,    87,    -1,    -1,
      40,    87,    -1,    36,    58,   102,    59,    87,    -1,    37,
      81,    36,    58,   102,    59,    60,    -1,    38,    58,    94,
      59,    87,    -1,    95,    60,   102,    60,   102,    -1,    60,
     102,    60,   102,    -1,    95,    60,    60,   102,    -1,    95,
      60,   102,    60,    -1,    60,    60,   102,    -1,    95,    60,
      60,    -1,    60,    60,    -1,   100,    99,    -1,    99,    -1,
      42,   117,    64,    87,    -1,    43,    64,    87,    -1,    53,
      64,    87,    -1,    33,    60,    -1,    32,    60,    -1,    31,
     102,    60,    -1,    31,    60,    -1,    30,    60,    -1,   100,
      99,    60,    -1,   101,    -1,    99,   101,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,
      53,    61,   101,    -1,    53,    65,   102,    61,   101,    -1,
      53,    65,   102,    -1,    53,    -1,   103,    -1,   105,    -1,
     112,   104,   103,    -1,    65,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,   106,    -1,   106,    66,   102,    64,
     105,    -1,   107,    -1,   107,     8,   106,    -1,   108,    -1,
     108,     9,   107,    -1,   109,    -1,   109,    10,   108,    -1,
     109,    11,   108,    -1,   110,    -1,   110,    67,   109,    -1,
     110,    68,   109,    -1,   110,    12,   109,    -1,   110,    13,
     109,    -1,   111,    -1,   111,    69,   110,    -1,   111,    70,
     110,    -1,   112,    -1,   112,    71,   112,    -1,   112,    72,
     112,    -1,   112,    73,   112,    -1,   114,    -1,    18,   112,
      -1,    19,   112,    -1,   113,   112,    -1,    27,   112,    -1,
      74,    -1,    71,    -1,    69,    -1,    70,    -1,    75,    -1,
     116,    -1,   114,    76,   102,    77,    -1,   114,    58,   115,
      59,    -1,   114,    58,    59,    -1,   114,    78,    53,    -1,
     114,    20,    53,    -1,   114,    18,    -1,   114,    19,    -1,
     103,    -1,   103,    61,   115,    -1,    53,    -1,   117,    -1,
      54,    -1,    58,   102,    59,    -1,   118,    -1,     7,    -1,
       6,    -1,     3,    -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    54,    57,    58,    59,    60,    61,    62,
      65,    66,    67,    68,    71,    72,    75,    76,    77,    78,
      81,    82,    85,    86,    92,    93,    94,    95,    96,    97,
     100,   103,   104,   107,   108,   111,   112,   115,   116,   119,
     120,   121,   124,   125,   126,   127,   128,   129,   130,   133,
     134,   137,   138,   139,   142,   143,   144,   145,   146,   152,
     155,   156,   159,   160,   161,   162,   163,   164,   167,   168,
     169,   170,   176,   179,   180,   183,   184,   185,   186,   187,
     190,   191,   194,   195,   198,   199,   202,   203,   204,   207,
     208,   209,   210,   211,   214,   215,   216,   219,   220,   221,
     222,   225,   226,   227,   228,   229,   232,   233,   234,   235,
     236,   239,   240,   241,   242,   243,   244,   245,   246,   249,
     250,   253,   254,   255,   256,   259,   260,   261,   264,   265,
     266
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
  "COMENTARIO_UNA_LINEA", "COMENTARIO_VARIAS_LINEAS", "'\\n'", "'('",
  "')'", "';'", "','", "'{'", "'}'", "':'", "'='", "'?'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'!'", "'['", "']'", "'.'",
  "$accept", "input", "line", "prototipo", "tiposParametros", "funciones",
  "parametrosFuncion", "noC", "sentencia", "sentExpresion",
  "sentCompuesta", "listaSentencias", "sentSeleccion", "sentElse",
  "sentIteracion", "cuerpoFor", "declaracionFor", "sentEtiquetado",
  "sentSalto", "declaracion", "variasVariables", "tipoDeDato",
  "inicializacion", "expresion", "expAsignacion", "operAsig",
  "expCondicional", "expOr", "expAnd", "expIgualdad", "expRelacional",
  "expAditiva", "expMultiplicativa", "expUnaria", "operUnario",
  "expSufijo", "listaArgumentos", "expPrimaria", "constante",
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
     305,   306,   307,   308,   309,   310,   311,    10,    40,    41,
      59,    44,   123,   125,    58,    61,    63,    60,    62,    43,
      45,    42,    47,    37,    38,    33,    91,    93,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    81,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    83,    83,    84,    84,    84,    84,
      85,    85,    86,    86,    87,    87,    87,    87,    87,    87,
      88,    89,    89,    90,    90,    91,    91,    92,    92,    93,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    97,    97,    97,    97,    97,    98,
      99,    99,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   102,   103,   103,   104,   104,   104,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   108,   109,
     109,   109,   109,   109,   110,   110,   110,   111,   111,   111,
     111,   112,   112,   112,   112,   112,   113,   113,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   116,   116,   116,   117,   117,   117,   118,   118,
     118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       6,     5,     6,     5,     1,     3,     5,     6,     5,     6,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     1,     2,     6,     5,     0,     2,     5,
       7,     5,     5,     4,     4,     4,     3,     3,     2,     2,
       1,     4,     3,     3,     2,     2,     3,     2,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     5,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     5,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     4,     4,     3,     3,     3,     2,     2,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   128,   129,   130,   127,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,   121,
     123,    22,    23,     4,     0,     0,   108,   109,   107,   106,
     110,     3,     7,     8,     9,     5,    24,    25,    26,    27,
      28,    29,     6,     0,     0,    72,    73,    80,    82,    84,
      86,    89,    94,    97,     0,   101,   111,   122,   125,   121,
     102,   103,   105,    58,    57,     0,    55,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,    71,     0,    60,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    77,    78,    79,
      75,     0,     0,     0,     0,   104,   117,   118,     0,     0,
       0,     0,    56,     0,     0,    71,     0,     0,     0,    50,
       0,     0,     0,     0,    52,     0,    53,   124,    31,    34,
       0,     0,     0,    59,    61,     0,    83,    97,    85,    87,
      88,    92,    93,    90,    91,    95,    96,    98,    99,   100,
      74,   116,   114,   119,     0,     0,   115,     0,     0,    48,
       0,     0,     0,    49,     0,     0,    51,     0,     0,     0,
      14,     0,     0,     0,    68,    70,     0,     0,   113,   112,
      39,     0,    46,     0,    41,    47,     0,    37,    36,    11,
      16,     0,     0,    20,     0,    13,    18,     0,     0,     0,
      81,   120,     0,    43,    44,    45,     0,    35,    10,    17,
       0,    15,    14,    12,    19,    69,    40,    42,    38,    21,
       0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    41,    42,   178,    43,   179,    44,    45,    46,
      47,    90,    48,   217,    49,   127,   128,    50,    51,    52,
      92,    53,    93,    54,    55,   114,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   164,    66,    67,    68
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -136
static const yytype_int16 yypact[] =
{
    -136,   168,  -136,  -136,  -136,  -136,  -136,  -136,   686,   686,
     686,   -45,   571,   -30,   -21,   -17,   350,    -4,     5,     7,
      96,    -6,     8,  -136,  -136,  -136,  -136,  -136,  -136,     9,
    -136,  -136,  -136,  -136,   686,   228,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,    18,    15,  -136,  -136,    20,    69,    75,
      14,     0,    10,   117,   686,    -2,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,    28,  -136,  -136,   686,    71,
     -13,   686,   686,    47,   530,    55,   530,    56,  -136,  -136,
     289,   -38,   -32,  -136,  -136,   686,   686,   686,   686,   686,
     686,   686,   686,   686,   686,   686,  -136,  -136,  -136,  -136,
    -136,   686,   686,   686,   686,  -136,  -136,  -136,    68,   590,
     686,    72,  -136,    65,    83,   -23,   609,    70,    67,    89,
      89,    84,    86,   530,  -136,     3,  -136,  -136,  -136,  -136,
      90,    89,   686,  -136,  -136,    82,  -136,   -27,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,    87,    91,    74,  -136,   530,   686,   686,
      92,   530,   667,    89,   530,   530,  -136,   410,    95,    99,
     -42,   470,   100,   107,  -136,    94,   686,   686,  -136,  -136,
    -136,   108,  -136,   686,  -136,   686,   109,   130,  -136,  -136,
    -136,   116,   530,   119,   203,  -136,  -136,   118,   530,    89,
    -136,  -136,   124,  -136,  -136,   686,   530,  -136,  -136,  -136,
     203,  -136,   131,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
     132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,    -9,  -136,  -132,  -136,  -135,  -136,   -55,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
     -70,   -76,   -86,   -12,  -105,  -136,    16,    81,    97,    11,
      62,    13,  -136,    -7,  -136,  -136,     4,  -136,   173,  -136
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      75,    70,    71,    72,   130,   183,   144,    79,   182,   160,
     129,   203,   100,   101,   163,    73,   116,   117,   118,   204,
     140,   125,    87,   141,    98,    99,    89,   142,   143,   134,
      76,   136,    23,    24,    25,    26,    27,    28,   141,    77,
     125,    78,   142,   144,   111,   112,   113,   126,    23,    24,
      25,    26,    27,    28,    80,   184,   119,   115,    84,   180,
     173,    85,   177,    81,   180,    82,   123,   102,   103,   131,
     132,    91,   221,    86,   120,    94,   121,    96,   176,   104,
     105,   139,   163,   145,    97,   229,    95,   144,   122,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,     3,
       4,     5,     6,     7,   157,   158,   159,   124,   165,   149,
     150,   133,   190,   135,   170,   137,   194,   155,   156,   197,
     198,   161,   200,   225,   167,   166,   206,   172,   222,   171,
     185,   106,   107,   108,   109,    23,    24,    25,    26,    27,
      28,   168,   125,   174,   230,   175,   186,   219,   187,   181,
     188,   189,   193,   224,   201,   209,   191,   192,   202,   207,
     196,   228,   151,   152,   153,   154,   208,   212,     2,   215,
     216,     3,     4,     5,     6,     7,   218,   146,   223,   147,
     220,   213,   110,   214,   226,   203,     8,     9,   111,   112,
     113,   211,   204,    83,   148,    10,     0,     0,    11,    12,
      13,    14,   210,   227,    15,    16,    17,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,    30,    31,    32,    33,    34,     0,     0,     0,
      35,     3,     4,     5,     6,     7,     0,    36,    37,    38,
       0,     0,    39,    40,     0,     0,     8,     9,    23,    24,
      25,    26,    27,    28,     0,    10,     0,     0,    11,    12,
      13,    14,     0,     0,    15,    16,    17,    18,     0,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,    30,    31,    32,    33,    34,     0,     0,     0,
      35,    88,     3,     4,     5,     6,     7,    36,    37,    38,
       0,     0,    39,    40,     0,     0,     0,     8,     9,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,    11,
      12,    13,    14,     0,     0,    15,    16,    17,    18,     0,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,    30,    31,    32,    33,    34,     0,     0,
       0,    35,   138,     3,     4,     5,     6,     7,    36,    37,
      38,     0,     0,    39,    40,     0,     0,     0,     8,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
      11,    12,    13,    14,     0,     0,    15,    16,    17,    18,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,    29,    30,    31,    32,    33,    34,     0,
       0,     0,    35,     3,     4,     5,     6,     7,     0,    36,
      37,    38,     0,     0,    39,    40,     0,     0,     8,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
      11,    12,    13,    14,     0,     0,    15,    16,    17,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,     0,    34,     0,
     199,     0,    35,     3,     4,     5,     6,     7,     0,    36,
      37,    38,     0,     0,    39,    40,     0,     0,     8,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
      11,    12,    13,    14,     0,     0,    15,    16,    17,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,     0,    34,     0,
     205,     0,    35,     3,     4,     5,     6,     7,     0,    36,
      37,    38,     0,     0,    39,    40,     0,     0,     8,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
      11,    12,    13,    14,     0,     0,    15,    16,    17,    18,
       0,    19,    20,    21,     3,     4,     5,     6,     7,     0,
       0,     0,     0,    29,    30,     0,     0,     0,    34,     8,
       9,     0,    35,     3,     4,     5,     6,     7,    10,    36,
      37,    38,     0,     0,    39,    40,     0,     0,     8,     9,
       0,     0,     3,     4,     5,     6,     7,    10,     0,     0,
       0,     0,     0,     0,    69,    30,     0,     8,     9,    34,
       0,    74,     0,     0,     0,     0,    10,     0,     0,     0,
      36,    37,    38,    69,    30,    39,    40,     0,    34,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      37,    38,    69,    30,    39,    40,     0,    34,     0,   169,
       3,     4,     5,     6,     7,     0,     0,     0,    36,    37,
      38,     0,     0,    39,    40,     8,     9,     0,     0,     3,
       4,     5,     6,     7,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      69,    30,     0,     0,     0,    34,     0,   195,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    37,    38,    69,
      30,    39,    40,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    37,    38,     0,     0,
      39,    40
};

static const yytype_int16 yycheck[] =
{
      12,     8,     9,    10,    80,   140,    92,    16,   140,   114,
      80,    53,    12,    13,   119,    60,    18,    19,    20,    61,
      58,    53,    34,    61,    10,    11,    35,    65,    60,    84,
      60,    86,    45,    46,    47,    48,    49,    50,    61,    60,
      53,    58,    65,   129,    71,    72,    73,    60,    45,    46,
      47,    48,    49,    50,    58,   141,    58,    64,    64,   135,
     130,    53,    59,    58,   140,    58,    78,    67,    68,    81,
      82,    53,   204,    64,    76,    60,    78,     8,   133,    69,
      70,    90,   187,    95,     9,   220,    66,   173,    60,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     3,
       4,     5,     6,     7,   111,   112,   113,    36,   120,    98,
      99,    64,   167,    58,   126,    59,   171,   104,   105,   174,
     175,    53,   177,   209,    59,    53,   181,    60,   204,    59,
     142,    14,    15,    16,    17,    45,    46,    47,    48,    49,
      50,    58,    53,    59,   220,    59,    64,   202,    61,    59,
      59,    77,    60,   208,    59,    61,   168,   169,    59,    59,
     172,   216,   100,   101,   102,   103,    59,    59,     0,    60,
      40,     3,     4,     5,     6,     7,    60,    96,    60,   186,
      61,   193,    65,   195,    60,    53,    18,    19,    71,    72,
      73,   187,    61,    20,    97,    27,    -1,    -1,    30,    31,
      32,    33,   186,   215,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      62,     3,     4,     5,     6,     7,    -1,    69,    70,    71,
      -1,    -1,    74,    75,    -1,    -1,    18,    19,    45,    46,
      47,    48,    49,    50,    -1,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      62,    63,     3,     4,     5,     6,     7,    69,    70,    71,
      -1,    -1,    74,    75,    -1,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    62,    63,     3,     4,     5,     6,     7,    69,    70,
      71,    -1,    -1,    74,    75,    -1,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    62,     3,     4,     5,     6,     7,    -1,    69,
      70,    71,    -1,    -1,    74,    75,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    58,    -1,
      60,    -1,    62,     3,     4,     5,     6,     7,    -1,    69,
      70,    71,    -1,    -1,    74,    75,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    58,    -1,
      60,    -1,    62,     3,     4,     5,     6,     7,    -1,    69,
      70,    71,    -1,    -1,    74,    75,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      -1,    41,    42,    43,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    58,    18,
      19,    -1,    62,     3,     4,     5,     6,     7,    27,    69,
      70,    71,    -1,    -1,    74,    75,    -1,    -1,    18,    19,
      -1,    -1,     3,     4,     5,     6,     7,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    18,    19,    58,
      -1,    60,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      69,    70,    71,    53,    54,    74,    75,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    53,    54,    74,    75,    -1,    58,    -1,    60,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    69,    70,
      71,    -1,    -1,    74,    75,    18,    19,    -1,    -1,     3,
       4,     5,     6,     7,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    53,
      54,    74,    75,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    80,     0,     3,     4,     5,     6,     7,    18,    19,
      27,    30,    31,    32,    33,    36,    37,    38,    39,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    53,
      54,    55,    56,    57,    58,    62,    69,    70,    71,    74,
      75,    81,    82,    84,    86,    87,    88,    89,    91,    93,
      96,    97,    98,   100,   102,   103,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   116,   117,   118,    53,
     112,   112,   112,    60,    60,   102,    60,    60,    58,    81,
      58,    58,    58,   117,    64,    53,    64,   102,    63,    81,
      90,    53,    99,   101,    60,    66,     8,     9,    10,    11,
      12,    13,    67,    68,    69,    70,    14,    15,    16,    17,
      65,    71,    72,    73,   104,   112,    18,    19,    20,    58,
      76,    78,    60,   102,    36,    53,    60,    94,    95,    99,
     100,   102,   102,    64,    87,    58,    87,    59,    63,    81,
      58,    61,    65,    60,   101,   102,   106,   112,   107,   108,
     108,   109,   109,   109,   109,   110,   110,   112,   112,   112,
     103,    53,    59,   103,   115,   102,    53,    59,    58,    60,
     102,    59,    60,    99,    59,    59,    87,    59,    83,    85,
     100,    59,    83,    85,   101,   102,    64,    61,    59,    77,
      87,   102,   102,    60,    87,    60,   102,    87,    87,    60,
      87,    59,    59,    53,    61,    60,    87,    59,    59,    61,
     105,   115,    59,   102,   102,    60,    40,    92,    60,    87,
      61,    83,   100,    60,    87,   101,    60,   102,    87,    85,
     100
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
#line 57 "parser.y"
    {printf("\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {printf(" Prototipo ");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    {printf(" Prototipo ");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    {printf(" Prototipo ");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    {printf(" Prototipo ");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {printf(" Funciones ");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {printf(" Funciones ");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {printf(" Funciones ");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    {printf(" Funciones ");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {printf(" COMENTARIO UNA LINEA ");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {printf(" COMENTARIO VARIAS LINEAS ");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {printf("\t [SENT. EXPRESION] ");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {printf("\t [SENT. COMPUESTA]");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {printf("\t [SENT. SELECCION] ");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {printf("\t [SENT. ITERACION]");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {printf("\t [SENT. ETIQUETADO]");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {printf("\t [SENT. SALTO] ");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {printf(" Switch ");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {printf(" If sin Else ");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {printf(" If con Else ");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {printf(" While ");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    {printf(" DoWhile ");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {printf(" For ");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {printf(" DeclaracionFor ");}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {printf(" DeclaracionFor ");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    {printf(" Break ");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 143 "parser.y"
    {printf(" Continue ");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {printf(" Return con Expresion ");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {printf(" Return sin Expresion ");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 146 "parser.y"
    {printf(" Goto ");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {printf(" Declaracion ");}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {printf(" Asignacion ");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {printf(" Or ");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {printf(" And ");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {printf(" Igualdad ");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {printf(" Desigualdad ");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {printf(" Menor ");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {printf(" Mayor ");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {printf(" MayorIgual ");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {printf(" MenorIgual ");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {printf(" Suma ");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    {printf(" Resta ");;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {printf(" Multiplicacion ");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    {printf(" Division ");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    {printf(" Resto ");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    {printf(" Aumento ");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    {printf(" Reduccion ");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    {printf(" Aumento ");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    {printf(" Reduccion ");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    {printf(" IDENTIFICADOR ");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    {printf(" LITERALCADENA ");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {printf(" CARACTER ");;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    {printf(" REAL ");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    {printf(" OCTAL ");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {printf(" DECIMAL ");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    {printf(" HEXADECIMAL ");;}
    break;



/* Line 1455 of yacc.c  */
#line 2127 "parser.tab.c"
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
#line 269 "parser.y"


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
