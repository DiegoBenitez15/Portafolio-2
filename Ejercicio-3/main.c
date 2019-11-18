//
// Created by diego on 31/10/2019.
//

#include "minunit.h"

#include "Funciones.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(OrdenamientoCHAR) {
    char numero[] = {"HOLA"};
    void *p;
    p = numero;

    sort(p,sizeof(numero)-1,sizeof(char),compararchar);

    mu_assert_int_eq('A',numero[0]);
    mu_assert_int_eq('H',numero[1]);
    mu_assert_int_eq('L',numero[2]);
    mu_assert_int_eq('O',numero[3]);
}

MU_TEST(OrdenamientoCHAR2) {
    char numero[] = {"ALGORITMIA"};
    void *p;
    p = numero;

    sort(p,sizeof(numero)-1,sizeof(char),compararchar);

    mu_assert_int_eq('A',numero[0]);
    mu_assert_int_eq('A',numero[1]);
    mu_assert_int_eq('G',numero[2]);
    mu_assert_int_eq('I',numero[3]);
    mu_assert_int_eq('I',numero[4]);
    mu_assert_int_eq('L',numero[5]);
    mu_assert_int_eq('M',numero[6]);
    mu_assert_int_eq('O',numero[7]);
    mu_assert_int_eq('R',numero[8]);
    mu_assert_int_eq('T',numero[9]);
}

MU_TEST(OrdenamientoCHAR3) {
    char numero[] = {"PARALELEPIPEDO"};
    void *p;
    p = numero;

    sort(p,sizeof(numero)-1,sizeof(char),compararchar);

    mu_assert_int_eq('A',numero[0]);
    mu_assert_int_eq('A',numero[1]);
    mu_assert_int_eq('D',numero[2]);
    mu_assert_int_eq('E',numero[3]);
    mu_assert_int_eq('E',numero[4]);
    mu_assert_int_eq('E',numero[5]);
    mu_assert_int_eq('I',numero[6]);
    mu_assert_int_eq('L',numero[7]);
    mu_assert_int_eq('L',numero[8]);
    mu_assert_int_eq('O',numero[9]);
    mu_assert_int_eq('P',numero[10]);
    mu_assert_int_eq('P',numero[11]);
    mu_assert_int_eq('P',numero[12]);
    mu_assert_int_eq('R',numero[13]);

}

MU_TEST(OrdenamientoINT) {
    int numero[] = {5,4,3,2,1};
    void *p;
    p = numero;

    sort(p,5,sizeof(int),compararint);

    mu_assert_int_eq(1,numero[0]);
    mu_assert_int_eq(2,numero[1]);
    mu_assert_int_eq(3,numero[2]);
    mu_assert_int_eq(4,numero[3]);
    mu_assert_int_eq(5,numero[4]);
}

MU_TEST(OrdenamientoINT2) {
    int numero[] = {1,34,4,1,2,6,6,23,86,2};
    void *p;
    p = numero;

    sort(p,10,sizeof(int),compararint);

    mu_assert_int_eq(1,numero[0]);
    mu_assert_int_eq(1,numero[1]);
    mu_assert_int_eq(2,numero[2]);
    mu_assert_int_eq(2,numero[3]);
    mu_assert_int_eq(4,numero[4]);
    mu_assert_int_eq(6,numero[5]);
    mu_assert_int_eq(6,numero[6]);
    mu_assert_int_eq(23,numero[7]);
    mu_assert_int_eq(34,numero[8]);
    mu_assert_int_eq(86,numero[9]);
}


MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(OrdenamientoCHAR);
    MU_RUN_TEST(OrdenamientoCHAR2);
    MU_RUN_TEST(OrdenamientoCHAR3);
    MU_RUN_TEST(OrdenamientoINT);
    MU_RUN_TEST(OrdenamientoINT2);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}