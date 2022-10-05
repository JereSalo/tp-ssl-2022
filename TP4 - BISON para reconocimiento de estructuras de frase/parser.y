%{

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "biblioteca.h"
#define YYDEBUG 1

FILE* yyin;
detalleSentencia *ListaSentencias = NULL;
detalleDeclaraciones *ListaDeclaraciones = NULL;

int nroLineaAnterior=1;

int yylex();
int yyerror (char *s);

int yywrap(){
  return(1);
}

char tipo [20];

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
%token NRO_LINEA

%start input

%union{
    char* cadena;
    int entero;
}


%%

input:                    /* vacio */
                        | input line                                            {printf("====================\n");}
;

line:                     sentencia
                        | declaracion                                           {printf("[DECLARACION]\n");}
                        | prototipo ';'                                         {printf("[PROTOTIPO]\n");}
                        | funciones                                             {printf("[FUNCION]\n");}
                        | noC
                        | nroLinea
                        | error ';'                                             {yyerrok;}
;

nroLinea: NRO_LINEA  {nroLineaAnterior=$<entero>1};
;

noC:                      COMENTARIO_UNA_LINEA                                  {printf("[COMENTARIO]\n");}
                        | COMENTARIO_VARIAS_LINEAS                              {printf("[COMENTARIO]\n");}
;

/*============================== FUNCIONES ==================================*/

prototipo:                VOID IDENTIFICADOR '(' parametrosPrototipo ')'
                        | VOID IDENTIFICADOR '(' ')'
                        | tipoDeDato IDENTIFICADOR '(' parametrosPrototipo ')'
                        | tipoDeDato IDENTIFICADOR '(' ')'
;

parametrosPrototipo:      tipoDeDato
                        | tipoDeDato ',' parametrosPrototipo
;

funciones:                VOID IDENTIFICADOR '(' ')' sentencia
                        | VOID IDENTIFICADOR '(' parametrosFuncion ')' sentencia
                        | tipoDeDato IDENTIFICADOR '(' ')' sentencia
                        | tipoDeDato IDENTIFICADOR '(' parametrosFuncion ')' sentencia      
;

parametrosFuncion:        tipoDeDato IDENTIFICADOR {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>2, tipo);}
                        | tipoDeDato IDENTIFICADOR ',' {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>2, tipo);} parametrosFuncion
;


/*==============================================SENTENCIAS===========================================*/
/* conflictos: 1 desplazamiento/reducción (En sentElse)*/

sentencia:                sentExpresion                                         {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia de Expresion",nroLineaAnterior);}
                        | sentCompuesta                                         {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Compuesta",nroLineaAnterior);}
                        | sentSeleccion                                         {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Seleccion",nroLineaAnterior);}
                        | sentIteracion                                         {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Iteracion",nroLineaAnterior);}
                        | sentEtiquetado                                        {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Etiquetado",nroLineaAnterior);}
                        | sentSalto                                             {ListaSentencias=agregarListaSentencias(ListaSentencias,"Sentencia Salto",nroLineaAnterior);}
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
                        | SWITCH '(' expresion ')' sentencia                    //{printf("Switch ");}
;

sentElse:                 /* vacio */  {printf("If sin Else ");}                                         
                        | ELSE sentencia                                        //{printf("If con Else ");}
;

sentIteracion:            WHILE '(' expresion ')' sentencia                     //{printf("While ");}
                        | DO line WHILE '(' expresion ')' ';'                   //{printf("DoWhile ");}
                        | FOR '(' cuerpoFor ')' sentencia                       //{printf("For ");}
;

cuerpoFor:                declaracionFor ';' expresion ';' expresion
                        | ';' expresion ';' expresion
                        | declaracionFor ';' ';' expresion
                        | declaracionFor ';' expresion ';'
                        | ';' ';' expresion
                        | declaracionFor ';' ';'
                        | ';' ';'
;

declaracionFor:           tipoDeDato variasVariables
                        | variasVariables
;

sentEtiquetado:           CASE constante ':' sentencia
	                      | DEFAULT ':' sentencia
	                      | IDENTIFICADOR ':' sentencia
;

sentSalto:                BREAK ';'
                        | CONTINUE ';'
                        | RETURN expresion ';'
                        | RETURN ';'
                        | GOTO ';'
;

/*=========================================DECLARACIONES===============================================*/
/* conflictos: 1 desplazamiento/reducción */

declaracion:              espDeclaracion
;

espDeclaracion:           espAlmacenamiento tipoDeDato IDENTIFICADOR ';' {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>3, tipo);}
                        | espAlmacenamiento calificadorTipo tipoDeDato IDENTIFICADOR ';' {strcat($<cadena>2, " "); strcat($<cadena>2, tipo); strcpy(tipo, $<cadena>2); ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>4, tipo);}
                        | espAlmacenamiento espStructUnion IDENTIFICADOR ';'
                        | espAlmacenamiento espEnum IDENTIFICADOR ';'
                        | calificadorTipo declaraciones ';' {strcat($<cadena>1, " "); strcat($<cadena>1, tipo); strcpy(tipo, $<cadena>1);}
                        | declaraciones ';'
;

variasVariables:          inicializacion
                        | variasVariables inicializacion
;

inicializacion:           IDENTIFICADOR ',' {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>1, tipo);} inicializacion
		                    | IDENTIFICADOR '=' expresion ',' {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>1, tipo);} inicializacion
		                    | IDENTIFICADOR '=' expresion {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>1, tipo);}
                        | IDENTIFICADOR {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>1, tipo);}
;

espAlmacenamiento:        TYPEDEF
                        | STATIC
                        | AUTO
                        | REGISTER
                        | EXTERN
;

declaraciones:            tipoDeDato variasVariables
                        | SIGNED tipoDeDato variasVariables                     {strcat($<cadena>1, " "); strcat($<cadena>1, tipo); strcpy(tipo, $<cadena>1);}
                        | SIGNED variasVariables                                {strcpy(tipo, $<cadena>1);}
                        | UNSIGNED tipoDeDato variasVariables                   {strcat($<cadena>1, " "); strcat($<cadena>1, tipo); strcpy(tipo, $<cadena>1);}
                        | UNSIGNED variasVariables                              {strcpy(tipo, $<cadena>1);}
                        | espStructUnion
                        | espEnum
;

tipoDeDato:               CHAR                                                  {strcpy(tipo, $<cadena>1);}
	                      | DOUBLE                                                {strcpy(tipo, $<cadena>1);}
	                      | FLOAT                                                 {strcpy(tipo, $<cadena>1);}
	                      | INT                                                   {strcpy(tipo, $<cadena>1);}
	                      | LONG                                                  {strcpy(tipo, $<cadena>1);}
	                      | SHORT                                                 {strcpy(tipo, $<cadena>1);}
;

calificadorTipo:          CONST                                                 {strcpy(tipo, $<cadena>1);}
                        | VOLATILE                                              {strcpy(tipo, $<cadena>1);}
;

espStructUnion:           STRUCT IDENTIFICADOR '{' declaracionesStruct '}'      {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>2, $<cadena>1);}
                        | STRUCT '{' declaracionesStruct '}'
                        | UNION IDENTIFICADOR '{' declaracionesStruct '}'       {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>2, $<cadena>1);}
                        | UNION '{' declaracionesStruct '}'
;

declaracionesStruct:      tipoDeDato variasVariablesStruct ';'
                        | tipoDeDato variasVariablesStruct ';' declaracionesStruct
;

variasVariablesStruct:    inicializacionStruct
                        | variasVariablesStruct inicializacionStruct
;

inicializacionStruct:     IDENTIFICADOR ',' {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>1, tipo);} inicializacionStruct
		                    | IDENTIFICADOR {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>1, tipo);}
;

espEnum:                  ENUM IDENTIFICADOR {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>2, $<cadena>1);} '{' listaIdentificadores '}'       
;

listaIdentificadores:     IDENTIFICADOR ',' {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>1, "int");} listaIdentificadores
                        | IDENTIFICADOR {ListaDeclaraciones=agregarListaDeclaracionDeVariable(ListaDeclaraciones, $<cadena>1, "int");}
;

/*=============================================EXPRESIONES=============================================*/
/* No hay conflictos */

expresion:                expAsignacion                                         //{printf("[SENT. EXPRESION]");}
;

expAsignacion:            expCondicional
                        | expUnaria operAsig expAsignacion
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
                        | expAnd OR expOr
;

expAnd:                   expIgualdad
                        | expIgualdad AND expAnd
;

expIgualdad:              expRelacional
                        | expRelacional IGUALIGUAL expIgualdad
                        | expRelacional DIFERENTE expIgualdad
;

expRelacional:            expAditiva
                        | expAditiva '<' expRelacional
                        | expAditiva '>' expRelacional
                        | expAditiva MAYORIGUAL expRelacional
                        | expAditiva MENORIGUAL expRelacional
;

expAditiva:               expMultiplicativa
                        | expMultiplicativa '+' expAditiva
                        | expMultiplicativa '-' expAditiva
;

expMultiplicativa:        expUnaria
                        | expUnaria '*' expUnaria
                        | expUnaria '/' expUnaria
                        | expUnaria '%' expUnaria
;

expUnaria:                expSufijo
                        | MASMAS expUnaria
                        | MENOSMENOS expUnaria
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
                        | expSufijo MASMAS
                        | expSufijo MENOSMENOS
;

listaArgumentos:          expAsignacion
                        | expAsignacion ',' listaArgumentos
;

expPrimaria:              IDENTIFICADOR
                        | constante
                        | LITERAL_CADENA
                        | '(' expresion ')'
;

constante:                constanteEntera
                        | CONSTANTE_CARACTER
                        | CONSTANTE_REAL
;

constanteEntera:          CONSTANTE_OCTAL
                        | CONSTANTE_DECIMAL
                        | CONSTANTE_HEXADECIMAL
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

  fclose(yyin);

  recorrerListaSentencias(ListaSentencias);
  recorrerListaDeclaracionesVariables(ListaDeclaraciones);

  getch();

return 0;
}