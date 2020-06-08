************************
Ejemplos de uso de color
************************

Negro: \033[30m
Rojo: \033[31m
Verde: \033[32m
Amarillo: \033[33m
Azul: \033[34m
Morado: \033[35m
Turquesa: \033[36m
Blanco: \033[37m

En cuanto al estilo, encontramos:

Negrita: \033[1m
Cursiva: \033[3m
Subrayado: \033[4m
Tachado: \033[9m

Ejemplo: printf("\033[31m!Hola, \033[34mmundo!");

***********
Estructura
***********
src/ (source for the application)
lib/ (source for the application library *.cpp *.hpp)
include/ (interface for the library *.h)
tests/ (main.cpp for quick tests) <- use cppunit for this part
doc/ (doxygen or any kind of documentation)

src/
headers/