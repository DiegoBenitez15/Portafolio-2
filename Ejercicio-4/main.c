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
}

MU_TEST(EliminarPorNombre2)
{
    ESTUDIANTE *p;
    int x = 23;
    p = (ESTUDIANTE*)calloc(x, sizeof(ESTUDIANTE));
    int m = 20181603;

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
}

MU_TEST(EliminarPorNombre3)
{
    ESTUDIANTE *p;
    int x = 23;
    p = (ESTUDIANTE*)calloc(x, sizeof(ESTUDIANTE));
    int m = 20181603;

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
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(EliminarPorNombre);
    MU_RUN_TEST(EliminarPorNombre2);
    MU_RUN_TEST(EliminarPorNombre3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}
