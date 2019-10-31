#include "minunit.h"

#include "Cadenas.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    char *palabra;
    int d = 45;
    palabra = (char *) malloc(d);
    strcpy(palabra, "palabra.Hola");

    d = cadena(palabra,d);
    palabra = realloc(palabra, d * sizeof(char));

    mu_assert_int_eq('H', palabra[0]);
    mu_assert_int_eq('o', palabra[1]);
    mu_assert_int_eq('l', palabra[2]);
    mu_assert_int_eq('a', palabra[3]);
}

MU_TEST(test_NombrePrueba2) {
    char *palabra;
    int d = 45;
    palabra = (char *) malloc(d);
    strcpy(palabra, "Hola mi nombre es diego !Como estas?");

    d = cadena(palabra,d);
    palabra = realloc(palabra, d * sizeof(char));

    mu_assert_int_eq('C', palabra[0]);
    mu_assert_int_eq('o', palabra[1]);
    mu_assert_int_eq('m', palabra[2]);
    mu_assert_int_eq('o', palabra[3]);
    mu_assert_int_eq(' ', palabra[4]);
    mu_assert_int_eq('e', palabra[5]);
    mu_assert_int_eq('s', palabra[6]);
    mu_assert_int_eq('t', palabra[7]);
    mu_assert_int_eq('a', palabra[8]);
    mu_assert_int_eq('s', palabra[9]);
    mu_assert_int_eq('?', palabra[10]);
}

MU_TEST(test_NombrePrueba3) {
    char *palabra;
    int d = 45;
    palabra = (char *) malloc(d);
    strcpy(palabra, "En primer lugar,yo no fui a esa fiesta");

    d = cadena(palabra,d);
    palabra = realloc(palabra, d * sizeof(char));

    mu_assert_int_eq('y', palabra[0]);
    mu_assert_int_eq('o', palabra[1]);
    mu_assert_int_eq(' ', palabra[2]);
    mu_assert_int_eq('n', palabra[3]);
    mu_assert_int_eq('o', palabra[4]);
    mu_assert_int_eq(' ', palabra[5]);
    mu_assert_int_eq('f', palabra[6]);
    mu_assert_int_eq('u', palabra[7]);
    mu_assert_int_eq('i', palabra[8]);
    mu_assert_int_eq(' ', palabra[9]);
    mu_assert_int_eq('a', palabra[10]);
    mu_assert_int_eq(' ', palabra[11]);
    mu_assert_int_eq('e', palabra[12]);
    mu_assert_int_eq('s', palabra[13]);
    mu_assert_int_eq('a', palabra[14]);
    mu_assert_int_eq(' ', palabra[15]);
    mu_assert_int_eq('f', palabra[16]);
    mu_assert_int_eq('i', palabra[17]);
    mu_assert_int_eq('e', palabra[18]);
    mu_assert_int_eq('s', palabra[19]);
    mu_assert_int_eq('t', palabra[20]);
    mu_assert_int_eq('a', palabra[21]);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
    MU_RUN_TEST(test_NombrePrueba2);
    MU_RUN_TEST(test_NombrePrueba3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}