#include "../lib/books.h"

#include<string.h>

books objBooks;

void setCodigoLibro(const unsigned int pCodigo){
  objBooks.CodigoLibro =pCodigo;
}

void setTituloLibro(const char *pTituloLibro){
  strcpy(objBooks.TituloLibro, pTituloLibro);
};

void setAutor(const char *pAutor){
  strcpy(objBooks.Autor, pAutor);
};

void setEditorial(const char *pEditorial){
  strcpy(objBooks.Editorial, pEditorial);
};

void setPaginas(const unsigned short pPaginas){
  objBooks.Paginas = pPaginas;

} ;

void setFormato(const char *pFormato){
  strcpy(objBooks.Formato, pFormato);
};

void setPrecio(const float pPrecio){
  objBooks.Precio = pPrecio;
};

void setEnStock(const unsigned short pEnStock){
  objBooks.EnStock = pEnStock;

}

void setStock(const int pStock){
  objBooks.Stock =pStock;
}

unsigned int CodigoLibro(){
  return objBooks.CodigoLibro;
}

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

unsigned short getEnStock(){
  return objBooks.EnStock;
}

int getStock(){
  return objBooks.Stock;
}