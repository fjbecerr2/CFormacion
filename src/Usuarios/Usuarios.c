#include <stdio.h>
#include <string.h>
#include "Usuarios.h"

void getNombreUsuario();
void getApellido1Usuario();
void getApellido2Usuario();

void getCadena(){
  strcpy(NombreUsuario, "Pedro");
  strcpy(Apellido1Usuario, "Garcia");
  strcpy(Apellido2Usuario, "Lopez");
}

void getNombreUsuario(){
  printf("Usuario: ");
  scanf("%s",NombreUsuario);
};
void getApellido1Usuario(){
  printf("Primer apellido: ");
  scanf("%s",Apellido1Usuario);
};
void getApellido2Usuario(){
  printf("Segundo apellido: "); 
  scanf("%s",Apellido2Usuario);
};

void setNombreUsuario(){
  printf("Usuario : %s", NombreUsuario);
}
void setApellido1Usuario(){
  printf(" %s", Apellido1Usuario);
};
void setApellido2Usuario(){
  printf(" %s\n", Apellido2Usuario);
};

