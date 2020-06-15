#include <stdio.h>
//VERSION 2.0

#include "TDD/TDDCalcularPaga/TDDCalcularPaga.h"

#include "src/CalcularPaga/CalcularPaga.h"
#include "lib/Mensajes.h" 
#include "src/Usuarios/Usuarios.h"

#include "lib/books.h"

int main(void) {
  printf("EJERCICIOS DE C \n");
  printf("--------------- \n");
  /*
  getCadena();
  getNombreUsuario();
  getApellido1Usuario();
  getApellido2Usuario();
  
  setNombreUsuario(); //[[OK]
  setApellido1Usuario(); //[OK]
  setApellido2Usuario(); //[OK]


  fCalcularPaga(100); //[OK]
  fCalcularPaga2(100,20, 20); //[OK]
  fCalcularPaga2(fIntroducirHorasTrabajadas(),20, 20);
*/

  //Books
  //books objBooks;
  setTituloLibro("El ocho");
  setAutor("Caterine Neville");
  setEditorial("Anagrama");
  setPaginas(300);
  setFormato("Tapa Blanda");
  setPrecio(18.50);

  printf("Titulo: %s\n", getTituloLibro());
  printf("Autor: %s\n", getAutor());
  printf("Editorial: %s\n", getEditorial());
  printf("Páginas : %d\n", getPaginas());
  printf("Editorial: %s\n", getFormato());
  printf("Precio : %.2f\n", getPrecio());


  //TDD
  //fTDDCalcularPaga(); //[OK]

  return 0;
}
