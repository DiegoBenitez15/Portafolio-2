//
// Created by diego on 29/11/2019.
//

#include "miunit.h"
#include "Funciones.h"
#include <string.h>

#define MINUNIT_EPSILON 1E-12

char *minunit = "//\n"
                "// Created by diego on 12/11/2019.\n"
                "//\n"
                "\n"
                "#include \"minunit.h\"\n"
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
                "MU_TEST(MayusculayMinuscula1) {\n"
                "    char contrasena[] = {\"holatodoestaenminuscula\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(-1, MayusculayMinuscula(p));\n"
                "}\n"
                "\n"
                "MU_TEST(MayusculayMinuscula2) {\n"
                "    char contrasena[] = {\"HOLATODOESTAENMAYUSCULA\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(-1, MayusculayMinuscula(p));\n"
                "}\n"
                "\n"
                "MU_TEST(MayusculayMinuscula3) {\n"
                "    char contrasena[] = {\"AhoraEstaEnMayusculayEnMinuscula\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(0, MayusculayMinuscula(p));\n"
                "}\n"
                "\n"
                "MU_TEST(Numeros) {\n"
                "    char contrasena[] = {\"holax2\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(0, numero(p));\n"
                "}\n"
                "\n"
                "MU_TEST(Numeros2) {\n"
                "    char contrasena[] = {\"jejejeestavainanotienenumeros\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(-1, numero(p));\n"
                "}\n"
                "\n"
                "MU_TEST(Numeros3) {\n"
                "    char contrasena[] = {\"12holax23\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(0, numero(p));\n"
                "}\n"
                "\n"
                "MU_TEST(Palabras) {\n"
                "    char contrasena[] = {\"password\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(-1, igual(p));\n"
                "}\n"
                "\n"
                "MU_TEST(Palabras2) {\n"
                "    char contrasena[] = {\"contrasena\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(-1, igual(p));\n"
                "}\n"
                "\n"
                "MU_TEST(Palabras3) {\n"
                "    char contrasena[] = {\"clave\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(-1, igual(p));\n"
                "}\n"
                "\n"
                "MU_TEST(Palabras4) {\n"
                "    char contrasena[] = {\"PASSWORD\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(-1, igual(p));\n"
                "}\n"
                "\n"
                "MU_TEST(Palabras5) {\n"
                "    char contrasena[] = {\"CONTRASENA\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(-1, igual(p));\n"
                "}\n"
                "\n"
                "MU_TEST(Palabras6) {\n"
                "    char contrasena[] = {\"CLAVE\"};\n"
                "    char *p;\n"
                "    p = contrasena;\n"
                "\n"
                "    mu_assert_int_eq(-1, igual(p));\n"
                "}\n"
                "\n"
                "\n"
                "MU_TEST_SUITE(test_suite) {\n"
                "//Para que la longitud de la contrasena sea mayor a 7 digitos\n"
                "    MU_RUN_TEST(Longitud);\n"
                "    MU_RUN_TEST(Longitud2);\n"
                "    MU_RUN_TEST(Longitud3);\n"
                "//Para que la contrasena tenga tenga al menos una letra en mayuscula y una en minuscula\n"
                "    MU_RUN_TEST(MayusculayMinuscula1);\n"
                "    MU_RUN_TEST(MayusculayMinuscula2);\n"
                "    MU_RUN_TEST(MayusculayMinuscula3);\n"
                "// Para que la contrasena tenga al menos un numero entre el 0 al 9\n"
                "    MU_RUN_TEST(Numeros);\n"
                "    MU_RUN_TEST(Numeros2);\n"
                "    MU_RUN_TEST(Numeros3);\n"
                "// Para que contrasena no contenga ninguna de las palabras contrasena,password,clave\n"
                "    MU_RUN_TEST(Palabras);\n"
                "    MU_RUN_TEST(Palabras2);\n"
                "    MU_RUN_TEST(Palabras3);\n"
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
    a[5] = NULL;

    char **b = malloc(6 * sizeof(char*));
    b[0] = "HOLA1";
    b[1] = "ADIOS";
    b[2] = "HOLA3";
    b[3] = "HOLA5";
    b[4] = "BYE";
    b[5] = NULL;

    char **result;
    result = comparar(a,b);
    char **result2;
    result2 = comparar(b,a);


    mu_assert_int_eq(0, strcmp(result[0],"HOLA2"));
    mu_assert_int_eq(0, strcmp(result[1],"HOLA4"));
    mu_assert_int_eq(0, strcmp(result2[0],"ADIOS"));
    mu_assert_int_eq(0, strcmp(result2[1],"BYE"));
}

MU_TEST(test_NombrePrueba4) {
    char *p = minunit;
    char **b = malloc(6 * sizeof(char*));
    b[0] = "HOLA1";
    b[1] = "ADIOS";
    b[2] = "HOLA3";
    b[3] = "HOLA5";
    b[4] = "BYE";
    b[5] = NULL;

    p = agregarmin(p,b);

    puts(p);
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