#include "Cadenas.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamano,i;
    tamano = 1;
    char *p = (char*) malloc(tamano * sizeof(char));

    p = texto_invertido(p,&tamano);

    for(i = 0;i < tamano-1;i++)
    {
        printf("%c",p[i]);
    }
}