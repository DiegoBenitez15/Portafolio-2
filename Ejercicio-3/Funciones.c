//
// Created by diego on 1/11/2019.
//

#include "Funciones.h"

void sort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
{
    int i;
    int j,k;
    char swap;
    char *pt = (char*)base;
    for (i = base ; i < (int)(nitems*size) - 1; i++)
    {
        for(j = 0 ; j < (int)(nitems*size) - i - 1; j += size)
        {
            if (compar(base+j,base+j+size) > 0)
            {
                for(k = 0;k < (int)size;k++)
                {
                    swap = pt[j+k];
                    pt[j+k] = pt[j+size+k];
                    pt[j+size+k] = swap;
                }
            }
        }
    }
}

int compararchar(const void *a, const void *b)
{
    char *p1 = (char*)a;
    char *p2 = (char*)b;

    return *p1 - *p2;
}

int compararint(const void *a, const void *b)
{
    int *p1 = (int*) a;
    int *p2 = (int*) b;

    return *p1 - *p2;
}

int compararfloat(const void *a,const void *b)
{
    float *p1 = (float*) a;
    float *p2 = (float*) b;

    return *p1 - *p2;
}
