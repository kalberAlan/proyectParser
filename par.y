%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
#define YYDEBUG 1
extern int yylex(void);
extern char *yytext;
extern FILE *yyin;
extern int yylineno;
%}
        /*TOKENS TERMINALES*/

%token <!DOCTYPE html>
%token <html lang=es>
%token <head>
%token </head>
%token <meta charset=UTF-8>
%token <title>
%token </title>
%token <section>
/*%token <section*/
%token </section>
%token <div>
/*%token <div*/
%token </div>
%token <body>
%token </body>
%token <html>
%token </html>
%token <p>
/*%token <p*/
%token <p/>
%token <h1>
%token <h2>
%token <h3>
%token <h4>
%token <h5>
%token <h6>
%token </h1>
%token </h2>
%token </h3>
%token </h4>
%token </h5>
%token </h6>
%token <em>
/*%token <em*/
%token </em>
%token <br>
/*%token <br*/
%token <hr>
/*%token <hr*/
%token <strong>
/*%token <strong*/
%token </strong>
%token <ul>
/*%token <ul*/
%token </ul>
%token <ol>
%token </ol>
%token <li>
/*%token <li*/
%token </li>
%token <table>
%token </table>
%token <tr>
%token </tr>
%token <td>
%token </td>
%token <caption>
%token </caption>
%token <thead>
%token </thead>
%token <tfoot>
%token </tfoot>
%token <tbody>
%token </tbody>
%token <a>
%token </a>
%token '>'

%start sigma
%%
/*Reglas gramaticales*/

          sigma: <!DOCTYPE html>INICIO {return 0;}

          ;

          INICIO: <html> IDIOMA  ENCABEZADO CUERPO </html>;

          IDIOMA: lang=" INGRESO ";

          INGRESO: <TEXTO>
                |  <URL>
                |  <NUMERO>
                |  ENFATIZADORES
          ;

          ENCABEZADO: <head> CONTCABEZADO TITULO </head>;

          CONTCABEZADO: <meta charset= "UTF-8"><METACONT>;

          METACONT: <meta name= "description" content= "INGRESO">
                |   <meta name= "keywords" content= "INGRESO">
                |   <meta name= "author" content= "INGRESO">
          ;

          TITULO: <title> INGRESO </title>;

/*CUERPO*/
/*Etiquetas de parrafo*/

          BODY: <body> CUERPO </body> ;

          CUERPO: SECTION
                | DIVISION
                | FUNCION
          ;

          SECTION: <section> DIVISION </section>
                |  <section> INGRESO </section>
          ;

          FUNCION: PARRAFO
                |  ENCABEZADO
                |  mark
                |  ENLACES
                |  IMAGEN
                |  INGRESO
                |  CUERPO
                |  ENLACES
                |  LISTA
                |  TABLA
          ;

          PARRAFO: <p> INGRESO </p>
                |  <p> SELECTOR </p>
          ;

          ENFATIZADORES: <em> INGRESO </em>
                |  <strong> INGRESO </strong>
                |  <mark> INGRESO </mark>
          ;

          ENCABEZADO: <h1> INGRESO </h1>
                |  <h2> INGRESO </h2>
                |  <h3> INGRESO </h3>
                |  <h4> INGRESO </h4>
                |  <h5> INGRESO </h5>
                |  <h6> INGRESO </h6>
          ;

          SELECTOR: class= " INGRESO "
                |id= " INGRESO "
          ;

/*Listas*/

          LISTAS: <ol> LISTAS </ol>
                | <ol> INGRESO </ol>
                | <ol> TYPE </ol>
                | <ol> TYPE INGRESO </ol>
                | <ol> TYPE INGRESO LISTAS </ol>
                | <li> LISTAS </li>
                | <li> INGRESO </li>
                | <li> VALUE </li>
                | <li> VALUE INGRESO </li>
                | <li> VALUE INGRESO LISTAS </li>
                | <ul> LISTAS </ul>
                | <ul> INGRESO </ul>
                | <ul> INGRESO LISTAS </ul>
          ;

          TYPE: INGRESO
                | Nro
                | ROMAN
                | roman
          ;

          VALUE: int;

/*Tablas*/

          TABLE:  <table ATR> TABLA </table>
                | <table> TABLA </table>
          ;

          ATR: TEXTO;

          TABLA:  TR
                | THEAD TFOOT TBODY
                | CAPTION TR
                | CAPTION THEAD TFOOT TBODY
          ;

          TR: <tr> ELEMENT </tr>;

          ELEMENT: TH
                |  TD
          ;

          TH:     <th> FUNCION </th> ELEMENT
                | <th> FUNCION </th>
          ;

          TD:     <td>FUNCION</td>
                | <td>FUNCION</td> TD
          ;

          THEAD: <thead> TR </thead> ;

          TFOOT: <tfoot> TR </tfoot> ;

          TBODY: <tbody> TR </tbody> ;

/*ENLACES*/

          PROTOCOLO: http://DOMINIO
                |  https://DOMINIO
                |  ftp://DOMINIO
                |  ftps://DOMINIO
          ;

          DOMINIO: TEXTO :
                |  TEXTO : PUERTO
                |  TEXTO : RUTA
                |  TEXTO : LOCALIZADORINT
          ;

          PUERTO: TEXTO /
                |  TEXTO / RUTA
                |  TEXTO / LOCALIZADORINT
          ;

          RUTA: TEXTO #
                |  TEXTO # LOCALIZADORINT
          ;

          LOCALIZADORINT: TEXTO;

/*Imagen*/

          IMAGEN:  <img src= “TEXTO/TEXTO”>
                |  <img src= TEXTO alt= “TEXTO DATO”>
          ;

          DATO: width=”NRO” heigth= “NRO”

%%

/*CODIGO USUARIO*/

void  yyerror(char *s)
{
	printf ("\nError sintactico en la linea: %d\n",cont);
}

int main (int argc, char *argv[])
{
    if (argc == 2)
    {
    	yyin = fopen (argv[1], "rt");
    	if (yyin == NULL)
    	{
    		printf ("El archivo %s no se puede abrir\n", argv[1]);
    		exit (-1);
    	}
    }
    else
    {
        printf("|----------------------------------------------------------|\n");
        printf("|       Analizador Sintactico y lexico   v0.01             |\n");
        printf("|----------------------------------------------------------|\n\n\n");
        printf("Seleccione como desea cargar su codigo a ser analizado:\n");
        printf("     (1) Desde la terminal\n");
        printf("     (2) Desde un archivo externo\n\n");
        printf("Ud ha seleccionado: ");
        char opc;
        scanf ("%c",&opc);
        switch (opc){
            case '1':
            {
                printf("\nIngrese el codigo por teclado:\n\n");
                yyin=stdin;
                    if (!yyparse())
    				{
    					printf ("|----------------------------------------------------------|\n");
    					printf ("|                                                          |\n");
                        		printf ("|          El analisis se completo sin errores             |\n");
		   			printf ("|                                                          |\n");
		   			printf ("|----------------------------------------------------------|\n");
						getch();
					}

    				else
     				{
     					printf("\nSu codigo posee un error en la linea: %i\n",yylineno-1);
	 				}

                break;
            }
            case '2':
            {

                 printf("Ingrese el nombre o ruta del archivo para su analisis: \n");
                 char nombrearchivo[200];
                 scanf ("%s",nombrearchivo);
                 printf("\n\n");
                 yyin=fopen(nombrearchivo,"rt");
                 if (yyin == NULL)
             	{
             		printf ("El archivo %s no se puede abrir\n", nombrearchivo);
             		printf ("Vuelva mas tarde\n", nombrearchivo);
             		printf ("BUEN DIA\n",nombrearchivo);
             		exit (-1);
             	}
             	    if (!yyparse())
    			{
    			printf ("|----------------------------------------------------------|\n");
                        printf ("|                                                          |\n");
                        printf ("|          El analisis se completo sin errores             |\n");
                        printf ("|                                                          |\n");
                        printf ("|----------------------------------------------------------|\n");
						getch();
				}

    				else
     			{
     					printf("\nSu codigo posee un error en la linea: %i\n",yylineno);
	 			}

            break;
            }
            default: return 0;
        }

    }
    getch();

    return 0;
  }
