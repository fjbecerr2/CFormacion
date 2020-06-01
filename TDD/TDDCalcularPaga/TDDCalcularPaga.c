#include <stdio.h>
#include <assert.h>
#include "TDDCalcularPaga.h"
#include "TDDMensajes.h"
#include "../../CalcularPaga/CalcularPaga.h"
#include "../../lib/Mensajes.h"

//VERSION 1.0

void fTDDCalcularPaga()
{

  printf("\n%s \n%s\n",__FILE__, __FUNCTION__);

  const int VALORENTRADA = 10;
  const int VALORSALIDA = 160;

 if (fCalcularPaga(VALORENTRADA)!=VALORSALIDA){
   fDevolverMensajeTest(1);
}
else{ 
   fDevolverMensajeTest(0);
  }

}
