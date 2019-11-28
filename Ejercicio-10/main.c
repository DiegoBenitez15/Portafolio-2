#include "minunit.h"
#include "Funciones.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(Polinomiode2terminos)
{
    TERMINO *cabeza = NULL;
    double *resultado = malloc(11* sizeof(double));
    cabeza = anadir(cabeza,11,0);
    cabeza = anadir(cabeza,-4,1);
    resultado = polinomio(cabeza);

    mu_assert_int_eq(11, resultado[0]);
    mu_assert_int_eq(9, resultado[1]);
    mu_assert_int_eq(7, resultado[2]);
    mu_assert_int_eq(5, resultado[3]);
    mu_assert_int_eq(3, resultado[4]);
    mu_assert_int_eq(1, resultado[5]);
    mu_assert_int_eq(-1, resultado[6]);
    mu_assert_int_eq(-3, resultado[7]);
    mu_assert_int_eq(-5, resultado[8]);
    mu_assert_int_eq(-7, resultado[9]);
    mu_assert_int_eq(-9, resultado[10]);

}

MU_TEST(Polinomiode3terminos)
{
    TERMINO *cabeza = NULL;
    double *resultado = malloc(11* sizeof(double));
    cabeza = anadir(cabeza,2,0);
    cabeza = anadir(cabeza,-6,1);
    cabeza = anadir(cabeza,3,2);
    resultado = polinomio(cabeza);

    mu_assert_double_eq(2, resultado[0]);
    mu_assert_double_eq(-0.25, resultado[1]);
    mu_assert_double_eq(-1, resultado[2]);
    mu_assert_double_eq(-0.25, resultado[3]);
    mu_assert_double_eq(2, resultado[4]);
    mu_assert_double_eq(5.75, resultado[5]);
    mu_assert_double_eq(11, resultado[6]);
    mu_assert_double_eq(17.75, resultado[7]);
    mu_assert_double_eq(26, resultado[8]);
    mu_assert_double_eq(35.75, resultado[9]);
    mu_assert_double_eq(47, resultado[10]);
}

MU_TEST(Polinomiode4terminos)
{
    TERMINO *cabeza = NULL;
    double *resultado = malloc(11* sizeof(double));
    cabeza = anadir(cabeza,-12,0);
    cabeza = anadir(cabeza,2,1);
    cabeza = anadir(cabeza,-1,2);
    cabeza = anadir(cabeza,4,3);
    resultado = polinomio(cabeza);

    mu_assert_double_eq(-12, resultado[0]);
    mu_assert_double_eq(-10.75, resultado[1]);
    mu_assert_double_eq(-7, resultado[2]);
    mu_assert_double_eq(2.25, resultado[3]);
    mu_assert_double_eq(20, resultado[4]);
    mu_assert_double_eq(49.25, resultado[5]);
    mu_assert_double_eq(93, resultado[6]);
    mu_assert_double_eq(154.25, resultado[7]);
    mu_assert_double_eq(236, resultado[8]);
    mu_assert_double_eq(341.25, resultado[9]);
    mu_assert_double_eq(473, resultado[10]);
}


MU_TEST_SUITE(test_suite) {
        MU_RUN_TEST(Polinomiode2terminos);
        MU_RUN_TEST(Polinomiode3terminos);
        MU_RUN_TEST(Polinomiode4terminos);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}