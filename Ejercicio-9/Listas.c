//
// Created by diego on 27/11/2019.
//

#include "Funciones.h"
#include <stdlib.h>

PROD* anadir(PROD* cabeza, int id, char *nombre, double precio)
{
    PROD *nuevo;
    nuevo = malloc(sizeof(PROD));
    nuevo->id = id;
    nuevo->nombre = nombre;
    nuevo->precio = precio;
    nuevo->next = cabeza;

    return  nuevo;
}