//
// Created by diego on 27/11/2019.
//

#include "Funciones.h"
#include "minunit.h"
#include <stdlib.h>

#define MINUNIT_EPSILON 1E-12

MU_TEST(ORDENAR) {
    PROD *cabeza = NULL;
    cabeza = anadir(cabeza,1,"ARROZ",50.0);
    cabeza = anadir(cabeza,2,"LECHE",30.0);
    cabeza = anadir(cabeza,3,"AZUCAR",12.0);

    ordenar(cabeza);
    mu_assert("ARROZ",cabeza->nombre);
    mu_assert("LECHE",cabeza->next->nombre);
    mu_assert("AZUCAR",cabeza->next->next->nombre);
}

MU_TEST(ORDENAR2) {
    PROD *cabeza = NULL;
    cabeza = anadir(cabeza,1,"YOGURT",46.0);
    cabeza = anadir(cabeza,4,"NUTELA",23.0);
    cabeza = anadir(cabeza,2,"PAN",67.0);
    cabeza = anadir(cabeza,3,"SALAMI",25.0);

    ordenar(cabeza);
    mu_assert("PAN",cabeza->nombre);
    mu_assert("YOGURT",cabeza->next->nombre);
    mu_assert("SALAMI",cabeza->next->next->nombre);
    mu_assert("NUTELA",cabeza->next->next->next->nombre);
}

MU_TEST(ORDENAR3) {
    PROD *cabeza = NULL;
    cabeza = anadir(cabeza,5,"MANDARINA",43.0);
    cabeza = anadir(cabeza,4,"NATILLA",3.0);
    cabeza = anadir(cabeza,2,"ARANDANOS",32.0);
    cabeza = anadir(cabeza,7,"FIDEOS",45.0);
    cabeza = anadir(cabeza,1,"DESODORANTE",23.0);

    ordenar(cabeza);
    mu_assert("FIDEOS",cabeza->nombre);
    mu_assert("MANDARINA",cabeza->next->nombre);
    mu_assert("ARANDANOS",cabeza->next->next->nombre);
    mu_assert("DESODORANTE",cabeza->next->next->next->nombre);
    mu_assert("NATILLA",cabeza->next->next->next->next->nombre);
}

MU_TEST(BusquedaporID) {
    PROD *cabeza = NULL;
    PROD *result;
    int id = 2;
    cabeza = anadir(cabeza,1,"ARROZ",12.0);
    cabeza = anadir(cabeza,2,"LECHE",30.0);
    cabeza = anadir(cabeza,3,"AZUCAR",50.0);

    result = buscarporID(cabeza,id);
    mu_assert_int_eq(2, result->id);
    mu_assert("LECHE", result->nombre);
    mu_assert_double_eq(30.0, result->precio);
}

MU_TEST(BusquedaporID2) {
    PROD *cabeza = NULL;
    PROD *result;
    int id = 3;
    cabeza = anadir(cabeza,1,"YOGURT",46.0);
    cabeza = anadir(cabeza,4,"NUTELA",23.0);
    cabeza = anadir(cabeza,2,"PAN",67.0);
    cabeza = anadir(cabeza,3,"SALAMI",25.0);

    result = buscarporID(cabeza,id);
    mu_assert_int_eq(3, result->id);
    mu_assert("SALAMI", result->nombre);
    mu_assert_double_eq(25.0, result->precio);
}

MU_TEST(BusquedaporID3) {
    PROD *cabeza = NULL;
    PROD *result;
    int id = 5;
    cabeza = anadir(cabeza,5,"MANDARINA",43.0);
    cabeza = anadir(cabeza,4,"NATILLA",3.0);
    cabeza = anadir(cabeza,2,"ARANDANOS",32.0);
    cabeza = anadir(cabeza,7,"FIDEOS",45.0);
    cabeza = anadir(cabeza,1,"DESODORANTE",23.0);

    result = buscarporID(cabeza,id);
    mu_assert_int_eq(5, result->id);
    mu_assert("MANDARINA", result->nombre);
    mu_assert_double_eq(43.0, result->precio);
}

MU_TEST(BusquedaporNOMBRE) {
    PROD *cabeza = NULL;
    PROD *result;
    char *nombre = "AZUCAR";
    cabeza = anadir(cabeza,1,"ARROZ",12.0);
    cabeza = anadir(cabeza,2,"LECHE",30.0);
    cabeza = anadir(cabeza,3,"AZUCAR",50.0);

    result = buscarpornombre(cabeza,nombre);
    mu_assert_int_eq(3, result->id);
    mu_assert("AZUCAR", result->nombre);
    mu_assert_double_eq(50.0, result->precio);
}

MU_TEST(BusquedaporNOMBRE2) {
    PROD *cabeza = NULL;
    PROD *result;
    char *nombre = "YOGURT";
    cabeza = anadir(cabeza,1,"YOGURT",46.0);
    cabeza = anadir(cabeza,4,"NUTELA",23.0);
    cabeza = anadir(cabeza,2,"PAN",67.0);
    cabeza = anadir(cabeza,3,"SALAMI",25.0);

    result = buscarpornombre(cabeza,nombre);
    mu_assert_int_eq(1, result->id);
    mu_assert("YOGURT", result->nombre);
    mu_assert_double_eq(46.0, result->precio);
}

MU_TEST(BusquedaporNOMBRE3) {
    PROD *cabeza = NULL;
    PROD *result;
    char *nombre = "FIDEOS";
    cabeza = anadir(cabeza,5,"MANDARINA",43.0);
    cabeza = anadir(cabeza,4,"NATILLA",3.0);
    cabeza = anadir(cabeza,2,"ARANDANOS",32.0);
    cabeza = anadir(cabeza,7,"FIDEOS",45.0);
    cabeza = anadir(cabeza,1,"DESODORANTE",23.0);

    result = buscarpornombre(cabeza,nombre);
    mu_assert_int_eq(7, result->id);
    mu_assert("FIDEOS", result->nombre);
    mu_assert_double_eq(45.0, result->precio);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(ORDENAR);
    MU_RUN_TEST(ORDENAR2);
    MU_RUN_TEST(ORDENAR3);
    MU_RUN_TEST(BusquedaporNOMBRE);
    MU_RUN_TEST(BusquedaporNOMBRE2);
    MU_RUN_TEST(BusquedaporNOMBRE3);
    MU_RUN_TEST(BusquedaporID);
    MU_RUN_TEST(BusquedaporID);
    MU_RUN_TEST(BusquedaporID);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}