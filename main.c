#include <stdio.h>

void fEj1_CalcularPaga(const int phorasTrabajadas);
void fDevuelveNombreMetodoEjecutandose(const char* pFile, const char* pMetodo );


int main(void) {
  printf("EJERCICIOS DE C \n");
  printf("--------------- \n");
  fEj1_CalcularPaga(100);

  return 0;
}

 /**
    Autor: Fco. J. Becerra
    Date: 12/05/2020
    Version: 1.0
    Update-Date:
    Description:
      Calcular la paga neta de un trabajador
    Param:
      horas
      tarifa
      impuestos
    Return:
      paga = (horas * tarifa) - impuestos
  **/
void fEj1_CalcularPaga(const int phorasTrabajadas){

    fDevuelveNombreMetodoEjecutandose(__FILE__, __FUNCTION__);
    
    const int tarifaHora = 20;
    const int impuestosPorcentaje = 20;
    int paga = 0;

    printf("Horas trabajadas: %d \n", phorasTrabajadas);
    printf("Tarifa Hora: %d \n", tarifaHora);
    printf("Impuestos %:  %d \n", impuestosPorcentaje);
    

    paga = (phorasTrabajadas * tarifaHora);
    printf("Paga antes impuestos: %d \n", paga);

    paga = paga - (paga * 20) / 100;
    printf("Paga neta: %d \n", paga);

  }

 void fDevuelveNombreMetodoEjecutandose(const char* pFile, const char* pMetodo )
 {
    printf("Ejecutando: Clase-> %s\n", pFile);
    printf("            Metodo-> %s\n", pMetodo);
  }