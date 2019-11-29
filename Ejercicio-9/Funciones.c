//
// Created by diego on 27/11/2019.
//

#include "Funciones.h"
#include <string.h>
#include <stdlib.h>

void ordenar(PROD *cabeza)
{
    if(cabeza != NULL)
    {
        PROD *pivote = NULL,*actual = NULL;
        int tmp;
        double tmp2;
        char *tmp3;
        pivote = cabeza;
        while(pivote != NULL)
        {
            actual = pivote->next;
            while(actual != NULL)
            {
                if(pivote->precio < actual->precio)
                {
                    tmp = pivote->id;
                    pivote->id = actual->id;
                    actual->id = tmp;

                    tmp2 = pivote->precio;
                    pivote->precio = actual->precio;
                    actual->precio = tmp2;

                    tmp3 = pivote->nombre;
                    pivote->nombre = actual->nombre;
                    actual->nombre = tmp3;
                }
                actual = actual->next;
            }
            pivote = pivote->next;
        }
    }
}

PROD* buscarporID(PROD *cabeza,int id)
{
    PROD *temp;

    for(temp = cabeza;temp != NULL;temp = temp->next)
    {
        if(temp->id == id)
        {
            return temp;
        }
    }

    return NULL;
}

PROD* buscarpornombre(PROD *cabeza,char *nombre)
{
    PROD *temp;

    for(temp = cabeza;temp != NULL;temp = temp->next)
    {
        if(strcmp(temp->nombre,nombre) == 0)
        {
            return temp;
        }
    }

    return NULL;
}