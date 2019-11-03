//
// Created by diego on 1/11/2019.
//

#include "Estudiantes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void matricula(ESTUDIANTE *est,int is,int mat)
{
    int i,c;
    ESTUDIANTE aux;
    c = 0;

    for(i = 0;i < is;i++)
    {
        if(est[i+1].matricula == 0)
        {
            break;
        }
        if(est[i].matricula == mat)
        {
            aux = est[i];
            est[i] = est[i+1];
            est[i+1] = aux;
        }

        c++;
    }
    est = (ESTUDIANTE*)realloc(est,c * sizeof(ESTUDIANTE));
}

void eliminarnombre(ESTUDIANTE *est,char nombre[],int x)
{
    int i;
    ESTUDIANTE aux;
    aux.mat = (MATERIA*) malloc(1 * sizeof(MATERIA));

    for(i = 0; i < est[x].c_materias - 1;i++)
    {
        if(strcmp(nombre,est[x].mat[i].nombre) == 0)
        {
            aux.mat[0] = est[x].mat[i];
            est[x].mat[i] = est[x].mat[i+1];
            est[x].mat[i+1] = aux.mat[0];
        }
    }

    if(strcmp(nombre,est[x].mat[est[x].c_materias - 1].nombre) == 0)
    {
        est[x].c_materias = est[x].c_materias - 1;
        est[x].mat = (MATERIA*) realloc(est[x].mat,est[x].c_materias);
    }
}
