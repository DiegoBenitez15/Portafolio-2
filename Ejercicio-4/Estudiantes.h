//
// Created by diego on 1/11/2019.
//

#ifndef PORTAFOLIO_2_ESTUDIANTES_H
#define PORTAFOLIO_2_ESTUDIANTES_H

typedef struct evaluaciones
{
    char *nombre;
    float pod;
    float nota;
}EVALUACIONES;

typedef struct materia
{
    char *nombre;
    int c_eval;
    EVALUACIONES eval[];
}MATERIA;

typedef struct estudiante
{
    char *nombre;
    int matricula;
    int edad;
    int c_materias;
    MATERIA mat[];
}ESTUDIANTE;

void matricula(ESTUDIANTE *est,int is,int mat);
void introducir(ESTUDIANTE *est);

#endif //PORTAFOLIO_2_ESTUDIANTES_H
