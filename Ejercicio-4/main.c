//
// Created by diego on 1/11/2019.
//

#include "minunit.h"

#include "Estudiantes.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(EliminarPorNombre)
{
    ESTUDIANTE *p;
    int x = 23;
    p = (ESTUDIANTE*)calloc(x, sizeof(ESTUDIANTE));
    int m = 20181603;

    p[0].nombre = "Diego Benitez";
    p[0].matricula = 20181603;


    p[1].nombre = "Delaine Lora";
    p[1].matricula = 20181673;

    matricula(p,x,m);

    mu_assert("Delaine Lora",p[0].nombre);
}

MU_TEST(EliminarPorNombre2)
{
    ESTUDIANTE *p;
    int x = 23;
    p = (ESTUDIANTE*)calloc(x, sizeof(ESTUDIANTE));
    int m = 20181646;

    p[0].nombre = "Diego Benitez";
    p[0].matricula = 20181603;

    p[1].nombre = "Delaine Lora";
    p[1].matricula = 20181673;

    p[2].nombre = "Jose Benitez";
    p[2].matricula = 20171055;

    p[3].nombre = "Vistor Aguilera";
    p[3].matricula = 20176543;

    p[4].nombre = "Juancho Laviera";
    p[4].matricula = 20181646;

    matricula(p,x,m);

    mu_assert("Diego Benitez",p[0].nombre);
    mu_assert("Delaine Lora",p[1].nombre);
    mu_assert("Jose Benitez",p[2].nombre);
    mu_assert("Vistor Aguilera",p[3].nombre);
}

MU_TEST(EliminarPorNombre3)
{
    ESTUDIANTE *p;
    int x = 23;
    p = (ESTUDIANTE*)calloc(x, sizeof(ESTUDIANTE));
    int m = 20145668;

    p[0].nombre = "Diego Benitez";
    p[0].matricula = 20181603;

    p[1].nombre = "Delaine Lora";
    p[1].matricula = 20181673;

    p[2].nombre = "Jose Benitez";
    p[2].matricula = 20171055;

    p[3].nombre = "Vistor Aguilera";
    p[3].matricula = 20176543;

    p[4].nombre = "Juancho Laviera";
    p[4].matricula = 20181646;

    p[5].nombre = "Bryan Vargas";
    p[5].matricula = 20183456;

    p[6].nombre = "Ricardo Constatinopla";
    p[6].matricula = 20156224;

    p[7].nombre = "Aristobulo Isturiz";
    p[7].matricula = 20145668;

    p[8].nombre = "Javs Bunny";
    p[8].matricula = 20181435;

    p[9].nombre = "Vin Calvo";
    p[9].matricula = 20181456;

    matricula(p,x,m);

    mu_assert("Diego Benitez",p[0].nombre);
    mu_assert("Delaine Lora",p[1].nombre);
    mu_assert("Jose Benitez",p[2].nombre);
    mu_assert("Vistor Aguilera",p[3].nombre);
    mu_assert("Juancho Laviera",p[4].nombre);
    mu_assert("Bryan Vargas",p[5].nombre);
    mu_assert("Ricardo Constatinopla",p[6].nombre);
    mu_assert("Javs Bunny",p[7].nombre);
    mu_assert("Vin Calvo",p[8].nombre);
}

MU_TEST(EliminarMateria)
{
    ESTUDIANTE *p;
    char nombre[] = "Fisica";
    int x = 0;
    p = (ESTUDIANTE*)calloc(1, sizeof(ESTUDIANTE));
    p[0].nombre = "Diego";
    p[0].matricula = 2018103;
    p[0].c_materias = 2;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Fisica");
    p[0].mat[1].nombre = (char*) malloc(12 * sizeof(char));
    strcpy(p[0].mat[1].nombre,"Programacion");

    eliminarnombre(p,nombre,x);

    mu_assert("Programacion",p[0].mat[0].nombre);
}

MU_TEST(EliminarMateria2)
{
    ESTUDIANTE *p;
    char nombre[] = "Ingles";
    int x = 0;
    p = (ESTUDIANTE*)calloc(1, sizeof(ESTUDIANTE));
    p[0].nombre = "Diego";
    p[0].matricula = 2018103;
    p[0].c_materias = 5;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Fisica");
    p[0].mat[1].nombre = (char*) malloc(12 * sizeof(char));
    strcpy(p[0].mat[1].nombre,"Programacion");
    p[0].mat[2].nombre = (char*) malloc(6 * sizeof(char));
    strcpy(p[0].mat[2].nombre,"Ingles");
    p[0].mat[3].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[3].nombre,"Calculo");
    p[0].mat[4].nombre = (char*) malloc(9 * sizeof(char));
    strcpy(p[0].mat[4].nombre,"Filosofia");

    eliminarnombre(p,nombre,x);

    mu_assert("Fisica",p[0].mat[0].nombre);
    mu_assert("Programacion",p[0].mat[1].nombre);
    mu_assert("Calculo",p[0].mat[2].nombre);
    mu_assert("Filosofia",p[0].mat[3].nombre);
}

MU_TEST(EliminarMateria3)
{
    ESTUDIANTE *p;
    char nombre[] = "Programacion";
    int x = 0;
    p = (ESTUDIANTE*)calloc(1, sizeof(ESTUDIANTE));
    p[0].nombre = "Diego";
    p[0].matricula = 20181603;
    p[0].c_materias = 10;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(6 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Fisica");
    p[0].mat[1].nombre = (char*) malloc(12 * sizeof(char));
    strcpy(p[0].mat[1].nombre,"Programacion");
    p[0].mat[2].nombre = (char*) malloc(6 * sizeof(char));
    strcpy(p[0].mat[2].nombre,"Ingles");
    p[0].mat[3].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[3].nombre,"Calculo");
    p[0].mat[4].nombre = (char*) malloc(9 * sizeof(char));
    strcpy(p[0].mat[4].nombre,"Filosofia");
    p[0].mat[5].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[5].nombre,"Espanol");
    p[0].mat[6].nombre = (char*) malloc(6 * sizeof(char));
    strcpy(p[0].mat[6].nombre,"Dibujo");
    p[0].mat[7].nombre = (char*) malloc(10 * sizeof(char));
    strcpy(p[0].mat[7].nombre,"Algoritmia");
    p[0].mat[8].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[8].nombre,"Biologia");
    p[0].mat[9].nombre = (char*) malloc(10 * sizeof(char));
    strcpy(p[0].mat[9].nombre,"Matematica");

    eliminarnombre(p,nombre,x);

    mu_assert("Fisica",p[0].mat[0].nombre);
    mu_assert("Ingles",p[0].mat[1].nombre);
    mu_assert("Calculo",p[0].mat[2].nombre);
    mu_assert("Filosofia",p[0].mat[3].nombre);
    mu_assert("Espanol",p[0].mat[4].nombre);
    mu_assert("Dibujo",p[0].mat[5].nombre);
    mu_assert("Algoritmia",p[0].mat[6].nombre);
    mu_assert("Biologia",p[0].mat[7].nombre);
    mu_assert("Matematica",p[0].mat[8].nombre);
}

MU_TEST(eva)
{
    ESTUDIANTE *p;
    char nombre[] = "Cinematica";
    int x = 0;

    p = (ESTUDIANTE*)calloc(1, sizeof(ESTUDIANTE));
    p[0].nombre = "Diego";
    p[0].matricula = 2018103;
    p[0].c_materias = 1;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Fisica");
    p[0].mat[0].c_eval = 3;
    p[0].mat[0].eval = (EVALUACIONES*) malloc(p[0].mat[0].c_eval * sizeof(EVALUACIONES));
    p[0].mat[0].eval[0].nombre = (char*) malloc(10 * sizeof(char));
    strcpy(p[0].mat[0].eval[0].nombre,"Cinematica");
    p[0].mat[0].eval[1].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[0].eval[1].nombre,"Dinamica");
    p[0].mat[0].eval[1].nombre = (char*) malloc(12 * sizeof(char));
    strcpy(p[0].mat[0].eval[2].nombre,"Electricidad");

    EliminarEvaluacion(p,x,nombre);

    mu_assert("Dinamica",p[0].mat[0].eval[0].nombre);
    mu_assert("Electricidad",p[0].mat[0].eval[1].nombre);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(eva);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}
