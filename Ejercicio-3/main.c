//
// Created by diego on 31/10/2019.
//

#include "minunit.h"

#include "Funciones.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    int numero[] = {5,1,3,4,2};
    void *p;
    p = numero;

    sort(p,4,sizeof(int),comparar);

    mu_assert_int_eq(1,numero[0]);
    mu_assert_int_eq(2,numero[1]);
    mu_assert_int_eq(3,numero[2]);
    mu_assert_int_eq(4,numero[3]);
    mu_assert_int_eq(5,numero[4]);
}


MU_TEST_SUITE(test_suite) {
        MU_RUN_TEST(test_NombrePrueba);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}