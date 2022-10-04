%{

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#define YYDEBUG 1

FILE* yyin;

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
%token <cadena> IDENTIFICADOR
%token LITERAL_CADENA
%token COMENTARIO_UNA_LINEA COMENTARIO_VARIAS_LINEAS

%start input

%union{
    char* cadena;
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

parametrosPrototipo:      tipoDeDato                                            {printf("[DECLARACION]\n");}
                        | tipoDeDato ',' parametrosPrototipo                    {printf("[DECLARACION]\n");}
;

funciones:                VOID IDENTIFICADOR '(' ')' sentencia
                        | VOID IDENTIFICADOR '(' parametrosFuncion ')' sentencia
                        | tipoDeDato IDENTIFICADOR '(' ')' sentencia
                        | tipoDeDato IDENTIFICADOR '(' parametrosFuncion ')' sentencia      
;

parametrosFuncion:        tipoDeDato IDENTIFICADOR                              {printf("[DECLARACION]\n");}
                        | tipoDeDato IDENTIFICADOR ',' parametrosFuncion        {printf("[DECLARACION]\n");}
;


/*==============================================SENTENCIAS===========================================*/
/* conflictos: 1 desplazamiento/reducción (En sentElse)*/

sentencia:                sentExpresion
                        | sentCompuesta                                         {printf("[SENT. COMPUESTA]\n");}
                        | sentSeleccion                                         {printf("[SENT. SELECCION]\n");}
                        | sentIteracion                                         {printf("[SENT. ITERACION]\n");}
                        | sentEtiquetado                                        {printf("[SENT. ETIQUETADO]\n");}
                        | sentSalto                                             {printf("[SENT. SALTO]\n");}
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
                        | SWITCH '(' expresion ')' sentencia                    {printf("Switch ");}
;

sentElse:                 /* vacio */                                           {printf("If sin Else ");}
                        | ELSE sentencia                                        {printf("If con Else ");}
;

sentIteracion:            WHILE '(' expresion ')' sentencia                     {printf("While ");}
                        | DO line WHILE '(' expresion ')' ';'                   {printf("DoWhile ");}
                        | FOR '(' cuerpoFor ')' sentencia                       {printf("For ");}
;

cuerpoFor:                declaracionFor ';' expresion ';' expresion
                        | ';' expresion ';' expresion
                        | declaracionFor ';' ';' expresion
                        | declaracionFor ';' expresion ';'
                        | ';' ';' expresion
                        | declaracionFor ';' ';'
                        | ';' ';'
;

declaracionFor:           tipoDeDato variasVariables                            {printf("[DECLARACION]\n");}
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
/* conflictos: 9 desplazamiento/reducción */

declaracion:              espDeclaracion variasVariables
                        | espDeclaracion
;

espDeclaracion:           espAlmacenamiento tipoDeDato IDENTIFICADOR ';'
                        | espAlmacenamiento calificadorTipo tipoDeDato IDENTIFICADOR ';'
                        | espAlmacenamiento espStructUnion IDENTIFICADOR ';'
                        | espAlmacenamiento espEnum IDENTIFICADOR ';'
                        | calificadorTipo declaraciones ';'
                        | calificadorTipo ';'
                        | declaraciones ';'
;

variasVariables:          inicializacion
                        | variasVariables inicializacion
;

inicializacion:           IDENTIFICADOR ',' {printf("Se declara el identificador %s de tipo %s \n", $<cadena>1, tipo);} inicializacion
		                    | IDENTIFICADOR '=' expresion ',' {printf("Se declara el identificador %s de tipo %s \n", $<cadena>1, tipo);} inicializacion
		                    | IDENTIFICADOR '=' expresion {printf("Se declara el identificador %s de tipo %s \n", $<cadena>1, tipo);}
                        | IDENTIFICADOR {printf("Se declara el identificador %s de tipo %s \n", $<cadena>1, tipo);}
;

espAlmacenamiento:        TYPEDEF
                        | STATIC
                        | AUTO
                        | REGISTER
                        | EXTERN
;

declaraciones:            tipoDeDato variasVariables
                        | SIGNED tipoDeDato variasVariables
                        | SIGNED variasVariables
                        | UNSIGNED tipoDeDato variasVariables
                        | UNSIGNED variasVariables
                        | espStructUnion
                        | espEnum
;

tipoDeDato:               CHAR                                                  {strcpy(tipo,$<cadena>1);}
	                      | DOUBLE                                                {strcpy(tipo,$<cadena>1);}
	                      | FLOAT                                                 {strcpy(tipo,$<cadena>1);}
	                      | INT                                                   {strcpy(tipo,$<cadena>1);}
	                      | LONG                                                  {strcpy(tipo,$<cadena>1);}
	                      | SHORT                                                 {strcpy(tipo,$<cadena>1);}
;

calificadorTipo:          CONST                                                 {printf("Const ");}
                        | VOLATILE                                              {printf("Volatile ");}
;

espStructUnion:           STRUCT IDENTIFICADOR '{' declaracionesStruct '}'      {printf("Struct ");}
                        | STRUCT '{' declaracionesStruct '}'                    {printf("Struct ");}
                        | UNION IDENTIFICADOR '{' declaracionesStruct '}'       {printf("Union ");}
                        | UNION '{' declaracionesStruct '}'                     {printf("Union ");}
;

declaracionesStruct:      tipoDeDato variasVariablesStruct ';'
                        | tipoDeDato variasVariablesStruct ';' declaracionesStruct
;

variasVariablesStruct:    inicializacionStruct
                        | variasVariablesStruct inicializacionStruct
;

inicializacionStruct:     IDENTIFICADOR ',' inicializacionStruct
		                    | IDENTIFICADOR
;

espEnum:                  ENUM IDENTIFICADOR '{' listaIdentificadores '}'       {printf("Enum ");}
;

listaIdentificadores:     IDENTIFICADOR ',' listaIdentificadores
                        | IDENTIFICADOR
;

/*=============================================EXPRESIONES=============================================*/
/* No hay conflictos */

expresion:                expAsignacion                                         {printf("[SENT. EXPRESION]");}
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

  getch();
  fclose(yyin);

return 0;
}


/* Notas: Terminar declaraciones y ver conflicto en sentElse */