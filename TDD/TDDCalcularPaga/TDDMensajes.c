#include <stdio.h>
#include "TDDMensajes.h"
#include "../../lib/Config.h"

//VERSION 1.0

void fDevolverMensajeTest(const int pResultado)
{

  if (pResultado == 0){
    printf("\n TEST  [OK]\n");
    //printf("\n TEST  %s [OK]\n", VERDE);
    //printf("%s\n", BLANCO);
  }
  if (pResultado == 1){
    printf("\n TEST [ERROR]\n");
    //printf("\n TEST %s [ERROR]\n", ROJO);
    //printf("%s\n", BLANCO);
  }

}