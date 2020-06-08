#include <stdio.h>
//VERSION 2.0

#include "TDD/TDDCalcularPaga/TDDCalcularPaga.h"

#include "src/CalcularPaga/CalcularPaga.h"
#include "lib/Mensajes.h" 
#include "src/Usuarios/Usuarios.h"

int main(void) {
  printf("EJERCICIOS DE C \n");
  printf("--------------- \n");

  getCadena();
  getNombreUsuario();
  getApellido1Usuario();
  getApellido2Usuario();
  
  setNombreUsuario(); //[[OK]
  setApellido1Usuario(); //[OK]
  setApellido2Usuario(); //[OK]


  fCalcularPaga(100); //[OK]
  fCalcularPaga2(100,20, 20); //[OK]
  fCalcularPaga2(fIntroducirHorasTrabajadas(),20, 20);

  

  //TDD
  fTDDCalcularPaga(); //[OK]

  return 0;
}
