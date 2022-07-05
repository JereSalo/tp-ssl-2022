%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.c"

char *aux;

// Crear las listas
ConContador *listaIdentificadores = NULL;
ConValor *listaLiteralesCadena = NULL;
ConTipo *listaReservadas = NULL;
Entero *listaOctales = NULL;
Entero *listaDecimales = NULL;
Entero *listaHexadecimales = NULL;
Real *listaReales = NULL;
Caracter *listaCaracteres = NULL;
ConContador *listaOperadoresPuntuacion = NULL;
ConTipo *listaComentarios = NULL;
ConValor *listaNoReconocidos = NULL;

%}

/*Alias */

DIGITO_DECIMAL                  [1-9][0-9]*
DIGITO_OCTAL                    0[0-7]*
DIGITO_HEXADECIMAL              0[xX][0-9A-Fa-f]+
CONST_REALES                    [0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?|[0-9]+\.([eE][\+\-]?[0-9]+)?|[0-9]([eE][\+\-]?[0-9]+)?
CONST_CARACTER                  '(.)'
LITERAL_CADENA                  \"(.)*\"
RESERVADA_DATO                  int|double|float|char|long|short|unsigned|signed|const|static|struct
RESERVADA_CONTROL               else|switch|break|for|void|continue|while|if|do|case|return|default
RESERVADA_OTRA                  auto|enum|register|typedef|extern|sizeof|union|goto|volatile|_Packed
IDENTIFICADORES                 [_a-zA-Z][_a-zA-Z0-9]*
PUNTUADORES_OPERADORES          =|==|!=|\+=|<=|>=|>|<|\+|\-|\*|\/|%|\,|;|\.|:|sizeof|\+\+|!|&|&&|(\|\|)|\(|\)|\{|\}|\[|\]
COMENTARIO_UNA_LINEA            \/\/(.)*
COMENTARIO_VARIAS_LINEA         \/\*(.|(\n))+\*\/

/* Armar todas las Expresiones Regulares necesarias */

%%

{DIGITO_DECIMAL}                    {listaDecimales = agregarEntero(listaDecimales, atoi(yytext));}
{DIGITO_OCTAL}                      {listaOctales = agregarEntero(listaOctales, strtol(yytext, NULL, 8));}
{DIGITO_HEXADECIMAL}                {listaHexadecimales = agregarEntero(listaHexadecimales, strtol(yytext, NULL, 16));}
{CONST_REALES}                      {listaReales = agregarReales(listaReales, atof(yytext));}
{CONST_CARACTER}                    {listaCaracteres = agregarCaracter(listaCaracteres, yytext[1]);}
{LITERAL_CADENA}                    {aux = strdup(yytext); listaLiteralesCadena = agregarListaConValor(listaLiteralesCadena, aux, strlen(aux) - 2);}
{RESERVADA_DATO}                    {aux = strdup(yytext); listaReservadas = agregarListaTipos(listaReservadas, aux, "Dato");}
{RESERVADA_CONTROL}                 {aux = strdup(yytext); listaReservadas = agregarListaTipos(listaReservadas, aux, "Control");}
{RESERVADA_OTRA}                    {aux = strdup(yytext); listaReservadas = agregarListaTipos(listaReservadas, aux, "Otras");}
{IDENTIFICADORES}                   {aux = strdup(yytext); listaIdentificadores = agregarListaContador(listaIdentificadores, aux);}
{PUNTUADORES_OPERADORES}            {aux = strdup(yytext); listaOperadoresPuntuacion = agregarListaContador(listaOperadoresPuntuacion, aux);}
{COMENTARIO_UNA_LINEA}              {aux = strdup(yytext); listaComentarios = agregarListaTipos(listaComentarios, aux, "una linea");}
{COMENTARIO_VARIAS_LINEA}           {aux = strdup(yytext); listaComentarios = agregarListaTipos(listaComentarios, aux, "varias lineas");}
.                                   {aux = strdup(yytext); listaNoReconocidos = agregarListaConValor(listaNoReconocidos, aux, 88888);}

%%

/* Código C */

int main(){
    yyin = fopen("entrada.c", "r");
    yyout = fopen("salida.txt", "w");
    yylex();

    imprimirReporte(listaIdentificadores, listaLiteralesCadena, listaReservadas, listaDecimales, listaOctales, listaHexadecimales, listaReales, listaCaracteres, listaOperadoresPuntuacion, listaComentarios, listaNoReconocidos);
    getch();
    return 0;
}

/*
OBSERVACIONES:

    - Hay que cambiar en caracteres no reconocidos el '88888' por la posicion de linea donde se encuentra.
    
*/