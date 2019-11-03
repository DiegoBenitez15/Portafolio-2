//
// Created by diego on 1/11/2019.
//

#include "Estudiantes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void introducir(ESTUDIANTE *est)
{
    int x,i,j,n,k;
    char sn;
    x = 0;

    do
    {
        est[x].nombre = (char*) malloc(35 * sizeof(char));
        printf("\nIntroduzca el nombre del estudiante: ");
        fflush(stdin);
        gets(est[x].nombre);
        n= 0;
        k = 0;


        while(est[x].nombre[k] != '\0')
        {
            n++;
            k++;
        }

        est[x].nombre = (char*) realloc(est[x].nombre,n * sizeof(char));

        printf("\nIntroduzca la matricula del estudiante: ");
        fflush(stdin);
        scanf("%d",&est[x].matricula);

        printf("\nIntroduzca la edad del estudiante: ");
        fflush(stdin);
        scanf("%d",&est[x].edad);

        printf("\nIntroduzca la cantidad de materias en curso: ");
        fflush(stdin);
        scanf("%d",&est[x].c_materias);

        for(i = 0;i < est[x].c_materias;i++)
        {
            est[x].mat[i].nombre = (char*)malloc(34 * sizeof(char));
            printf("\nIntroduzca el nombre de la %d materia: ",i+1);
            fflush(stdin);
            gets(est[x].mat[i].nombre);
            n= 0;
            k = 0;

            while(est[x].nombre[k] != '\0')
            {
                n++;
                k++;
            }

            est[x].mat[i].nombre = (char*) realloc(est[x].mat[i].nombre,n * sizeof(char));

            printf("\nIngrese la cantidad de evaluaciones de la materia: ");
            fflush(stdin);
            scanf("%d",&est[x].mat[i].c_eval);

            for(j = 0;j < est[x].mat[i].c_eval;j++)
            {
                float suma = 0;

                est[x].mat[i].eval[j].nombre = (char*) malloc(35 * sizeof(char));
                printf("\nIngrese el nombre de la %d evaluacion: ",j+1);
                fflush(stdin);
                gets(est[x].mat[i].eval[j].nombre);
                n= 0;
                k = 0;

                while(est[x].mat[i].eval[j].nombre[k] != '\0')
                {
                    n++;
                    k++;
                }

                est[x].mat[i].eval[j].nombre = (char*) realloc(est[x].mat[i].eval[j].nombre,n * sizeof(char));

                printf("\nIngrese la poderacion de la evaluacion: ");
                fflush(stdin);
                scanf("%f",&est[x].mat[i].eval[j].pod);

                suma += est[x].mat[i].eval[j].pod;

                printf("\nIngrese la nota sacada: ");
                fflush(stdin);
                scanf("%f",&est[x].mat[i].eval[j].nota);


                if(est[x].mat[i].eval[j].nota > 100)
                {
                    printf("\n|ERROR| La nota no puede ser mayor a 100\n");
                    j--;
                }
                else if(suma > 100)
                {
                    printf("\n|ERROR| La suma de las ponderaciones de las evaluciones de una materia no ser mayor a 100\n");
                    j--;
                }
            }

        }
        x++;

        printf("\nQuieres Ingresar a otro estudiante?");
        fflush(stdin);
        sn = getchar();
    }while(sn == 'S' || sn == 's');
}

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

int nombreeval(ESTUDIANTE *est,char n[],int is)
{
    int i,j,c;

    for(i =0;i < est[0].c_materias;i++)
    {
        for(j = 0;j < est[0].)
    }
}
