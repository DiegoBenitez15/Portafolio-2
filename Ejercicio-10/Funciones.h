//
// Created by diego on 12/11/2019.
//

#ifndef PORTAFOLIO_2_FUNCIONES_H
#define PORTAFOLIO_2_FUNCIONES_H

typedef int Valor;
typedef struct Nodo {
    Valor base;
    Valor exp;
    struct Nodo * siguiente ;
} NODO ;


NODO * NuevoNodo (Valor x,Valor y);
void InsertarCabezaLista(NODO** cabeza, Valor x,Valor y);
void InsertarLista(NODO* anterior, Valor x,Valor y);
NODO* BuscarLista (NODO* cabeza, Valor destino);
NODO* BuscarPorPosicion(NODO *cabeza, int posicion); // Equivale a los []
int BuscarPosicion(NODO *cabeza, Valor x);
void eliminar (NODO** cabeza, Valor entrada);
void InsertaOrden(NODO** cabeza, Valor entrada);
void recorrer(NODO* cabeza, void (*procesar) (Valor v) );

#endif //PORTAFOLIO_2_FUNCIONES_H
