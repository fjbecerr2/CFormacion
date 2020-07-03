#include "../lib/generadores.h"
#include <stdlib.h> //Rand
#include <stdio.h>

char dni[LONGITUDDNI+1];
unsigned int codigo;

void GenerarCodigo(){
  codigo = rand() % MAXCODIGO+1;
};

void GenerarNumerosDNI(){
  int tmp=0;
  for(int i=0; i<8; i++){
    tmp = rand() % 10;
    dni[0] =tmp;
  }
};

void GenerarLetraDNI(){
  int tmp =0;
  tmp = rand () % (MAXMAYUSCULAS-MINMAYUSCULAS+1) + MINMAYUSCULAS;   // Este está entre M y N
  dni[9] =tmp;

};

void GenerarDNI(){
  GenerarNumerosDNI();
  GenerarLetraDNI();
}

unsigned int DevolverCodigo(){
  GenerarCodigo();
  return codigo;
}
char* DevolverDNI(){
  GenerarDNI();
  return dni;
}