%{
#include stdio.h
#include stdlib.h
#include "y.tab.h"
#define YYDEBUG 1
extern int yylex(void);
extern char *yytext;
extern FILE *yyin;
extern int yylineno;
%}
%token EXC
%token DOCTYPE
%token HTML
%token LANG
%token IGUAL
%token HEAD
%token META
%token CHARSET
%token UTF
%token TITLE
%token SECTION
%token DIV
%token BODY
%token P
%token H1
%token H2
%token H3
%token H4
%token H5
%token H6
%token EM
%token BR
%token HR
%token STRONG
%token UL
%token OL
%token LI
%token TABLE
%token TR
%token TD
%token TH
%token CAPTION
%token THEAD
%token TFOOT
%token TBODY
%token A
%token LA
%token LC
%token HTTP
%token HTPS
%token FTP
%token FTPS
%token SLASH
%token MARK
%token HASH
%token COMILLAS
%token ANCHO
%token ALTO
%token CLASS
%token NAME
%token JPG
%token DESCRIPTION
%token CONTENT
%token DP
%token KEYWORDS
%token SOURCE
%token ALTE
%token AUTHOR
%token ID


%start sigma

%%

sigma: EXC DOCTYPE HTML inicio

;

inicio: LA HTML LC encabezado cuerpo LA  SLASH  HTML LC
      | LA HTML LANG IGUAL {idioma} LC encabezado estcuerpo LA  SLASH  HTML LC
;

encabezado: LA HEAD LC contcabezado titulo LA  SLASH  HEAD LC
;

contcabezado: META CHARSET IGUAL UTF metacont
;

metacont: META NAME IGUAL COMILLAS DESCRIPTION COMILLAS CONTENT IGUAL {entrada}
      |   META NAME IGUAL COMILLAS KEYWORDS COMILLAS CONTENT IGUAL COMILLAS {entrada} COMILLAS
      |   META NAME IGUAL COMILLAS AUTHOR COMILLAS CONTENT IGUAL {entrada}
;

titulo: LA TITLE LC {entrada} LA  SLASH  TITLE LC
;

estcuerpo: LA BODY LC cuerpo LA  SLASH  BODY LC
;

cuerpo: seccion
      | division
      | funcion
;

seccion: LA SECTION LC division LA  SLASH  SECTION LC
      |  LA SECTION LC {entrada} LA  SLASH  SECTION LC
;

division: LA DIV LC funcion LA SLASH DIV LC
;

funcion: parrafo
      |  encabezado
      |  enlaces
      |  imagen
      |  ingreso
      |  cuerpo
      |  enlaces
      |  listas
      |  tabla
;
ingreso: {entrada}
      | enfatizadores



;
parrafo: LA P LC {entrada} LA  SLASH P LC
      |  LA P LC selector LA  SLASH P LC
;

enfatizadores : LA EM LC ingreso LA  SLASH  EM LC
      |  LA STRONG LC ingreso LA  SLASH  STRONG LC
      |  LA MARK LC ingreso LA  SLASH  MARK LC
;

encabezado : LA H1 LC {entrada} LA  SLASH  H1 LC
      |  LA H2 LC {entrada} LA  SLASH  H2 LC
      |  LA H3 LC {entrada} LA  SLASH  H3 LC
      |  LA H4 LC {entrada} LA  SLASH  H4 LC
      |  LA H5 LC {entrada} LA  SLASH  H5 LC
      |  LA H6 LC {entrada} LA  SLASH  H6 LC
;

selector : CLASS IGUAL COMILLAS {entrada} COMILLAS
      |ID IGUAL COMILLAS {entrada} COMILLAS
;

listas : LA OL LC listas LA  SLASH  OL LC
      | LA OL LC ingreso LA  SLASH  OL LC
      | LA OL LC type LA  SLASH  OL LC
      | LA OL LC type ingreso LA  SLASH  OL LC
      | LA OL LC type ingreso listas LA  SLASH  OL LC
      | LA LI LC listas LA  SLASH  LI LC
      | LA LI LC ingreso LA  SLASH  LI LC
      | LA LI LC {int} LA  SLASH  LI LC
      | LA LI LC {int} ingreso LA  SLASH  LI LC
      | LA LI LC {int} ingreso listas LA  SLASH  LI LC
      | LA UL LC listas LA  SLASH  UL LC
      | LA UL LC ingreso LA  SLASH  UL LC
      | LA UL LC ingreso listas LA  SLASH  UL LC
;

type : ingreso
      | {int}
;

table : LA TABLE LC atr tabla LA  SLASH  TABLE LC
      | LA TABLE LC tabla LA  SLASH  TABLE LC
;

atr : {entrada};

tabla :  ttr
      | tcabeza tpie tcuerpo
;

ttr : LA TR LC element LA  SLASH  TR LC
;

element : tth
      |  ttd
;

tth: LA TH LC funcion LA  SLASH  TH element
      | LA TH LC funcion LA  SLASH  TH LC
;

ttd : LA TD LC funcion LA  SLASH  TD LC
      |LA TD LC funcion SLASH TD LC
;

tcabeza : LA THEAD LC ttr LA SLASH THEAD LC
;

tpie : LA TFOOT LC ttr LA SLASH TFOOT LC
;

tcuerpo: LA TBODY LC ttr LA SLASH TBODY LC
;

enlaces: protocolo
;

protocolo : HTTP DP SLASH  SLASH dominio
      |  HTPS DP SLASH  SLASH dominio
      |  FTP DP SLASH  SLASH dominio
      |  FTPS DP SLASH  SLASH dominio
;

dominio : {entrada} DP
      |  {entrada} DP puerto
      |  {entrada} DP ruta
      |  {entrada} DP localizadorint
;

puerto : {entrada} SLASH
      |  {entrada}  SLASH  ruta
      |  {entrada}  SLASH  localizadorint
;

ruta : {entrada} HASH
      |  {entrada} HASH localizadorint
;

localizadorint : {entrada}
;

imagen : JPG SOURCE IGUAL COMILLAS {entrada} SLASH {entrada} COMILLAS
      |  JPG SOURCE IGUAL {entrada} ALTE IGUAL COMILLAS {entrada} dato COMILLAS
;

dato : ANCHO IGUAL COMILLAS {int} COMILLAS ALTO IGUAL COMILLAS {int} COMILLAS
;

%%

void  yyerror(char *s)
{
	printf ("\nError sintactico en la linea: %d\n",cont);
}

int main()
{
  yyparse();
printf("funciona");
getchar();
return 0;
}
