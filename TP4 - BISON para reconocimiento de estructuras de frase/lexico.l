/* =====================    O P C I O N E S     ===================== */

%option noyywrap
/* yylineno: Utilizado para obtener el numero de linea */
%option yylineno

/* =====================    D E F I N I C I O N E S     ===================== */
%{

#include "parser.tab.h"

%}

/* =====================    A L I A S      ===================== */

CONSTANTE_DECIMAL               [1-9][0-9]*
CONSTANTE_OCTAL                 0[0-7]*
CONSTANTE_HEXADECIMAL           0[xX][0-9A-Fa-f]+
CONSTANTE_REAL                  [0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?|[0-9]+\.([eE][\+\-]?[0-9]+)?|[0-9]([eE][\+\-]?[0-9]+)?
CONSTANTE_CARACTER              '.'
LITERAL_CADENA                  \".*\"
IDENTIFICADOR                   [_a-zA-Z][_a-zA-Z0-9]*
COMENTARIO_UNA_LINEA            \/\/.*
COMENTARIO_VARIAS_LINEAS        \/\*[^\*\/]*\*\/

/* =====================    R E G L A S    ===================== */

%%
"{"                                     {return '{';}
"}"                                     {return '}';}
"="                                     {return '=';}
"<"                                     {return '<';}
">"                                     {return '>';}
"+"                                     {return '+';}
"-"                                     {return '-';}
"*"                                     {return '*';}
"/"                                     {return '/';}
"%"                                     {return '%';}
";"                                     {return ';';}
":"                                     {return ':';}
"("                                     {return '(';}
")"                                     {return ')';}
","                                     {return ',';}
"."                                     {return '.';}
"?"                                     {return '?';}
"!"                                     {return '!';}
"["                                     {return '[';}
"]"                                     {return ']';}
"&"                                     {return '&';}

"=="                                    {return IGUALIGUAL;}
"!="                                    {return DIFERENTE;}
"+="                                    {return MASIGUAL;}
"-="                                    {return MENOSIGUAL;}
"*="                                    {return PORIGUAL;}
"/="                                    {return DIVISIONGUAL;}
"<="                                    {return MENORIGUAL;}
">="                                    {return MAYORIGUAL;}
"++"                                    {return MASMAS;}
"--"                                    {return MENOSMENOS;}
"&&"                                    {return AND;}
"||"                                    {return OR;}
"->"                                    {return FLECHA;}

"\n"                                    {return '\n';}
"\t"
" "


int                                     {return INT;}
double                                  {return DOUBLE;}
float                                   {return FLOAT;}
char                                    {return CHAR;}
long                                    {return LONG;}
short                                   {return SHORT;}
unsigned                                {return UNSIGNED;}
signed                                  {return SIGNED;}
const                                   {return CONST;}
static                                  {return STATIC;}
struct                                  {return STRUCT;}


else                                    {return ELSE;}
switch                                  {return SWITCH;}
break                                   {return BREAK;}
for                                     {return FOR;}
void                                    {return VOID;}
continue                                {return CONTINUE;}
while                                   {return WHILE;}
if                                      {return IF;}
do                                      {return DO;}
case                                    {return CASE;}
return                                  {return RETURN;}
default                                 {return DEFAULT;}


auto                                    {return AUTO;}
enum                                    {return ENUM;}
register                                {return REGISTER;}
typedef                                 {return TYPEDEF;}
extern                                  {return EXTERN;}
sizeof                                  {return SIZEOF;}
union                                   {return UNION;}
goto                                    {return GOTO;}
volatile                                {return VOLATILE;}


{CONSTANTE_OCTAL}                       {return CONSTANTE_OCTAL;}
{CONSTANTE_DECIMAL}                     {return CONSTANTE_DECIMAL;}
{CONSTANTE_HEXADECIMAL}                 {return CONSTANTE_HEXADECIMAL;}
{CONSTANTE_REAL}                        {return CONSTANTE_REAL;}
{CONSTANTE_CARACTER}                    {return CONSTANTE_CARACTER;}
{IDENTIFICADOR}                         {yylval.cadena=yytext; return IDENTIFICADOR;}
{LITERAL_CADENA}                        {return LITERAL_CADENA;}
{COMENTARIO_UNA_LINEA}                  {return COMENTARIO_UNA_LINEA;}
{COMENTARIO_VARIAS_LINEAS}              {return COMENTARIO_VARIAS_LINEAS;}

%%