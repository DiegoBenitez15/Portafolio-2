//
// Created by diego on 12/11/2019.
//

#include "Estudiantes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Introducir(ESTUDIANTE *est)
{
    int i,j,suma;

    est->nombre = (char*) malloc(40 * sizeof(char));
    printf("\nIntroducir el nombre del estudiante: ");
    gets(est->nombre);
    est->nombre = (char*)realloc(est->nombre,strlen(est->nombre) * sizeof(char));
    printf("\nIntroducir la matricula del estudiante:");
    scanf(" %d",&est->matricula);
    printf("\nIntroducir la edad del estudiante:");
    fflush(stdin);
    scanf(" %d",&est->edad);
    printf("\nIntroducir la cantidad de materias del estudiante:");
    fflush(stdin);
    scanf(" %d",&est->c_materias);
    est->mat = (MATERIA*)malloc(est->c_materias * sizeof(MATERIA));

    for(i=0;i<est->c_materias;i++)
    {
        suma =0;
        est->mat[i].nombre = (char*) malloc(40 * sizeof(char));
        printf("\nIntroduzca el nombre de la Materia %d:",i+1);
        fflush(stdin);
        gets(est->mat[i].nombre);
        est->mat[i].nombre = (char*) realloc(est->mat[i].nombre,strlen(est->mat[i].nombre) * sizeof(char));
        printf("\nIntroduzca la cantidad de evaluaciones:");
        fflush(stdin);
        scanf(" %d",&est->mat[i].c_eval);
        est->mat[i].eval = (EVALUACIONES*) malloc(est->mat[i].c_eval * sizeof(EVALUACIONES));

        for(j=0;j<est->mat[i].c_eval;j++)
        {
            est->mat[i].eval[j].nombre = (char*) malloc(40 * sizeof(char));
            printf("\nIntroduzca el nombre de la %d evaluacion:",j+1);
            fflush(stdin);
            gets(est->mat[i].eval[j].nombre);
            est->mat[i].eval[j].nombre = (char*) realloc(est->mat[i].eval[j].nombre,strlen(est->mat[i].eval[j].nombre) * sizeof(char));


            printf("\nIntroduzca la Poderacion de la evaluacion: ");
            fflush(stdin);
            scanf(" %f",&est->mat[i].eval[j].pod);
            printf("\nIntroduzca la Nota de la Evaluacion: ");
            fflush(stdin);
            scanf(" %f",&est->mat[i].eval[j].nota);

            if(est->mat[i].eval[j].nota > 100)
            {
                printf("\n|LA NOTA DEL ESTUDIANTE DEBE SER MENOR A 100");
                j-=1;
            }
            else
            {
                suma += est->mat[i].eval[j].pod;
            }
        }
        if(suma > 100)
        {
            printf("\n|LA SUMA DE LA LAS PODERACIONES DEBE DAR MENOR A 100");
            i-=1;
        }
    }
}

void matricula(ESTUDIANTE *est,int is,int mat)
{
    int i,c;
    ESTUDIANTE aux;
    c = 0;

    for(i = 0;i < is - 1;i++)
    {
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
        est[x].c_materias -= 1;
        est[x].mat = (MATERIA*) realloc(est[x].mat,est[x].c_materias * sizeof(MATERIA));
    }
}

void EliminarEvaluacion(ESTUDIANTE *est,int x,char nombre[])
{
    int i,j,c;
    ESTUDIANTE aux;
    aux.mat = (MATERIA*) malloc(1 * sizeof(MATERIA));
    aux.mat[0].eval = (EVALUACIONES*) malloc(1 * sizeof(EVALUACIONES));

    for(i = 0;i < est[x].c_materias;i++)
    {
        c = 0;
        for(j = 0;j < est[x].mat[i].c_eval - 1;j++)
        {
            if(strcmp(nombre,est[x].mat[i].eval[j].nombre) == 0)
            {
                aux.mat[0].eval[0] = est[x].mat[i].eval[j];
                est[x].mat[i].eval[j] = est[x].mat[i].eval[j + 1];
                est[x].mat[i].eval[j + 1] = aux.mat[0].eval[0];
            }

            c++;
        }

        if(strcmp(nombre,est[x].mat[i].eval[c].nombre) == 0)
        {
            est[x].mat[i].c_eval -= 1;
            est[x].mat[i].eval = (EVALUACIONES*) realloc(est[x].mat[i].eval,c * sizeof(EVALUACIONES));
        }
    }
}