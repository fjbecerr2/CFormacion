#include <stdio.h>
#include "mensajes.h"

//VERSION 1.0

const char BLANCO[] = "\033[37m";
const char VERDE[] ="\033[32m";

void fDevuelveNombreMetodoEjecutandose(const char* pFile, const char* pMetodo )
{
  printf("\nEjecutando: Clase-> %s\n", pFile);
  printf("            Metodo-> %s\n", pMetodo);
}

void fDevuelveNombreMetodoEjecutandoseColor(
const char* pFile, const char* pMetodo )
{
  printf("\n\%s Ejecutando: Clase-> %s\n", VERDE, pFile);
  printf("            Metodo-> %s\n", pMetodo);
  printf("%s", BLANCO);
}
