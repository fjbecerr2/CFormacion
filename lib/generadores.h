#ifndef _GENERADORES_H
#define _GENERADORES_H


#define LONGITUDDNI 9 
#define MAXCODIGO 1000

#define MINMINUSCULAS 97
#define MAXMINUSCULAS 122
#define MINMAYUSCULAS 65
#define MAXMAYUSCULAS 90

void GenerarCodigo();
void GenerarNumerosDNI();
void GenerarLetraDNI();
void GenerarDNI();

unsigned int DevolverCodigo();
char* DevolverDNI();


#endif