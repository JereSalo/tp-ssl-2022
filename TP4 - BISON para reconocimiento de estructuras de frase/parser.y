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
%token MENORIGUAL "<="
%token MAYORIGUAL ">="
%token MASMAS "++"
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

%% /* A continuacion las reglas gramaticales y las acciones */


num:          CONSTANTE_OCTAL               {printf("Octal\n");}
            | CONSTANTE_DECIMAL             {printf("Decimal\n");}
            | CONSTANTE_HEXADECIMAL         {printf("Hexadecimal\n");}
            | CONSTANTE_REAL                {printf("Real\n");}
;


expPrimaria:    IDENTIFICADOR |
                constante |
                LITERAL_CADENA
                

constante:      num | 
                CONSTANTE_CARACTER




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