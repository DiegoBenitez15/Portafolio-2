//
// Created by diego on 12/11/2019.
//

#ifndef PORTAFOLIO_2_FUNCIONES_H
#define PORTAFOLIO_2_FUNCIONES_H

typedef struct termino
{
    double coe;
    int exp;
    struct termino *next;
}TERMINO;

TERMINO* anadir(TERMINO* cabeza,int coe,int exp);
double* polinomio(TERMINO *cabeza);

#endif //PORTAFOLIO_2_FUNCIONES_H
