%{
    
    /*Seccion de definiciones*/
    int yylineno = 1;
    int yytoken= 0;
    #include <stdio.h> /*Para utilizar el printf en la seccion de reglas*/
%}

%option noyywrap 
%option caseless 

Ent 							[ _a-zA-Z0-9]*
atrib							([ ]*id=\"[ a-zA-Z0-9-]*\"[ ]*|[ ]*class=\"[ a-zA-Z0-9-]*\"[ ]*)
Alistaol						([ ]*?type=\"[ a-zA-Z0-9]*\"[ ]*)
Alistali						([ ]*value=\"[0-9]*\"[ ]*)
Aimg							([ ]*alt=\"[ a-zA-Z0-9]*\"[ ]*|[ ]*width=\"[ 0-9]*\"[ ]*|[ ]*height=\"[ 0-9]*\"[ ]*)
img							("<img src=")
Prot							(htt|ft)
a							([ ]*<a[ ]*href=)
URL							ps{0,1}:\/\/[a-zA-Z0-9]*\.[a-zA-Z]*
ar							([ ]*target=\"_blank\"[ ]*)|([ ]*target=\"_parent\"[ ]*)|([ ]*target=\"_self\"[ ]*)|([ ]*target=\"_top\"[ ]*)
Term							.[a-z]{2,3}|:[0-9]*|[/[_a-zA-Z0-9]*]*|#[_a-zA-Z0-9]*
Enlace							({Prot}{URL}{Term}*)
ContMeta						\"[ ,.:;_a-zA-Z0-9-]*\"
Idioma							\"[a-z]*\"	

%%
"<!DOCTYPE html>"								{printf("Apertura de documento HTML %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<html lang="{Idioma}">"								{printf("Apertura de html con su idioma: %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<head>"									{printf("Apertura de head %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</head>"									{printf("Cierre de head %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<meta name="{ContMeta}" content="{ContMeta}">"					{printf("Se encontro un meta name %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<meta charset="{ContMeta}">"							{printf("Se encontro un meta charset %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<title>"										{printf("Apertura de title %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<title"										{printf("Apertura de title con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</title>"										{printf("Cierre de title %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<section>"									{printf("Apertura de Section %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<section"									{printf("Apertura de Section con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</section>"									{printf("Cierre de Section %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<div>"										{printf("Apertura de div %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<div "										{printf("Apertura de div con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</div>"										{printf("Cierre de div %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<body>"										{printf("Apertura de body %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</body>"									{printf("Cierre de body %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<html>"										{printf("Apertura de html %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</html>"									{printf("Cierre de html %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<p>"										{printf("Apertura de parrafo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<p "										{printf("Apertura de parrafo con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</p>"										{printf("Cierre de parrafo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<h1>"										{printf("Apertura de h1 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<h2>"										{printf("Apertura de h2 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<h3>"										{printf("Apertura de h3 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<h4>"										{printf("Apertura de h4 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<h5>"										{printf("Apertura de h5 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<h6>"										{printf("Apertura de h6 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}	
"</h1>"										{printf("Cierre de h1 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</h2>"										{printf("Cierre de h2 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</h3>"										{printf("Cierre de h3 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</h4>"										{printf("Cierre de h4 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</h5>"										{printf("Cierre de h5 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</h6>"										{printf("Cierre de h6 %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<em>"										{printf("Apertura de em %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<em "										{printf("Apertura de em con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</em>"										{printf("Cierre de em %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<br>"										{printf("Apertura de br %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<br "										{printf("Apertura de br con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<hr>"										{printf("Apertura de hr %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<hr "										{printf("Apertura de hr con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<strong>"									{printf("Apertura de strong %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<strong "									{printf("Apertura de strong con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</strong>"									{printf("Cierre de string %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<ul>"										{printf("Apertura de ul %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<ul "										{printf("Apertura de ul con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</ul>"										{printf("Cierre de ul %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<ol>"										{printf("Apertura de ol %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<ol "										{printf("Apertura de ol con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</ol>"										{printf("Cierre de ol %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<li>"										{printf("Apertura de li %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<li "										{printf("Apertura de li con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</li>"										{printf("Cierre de li %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<table "										{printf("Apertura de table con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<table>"									{printf("Apertura de table %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</table>"									{printf("Cierre de table %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<tr>"										{printf("Apertura de tr %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</tr>"										{printf("Cierre de tr %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<th>"										{printf("Apertura de th %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</th>"										{printf("Cierre de th %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<td>"										{printf("Apertura de td %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</td>"										{printf("Cierre de td %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<caption>"									{printf("Apertura de caption %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<caption "									{printf("Apertura de caption con atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</caption>"									{printf("Cierre de caption %s en la linea %d \n", yytext, yylineno ); printf("...\n");}	
"<thead>"									{printf("Apertura de thead %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</thead>"									{printf("Cierre de thead %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<tfoot>"										{printf("Apertra de tfoot %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</tfoot>"									{printf("Cierre de tfoot %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<tbody>"									{printf("Apertura de tbody %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"</tbody>"									{printf("Cierre de tbody %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
"<a>"										{printf("Apertura de a %s en la linea %d \n", yytext, yylineno ); printf("...\n");}	
"</a>"										{printf("Cierre de a %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
{atrib}										{printf("Se encontro un atributo %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
{Alistaol}										{printf("Se encontro un atributo de lista ol %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
{Alistali}										{printf("Se encontro un atributo de lista li%s en la linea %d \n", yytext, yylineno ); printf("...\n");}
{Aimg}										{printf("Se encontro un atributo de imagen %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
{ar}										{printf("Se encontro un atributo para enlace %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
{img}										{printf("Se econtro una imagen %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
{a}(\"[ a-zA-Z#]*\")?">"{Ent}*"</a>"							{printf("Se encontro un enlace con etiqueta a %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
{a}\"{Enlace}\"{ar}">"{Ent}*"</a>"							{printf("Se econtro un enlace con etiqueta a %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
{Enlace}										{printf("Se encontro un enlace %s en la linea %d \n", yytext, yylineno ); printf("...\n");}
">"										{printf("Cierre de etiqueta %s en la linea %d \n", yytext, yylineno ); printf("...\n");}	
{Ent}										;
[ ]*
[\n]           	         							{yylineno++;}
.               								{printf("Caracter Invalido en la linea %d (%s)\n", yylineno, yytext);}

%%

/*Seccion de funciones de usuario*/
int main(){
printf("Analizador Lexico!  \t\n");
printf("Por favor ingrese por teclado su codigo: \t\n ");
		yylex();
	        return 0; 
}