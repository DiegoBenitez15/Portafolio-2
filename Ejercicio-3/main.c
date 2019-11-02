//
// Created by diego on 31/10/2019.
//

#include "minunit.h"

#include "Funciones.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    int list[] = {9,7,5,4,2,1};
    int size = sizeof(list) / sizeof(int);
    int i;
    quicksort(list, 0, size - 1);

    for (i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
}

MU_TEST(test_NombrePrueba2) {
    float list[] = {9,7,5,4,2,1};
    int size = sizeof(list) / sizeof(float);
    int i;
    quicksort(list, 0, size - 1);

    for (i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
}

MU_TEST_SUITE(test_suite) {
        MU_RUN_TEST(test_NombrePrueba);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}