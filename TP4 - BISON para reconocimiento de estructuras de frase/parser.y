%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int yylex();
int yyerror (char *s);
int yywrap(){
return(1);
}
%}


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


%union{
    char* cadena;
    int entero;
    float real;
}

%% /* A continuacion las reglas gramaticales y las acciones */

input:    /* vacio */
        | input line
;

line:     '\n'
        | exp '\n'  { printf ("\t %d\n", $1); }
;

exp:      NUM             { $$ = $1;         }
        | exp exp '+'     { $$ = $1 + $2;    }
        | exp exp '-'     { $$ = $1 - $2;    }
        | exp exp '*'     { $$ = $1 * $2;    }
        | exp exp '/'     { $$ = $1 / $2;    }
        | exp exp '^'     { $$ = pow ($1, $2); }

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


