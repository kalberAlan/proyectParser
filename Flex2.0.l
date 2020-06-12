%{
/*Seccion de definiciones*/
int yylineno = 1;
int yytoken= 0;
#include <stdio.h> 
%}
%option yylineno
%option noyywrap
%option caseless

Entrada 							[ _a-zA-Z0-9]*
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
"<!DOCTYPE html>"								{return (<!DOCTYPE html>);}
"<html lang="{Idioma}">"								{retur(<html lang="{Idioma}">);}
"<head>"									{return(<head>);}
"</head>"									{return(</head>);}
"<meta name="{ContMeta}" content="{ContMeta}">"					{return(<meta name="{ContMeta}" content="{ContMeta}">);}
"<meta charset="{ContMeta}">"	{return(<meta charset="{ContMeta}">);}
"<title>"										  {return(<title>);}
"<title"										  {return(<title);}
"</title>"										{return(</title>);}
"<section>"	                  {return(<section>);}
"<section"								 	  {return(<section);}
"</section>"									{return(</section>);}
"<div>"										    {return(<div>);}
"<div "										    {return(<div);}
"</div>"										  {return(</div>);}
"<body>"										  {return(<body>);}
"</body>"									    {return(</body>);}
"<html>"										  {return(<html>);}
"</html>"									    {return(</html>);}
"<p>"										      {return(<p>);}
"<p "										      {return(<p);}
"</p>"										{return(</p>);}
"<h1>"										{return(<h1>);}
"<h2>"										{return(<h2>);}
"<h3>"										{return(<h3>);}
"<h4>"										{return(<h4>);}
"<h5>"										{return(<h5>);}
"<h6>"										{return(<h6>);}
"</h1>"										{return(</h1>);}
"</h2>"										{return(</h2>);}
"</h3>"										{return(</h3>);}
"</h4>"										{return(</h4);}
"</h5>"										{return(</h5>);}
"</h6>"										{return(</h6>);}
"<em>"										{return(<em>);}
"<em "										{return(<em);}
"</em>"										{return(</em>);}
"<br>"										{return(<br>);}
"<br "										{return(<br);}
"<hr>"										{return(<hr>);}
"<hr "										{return(<hr);}
"<strong>"								{return(<strong>);}
"<strong "								{return(<strong);}
"</strong>"								{return(</strong>);}
"<ul>"										{return(<ul);}
"<ul "										{return(<ul);}
"</ul>"										{return(</ul>);}
"<ol>"										{return(<ol>);}
"<ol "										{return(<ol);}
"</ol>"										{return(</ol>);}
"<li>"										{return(<li>);}
"<li "										{return(<li);}
"</li>"										{return(</li>);}
"<table "									{return(<table);}
"<table>"									{return(<table>);}
"</table>"								{return(</table>);}
"<tr>"										{return(<tr>);}
"</tr>"										{return(</tr>);}
"<th>"										{return(<th>);}
"</th>"										{return(</th>);}
"<td>"										{return(<td>);}
"</td>"										{return(</td>);}
"<caption>"									{return(<caption>);}
"<caption "									{return(<caption);}
"</caption>"									{return(</caption>);}
"<thead>"									{return(<thead>);}
"</thead>"									{return(</thead>);}
"<tfoot>"										{return(<tfoot>);}
"</tfoot>"									{return(</tfoot>);}
"<tbody>"									{return(<tbody>);}
"</tbody>"									{return(</tbody>);}
"<a>"										{return(<a>);}
"</a>"										{return(</a>);}
{atrib}										{return([ ]*id=\"[ a-zA-Z0-9-]*\"[ ]*|[ ]*class=\"[ a-zA-Z0-9-]*\"[ ]*);}
{Alistaol}										{return([ ]*?type=\"[ a-zA-Z0-9]*\"[ ]*);}
{Alistali}										{return([ ]*value=\"[0-9]*\"[ ]*);}
{Aimg}										{return([ ]*alt=\"[ a-zA-Z0-9]*\"[ ]*|[ ]*width=\"[ 0-9]*\"[ ]*|[ ]*height=\"[ 0-9]*\"[ ]*);}
{ar}										{return([ ]*target=\"_blank\"[ ]*)|([ ]*target=\"_parent\"[ ]*)|([ ]*target=\"_self\"[ ]*)|([ ]*target=\"_top\"[ ]*);}
{img}										{return("<img src=");}
{a}(\"[ a-zA-Z#]*\")?">"{Ent}*"</a>"							{return([ ]*<a[ ]*href= );}
/*{a}\"{Enlace}\"{ar}">"{Ent}*"</a>"							{return();}*/
{Enlace}									             	{return({Prot}{URL}{Term}*);}
">"									                  	{return(>);}
{Ent}										;
[ ]*
[\n]           	         							{yylineno++;}
.               								{printf("Caracter Invalido en la linea %d (%s)\n", yylineno, yytext);}
%%