#include <stdio.h>
#include "TDDMensajes.h"

//VERSION 1.0

void fDevolverMensajeTest(const int pResultado)
{

const char BLANCO[] = "\033[37m";
const char VERDE[] ="\033[32m";
const char ROJO[] ="\033[31m";

  if (pResultado == 0){
    printf("\n TEST  %s [OK]\n", VERDE);
    printf("%s\n", BLANCO);
  }
  if (pResultado == 1){
    printf("\n TEST %s [ERROR]\n", ROJO);
    printf("%s\n", BLANCO);
  }

}