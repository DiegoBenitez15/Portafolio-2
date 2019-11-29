//
// Created by diego on 27/11/2019.
//

#include "Funciones.h"
#include <string.h>
#include <stdlib.h>

char* materia(char *html)
{
    char *ei = "<span class=\"ps_box-value\" id=\"DERIVED_SSS_HST_SSR_CLASSNAME_LONG$83$$12\">";
    char *ef = "</span>";
    int tamano_ei = (int)strlen(ei);
    char *aux = malloc((tamano_ei-4) * sizeof(char));
    strncpy(aux,ei,tamano_ei-5);
    aux[tamano_ei-5] = '\0';
    char *ptri = html;
    char *ptrf;
    int tmp;

    if((ptri = strstr(ptri,aux)) != NULL)
    {
        ptri += tamano_ei;
        ptrf = strstr(ptrf=ptri,ef);
        tmp = ptrf - ptri;

        if(ptrf != NULL && ptri != NULL)
        {
            return ptri;
        }
    }

    return NULL;
}

int disponibilidad(char *html)
{
    char *ei,*ef;
    ei = "<span class=\"ps-box-value\" aria-disabled=\"true\">";
    ef = "</span>";
    int tam_ei = (int)strlen(ei);
    char *ptr_inicio = html;
    char *ptr_fin;
    int tmp;

    if((ptr_inicio = strstr(ptr_inicio,ei)) != NULL)
    {
        ptr_inicio += tam_ei;
        ptr_fin = strstr(ptr_fin = ptr_inicio,ef);
        tmp = ptr_fin - ptr_inicio;


        if(ptr_fin != NULL && ptr_inicio != NULL)
        {
            if(strnicmp(ptr_inicio,"Realizado",tmp) == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }

    return -1;
}

char* nota(char *html)
{
    char *ei = "<span class=\"ps_box-value\" id=\"DERIVED_SSS_HST_CRSE_GRADE_OFF$10\">";
    char *ef = "</span>";
    int tamano_ei = (int)strlen(ei);
    char *aux = malloc((tamano_ei-4) * sizeof(char));
    strncpy(aux,ei,tamano_ei-5);
    aux[tamano_ei-5] = '\0';
    char *result;
    result = malloc(5 * sizeof(char));
    result[4] = '\0';
    char *ptri = html;
    char *ptrf;
    int tmp;

    if((ptri = strstr(ptri,aux)) != NULL)
    {
        ptri += tamano_ei;
        ptrf = strstr(ptrf=ptri,ef);
        tmp = ptrf - ptri;

        if(ptrf != NULL && ptri != NULL)
        {
            result = strncpy(result,ptri,tmp);
        }
    }

    return  result;
}

char *credito(char *html)
{
    char *ei = "<span class=\"ps_box-value\" id=\"DERIVED_SSS_HST_UNT_TAKEN$12\">";
    char *ef = "</span>";
    int tamano_ei = (int)strlen(ei);
    char *aux = malloc((tamano_ei-4) * sizeof(char));
    strncpy(aux,ei,tamano_ei-5);
    aux[tamano_ei-5] = '\0';
    char *result;
    result = malloc(2 * sizeof(char));
    result[1] = '\0';
    char *ptri = html;
    char *ptrf;
    int tmp;

    if((ptri = strstr(ptri,aux)) != NULL)
    {
        ptri += tamano_ei;
        ptrf = strstr(ptrf=ptri,ef);
        tmp = ptrf - ptri;

        if(ptrf != NULL && ptri != NULL)
        {
            result = strncpy(result,ptri,tmp);
        }
    }

    return  result;
}

float valorletra(char x)
{
    if(x == 'A')
    {
        return 4;
    }
    else if(x == 'B')
    {
        return 3;
    }
    else if(x == 'C')
    {
        return 2;
    }
    else if(x == 'D')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float indice(char *p)
{
    float suman,sumac;
    char *x,letra,cred;
    x = p;
    suman = 0;sumac = 0;

    while(x != NULL)
    {
        x = materia(x);

        if(x != NULL)
        {
            if(disponibilidad(x) == 1)
            {
                letra = *(nota(x));
                cred = *(credito(x));
                if(letra != 'R' && letra != 'S')
                {
                    suman += valorletra(letra);
                    sumac += (float)(cred - '0');
                }
            }
        }
    }

    return  suman / sumac;
}