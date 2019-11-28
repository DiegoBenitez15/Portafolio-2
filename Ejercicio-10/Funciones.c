//
// Created by diego on 12/11/2019.
//

#include "Funciones.h"
#include <stdlib.h>

TERMINO* anadir(TERMINO* cabeza,int coe,int exp)
{
    TERMINO *nuevo;
    nuevo = malloc(sizeof(TERMINO));
    nuevo->coe = coe;
    nuevo->exp = exp;
    nuevo->next = cabeza;

    return  nuevo;
}