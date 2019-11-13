//
// Created by diego on 12/11/2019.
//

#include "Funciones.h"
#include <stdlib.h>

NODO * NuevoNodo (Valor x,Valor y){
    NODO * nuevo_nodo = (NODO *) malloc(sizeof(NODO));
    nuevo_nodo->base = x;
    nuevo_nodo->exp = y;
    return nuevo_nodo;
}


void InsertarCabezaLista(NODO** cabeza, Valor x,Valor y){
    NODO * nuevo_nodo =  NuevoNodo(x,y);
    if (*cabeza==NULL){
        *cabeza = nuevo_nodo;
        (*cabeza)->siguiente = NULL;
    } else{
        nuevo_nodo->siguiente = *cabeza;
        *cabeza = nuevo_nodo;
    }
}

void InsertarLista(NODO* anterior, Valor x,Valor y){
    NODO * nuevo_nodo =  NuevoNodo(x,y);
    nuevo_nodo->siguiente = anterior->siguiente;
    anterior->siguiente = nuevo_nodo;
}

NODO* BuscarLista (NODO* cabeza, Valor destino){
    for (NODO * indice = cabeza; indice != NULL; indice = indice->siguiente) {
        if (indice->dato == destino){
            return indice;
        }
    }
    return NULL;
}

NODO* BuscarPorPosicion(NODO *cabeza, int posicion){
    int i = 0;
    for (NODO * indice = cabeza; indice != NULL; indice = indice->siguiente) {
        if (i == posicion){
            return indice;
        }
        i++;
    }
    return NULL;
}

int BuscarPosicion(NODO *cabeza, Valor x){
    int i = 0;
    for (NODO * indice = cabeza; indice != NULL; indice = indice->siguiente) {
        if (indice->dato == x){
            return i;
        }
        i++;
    }
    return -1;
}


void eliminar (NODO** cabeza, Valor entrada){
    NODO * nodo_a_eliminar = NULL;
    NODO * anterior = NULL;
    for (NODO * indice = cabeza; indice != NULL; indice = indice->siguiente) {
        if (indice->dato == entrada){
            nodo_a_eliminar = indice;
            break;
        }
        anterior = indice;
    }
    if (nodo_a_eliminar == NULL){
        return;
    }

    if (*cabeza == nodo_a_eliminar){
        *cabeza = (*cabeza)->siguiente;
    } else{
        anterior->siguiente = nodo_a_eliminar->siguiente;
    }
    free(nodo_a_eliminar);
}


void InsertaOrden(NODO** cabeza, Valor entrada){
    NODO * indice;
    if ((*cabeza)->dato > entrada){
        InsertarCabezaLista(cabeza, entrada);
        return;
    }
    for (indice = cabeza; indice != NULL; indice = indice->siguiente) {
        if (indice->siguiente->dato < entrada){
            InsertarLista(indice, entrada);
            return;
        }
    }
    InsertarLista(indice, entrada);
}


void recorrer(NODO* cabeza, void (*procesar) (Valor v) ){
    for (NODO * indice = cabeza; indice != NULL; indice = indice->siguiente) {
        procesar(indice->dato);
    }
}