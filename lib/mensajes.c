#include <stdio.h>
#include "mensajes.h"

void fDevuelveNombreMetodoEjecutandose(const char* pFile, const char* pMetodo )
{
  printf("\nEjecutando: Clase-> %s\n", pFile);
  printf("            Metodo-> %s\n", pMetodo);
}

void fDevuelveNombreMetodoEjecutandoseColor(
const char* pFile, const char* pMetodo )
{
  //printf("\n\%s Ejecutando: Clase-> %s\n", COLORTEXTO, pFile);
  printf("            Metodo-> %s\n", pMetodo);

  //printf("\033[31m!Hola, \033[34mmundo!");
}