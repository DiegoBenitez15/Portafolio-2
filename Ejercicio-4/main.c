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
    ESTUDIANTE est;
    ESTUDIANTE *p;
    char nombre[] = "Fisica";
    p = &est;
    p[0].nombre = "Diego";
    p[0].matricula = 20181603;
    p[0].c_materias = 2;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Fisica");
    p[0].mat[1].nombre = (char*) malloc(13 * sizeof(char));
    strcpy(p[0].mat[1].nombre,"Programacion");

    eliminarnombre(p,nombre,0);

    mu_assert("Programacion",p[0].mat[0].nombre);
}

MU_TEST(EliminarMateria2)
{
    ESTUDIANTE est;
    ESTUDIANTE *p;
    char nombre[] = "Ingles";
    p = &est;
    p[0].nombre = "Diego";
    p[0].matricula = 2018103;
    p[0].c_materias = 5;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Fisica");
    p[0].mat[1].nombre = (char*) malloc(13 * sizeof(char));
    strcpy(p[0].mat[1].nombre,"Programacion");
    p[0].mat[2].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[2].nombre,"Ingles");
    p[0].mat[3].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[3].nombre,"Calculo");
    p[0].mat[4].nombre = (char*) malloc(10 * sizeof(char));
    strcpy(p[0].mat[4].nombre,"Filosofia");

    eliminarnombre(p,nombre,0);

    mu_assert("Fisica",p[0].mat[0].nombre);
    mu_assert("Programacion",p[0].mat[1].nombre);
    mu_assert("Calculo",p[0].mat[2].nombre);
    mu_assert("Filosofia",p[0].mat[3].nombre);
}

MU_TEST(EliminarMateria3)
{
    ESTUDIANTE est;
    ESTUDIANTE *p;
    char nombre[] = "Ingles";
    p = &est;
    p[0].nombre = "Diego";
    p[0].matricula = 20181603;
    p[0].c_materias = 10;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Fisica");
    p[0].mat[1].nombre = (char*) malloc(13 * sizeof(char));
    strcpy(p[0].mat[1].nombre,"Programacion");
    p[0].mat[2].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[2].nombre,"Ingles");
    p[0].mat[3].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[3].nombre,"Calculo");
    p[0].mat[4].nombre = (char*) malloc(10 * sizeof(char));
    strcpy(p[0].mat[4].nombre,"Filosofia");
    p[0].mat[5].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[5].nombre,"Espanol");
    p[0].mat[6].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[6].nombre,"Dibujo");
    p[0].mat[7].nombre = (char*) malloc(11 * sizeof(char));
    strcpy(p[0].mat[7].nombre,"Algoritmia");
    p[0].mat[8].nombre = (char*) malloc(9 * sizeof(char));
    strcpy(p[0].mat[8].nombre,"Biologia");
    p[0].mat[9].nombre = (char*) malloc(11 * sizeof(char));
    strcpy(p[0].mat[9].nombre,"Matematica");

    eliminarnombre(p,nombre,0);

    mu_assert("Fisica",p[0].mat[0].nombre);
    mu_assert("Programacion",p[0].mat[1].nombre);
    mu_assert("Calculo",p[0].mat[2].nombre);
    mu_assert("Filosofia",p[0].mat[3].nombre);
    mu_assert("Espanol",p[0].mat[4].nombre);
    mu_assert("Dibujo",p[0].mat[5].nombre);
    mu_assert("Algoritmia",p[0].mat[6].nombre);
    mu_assert("Biologia",p[0].mat[7].nombre);
    mu_assert("Matematica",p[0].mat[8].nombre);
}

MU_TEST(EliminarPorEvaluacion)
{
    ESTUDIANTE est;
    ESTUDIANTE *p;
    char nombre[] = "Cinematica";

    p = &est;
    p[0].nombre = "Diego";
    p[0].matricula = 2018103;
    p[0].c_materias = 1;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Fisica");
    p[0].mat[0].c_eval = 3;
    p[0].mat[0].eval = (EVALUACIONES*) malloc(p[0].mat[0].c_eval * sizeof(EVALUACIONES));
    p[0].mat[0].eval[0].nombre = (char*) malloc(11 * sizeof(char));
    strcpy(p[0].mat[0].eval[0].nombre,"Cinematica");
    p[0].mat[0].eval[1].nombre = (char*) malloc(9 * sizeof(char));
    strcpy(p[0].mat[0].eval[1].nombre,"Dinamica");
    p[0].mat[0].eval[2].nombre = (char*) malloc(13 * sizeof(char));
    strcpy(p[0].mat[0].eval[2].nombre,"Electricidad");

    EliminarEvaluacion(p,0,nombre);

    mu_assert("Dinamica",p[0].mat[0].eval[0].nombre);
    mu_assert("Electricidad",p[0].mat[0].eval[1].nombre);
}

MU_TEST(EliminarPorEvaluacion2)
{
    ESTUDIANTE est;
    ESTUDIANTE *p;
    char nombre[] = "ReportedVoice";
    int x = 0;

    p = &est;
    p[0].nombre = "Diego";
    p[0].matricula = 20181603;
    p[0].c_materias = 2;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Ingles");
    p[0].mat[0].c_eval = 3;
    p[0].mat[0].eval = (EVALUACIONES*) malloc(p[0].mat[0].c_eval * sizeof(EVALUACIONES));
    p[0].mat[0].eval[0].nombre = (char*) malloc(13 * sizeof(char));
    strcpy(p[0].mat[0].eval[0].nombre,"PassiveVoice");
    p[0].mat[0].eval[1].nombre = (char*) malloc(14 * sizeof(char));
    strcpy(p[0].mat[0].eval[1].nombre,"ReportedVoice");
    p[0].mat[0].eval[2].nombre = (char*) malloc(11 * sizeof(char));
    strcpy(p[0].mat[0].eval[2].nombre,"ModalVoice");
    p[0].mat[1].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[1].nombre,"Calculo");
    p[0].mat[1].c_eval = 2;
    p[0].mat[1].eval = (EVALUACIONES*) malloc(p[0].mat[1].c_eval * sizeof(EVALUACIONES));
    p[0].mat[1].eval[0].nombre = (char*) malloc(11 * sizeof(char));
    strcpy(p[0].mat[1].eval[0].nombre,"Integrales");
    p[0].mat[1].eval[1].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[1].eval[1].nombre,"Limites");

    EliminarEvaluacion(p,x,nombre);

    mu_assert("PassiveVoice",p[0].mat[0].eval[0].nombre);
    mu_assert("ModalVoice",p[0].mat[0].eval[1].nombre);
}

MU_TEST(EliminarPorEvaluacion3)
{
    ESTUDIANTE est;
    ESTUDIANTE *p;
    char nombre[] = "ReportedVoice";
    int x = 0;

    p = &est;
    p[0].nombre = "Diego";
    p[0].matricula = 20181603;
    p[0].c_materias = 3;
    p[0].mat = (MATERIA*) malloc(p[0].c_materias * sizeof(MATERIA));
    p[0].mat[0].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[0].nombre,"Ingles");
    p[0].mat[0].c_eval = 3;
    p[0].mat[0].eval = (EVALUACIONES*) malloc(p[0].mat[0].c_eval * sizeof(EVALUACIONES));
    p[0].mat[0].eval[0].nombre = (char*) malloc(13 * sizeof(char));
    strcpy(p[0].mat[0].eval[0].nombre,"PassiveVoice");
    p[0].mat[0].eval[1].nombre = (char*) malloc(14 * sizeof(char));
    strcpy(p[0].mat[0].eval[1].nombre,"ReportedVoice");
    p[0].mat[0].eval[2].nombre = (char*) malloc(11 * sizeof(char));
    strcpy(p[0].mat[0].eval[2].nombre,"ModalVoice");
    p[0].mat[1].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[1].nombre,"Calculo");
    p[0].mat[1].c_eval = 2;
    p[0].mat[1].eval = (EVALUACIONES*) malloc(p[0].mat[1].c_eval * sizeof(EVALUACIONES));
    p[0].mat[1].eval[0].nombre = (char*) malloc(11 * sizeof(char));
    strcpy(p[0].mat[1].eval[0].nombre,"Integrales");
    p[0].mat[1].eval[1].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[1].eval[1].nombre,"Limites");
    p[0].mat[2].nombre = (char*) malloc(7 * sizeof(char));
    strcpy(p[0].mat[2].nombre,"Fisica");
    p[0].mat[2].c_eval = 5;
    p[0].mat[2].eval = (EVALUACIONES*) malloc(p[0].mat[2].c_eval * sizeof(EVALUACIONES));
    p[0].mat[2].eval[0].nombre = (char*) malloc(11 * sizeof(char));
    strcpy(p[0].mat[2].eval[0].nombre,"Cinematica");
    p[0].mat[2].eval[1].nombre = (char*) malloc(8 * sizeof(char));
    strcpy(p[0].mat[2].eval[1].nombre,"Dinamica");
    p[0].mat[2].eval[2].nombre = (char*) malloc(14 * sizeof(char));
    strcpy(p[0].mat[2].eval[2].nombre,"LeyesdeNewton");
    p[0].mat[2].eval[3].nombre = (char*) malloc(13 * sizeof(char));
    strcpy(p[0].mat[2].eval[3].nombre,"Electricidad");
    p[0].mat[2].eval[4].nombre = (char*) malloc(16 * sizeof(char));
    strcpy(p[0].mat[2].eval[4].nombre,"Electroestatica");


    EliminarEvaluacion(p,x,nombre);

    mu_assert("Cinematica",p[0].mat[2].eval[0].nombre);
    mu_assert("Dinamica",p[0].mat[2].eval[1].nombre);
    mu_assert("LeyesdeNewton",p[0].mat[2].eval[2].nombre);
    mu_assert("Electricidad",p[0].mat[2].eval[3].nombre);
    mu_assert("Electroestatica",p[0].mat[2].eval[4].nombre);
}


MU_TEST_SUITE(test_suite) {
    //Eliminar Estudiante por su Nombre
    MU_RUN_TEST(EliminarPorNombre);
    MU_RUN_TEST(EliminarPorNombre2);
    MU_RUN_TEST(EliminarPorNombre3);
    //Eliminar Materia por su Nombre
    MU_RUN_TEST(EliminarMateria);
    MU_RUN_TEST(EliminarMateria2);
    MU_RUN_TEST(EliminarMateria3);
    //Eliminar Evaluaciones por  su Nombre
    MU_RUN_TEST(EliminarPorEvaluacion);
    MU_RUN_TEST(EliminarPorEvaluacion2);
    MU_RUN_TEST(EliminarPorEvaluacion3);

}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}
