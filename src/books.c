#include "../lib/books.h"

#include<string.h>

books objBooks;

void setTituloLibro(const char *pTituloLibro){
  strcpy(objBooks.TituloLibro, pTituloLibro);
};

void setAutor(const char *pAutor){
  strcpy(objBooks.Autor, pAutor);
};

void setEditorial(const char *pEditorial){
  strcpy(objBooks.Editorial, pEditorial);
};

void setPaginas(const int pPaginas){
  objBooks.Paginas = pPaginas;

} ;

void setFormato(const char *pFormato){
  strcpy(objBooks.Formato, pFormato);
};

void setPrecio(const float pPrecio){
  objBooks.Precio = pPrecio;
};

char* getTituloLibro(){
  return objBooks.TituloLibro;
};

char* getAutor(){
  return objBooks.Autor;

};
char* getEditorial(){
  return objBooks.Editorial;
};
int getPaginas(){
  return objBooks.Paginas;
};
char* getFormato(){
  return objBooks.Formato;
};
float getPrecio(){
  return objBooks.Precio;
};