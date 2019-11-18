//
// Created by diego on 12/11/2019.
//

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int longitud(const char *p)
{
    int i;

    for(i=0;i>-1;i++)
    {
        if(p[i] == '\0')
        {
            break;
        }
    }

    if(i < 7)
    {
        printf("\nError Contrasena no valida(debe tener mas de 7 digitos)");
        return -1;
    }

    return 0;
}

int MayusculayMinuscula(const char *p)
{
    int i,c,d;
    c = 0;
    d = 0;

    for(i=0;i>-1;i++)
    {
        if(p[i] == '\0')
        {
            break;
        }
        else if((int)p[i] >= 65 && (int)p[i] <= 90)
        {
            c += 1;
        }
        else if((int)p[i] >= 97 && (int)p[i] <= 122)
        {
            d += 1;
        }
    }

    if(d > 0 && c > 0)
    {
        return 0;
    }

    printf("\nError Contrasena no valida(debe tener al menos 1 letra en mayuscula y 1 minuscula)");
    return -1;
}

int numero(const char *p)
{
    int i,c;
    c = 0;

    for(i=0;i>-1;i++)
    {
        if(p[i] == '\0')
        {
            break;
        }
        else if((int)p[i] >= 48 && (int)p[i] <= 57)
        {
            c = 1;
        }
    }

    if(c == 1)
    {
        return 0;
    }

    printf("\nError Contrasena no valida(debe tener al menos un numero entre |0-9|)");
    return -1;
}

int igual(char *p)
{
    if(strcmp(p,"password") == 0)
    {
        return -1;
    }
    else if(strcmp(p,"contrasena") == 0)
    {
        return -1;
    }
    else if(strcmp(p,"clave") == 0)
    {
        return -1;
    }

    return 0;
}