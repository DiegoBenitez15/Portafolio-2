#include <stdio.h>
#include <stdlib.h>

char* texto_invertido(char *p,int *tamano)
{
    char letra = (char)getchar();
    if(letra == '\n')
    {
        return p;
    }
    else
    {
        p[(*tamano) - 1] = letra;
        *tamano += 1;
        p = (char*) realloc(p,*tamano * sizeof(char));
        texto_invertido(p,tamano);
    }
}