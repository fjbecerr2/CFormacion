#ifndef _USUARIOS_H
#define _USUARIOS_H

#define NUMEROUSUARIOS 6
#define LONGCADENAUSUARIO 100+1

char NombreUsuario[LONGCADENAUSUARIO];
char Apellido1Usuario[LONGCADENAUSUARIO];
char Apellido2Usuario[LONGCADENAUSUARIO];

void getCadena();
void getNombreUsuario();
void getApellido1Usuario();
void getApellido2Usuario();

void setNombreUsuario();
void setApellido1Usuario();
void setApellido2Usuario();

#endif