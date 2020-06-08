#ifndef _USUARIOS_H
#define _USUARIOS_H

#define NUMEROUSUARIOS 6
#define LONGCADENA 100+1

char NombreUsuario[LONGCADENA];
char Apellido1Usuario[LONGCADENA];
char Apellido2Usuario[LONGCADENA];

void getCadena();
void getNombreUsuario();
void getApellido1Usuario();
void getApellido2Usuario();

void setNombreUsuario();
void setApellido1Usuario();
void setApellido2Usuario();

#endif