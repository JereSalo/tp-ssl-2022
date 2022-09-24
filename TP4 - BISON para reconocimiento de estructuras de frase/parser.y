%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int yylex();
int yyerror (char *s);
int yywrap(){
        return(1);
}
%}

%token <entero> CONSTANTE_OCTAL CONSTANTE_DECIMAL CONSTANTE_HEXADECIMAL
%token <real> CONSTANTE_REAL 
%token CONSTANTE_CARACTER
%token INT
%token DOUBLE
%token FLOAT
%token CHAR
%token LONG
%token SHORT
%token UNSIGNED
%token SIGNED
%token CONST
%token STATIC
%token STRUCT
%token ELSE
%token SWITCH
%token BREAK
%token FOR
%token VOID
%token CONTINUE
%token WHILE
%token IF
%token DO
%token CASE
%token RETURN
%token DEFAULT
%token AUTO
%token ENUM
%token REGISTER
%token TYPEDEF
%token EXTERN
%token SIZEOF
%token UNION
%token GOTO
%token VOLATILE
%token IGUALIGUAL "=="
%token DIFERENTE "!="
%token MASIGUAL "+="
%token MENOSIGUAL "-="
%token DIVISIONGUAL "/="
%token PORIGUAL "*="
%token MENORIGUAL "<="
%token MAYORIGUAL ">="
%token MASMAS "++"
%token MENOSMENOS "--"
%token AND "&&"
%token OR "||"
%token FLECHA "->"
%token LITERAL_CADENA
%token COMENTARIO_UNA_LINEA
%token COMENTARIO_VARIAS_LINEAS
%token IDENTIFICADOR

%union{
    char* cadena;
    int entero;
    float real;
}

%% /* A continuacion se encuentran las expresiones */
expresion:                expAsignacion
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
                        | expAditiva MAYORIGUAL expRelacional                               
                        | expAditiva MENORIGUAL expRelacional                               
                        | expAditiva '<' expRelacional                                      
                        | expAditiva '>' expRelacional                                     
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
                        | SIZEOF '(' nombreTipo ')'
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

%% /* A continuacion se encuentran las declaraciones */
declaracion:              espDeclaracion listaDeclaradores
                        | espDeclaracion
;

espDeclaracion:           espClaseAlmacenamiento espDeclaracion
                        | espTipo espDeclaracion
                        | espTipo
                        | calificadorTipo espDeclaracion
                        | calificadorTipo
;

listaDeclaradores:       declarador
                        | listaDeclaradores ',' declarador
;
                        
declarador:             decla
                        |decla '=' inicializador
;

inicializador:          expAsignacion
                        | '{' listaInicializadores '}'
                        | '{' listaInicializadores ',' '}'
;

listaInicializadores:   inicializador
                        | listaInicializadores ',' inicializador
;

espClaseAlmacenamiento:  TYPEDEF
                        | STATIC
                        | AUTO
                        | REGISTER
                        | EXTERN
;

espTipo:                VOID 
                        |CHAR 
                        |SHORT 
                        |INT
                        |LONG
                        |FLOAT
                        |DOUBLE
                        |SIGNED
                        |UNSIGNED
                        |structOUnion
                        |espEnum
                        |nombreTypedef
;

calificadorTipo:          CONST 
                          | VOLATILE
;

structOUnion:             structUnion IDENTIFICADOR '{' listaDeclaStruct '}'
                          | structUnion '{' listaDeclaStruct '}'
                          | structUnion IDENTIFICADOR
;

structUnion:              STRUCT 
                          | UNION
;

listaDeclaStruct:         declaracionStruct 
                          | listaDeclaStruct declacionStruct
;

declacionStruct:          listaCalificadores declaradoresStruct ';'
;

listaCalificadores:       espTipo listaCalificadores
                          | espTipo
                          | calificadorTipo listaCalificadores
                          | calificadorTipo
;

declaradoresStruct:       declaStruct
                          |declaradoresStruct ',' declaStruct
;

declaStruct:              decla 
                          |decla ':' constante
                          |':' constante
;

decla:                    puntero declaradorDirecto
                            | declaradorDirecto
;

puntero:                  '*' listaCalificadoresTipos
                          | '*'
                          | '*' listaCalificadoresTipos puntero
                          | puntero
;

listaCalificadoresTipos:   calificadorTipo
                          | listaCalificadoresTipos calificadorTipo
;

declaradorDirecto:    IDENTIFICADOR
                      | '(' decla ')'
                      | declaradorDirecto '[' constante ']'
                      | declaradorDirecto '[' ']'
                      | declaradorDirecto '(' listaTiposParametros ')'
                      | declaradorDirecto '(' listaIdentificadores ')'
                      | declaradorDirecto '(' ')'
;

listaTiposParametros:             listaTiposParametros 
                                 | listaTiposParametros ',' listaTiposParametros
;

listaParametros:                declaParametro
                                | listaTiposParametros ',' declaParametro
;

declaParametro:                 espDeclaracion decla
                                |espDeclaracion declaradorAbstracto
                                |espDeclaracion
;

listaIdentificadores:            IDENTIFICADOR
                                | listaIdentificadores ',' IDENTIFICADOR
                                
espEnum:                        ENUM IDENTIFICADOR '{' listaEnumeradores '}'
                                |ENUM '{' listaEnumeradores '}'
                                |ENUM IDENTIFICADOR
;

listaEnumeradores:              enumerador 
                                | listaEnumeradores ',' enumerador
;

enumerador:                     constEnumeracion
                                | constEnumeracion '=' constante
;

constEnumeracion:               IDENTIFICADOR
;

nombreTypedef:                  IDENTIFICADOR
;

nombreTipo:                     listaCalificadores declaradorAbstracto
                                | listaCalificadores
;

declaradorAbstracto:      puntero
                          | puntero declaradorAbstractoDirecto
                          | declaradorAbstractoDirecto
;

declaradorAbstractoDirecto:          '(' declaradorAbstracto ')' 
                                     | declaradorAbstractoDirecto '[' constante ']' 
                                     | '[' constante ']'
                                     | declaradorAbstractoDirecto '[' ']'
                                     | '[' ']'
                                     | declaradorAbstractoDirecto '(' listaTiposParametros ')'
                                     | declaradorAbstractoDirecto '(' ')'
                                     | '(' listaTiposParametros ')'
                                     | '(' ')'
;

%%







int yyerror (char *s)  /* Llamada por yyparse ante un error */
{
  printf ("%s\n", s);
}

int main ()
{

#ifdef BISON_DEBUG
        yydebug = 1;
#endif


  printf("Ingrese una expresion aritmetica en notacion polaca inversa para resolver:\n");
  yyparse();
}