#ifndef _EJERCICIO1_H
#define _EJERCICIO1_H



int fEjercicio1_CalcularPaga(const int phorasTrabajadas);
int fEjercicio1_CalcularPaga2(const int phorasTrabajadas, const int ptarifaHora, const int pporcentajeImpuestos);
int fIntroducirHorasTrabajadas();

//MENSAJES

void fMensajeHorasTrabajadas(const int phorasTrabajadas);
void fMensajeTarifaHoras(const int ptarifaHoras);
void fMensajeImpuestos(const int pporcentajeImpuestos);
void fMensajePaga(const int pPaga);
void fMensajePagaNeta(const int pPagaNeta);

#endif