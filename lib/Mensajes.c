#include <stdio.h>
#include "Mensajes.h"
#include "Config.h"

void fDevuelveNombreMetodoEjecutandose(const char* pFile, const char* pMetodo )
{
  printf("\nEjecutando: Clase-> %s\n", pFile);
  printf("            Metodo-> %s\n", pMetodo);
}

void fDevuelveNombreMetodoEjecutandoseColor(
const char* pFile, const char* pMetodo )
{
  printf("\n %s Ejecutando: Clase-> %s\n", VERDE, pFile);
  printf("            Metodo-> %s\n", pMetodo);
  printf("%s", BLANCO);
}
