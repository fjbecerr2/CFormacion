#ifndef _BOOKS_H
#define _BOOKS_H

#define longCadena 50

typedef struct books{
  char TituloLibro[longCadena];
  char Autor[longCadena];
  char Editorial[longCadena];
  int Paginas;
  char Formato[longCadena];
  float Precio;
  int Stock;
} books;

void setTituloLibro(const char *);
void setAutor(const char *);
void setEditorial(const char *);
void setPaginas(const int);
void setFormato(const char *);
void setPrecio(const float);
void setStock(const int);

char* getTituloLibro();
char* getAutor();
char* getEditorial();
int getPaginas();
char* getFormato();
float getPrecio();
int getStock();
  
#endif