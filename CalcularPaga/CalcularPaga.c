#include <stdio.h>
#include "CalcularPaga.h"
#include "../lib/Mensajes.h"
#include "../lib/Config.h"
#include "MenCalcularPaga.h"


int fCalcularPaga(const int phorasTrabajadas)
{

  if(VERTRAZA==1)
  {
    fDevuelveNombreMetodoEjecutandose(__FILE__, __FUNCTION__);
  }
  
  int paga = 0;

  fMensajeHorasTrabajadas(phorasTrabajadas);
  fMensajeTarifaHoras(TARIFAHORA);
  fMensajeImpuestos(IMPUESTOPORCENTAJE);
  
  paga = (phorasTrabajadas * TARIFAHORA);
  fMensajePaga(paga);

  paga = paga - (paga * IMPUESTOPORCENTAJE) / 100;
  fMensajePagaNeta(paga);
  return paga;

  }

  int fCalcularPaga2(const int phorasTrabajadas, const int ptarifaHora, const int pporcentajeImpuestos )
  {
 
    if(VERTRAZA==1){
      fDevuelveNombreMetodoEjecutandoseColor(__FILE__, __FUNCTION__);
    }
    
    int paga = 0;

    fMensajeHorasTrabajadas(phorasTrabajadas);
    fMensajeTarifaHoras(TARIFAHORA);
    fMensajeImpuestos(IMPUESTOPORCENTAJE);
    

    paga = (phorasTrabajadas * ptarifaHora);
    fMensajePaga(paga);

    paga = paga - (paga * 20) / 100;
    fMensajePaga(paga);
    return paga;

  }

  int fIntroducirHorasTrabajadas(){
    if(VERTRAZA==1){
      fDevuelveNombreMetodoEjecutandoseColor(__FILE__, __FUNCTION__);
    }

    int iHorasTrabajadas = 0;

    printf("Introduzca horas trabajadas: ");
    scanf("%d", &iHorasTrabajadas);

    return iHorasTrabajadas;

  }







  