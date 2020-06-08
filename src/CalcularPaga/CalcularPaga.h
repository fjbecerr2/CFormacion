#ifndef _CALCULARPAGA_H
#define _CALCULARPAGA_H

#define VERTRAZA 0      //0 NO VER, 1 VER


int fCalcularPaga(const int phorasTrabajadas);
int fCalcularPaga2(const int phorasTrabajadas, const int ptarifaHora, const int pporcentajeImpuestos);
int fIntroducirHorasTrabajadas();

//MENSAJES

void fMensajeHorasTrabajadas(const int phorasTrabajadas);
void fMensajeTarifaHoras(const int ptarifaHoras);
void fMensajeImpuestos(const int pporcentajeImpuestos);
void fMensajePaga(const int pPaga);
void fMensajePagaNeta(const int pPagaNeta);

#endif