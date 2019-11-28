//
// Created by diego on 12/11/2019.
//

#include "Funciones.h"
#include <stdlib.h>
#include <math.h>

double* polinomio(TERMINO *cabeza)
{
    int c =0;
    double i,r;
    i=0;
    double *resultado = malloc(11* sizeof(double));
    TERMINO *temp;

    while(i <= 5)
    {
        r = 0;
        for(temp=cabeza;temp != NULL;temp = temp->next)
        {
            if(temp->exp == 0)
            {
                r += temp->coe;
            }
            else
            {
                r += temp->coe * pow(i,temp->exp);
            }
        }
        resultado[c] = r;
        c++;
        i+= 0.5;
    }

    return  resultado;
}
