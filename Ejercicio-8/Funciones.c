//
// Created by diego on 29/11/2019.
//

#include "Funciones.h"
#include <string.h>
#include <stdlib.h>

char ** extraertest(char * p)
{
    char *ei = "MU_TEST(";
    char *ef = ")";
    int tamanoei = (int)(strlen(ei));
    char *pi,*pf;
    pi = p;
    char **result = malloc(sizeof(char*));
    int tmp,c;
    c = 1;

    while((pi = strstr(pi,ei)) != NULL)
    {
        pi += tamanoei;
        pf = strstr(pf=pi,ef);
        tmp = pf - pi;

        if(pf == NULL)
        {
            break;
        }
        else if(pi != NULL)
        {
            result[c-1] = malloc((tmp+1) * sizeof(char));
            result[c-1] = strncpy(result[c-1],pi,tmp);
            result[c-1][tmp] = '\0';

            c++;
            result = realloc(result,c * sizeof(char*));
        }
    }

    return result;
}

char ** extraerrun(char * p)
{
    char *ei = "MU_RUN_TEST(";
    char *ef = ")";
    int tamanoei = (int)(strlen(ei));
    char *pi,*pf;
    pi = p;
    char **result = malloc(sizeof(char*));
    int tmp,c;
    c = 1;

    while((pi = strstr(pi,ei)) != NULL)
    {
        pi += tamanoei;
        pf = strstr(pf=pi,ef);
        tmp = pf - pi;

        if(pf == NULL)
        {
            break;
        }
        else
        {
            result[c-1] = malloc(tmp * sizeof(char));
            result[c-1] = strncpy(result[c-1],pi,tmp);
            result[c-1][tmp] = '\0';

            c++;
            result = realloc(result,c * sizeof(char*));
        }
    }

    return result;
}

char **comparar(char **a,char **b)
{
    char **i,**j;
    char **result = malloc(sizeof(char*));
    int c =1,n;

    for(i=a;*i != NULL;i++)
    {
        n=0;
        for(j=b;*j !=NULL;j++)
        {
            if(strcmp(*i,*j)== 0)
            {
                n = 1;
                break;
            }
        }

        if(n == 0)
        {
            result[c-1] = malloc(sizeof(char));
            result[c-1] = strcpy(result[c-1],*i);
            c++;
            result = realloc(result,c * sizeof(char*));
        }
    }

    return result;
}