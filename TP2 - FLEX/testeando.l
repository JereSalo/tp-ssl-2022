%option noyywrap

%{
    
#include <stdio.h>
#include <conio.h>

int cantIdentificadores;
int cantPalabrasOctal = 0;
int acum = 0;
%}

LETRA [a-zA-z]
DIGITO_HEXADECIMAL [0-9A-Fa-f]

/* Armar todas las Expresiones Regulares necesarias */
/*

Constantes (Entera decimal, entera octal, entera hexadecimal, real, caracter)
Literal cadena
Palabras reservadas (distinguir entre tipo de dato, estructuras de control y otros)
Identificadores
Caracteres de puntuación/operadores de C.

*/

%%

[1-9][0-9]* {printf("Encontre una constante entera decimal \n");}
0[0-7]* {printf("Encontre una constante entera octal \n"); cantPalabrasOctal++;}
0[xX]{DIGITO_HEXADECIMAL}+ {printf("Encontre una constante entera hexadecimal \n"); acum++;}
({LETRA}|"_")({LETRA}|[0-9]|"_")* {printf("Encontre un identificador? \n");}
\/\* {printf("Empieza comentario de multiples lineas");}


%%

//. {printf("Caracter desconocido! \n");}

/* Código C */

int main(){
    yyin = fopen("entrada.c", "r");
    yyout = fopen("salida.txt", "w");

    yylex();


    printf("\nValor del acumulador: %d", acum);
    printf("\nCantidad de constantes octal: %d", cantPalabrasOctal);
    getch();
    return 0;
}