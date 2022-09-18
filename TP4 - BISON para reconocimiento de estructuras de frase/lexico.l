/* =====================    O P C I O N E S     ===================== */

%option noyywrap
/* yylineno: Utilizado para obtener el numero de linea */
%option yylineno
/* =====================    D E F I N I C I O N E S     ===================== */
%{
#include "parser.h"


%}

/* =====================    A L I A S      ===================== */

CONSTANTE_DECIMAL               [1-9][0-9]*
CONSTANTE_OCTAL                 0[0-7]*
CONSTANTE_HEXADECIMAL           0[xX][0-9A-Fa-f]+
CONSTANTE_REAL                  [0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?|[0-9]+\.([eE][\+\-]?[0-9]+)?|[0-9]([eE][\+\-]?[0-9]+)?
CONSTANTE_CARACTER              '.'
LITERAL_CADENA                  \".*\"
RESERVADA_DATO                  int|double|float|char|long|short|unsigned|signed|const|static|struct
RESERVADA_CONTROL               else|switch|break|for|void|continue|while|if|do|case|return|default
RESERVADA_OTRA                  auto|enum|register|typedef|extern|sizeof|union|goto|volatile
IDENTIFICADOR                   [_a-zA-Z][_a-zA-Z0-9]*
PUNTUADOR_OPERADOR              ==|!=|\+=|<=|>=|\+|\-|\*|\/|%|\,|\.|sizeof|\+\+|&&|(\|\|)|\(|\)|\{|\}|\[|\]
COMENTARIO_UNA_LINEA            \/\/.*
COMENTARIO_VARIAS_LINEAS        \/\*[^\*\/]*\*\/
CONSTANTE_DE_UN_CARACTER        ,|?|:|(|)|[|]|=|{|}|;|*|&|+|-|~|!|<|>

/* =====================    R E G L A S    ===================== */

%%

{CONSTANTE_OCTAL}                      ;
{CONSTANTE_DECIMAL}                    ;
{CONSTANTE_HEXADECIMAL}                ;
{CONSTANTE_REAL}                       ;
{CONSTANTE_CARACTER}                   ;
{LITERAL_CADENA}                       ;
{RESERVADA_DATO}                       ;
{RESERVADA_CONTROL}                    ;
{RESERVADA_OTRA}                       ;
{IDENTIFICADOR}                        {strcpy(yylval.cadena,yytext); return IDENTIFICADOR};
{PUNTUADOR_OPERADOR}                   ;
{CONSTANTE_DE_UN_CARACTER}             {return yytext[0];};
{COMENTARIO_UNA_LINEA}                 ;
{COMENTARIO_VARIAS_LINEAS}             ;
\n
\t
" "

"int" {return INT;}
"double" {return DOUBLE;}
"float" {return FLOAT;}
"char" {return CHAR;}
"long" {return LONG;}
"short" {return SHORT;}
"unsigned" {return UNSIGNED;}
"signed" {return SIGNED;}
"const" {return CONST;}
"static" {return STATIC;}
"struct" {return STRUCT;}

"else" {return ELSE;}
"switch" {return SWITCH;}
"break" {return BREAK;}
"for" {return FOR;}
"void" {return VOID;}
"continue" {return CONTINUE;}
"while" {return WHILE;}
"if" {return IF;}
"do" {return DO;}
"case" {return CASE;}
"return" {return RETURN;}
"default" {return DEFAULT;}

"auto" {return AUTO;}
"enum" {return ENUM;}
"register" {return REGISTER;}
"typedef" {return TYPEDEF;}
"extern" {return EXTERN;}
"sizeof" {return SIZEOF;}
"union" {return UNION;}
"goto" {return GOTO;}
"volatile" {return VOLATILE;}




.                                      ;

%%

