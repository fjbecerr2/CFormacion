#include <stdio.h>
#include "MenCalcularPaga.h"

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
