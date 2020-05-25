#include <stdio.h>
//VERSION 2.0

#include "TDD/TDDEjercicio1/TDDEjercicio1.h"

#include "Ejercicio1/Ejercicio1.h"
#include "lib/mensajes.h"

int main(void) {
  printf("EJERCICIOS DE C \n");
  printf("--------------- \n");
  fEjercicio1_CalcularPaga(100); //[OK]
  //fEjercicio1_CalcularPaga2(100,20, 20); //[OK]
  //fEjercicio1_CalcularPaga2(fIntroducirHorasTrabajadas(),20, 20);  

  //TDD
  fTDDComprobarPaga();

  return 0;
}
