//
// Created by diego on 31/10/2019.
//

#ifndef PORTAFOLIO_2_SUPERMERCADO_H
#define PORTAFOLIO_2_SUPERMERCADO_H

typedef struct articulos
{
    char nombre[45];
    int id;
    double precio;
}ARTICULO;

ARTICULO* organizar_art(ARTICULO *art, int n);
ARTICULO busca_id(ARTICULO *art,int n,int id);
ARTICULO busca_nombre(ARTICULO *art,int n,char* nombre);
ARTICULO* organizarprecio(ARTICULO *art,int n,int ii,int is);
ARTICULO busqueda_id(ARTICULO *art,int is, int id,int ii);
ARTICULO busqueda_nombre(ARTICULO *art,int is,char *n,int ii);

#endif //PORTAFOLIO_2_SUPERMERCADO_H
