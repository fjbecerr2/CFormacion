#ifndef _BOOKS_H
#define _BOOKS_H

#define LONGCADENALIBRO 50

typedef struct books{
  unsigned int CodigoLibro;
  char TituloLibro[LONGCADENALIBRO];
  char Autor[LONGCADENALIBRO];
  char Editorial[LONGCADENALIBRO];
  unsigned short Paginas;
  char Formato[LONGCADENALIBRO];
  float Precio;
  unsigned short EnStock;
  int Stock;
} books;

void setCodigoLibro(const unsigned int);
void setTituloLibro(const char *);
void setAutor(const char *);
void setEditorial(const char *);
void setPaginas(const unsigned short);
void setFormato(const char *);
void setPrecio(const float);
void setEnStock(const unsigned short);
void setStock(const int);

unsigned int CodigoLibro();
char* getTituloLibro();
char* getAutor();
char* getEditorial();
int getPaginas();
char* getFormato();
float getPrecio();
int getStock();
  
#endif