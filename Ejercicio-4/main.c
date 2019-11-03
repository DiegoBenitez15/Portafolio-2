//
// Created by diego on 1/11/2019.
//

#include "minunit.h"

#include "Estudiantes.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba)
{
    ESTUDIANTE est[2];
    est[0].nombre = "Diego Benitez";
    est[0].matricula = 20181603;
    est[0].edad = 18;
    est[0].c_materias = 1;
    est[0].mat[0].nombre = "Programacion";
    est[0].mat[0].c_eval = 1;
    est[0].mat[0].eval[0].nombre = "Boo";
    est[0].mat[0].eval[0].pod = 100;
    est[0].mat[0].eval[0].nota = 100;

    est[1].nombre = "Delaine Lora";
    est[1].matricula = 20181673;
    est[1].edad = 20;
    est[1].c_materias = 2;
    est[1].mat[0].nombre = "Espanol";
    est[1].mat[0].c_eval = 2;
    est[1].mat[0].eval[0].nombre = "Argumentativa";
    est[1].mat[0].eval[0].pod = 50;
    est[1].mat[0].eval[0].nota = 43;
    est[1].mat[0].eval[1].nombre = "Narrativa";
    est[1].mat[0].eval[1].pod = 50;
    est[1].mat[0].eval[1].nota = 72;
    est[1].mat[1].nombre = "Razonamiento Matematico";
    est[1].mat[1].c_eval = 1;
    est[1].mat[1].eval[0].nombre = "Conjuntos";
    est[1].mat[1].eval[0].pod = 100;
    est[1].mat[1].eval[0].nota = 32;



}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}
