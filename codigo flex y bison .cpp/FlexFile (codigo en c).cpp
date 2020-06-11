/*
fichero instrucciones.l
*/
%{
  #include <stdio.h>
  #include "y.tab.h" /* GENERADO AUTOMÁTICAMENTE POR BISON */
%}

separador ([ \t""])+
letra [a-zA-Z]
digito [0-9]
identificador {letra}({letra}|{digito})*
constEntera {digito}({digito})*

%%
{separador} {/* omitir */};
{constEntera} {printf(" constante "); return (CONSTENTERA);};
":=" {printf(" asignacion "); return (OPAS);};
"+" {printf(" suma "); return (MAS);};
{identificador} {printf(" indentificador "); return (IDENTIFICADOR);};
"(" {printf(" delim_a "); return (APAR);};
")" {printf(" delim_b "); return (CPAR);};
\n {printf(" new_line\n"); return (NL);};
. ECHO;

%%