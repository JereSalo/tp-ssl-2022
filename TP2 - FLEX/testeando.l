%option noyywrap

%{
    
#include <stdio.h>
#include <conio.h>

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
RESERVADA_OTRA auto|enum|register|typedef|extern|sizeof|main|union|goto|volatile|_Packed
PUNTUADORES_OPERADORES ==|sizeof|<=|>=|!=|\+\+|\+=|>|<|\.|\+|\-|\,|\*|&|!|\/|=|%|:|&&|\(|\)|\{|\}|\[|\]|(\|\|)|\;

/* Armar todas las Expresiones Regulares necesarias */

%%

{PUNTUADORES_OPERADORES} {printf("Encontre puntuador/operador\n");}
\/\/(.)* {printf ("Comentario de una sola linea \n");}
(\/\*)((.|(\n))*)(\*\/) {printf("Comentario de multiples lineas pero anda mal xd \n");}
{RESERVADA_DATO} {printf ("Encontre una palabra reservada del tipo dato \n");}
{RESERVADA_CONTROL} {printf ("Encontre una palabra reservada de control \n");}
{RESERVADA_OTRA} {printf ("Encontre una palabra reservada otra \n");}
[1-9][0-9]* {printf("Encontre una constante entera decimal %s\n",yytext); acumDecimales += atoi(yytext);}
0[0-7]* {printf("Encontre una constante entera octal \n"); cantPalabrasOctal++;}
0[xX]{DIGITO_HEXADECIMAL}+ {printf("Encontre una constante entera hexadecimal \n"); acum++;}
({LETRA}|"_")({LETRA}|[0-9]|"_")* {printf("Encontre un identificador \n");}
('.') {printf("Encontre un caracter \n");}
\"(.)*\" {printf("Encontre un cadena de caracteres !!! \n");}
(([0-9]*(\.)[0-9]+([eE]([\+\-]?)[0-9]+)?)|([0-9]+([eE]([\+\-]?)[0-9]+))|([0-9]+(\.)(([Ee]([\+\-]?)[0-9]+)?))) {printf("Encontre una constante real \n");}

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