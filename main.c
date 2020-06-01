#include <stdio.h>
//VERSION 2.0

#include "TDD/TDDCalcularPaga/TDDCalcularPaga.h"

#include "CalcularPaga/CalcularPaga.h"
#include "lib/Mensajes.h"

int main(void) {
  printf("EJERCICIOS DE C \n");
  printf("--------------- \n");
  fCalcularPaga(100); //[OK]
  fCalcularPaga2(100,20, 20); //[OK]
  fCalcularPaga2(fIntroducirHorasTrabajadas(),20, 20);  

  //TDD
  fTDDCalcularPaga();

  return 0;
}
