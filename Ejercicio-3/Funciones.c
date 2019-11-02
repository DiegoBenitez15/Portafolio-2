//
// Created by diego on 1/11/2019.
//

#include "Funciones.h"

void quicksort(void *list, int ii, int is)
{
    int pivot, i, j, temp;
    if (ii < is)
    {
        pivot = ii;
        i = ii;
        j = is;
        while (i < j)
        {
            while (list[i] <= list[pivot] && i <= is)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= ii)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, ii, j - 1);
        quicksort(list, j + 1, is);
    }
}