%{
    
    /*Seccion de definiciones*/
    int yylineno = 1;
    int yytoken= 0;
    #include <stdio.h> /*Para utilizar el printf en la seccion de reglas*/
%}

%option noyywrap 

LETRASNUM   [0-9a-zA-Z]*

%%

   /*Seccion de reglas*/
"<!DOCTYPE html>" 	         {printf("Reconocido Documento HTML en linea: %d\n", yylineno);}
"<html lang=es>"  		 {printf("Reconocido apertura de html en la linea: %d\n", yylineno);}
"<head>"			 {printf("Reconocido apertura de head en la linea: %d\n", yylineno);}
"<meta charset=UTF-8>"	         {printf("Reconocido meta en la linea: %d\n", yylineno);}
"<title>"			 {printf("Reconocido apertura de title en la linea: %d\n", yylineno);}
"</title>"			 {printf("Reconocido cierre de title en la linea: %d\n", yylineno);}
"</head>"                        {printf("Reconocido cierre de head en la linea: %d\n", yylineno);}
"<body>"                         {printf("Reconocido la apertura de body en la linea: %d\n", yylineno);}
"</body>" 			 {printf("Reconocido el cierre de body en la linea: %d\n", yylineno);}
"</html>"			 {printf("Reconocido el cierre de documento HTML en la linea: %d\n", yylineno);}
"<p>"	  			 {printf("Apertura de parrafo en la linea: %d\n", yylineno);}
"</p>"    	 		 {printf("Cierre de parrafo en la linea: %d\n", yylineno);}
"<em>"    	 		 {printf("Apertura de parrafo enfatizado de cursiva en la linea: %d\n", yylineno);}
"</em>"  	 		 {printf("Cierre de parrafo en la linea: %d\n", yylineno);}
"<br>"          		 {printf("Etiqueta de salto en la linea: %d\n", yylineno);}
"<hr>"   			 {printf("Etiqueta de salto y enmarcado en la linea: %d\n", yylineno);}
"<strong>" 	 		 {printf("Apertura de enfasis fuerte en la linea: %d\n", yylineno);}
"</strong>"	 		 {printf("Cierre de enfasis fuerte en la linea: %d\n", yylineno);}
"<ul>"      	 		 {printf("Apertura de viñeta en la linea: %d\n", yylineno);}
"</ul>"		 		 {printf("Cierre de viñeta en la linea: %d\n", yylineno);}
"<ol>"		 		 {printf("Apertura de lista numerica en la linea: %d\n", yylineno);}
"</ol>"		 		 {printf("Cierre de lista numerica en la linea: %d\n", yylineno);}
"<li>"		 		 {printf("Apertura de item en la linea: %d\n", yylineno);}
"</li>" 	 	         {printf("Cierre de item en la linea: %d\n ", yylineno);}
"<table>" 	 		 {printf("Apetura de tabla en la linea: %d\n", yylineno);}
"</table>"			 {printf("Cierre de la tabla en la linea: %d\n", yylineno);}
"<tr>"			         {printf("Apertura de indicador de fila en la linea: %d\n", yylineno);}
"</tr>"				 {printf("Cierre del indicador de fila en la linea: %d\n", yylineno);}
"<th>" 		 		 {printf("Apertura de cabecera en la linea: %d\n", yylineno);}
"</th>"				 {printf("Cierre de cabecera en la linea: %d\n", yylineno);}
"<td>"		 	   	 {printf("Apertura de elemento de tabla en la linea: %d\n", yylineno);}
"</td>"		 		 {printf("Cierre de elemento de tabla en la linea: %d\n", yylineno);}
"<caption>"	 		 {printf("Apertura de titulo de tabla en la linea: %d\n", yylineno);}
"</caption>"	 		 {printf("Cierre de titulo de tabla en la linea: %d\n", yylineno);}
"<thead>"	 		 {printf("Apertura de cabecera de tabla en la linea: %d\n", yylineno);}
"<tfoot>"	        	 {printf("Apertura de pie de tabla en la linea: %d\n", yylineno);}
"</tfoot>" 	 		 {printf("Cierre de pie de tabla en la linea: %d\n", yylineno);}
"<tbody>"        	         {printf("Apertura de cuerpo de la tabla en la linea: %d\n", yylineno);}
"</tbody>"        	         {printf("Cierre de cuerpo de la tabla en la linea: %d\n", yylineno);}
{LETRASNUM}			 {printf("Reconociendo Caracteres de entrada: \n"); }
 [\n]           	         {yylineno++;}
%%
/*Seccion de funciones de usuario*/
int main(){
		yylex();
	        return 0; 
}