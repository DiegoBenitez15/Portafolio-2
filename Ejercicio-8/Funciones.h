//
// Created by diego on 29/11/2019.
//
#include <stdio.h>
#ifndef PORTAFOLIO_2_FUNCIONES_H
#define PORTAFOLIO_2_FUNCIONES_H

char ** extraertest(char * p);
char ** extraerrun(char * p);
char **comparar(char **a,char **b);
char * agregarmin(char *minunit, char **palabra);
char *anadir(char *p,char *texto);
FILE* escribirarchivo(const char *minunit);
FILE* leer(char *cadena);

#endif //PORTAFOLIO_2_FUNCIONES_H
