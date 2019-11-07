//
// Created by diego on 1/11/2019.
//

#include "Funciones.h"
#include <string.h>

void sort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
{
    int i,j,k;
    char swap;
    char *pt = (char*)base;
    for (i = 0 ; i < (int)nitems - 1; i++)
    {
        for(j = 0 ; j < (int)nitems - i - 1; i += size)
        {
            if ((compar)(pt + j,pt + j + size) > 0)
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

int comparar(const void *a, const void *b)
{
    char *p1 = (char*)a;
    char *p2 = (char*)b;

    return strcmp(p1,p2);
}