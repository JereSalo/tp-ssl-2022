%option noyywrap

%{

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int cantIdentificadores;
int cantPalabrasOctal = 0;
int acum = 0;

int acumDecimales = 0;

%}

/*Alias */

LETRA [a-zA-z]
DIGITO_HEXADECIMAL [0-9A-Fa-f]
RESERVADA_DATO int|double|float|char|long|short|unsigned|signed|const|static|struct
RESERVADA_CONTROL else|switch|break|for|void|continue|while|if|do|case|return|default
RESERVADA_OTRA auto|enum|register|typedef|extern|sizeof|union|goto|volatile|_Packed
PUNTUADORES_OPERADORES =|==|!=|\+=|<=|>=|>|<|\+|\-|\*|\/|%|\,|;|\.|:|sizeof|\+\+|!|&|&&|(\|\|)|\(|\)|\{|\}|\[|\]

/* Armar todas las Expresiones Regulares necesarias */

%%

[1-9][0-9]* {printf("Encontre una constante entera decimal %s\n",yytext); acumDecimales += atoi(yytext);}
0[0-7]* {printf("Encontre una constante entera octal \n"); cantPalabrasOctal++;}
0[xX]{DIGITO_HEXADECIMAL}+ {printf("Encontre una constante entera hexadecimal \n"); acum++;}
[0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?|[0-9]+\.([eE][\+\-]?[0-9]+)?|[0-9]([eE][\+\-]?[0-9]+)? {printf("Encontre una constante real \n");}
'.' {printf("Encontre un caracter \n");}
\"(.)*\" {printf("Encontre un cadena de caracteres !!! \n");}
{RESERVADA_DATO} {printf ("Encontre una palabra reservada del tipo dato \n");}
{RESERVADA_CONTROL} {printf ("Encontre una palabra reservada de control \n");}
{RESERVADA_OTRA} {printf ("Encontre una palabra reservada otra \n");}
(_|{LETRA})(_|{LETRA}|[0-9])* {printf("Encontre un identificador \n");}
{PUNTUADORES_OPERADORES} {printf("Encontre puntuador/operador\n");}
\/\/(.)* {printf ("Comentario de una sola linea \n");}
\/\*(.|(\n))*\*\/ {printf("Comentario de multiples lineas \n");}

%%

/* Código C */

int main(){
    yyin = fopen("entrada.c", "r");
    yyout = fopen("salida.txt", "w");

    yylex();

    printf("\nValor del acumulador de valores decimales: %d", acumDecimales);
    printf("\nCantidad de constantes octal: %d", cantPalabrasOctal);
    
    getch();
    return 0;
}