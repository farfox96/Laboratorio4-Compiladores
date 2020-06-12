# Laboratorio4-Compiladores
Analizador Lexico-Sintactico con Flex/Bison/MinGW  
por: Jesus De Gracia 8-1086-1646 
     Daniel Gonzalez 8-907-1404
     
     
 - Añadimos carpeta con todos los archivos (LAB4)
 - Subimos los 2 codigos fuente en .cpp 
 - Galeria de imagenes con orden numerico del proceso de instalacion (cada imagen tiene como nombre su descripcion)
 - Adjuntamos por separado el laboratorio4.exe (ejecutable) para facilidad de descarga
 
  Entre los cambios hechos al codigo podemos mencionar:
  
 - Personalizacion del codigo para detallar participantes y mensajes para mejor interpretacion del usuario.
 - Arreglos de compatibilidad como int main() y return 0.
 - Añadimos getchar para poder ver los mensajes cuando sale syntax error.
 - Agregamos un mensaje de salida con la tecla "Enter": para poder elegir cuando salir.
 - Durante el gcc nos salen 3 advertencias pero que no afectan el proceso ya que son correciones implicitas.
 
# [Proceso de compilación:]
 
 El código "FlexFile.l" es el que está vinculado a flex, su compilación se hace mediante el comando:
     flex FlexFile.l
 lo cual generará un fichero de nombre lex.yy.c 
 
 A continuación utilizamos el bison con el archivo "BisonFile.y"
     bison -yd BisonFile.y
 Lo cual nos generará los archivos:
     y.tab.c
     y.tab.h
 finalmente para compilar el código y ejecutarlo utilizamos gcc con el cual fue instalado en el MinGW Developer Studio, cuyo comando 
 es:
     gcc y.tab.c lex.yy.c -lfl -o Lab4
     
     la opción "lfl" vinculará el objeto creado con las librerías necesarias del Flex para su correcta ejecución
     la opción -o cambiará el nombre por defecto al archivo de salida, por "Lab4"
 Una vez ejecutado, esto creará un ejecutable "Lab4.exe", que se puede abrir en una terminal de comandos (cmd)    
 
# [Funcionalidad del laboratorio:]
 el archivo que se genera leerá el formato de asignación similar al el usado en ALGOL, la cual está determinado
 por el archivo asociado a BISON, mientras que el FLEX se encargará de verificar que los tokens sean válidos donde
 un ejemplo válido de entrada seria:
     b2 := a1 + c3 + 5
 dado que originalmente no mostraba ningún tipo de salida, decidimos cambiarlo para que al menos mostrara lo que leía
 mostrando, pues, algunos de los tokens que leía el flex.
 
 Si no habia error el programa continuaba de manera correcta y podía introducirse otra entrada una vez más. Sin embargo si la entrada era errónea, este marcaría como error y posteriormente saliendo del programa
 
 
 
 
 
