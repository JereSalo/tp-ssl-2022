%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.c"

// Crear la lista de enteros
Entero *listaDecimales = NULL;
Entero *listaOctales = NULL;
Entero *listaHexadecimales = NULL;

%}

/*Alias */

DIGITO_DECIMAL              [1-9][0-9]*
DIGITO_OCTAL                0[0-7]*
DIGITO_HEXADECIMAL          0[xX][0-9A-Fa-f]+
CONST_REALES                [0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?|[0-9]+\.([eE][\+\-]?[0-9]+)?|[0-9]([eE][\+\-]?[0-9]+)?
RESERVADA_DATO              int|double|float|char|long|short|unsigned|signed|const|static|struct
RESERVADA_CONTROL           else|switch|break|for|void|continue|while|if|do|case|return|default
RESERVADA_OTRA              auto|enum|register|typedef|extern|sizeof|union|goto|volatile|_Packed
LETRA                       [a-zA-z]
PUNTUADORES_OPERADORES      =|==|!=|\+=|<=|>=|>|<|\+|\-|\*|\/|%|\,|;|\.|:|sizeof|\+\+|!|&|&&|(\|\|)|\(|\)|\{|\}|\[|\]

/* Armar todas las Expresiones Regulares necesarias */

%%

{DIGITO_DECIMAL}                listaDecimales = agregarEntero(listaDecimales, atoi(yytext)); sumarDecimales(atoi(yytext));
{DIGITO_OCTAL}                  listaOctales = agregarEntero(listaOctales, ConversorDecimal(yytext, strlen(yytext), 8));
{DIGITO_HEXADECIMAL}            listaHexadecimales = agregarEntero(listaHexadecimales, ConversorDecimal(yytext, strlen(yytext), 16));
{CONST_REALES}                  {printf("Encontre una constante real \n");}
'.'                             {printf("Encontre un caracter \n");}
\"(.)*\"                        {printf("Encontre un cadena de caracteres !!! \n");}
{RESERVADA_DATO}                {printf ("Encontre una palabra reservada del tipo dato \n");}
{RESERVADA_CONTROL}             {printf ("Encontre una palabra reservada de control \n");}
{RESERVADA_OTRA}                {printf ("Encontre una palabra reservada otra \n");}
(_|{LETRA})(_|{LETRA}|[0-9])*   {printf("Encontre un identificador \n");}
{PUNTUADORES_OPERADORES}        {printf("Encontre puntuador/operador\n");}
\/\/(.)*                        {printf ("Comentario de una sola linea \n");}
\/\*(.|(\n))*\*\/               {printf("Comentario de multiples lineas \n");}

%%

/* Código C */

int main(){
    yyin = fopen("entrada.c", "r");
    yyout = fopen("salida.txt", "w");
    yylex();

    imprimirReporte(listaDecimales, listaOctales, listaHexadecimales);
    getch();
return 0;
}