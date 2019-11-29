//
// Created by diego on 27/11/2019.
//

#ifndef PORTAFOLIO_2_FUNCIONES_H
#define PORTAFOLIO_2_FUNCIONES_H

typedef struct productos
{
    int id;
    char *nombre;
    double precio;
    struct productos *next;
}PROD;

PROD* anadirinicio(PROD* cabeza, int id, char *nombre, double precio);
PROD* anadir(PROD* cabeza, int id, char *nombre, double precio);
PROD* buscarporID(PROD *cabeza,int id);
PROD* buscarpornombre(PROD *cabeza,char *nombre);
void ordenar(PROD *cabeza);

#endif //PORTAFOLIO_2_FUNCIONES_H
