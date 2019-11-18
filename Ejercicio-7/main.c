//
// Created by diego on 12/11/2019.
//

#include "minunit.h"

#include "Contrasena.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(Longitud) {
    char contrasena[] = {"Notengoniideaqueponer"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(0, longitud(p));
}

MU_TEST(Longitud2) {
    char contrasena[] = {"Hola"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, longitud(p));
}

MU_TEST(Longitud3) {
    char contrasena[] = {"EstoEsUnaPruebaParaVerSiEstoFunciona"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(0, longitud(p));
}

MU_TEST(MayusculayMinuscula1) {
    char contrasena[] = {"holatodoestaenminuscula"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, MayusculayMinuscula(p));
}

MU_TEST(MayusculayMinuscula2) {
    char contrasena[] = {"HOLATODOESTAENMAYUSCULA"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, MayusculayMinuscula(p));
}

MU_TEST(MayusculayMinuscula3) {
    char contrasena[] = {"AhoraEstaEnMayusculayEnMinuscula"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(0, MayusculayMinuscula(p));
}

MU_TEST(Numeros) {
    char contrasena[] = {"holax2"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(0, numero(p));
}

MU_TEST(Numeros2) {
    char contrasena[] = {"jejejeestavainanotienenumeros"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, numero(p));
}

MU_TEST(Numeros3) {
    char contrasena[] = {"12holax23"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(0, numero(p));
}

MU_TEST(Palabras) {
    char contrasena[] = {"password"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, igual(p));
}

MU_TEST(Palabras2) {
    char contrasena[] = {"contrasena"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, igual(p));
}

MU_TEST(Palabras3) {
    char contrasena[] = {"clave"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, igual(p));
}

MU_TEST(Palabras4) {
    char contrasena[] = {"PASSWORD"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, igual(p));
}

MU_TEST(Palabras5) {
    char contrasena[] = {"CONTRASENA"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, igual(p));
}

MU_TEST(Palabras6) {
    char contrasena[] = {"CLAVE"};
    char *p;
    p = contrasena;

    mu_assert_int_eq(-1, igual(p));
}


MU_TEST_SUITE(test_suite) {
//Para que la longitud de la contrasena sea mayor a 7 digitos
    MU_RUN_TEST(Longitud);
    MU_RUN_TEST(Longitud2);
    MU_RUN_TEST(Longitud3);
//Para que la contrasena tenga tenga al menos una letra en mayuscula y una en minuscula
    MU_RUN_TEST(MayusculayMinuscula1);
    MU_RUN_TEST(MayusculayMinuscula2);
    MU_RUN_TEST(MayusculayMinuscula3);
// Para que la contrasena tenga al menos un numero entre el 0 al 9
    MU_RUN_TEST(Numeros);
    MU_RUN_TEST(Numeros2);
    MU_RUN_TEST(Numeros3);
// Para que contrasena no contenga ninguna de las palabras contrasena,password,clave
    MU_RUN_TEST(Palabras);
    MU_RUN_TEST(Palabras2);
    MU_RUN_TEST(Palabras3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}