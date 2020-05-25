#include <stdio.h>
#include "Ejercicio1.h"
#include "../lib/mensajes.h"

//VERSION 2.0 

const int VERTRAZA = 0; //0 NO VER, 1 VER
const int VERMENSAJES = 1; //PARA CORRER LOS TEST 1

int fEjercicio1_CalcularPaga(const int phorasTrabajadas)
{

  if(VERTRAZA==1)
  {
    fDevuelveNombreMetodoEjecutandoseColor(__FILE__, __FUNCTION__);
  }

  
  const int tarifaHora = 20;
  const int impuestosPorcentaje = 20;
  int paga = 0;

  fMensajeHorasTrabajadas(phorasTrabajadas);
  fMensajeTarifaHoras(tarifaHora);
  fMensajeImpuestos(impuestosPorcentaje);
  
  paga = (phorasTrabajadas * tarifaHora);
  fMensajePaga(paga);

  paga = paga - (paga * 20) / 100;
  fMensajePagaNeta(paga);
  return paga;

  }

  int fEjercicio1_CalcularPaga2(const int phorasTrabajadas, const int ptarifaHora, const int pporcentajeImpuestos )
  {
 
    if(VERTRAZA==1){
      fDevuelveNombreMetodoEjecutandoseColor(__FILE__, __FUNCTION__);
    }
    
    int paga = 0;

    printf("Horas trabajadas: %d \n", phorasTrabajadas);
    printf("Tarifa Hora: %d \n", ptarifaHora);
    printf("Impuestos %c:  %d \n", '%', pporcentajeImpuestos);
    

    paga = (phorasTrabajadas * ptarifaHora);
    printf("Paga antes impuestos: %d \n", paga);

    paga = paga - (paga * 20) / 100;
    printf("Paga neta: %d \n", paga);
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


//MENSAJES
void fMensajeHorasTrabajadas(const int phorasTrabajadas){
  if (VERMENSAJES==0){
    printf("Horas trabajadas: %d \n", phorasTrabajadas);
  }
}

void fMensajeTarifaHoras(const int ptarifaHoras){
  if (VERMENSAJES==0){
    printf("Tarifa Hora: %d \n", ptarifaHoras);
  }
}

void fMensajeImpuestos(const int pporcentajeImpuestos){
  if (VERMENSAJES==0){
   printf("Impuestos %c:  %d \n", '%', pporcentajeImpuestos);
  }
}

void fMensajePaga(const int pPaga){
  if (VERMENSAJES==0){
     printf("Paga antes impuestos: %d \n", pPaga);
  }
}

void fMensajePagaNeta(const int pPagaNeta){
  if (VERMENSAJES==0){
     printf("Paga neta: %d \n", pPagaNeta);
  }
}





  