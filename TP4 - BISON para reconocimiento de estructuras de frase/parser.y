%{

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

%}

%token CONSTANTE_OCTAL CONSTANTE_DECIMAL CONSTANTE_HEXADECIMAL
%token CONSTANTE_REAL 
%token CONSTANTE_CARACTER
%token OR AND
%token IGUALIGUAL DIFERENTE
%token MAYORIGUAL
%token MENORIGUAL
%token MASIGUAL MENOSIGUAL PORIGUAL DIVISIONGUAL
%token MASMAS MENOSMENOS
%token FLECHA
%token AUTO TYPEDEF STATIC REGISTER EXTERN ENUM
%token SIZEOF
%token UNION STRUCT
%token GOTO RETURN CONTINUE BREAK
%token VOLATILE CONST
%token WHILE DO FOR
%token IF ELSE SWITCH CASE DEFAULT
%token VOID
%token CHAR DOUBLE FLOAT INT LONG SHORT SIGNED UNSIGNED
%token IDENTIFICADOR
%token LITERAL_CADENA
%token COMENTARIO_UNA_LINEA COMENTARIO_VARIAS_LINEAS

%start input

%union{
    char* cadena;
    int entero;
    float real;
}


%%

input:                    /* vacio */
                        | input line
;

line:                     '\n'                                        {printf("\n");}
                        | sentencia
                        | declaracion
                        | prototipo
                        | funciones
                        | noC
;

prototipo:                VOID IDENTIFICADOR '(' tiposParametros ')' ';'          {printf(" Prototipo ");}
                        | VOID IDENTIFICADOR '(' ')' ';'                          {printf(" Prototipo ");}
                        | tipoDeDato IDENTIFICADOR '(' tiposParametros ')' ';'    {printf(" Prototipo ");}
                        | tipoDeDato IDENTIFICADOR '(' ')' ';'                    {printf(" Prototipo ");}
;

tiposParametros:          tipoDeDato
                        | tipoDeDato ',' tiposParametros
;

funciones:                VOID IDENTIFICADOR '(' ')' sentencia                              {printf(" Funciones ");}
                        | VOID IDENTIFICADOR '(' parametrosFuncion ')' sentencia            {printf(" Funciones ");}
                        | tipoDeDato IDENTIFICADOR '(' ')' sentencia                        {printf(" Funciones ");}
                        | tipoDeDato IDENTIFICADOR '(' parametrosFuncion ')' sentencia      {printf(" Funciones ");}
;

parametrosFuncion:        tipoDeDato IDENTIFICADOR
                        | tipoDeDato IDENTIFICADOR ',' parametrosFuncion
;

noC:                      COMENTARIO_UNA_LINEA                        {printf(" COMENTARIO UNA LINEA ");}
                        | COMENTARIO_VARIAS_LINEAS                    {printf(" COMENTARIO VARIAS LINEAS ");}
;

/*==============================================SENTENCIAS===========================================*/
/* conflictos: 1 desplazamiento/reducción (En sentElse)*/

sentencia:                sentExpresion                               {printf("\t [SENT. EXPRESION] ");}
                        | sentCompuesta                               {printf("\t [SENT. COMPUESTA]");}
                        | sentSeleccion                               {printf("\t [SENT. SELECCION] ");}
                        | sentIteracion                               {printf("\t [SENT. ITERACION]");}
                        | sentEtiquetado                              {printf("\t [SENT. ETIQUETADO]");}
                        | sentSalto                                   {printf("\t [SENT. SALTO] ");}
;

sentExpresion:            expresion ';'
;

sentCompuesta:            '{' listaSentencias '}'
                        | '{' '}'
;

listaSentencias:          line
                        | listaSentencias line
;

sentSeleccion:            IF '(' expresion ')' sentencia sentElse
                        | SWITCH '(' expresion ')' sentencia          {printf(" Switch ");}
;

sentElse:                 /* vacio */                                 {printf(" If sin Else ");}
                        | ELSE sentencia                              {printf(" If con Else ");}
;

sentIteracion:            WHILE '(' expresion ')' sentencia           {printf(" While ");}
                        | DO line WHILE '(' expresion ')' ';'         {printf(" DoWhile ");}
                        | FOR '(' cuerpoFor ')' sentencia             {printf(" For ");}
;

cuerpoFor:                declaracionFor ';' expresion ';' expresion
                        | ';' expresion ';' expresion
                        | declaracionFor ';' ';' expresion
                        | declaracionFor ';' expresion ';'
                        | ';' ';' expresion
                        | declaracionFor ';' ';'
                        | ';' ';'
;

declaracionFor:           tipoDeDato variasVariables                  {printf(" DeclaracionFor ")}
                        | variasVariables                             {printf(" DeclaracionFor ")}
;

sentEtiquetado:           CASE constante ':' sentencia
	                      | DEFAULT ':' sentencia
	                      | IDENTIFICADOR ':' sentencia
;

sentSalto:                BREAK ';'                                   {printf(" Break ");}
                        | CONTINUE ';'                                {printf(" Continue ");}
                        | RETURN expresion ';'                        {printf(" Return con Expresion ");}
                        | RETURN ';'                                  {printf(" Return sin Expresion ");}
                        | GOTO ';'                                    {printf(" Goto ");}
;

/*=========================================DECLARACIONES===============================================*/
/* No hay conflictos */

declaracion:              tipoDeDato variasVariables ';'              {printf(" Declaracion ")}
;

variasVariables:          inicializacion
                        | variasVariables inicializacion
;

tipoDeDato:               CHAR
	                      | DOUBLE
	                      | FLOAT
	                      | INT
	                      | LONG
	                      | SHORT
;

inicializacion:           IDENTIFICADOR ',' inicializacion
		                    | IDENTIFICADOR '=' expresion ',' inicializacion
		                    | IDENTIFICADOR '=' expresion
		                    | IDENTIFICADOR
;

/*=============================================EXPRESIONES=============================================*/
/* No hay conflictos */

expresion:                expAsignacion
;

expAsignacion:            expCondicional
                        | expUnaria operAsig expAsignacion            {printf(" Asignacion ");}
;

operAsig:                 '='
                        | MASIGUAL
                        | MENOSIGUAL
                        | PORIGUAL
                        | DIVISIONGUAL
;

expCondicional:           expOr
                        | expOr '?' expresion ':' expCondicional
;

expOr:                    expAnd
                        | expAnd OR expOr                             {printf(" Or ");}
;

expAnd:                   expIgualdad
                        | expIgualdad AND expAnd                      {printf(" And ");}
;

expIgualdad:              expRelacional
                        | expRelacional IGUALIGUAL expIgualdad        {printf(" Igualdad ");}
                        | expRelacional DIFERENTE expIgualdad         {printf(" Desigualdad ");}
;

expRelacional:            expAditiva
                        | expAditiva '<' expRelacional                {printf(" Menor ");}
                        | expAditiva '>' expRelacional                {printf(" Mayor ");}
                        | expAditiva MAYORIGUAL expRelacional         {printf(" MayorIgual ");}
                        | expAditiva MENORIGUAL expRelacional         {printf(" MenorIgual ");}
;

expAditiva:               expMultiplicativa
                        | expMultiplicativa '+' expAditiva            {printf(" Suma ");}
                        | expMultiplicativa '-' expAditiva            {printf(" Resta ");}
;

expMultiplicativa:        expUnaria
                        | expUnaria '*' expUnaria                     {printf(" Multiplicacion ");}
                        | expUnaria '/' expUnaria                     {printf(" Division ");}
                        | expUnaria '%' expUnaria                     {printf(" Resto ");}
;

expUnaria:                expSufijo
                        | MASMAS expUnaria                            {printf(" Aumento ");}
                        | MENOSMENOS expUnaria                        {printf(" Reduccion ");}
                        | operUnario expUnaria
                        | SIZEOF expUnaria
;

operUnario:               '&'
                        | '*'
                        | '+'
                        | '-'
                        | '!'
;

expSufijo:                expPrimaria
                        | expSufijo '[' expresion ']'
                        | expSufijo '(' listaArgumentos ')'
                        | expSufijo '(' ')'
                        | expSufijo '.' IDENTIFICADOR
                        | expSufijo FLECHA IDENTIFICADOR
                        | expSufijo MASMAS                            {printf(" Aumento ");}
                        | expSufijo MENOSMENOS                        {printf(" Reduccion ");}
;

listaArgumentos:          expAsignacion
                        | expAsignacion ',' listaArgumentos
;

expPrimaria:              IDENTIFICADOR                               {printf(" IDENTIFICADOR ");}
                        | constante
                        | LITERAL_CADENA                              {printf(" LITERALCADENA ");}
                        | '(' expresion ')'
;

constante:                constanteEntera
                        | CONSTANTE_CARACTER                          {printf(" CARACTER ");}
                        | CONSTANTE_REAL                              {printf(" REAL ");}
;

constanteEntera:          CONSTANTE_OCTAL                             {printf(" OCTAL ");}
                        | CONSTANTE_DECIMAL                           {printf(" DECIMAL ");}
                        | CONSTANTE_HEXADECIMAL                       {printf(" HEXADECIMAL ");}
;

%%

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