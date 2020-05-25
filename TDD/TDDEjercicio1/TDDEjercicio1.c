#include <stdio.h>
#include <assert.h>
#include "TDDEjercicio1.h"
#include "TDDMensajes.h"
#include "../../Ejercicio1/Ejercicio1.h"
#include "../../lib/mensajes.h"

//VERSION 1.0

void fTDDComprobarPaga()
{

  printf("\n%s \n%s",__FILE__, __FUNCTION__);

  const int VALORENTRADA = 10;
  const int VALORSALIDA = 160;

 if (fEjercicio1_CalcularPaga(VALORENTRADA)!=VALORSALIDA){
   fDevolverMensajeTest(1);
}
else{ 
   fDevolverMensajeTest(0);
  }

}
