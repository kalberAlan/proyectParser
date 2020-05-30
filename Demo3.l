%{
    
    /*Seccion de definiciones*/
    int yylineno = 1;
    int yytoken= 0;
    #include <stdio.h> /*Para utilizar el printf en la seccion de reglas*/
%}

%option noyywrap 
%option caseless

Ent		[ _a-zA-Z0-9]*
Atrib		([ ]*?id=\"[ a-zA-Z0-9-]*\"[ ]*?)?|([ ]*?class=\"[ a-zA-Z0-9-]*\"[ ]*?)?
Alistaol	([ ]*?type=\"[ a-zA-Z0-9]*\"[ ]*?)?
Alistali	([ ]*?value=\"[0-9]*\"[ ]*?)?
URL		ps{0,1}:\/\/[a-zA-Z0-9]*\.[a-zA-Z]*
a		([ ]*?<a[ ]*?href=)
ar		([ ]*?target=\"_blank\")|([ ]*?target=\"_parent\")|([ ]*?target=\"_self\")|([ ]*?target=\"_top\")
Prot		htt|ft
Term		.[a-z]{2,3}|:[0-9]*|[/[_a-zA-Z0-9]*]*|#[_a-zA-Z0-9]*
Pimg		http:\/\/|ftp:\/\/|https:\/\/|file:\/\/|ftps:\/\/
img		"<img src="[[/_.a-zA-Z0-9]*]*">"
Idioma		\"[a-z]*\"	
ContMeta	\"[ a-zA-Z0-9-]*\"		

%%

   /*Seccion de reglas*/
"<!DOCTYPE html>" 	         							{printf("%s", yytext);}							
"<html lang="{Idioma}">"         							{printf("%s", yytext);}							
"<head>"			 							{printf("%s", yytext);}							
"<meta charset="{ContMeta}">"    							{printf("%s", yytext);}
"<meta name="{ContMeta}" content="{ContMeta}">"						{printf("%s", yytext);}					        
"<title"{Atrib}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent}			{printf("%s", yytext);}
"</title>"			 							{printf("%s", yytext);}
"</head>"                        							{printf("%s", yytext);}
"<body>"                         							{printf("%s", yytext);}
"</body>" 			 							{printf("%s", yytext);}
"</html>"			 							{printf("%s", yytext);}
"<p"{Atrib}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent}	  			{printf("%s", yytext);}
"</p>"    	 									{printf("%s", yytext);}
"<em"{Atrib}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent}    	 		{printf("%s", yytext);}
"</em>"  	 		 						        {printf("%s", yytext);}
"<br>"          		 							{printf("%s", yytext);}
"<hr>"   			 							{printf("%s", yytext);}
"<strong"{Atrib}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent} 	 	 	{printf("%s", yytext);}
"</strong>"	 		 							{printf("%s", yytext);}
"<ul"{Atrib}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent}      	  	 	{printf("%s", yytext);}
"</ul>"		 									{printf("%s", yytext);}
"<ol"{Atrib}*{Alistaol}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent}		{printf("%s", yytext);}
"</ol>"		 		 							{printf("%s", yytext);}
"<li"{Atrib}*{Alistali}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent}		{printf("%s", yytext);}
"</li>" 	 	        							{printf("%s", yytext);}
"<table>" 	 		 							{printf("%s", yytext);}
"</table>"			 							{printf("%s", yytext);}
"<tr>"			 								{printf("%s", yytext);}
"</tr>"		                 							{printf("%s", yytext);}
"<th"{Atrib}*{Alistali}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent} 		{printf("%s", yytext);}
"</th>"				 							{printf("%s", yytext);}
"<td"{Atrib}*{Alistali}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent}		{printf("%s", yytext);}
"</td>"		 		 							{printf("%s", yytext);}
"<caption"{Atrib}*{Alistali}*(({a}{Prot}{URL}{Term}*{ar}*)*">"{Ent})?">"{Ent}	 	{printf("%s", yytext);}
"</caption>"	 		 							{printf("%s", yytext);}
"<thead>"	 		 							{printf("%s", yytext);}
"<tfoot>"	        	 							{printf("%s", yytext);}
"</tfoot>" 	 		 							{printf("%s", yytext);}
"<tbody>"        	         							{printf("%s", yytext);}
"</tbody>"        	         							{printf("%s", yytext);}
"</a>"											{printf("%s", yytext);}
{Pimg}*{img}			 							{printf("%s", yytext);}										
{Prot}{URL}{Term}*									{printf("%s", yytext);}	
 [\n]           	         							{yylineno++;}
.               		 							{printf("Caracter Invalido en la linea %d\n :", yylineno);}
%%
/*Seccion de funciones de usuario*/
int main(){
		yylex();
	        return 0; 
}