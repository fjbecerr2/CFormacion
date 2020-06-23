#include "../lib/books.h"
#include "../lib/itfBooks.h"


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <cs50.h>

char itfTitulo[] ="Titulo";
char itfAutor[]  ="Autor";
char itfEditorial[] ="Editorial";
char itfPaginas[] ="Paginas";
char itfFormato[] ="Formato";
char itfPrecio[] ="Precio";
char itfStock[] ="Stock";

books book;

void IntroducirLibro(){
  printf("NUEVO LIBRO \n");
  printf("----------- \n");
  IntroducirTituloLibro();
  IntroducirAutor();
  IntroducirEditorial();
  IntroducirFormato();
  IntroducirPaginas();
  IntroducirPrecio();
  IntroducirStock();

};

void IntroducirLibroEnBlanco(){
  strcpy(book.TituloLibro, "SIN TITULO");
  strcpy(book.Autor, "SIN AUTOR");
  strcpy(book.Editorial, "SIN EDITORIAL");
  strcpy(book.Formato, "SIN FORMATO");
  book.Paginas =0;
  book.Precio =0;
  book.Stock =0;
}

void IntroducirTituloLibro(){
  printf("Introduzca %s: \n",itfTitulo);
  //gets(book.TituloLibro); //Da problemas de memoria
  fgets(book.TituloLibro, sizeof(book.TituloLibro), stdin);
};
void IntroducirAutor(){
  printf("Introduzca %s: \n",itfAutor);
   fgets(book.Autor, sizeof(book.Autor), stdin);
};
void IntroducirEditorial(){
  printf("Introduzca %s: \n",itfEditorial);
   fgets(book.Editorial, sizeof(book.Editorial), stdin);
};
void IntroducirPaginas(){
  printf("Introduzca %s: \n",itfPaginas);
  scanf("%d", &book.Paginas);
};
void IntroducirFormato(){
  printf("Introduzca %s: \n",itfFormato);
  fgets(book.Formato, sizeof(book.Formato), stdin);
};
void IntroducirPrecio(){
  printf("Introduzca %s: \n",itfPrecio);
  scanf("%f", &book.Precio);
};
void IntroducirStock(){
  printf("Introduzca %s: \n",itfStock);
  scanf("%d", &book.Stock);
};


void LeerLibro(){
  printf("LIBRO \n");
  printf("----- \n");
  LeerTituloLibro();
  LeerAutor();
  LeerEditorial();
  LeerPaginas();
  LeerFormato();
  LeerPrecio();
  LeerStock();

};

void LeerTituloLibro(){
  printf("%s: %s",itfTitulo, book.TituloLibro);
};
void LeerAutor(){
  printf("%s: %s",itfAutor, book.Autor);
};
void LeerEditorial(){
  printf("%s: %s",itfEditorial, book.Editorial);
};
void LeerPaginas(){
  printf("%s: %d \n",itfPaginas, book.Paginas);
};
void LeerFormato(){
  printf("%s: %s",itfFormato, book.Formato);
};
void LeerPrecio(){
  printf("%s: %.2f \n",itfPrecio, book.Precio);
};
void LeerStock(){
  printf("%s: %d \n",itfStock, book.Stock);
};