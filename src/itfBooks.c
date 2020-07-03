#include "../lib/books.h"
#include "../lib/itfBooks.h"
#include "../lib/Config.h"
#include "../lib/generadores.h"


#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <cs50.h>
char itfCodigo[] ="Codigo";
char itfTitulo[] ="Titulo";
char itfAutor[]  ="Autor";
char itfEditorial[] ="Editorial";
char itfPaginas[] ="Paginas";
char itfFormato[] ="Formato";
char itfPrecio[] ="Precio";
char itfEnStock[] ="En Stock (S/N)";
char itfStock[] ="Stock";


books book;

void IntroducirLibro(){
  printf("NUEVO LIBRO \n");
  printf("----------- \n");
  IntroducirCodigo();
  IntroducirTituloLibro();
  IntroducirAutor();
  IntroducirEditorial();
  IntroducirFormato();
  IntroducirPaginas();
  IntroducirPrecio();
  IntroducirEnStock();
  IntroducirStock();

};

void IntroducirCodigo(){
  book.CodigoLibro =DevolverCodigo();
}

void IntroducirLibroEnBlanco(){
  strcpy(book.TituloLibro, "SIN TITULO");
  strcpy(book.Autor, "SIN AUTOR");
  strcpy(book.Editorial, "SIN EDITORIAL");
  strcpy(book.Formato, "SIN FORMATO");
  book.Paginas =0;
  book.Precio =0;
  book.EnStock = 0;
  book.Stock =0;
}

void IntroducirTituloLibro(){
  printf("Introduzca %s: ",itfTitulo);
  //gets(book.TituloLibro); //Da problemas de memoria
  fgets(book.TituloLibro, sizeof(book.TituloLibro), stdin);
};
void IntroducirAutor(){
  printf("Introduzca %s: ",itfAutor);
  fgets(book.Autor, sizeof(book.Autor), stdin);
};
void IntroducirEditorial(){
  printf("Introduzca %s: ",itfEditorial);
   fgets(book.Editorial, sizeof(book.Editorial), stdin);
};
void IntroducirPaginas(){
  printf("Introduzca %s: ",itfPaginas);
  scanf("%hd", &book.Paginas);
};
void IntroducirFormato(){
  printf("Introduzca %s: ",itfFormato);
  fgets(book.Formato, sizeof(book.Formato), stdin);
};
void IntroducirPrecio(){
  printf("Introduzca %s: ",itfPrecio);
  scanf("%f", &book.Precio);
};

void IntroducirEnStock(){
  printf("Introduzca %s: ",itfEnStock);
  scanf("%hd", &book.EnStock);
  if (book.EnStock!=1){
    book.EnStock=FALSE;
  }

}
void IntroducirStock(){
  printf("Introduzca %s: ",itfStock);
  scanf("%d", &book.Stock);
};


void LeerLibro(){
  printf("LIBRO \n");
  printf("----- \n");
  LeerCodigo();
  LeerTituloLibro();
  LeerAutor();
  LeerEditorial();
  LeerPaginas();
  LeerFormato();
  LeerPrecio();
  LeerEnStock();
  LeerStock();

};

void LeerCodigo(){
  printf("%s: %d \n",itfCodigo, book.CodigoLibro);
}
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

void LeerEnStock(){
  if(book.EnStock==TRUE){
    printf("%s: %c \n",itfEnStock, SI);
  }
  else{
    printf("%s: %c \n",itfEnStock, NO);
  }
  
};
void LeerStock(){
  printf("%s: %d \n",itfStock, book.Stock);
};