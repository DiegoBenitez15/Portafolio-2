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
    EVALUACIONES *eval;
}MATERIA;

typedef struct estudiante
{
    char *nombre;
    int matricula;
    int edad;
    int c_materias;
    MATERIA *mat;
}ESTUDIANTE;

void matricula(ESTUDIANTE *est,int is,int mat);
void eliminarnombre(ESTUDIANTE *est,char nombre[],int x);
void Introducir(ESTUDIANTE *est);
void EliminarEvaluacion(ESTUDIANTE *est,int x,char nombre[]);

#endif //PORTAFOLIO_2_ESTUDIANTES_H
