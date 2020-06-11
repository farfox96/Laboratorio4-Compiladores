%{
/* fichero instrucciones.y */
#include <stdio.h>
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
 
  //void yyerror(const char *s);


%}

%token IDENTIFICADOR OPAS CONSTENTERA NL MAS APAR CPAR
%start instrucciones


%%
instrucciones : instrucciones instruccion 
              | instruccion
;

instruccion : IDENTIFICADOR OPAS expresion NL
;

expresion : termino
          | expresion MAS termino

termino : IDENTIFICADOR
        | CONSTENTERA
;
        | APAR expresion CPAR
;
%%



void yyerror (s) /* Llamada por yyparse ante un error */
  char *s;
{
printf ("%s\n", s); /* Esta implementación por defecto nos valdra */
/* Si no creamos esta funcion, habra que enlazar con ly en el
momento de compilar para usar una implementacion por defecto */
 printf ("Ingrese Enter para salir: ");
getchar();
}

int main()
{
printf (" -- Bienvenidos al Laboratorio 4 de Diseno de Compiladores -- \n");
printf (" - Ejemplo de analizador lexico-sintactico con Flex/Bison - \n");
printf (" - Realizado por Jesus De Gracia y Daniel Gonzalez -\n");
printf ("Cadena admitida por el analizador para usarla de ejemplo valido: a1:=5+a2\n\n");
  //Acciones a ejecutar antes del analisis
  printf ("\n\nIngrese valores para analizar >>\n ");
  yyparse();
 
  //Acciones a ejecutar después del analisis

 }
