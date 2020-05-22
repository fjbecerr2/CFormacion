#include <stdio.h>
#include "Ejercicio1.h"
#include "../lib/mensajes.h"

void fEjercicio1_CalcularPaga(const int phorasTrabajadas)
{

  fDevuelveNombreMetodoEjecutandose(__FILE__, __FUNCTION__);
  
  const int tarifaHora = 20;
  const int impuestosPorcentaje = 20;
  int paga = 0;

  printf("Horas trabajadas: %d \n", phorasTrabajadas);
  printf("Tarifa Hora: %d \n", tarifaHora);
  printf("Impuestos %c:  %d \n", '%', impuestosPorcentaje);
  

  paga = (phorasTrabajadas * tarifaHora);
  printf("Paga antes impuestos: %d \n", paga);

  paga = paga - (paga * 20) / 100;
  printf("Paga neta: %d \n", paga);

  }

  void fEjercicio1_CalcularPaga2(const int phorasTrabajadas, const int ptarifaHora, const int pporcentajeImpuestos )
  {
 
    fDevuelveNombreMetodoEjecutandose(__FILE__, __FUNCTION__);
    
    int paga = 0;

    printf("Horas trabajadas: %d \n", phorasTrabajadas);
    printf("Tarifa Hora: %d \n", ptarifaHora);
    printf("Impuestos %c:  %d \n", '%', pporcentajeImpuestos);
    

    paga = (phorasTrabajadas * ptarifaHora);
    printf("Paga antes impuestos: %d \n", paga);

    paga = paga - (paga * 20) / 100;
    printf("Paga neta: %d \n", paga);

  }