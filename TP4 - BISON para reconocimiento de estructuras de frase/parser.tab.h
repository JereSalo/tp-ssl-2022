
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     INT = 263,
     DOUBLE = 264,
     FLOAT = 265,
     CHAR = 266,
     LONG = 267,
     SHORT = 268,
     UNSIGNED = 269,
     SIGNED = 270,
     CONST = 271,
     STATIC = 272,
     STRUCT = 273,
     ELSE = 274,
     SWITCH = 275,
     BREAK = 276,
     FOR = 277,
     VOID = 278,
     CONTINUE = 279,
     WHILE = 280,
     IF = 281,
     DO = 282,
     CASE = 283,
     RETURN = 284,
     DEFAULT = 285,
     AUTO = 286,
     ENUM = 287,
     REGISTER = 288,
     TYPEDEF = 289,
     EXTERN = 290,
     SIZEOF = 291,
     UNION = 292,
     GOTO = 293,
     VOLATILE = 294,
     IGUALIGUAL = 295,
     DIFERENTE = 296,
     MASIGUAL = 297,
     MENOSIGUAL = 298,
     DIVISIONGUAL = 299,
     PORIGUAL = 300,
     MENORIGUAL = 301,
     MAYORIGUAL = 302,
     MASMAS = 303,
     MENOSMENOS = 304,
     AND = 305,
     OR = 306,
     FLECHA = 307,
     LITERAL_CADENA = 308,
     COMENTARIO_UNA_LINEA = 309,
     COMENTARIO_VARIAS_LINEAS = 310,
     IDENTIFICADOR = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 68 "parser.y"

    char* cadena;
    int entero;
    float real;



/* Line 1676 of yacc.c  */
#line 116 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


