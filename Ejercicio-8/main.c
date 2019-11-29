//
// Created by diego on 29/11/2019.
//

#include "miunit.h"
#include "Funciones.h"
#include <string.h>

#define MINUNIT_EPSILON 1E-12

char *minunit = "#include \"minunit.h\"\n"
                 "\n"
                 "#include \"Contrasena.h\"\n"
                 "\n"
                 "#define MINUNIT_EPSILON 1E-12\n"
                 "\n"
                 "MU_TEST(Longitud) {\n"
                 "    char contrasena[] = {\"Notengoniideaqueponer\"};\n"
                 "    char *p;\n"
                 "    p = contrasena;\n"
                 "\n"
                 "    mu_assert_int_eq(0, longitud(p));\n"
                 "}\n"
                 "\n"
                 "MU_TEST(Longitud2) {\n"
                 "    char contrasena[] = {\"Hola\"};\n"
                 "    char *p;\n"
                 "    p = contrasena;\n"
                 "\n"
                 "    mu_assert_int_eq(-1, longitud(p));\n"
                 "}\n"
                 "\n"
                 "MU_TEST(Longitud3) {\n"
                 "    char contrasena[] = {\"EstoEsUnaPruebaParaVerSiEstoFunciona\"};\n"
                 "    char *p;\n"
                 "    p = contrasena;\n"
                 "\n"
                 "    mu_assert_int_eq(0, longitud(p));\n"
                 "}\n"
                 "\n"
                 "\n"
                 "MU_TEST_SUITE(test_suite) {\n"
                 "//Para que la longitud de la contrasena sea mayor a 7 digitos\n"
                 "    MU_RUN_TEST(Longitud);\n"
                 "    MU_RUN_TEST(Longitud2);\n"
                 "    MU_RUN_TEST(Longitud3);\n"
                 "}\n"
                 "\n"
                 "int main(int argc, char *argv[]) {\n"
                 "    MU_RUN_SUITE(test_suite);\n"
                 "    MU_REPORT();\n"
                 "    return 0;\n"
                 "}";

MU_TEST(test_NombrePrueba) {
        char *p = minunit;
        char **result;

        result = extraertest(p);

        mu_assert_int_eq(0, strcmp(result[0],"Longitud"));
}

MU_TEST(test_NombrePrueba2) {
    char *p = minunit;
    char **result;

    result = extraerrun(p);

    mu_assert_int_eq(0, strcmp(result[0],"Longitud"));
}

MU_TEST(test_NombrePrueba3) {
    char **a = malloc(5 * sizeof(char*));
    a[0] = "HOLA1";
    a[1] = "HOLA2";
    a[2] = "HOLA3";
    a[3] = "HOLA4";
    a[4] = "HOLA5";

    char **b = malloc(5 * sizeof(char*));
    b[0] = "HOLA1";
    b[1] = "ADIOS";
    b[2] = "HOLA3";
    b[3] = "HOLA5";
    b[4] = "BYE";

    char **result;
    result = comparar(a,b);
    char **result2;
    result2 = comparar(b,a);


    mu_assert_int_eq(0, strcmp(result[0],"HOLA2"));
    mu_assert_int_eq(0, strcmp(result[1],"HOLA4"));
    mu_assert_int_eq(0, strcmp(result2[0],"ADIOS"));
    mu_assert_int_eq(0, strcmp(result2[1],"BYE"));
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
    MU_RUN_TEST(test_NombrePrueba2);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}