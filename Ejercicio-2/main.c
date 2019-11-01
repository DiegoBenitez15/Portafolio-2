//
// Created by diego on 31/10/2019.
//

#include "minunit.h"

#include "Supermercado.h"

#define MINUNIT_EPSILON 1E-12

ARTICULO art[10] = {
        "AGUA",1,10.0,
        "PAN",2,50.0,
        "HUEVO",3,100.0,
        "LECHE",4,25.0,
        "YOGURT",5,35.0,
        "QUESO",6,45.0,
        "SAL",7,22.0,
        "JABON",8,8.0,
        "HARINA",9,33.0,
        "AZUCAR",10,15.0
};

ARTICULO art2[10] = {
        "AGUA",1,10.0,
        "PAN",2,50.0,
        "HUEVO",3,100.0,
        "LECHE",4,25.0,
        "YOGURT",5,35.0,
        "QUESO",6,45.0,
        "SAL",7,24.0,
        "JABON",8,25.0,
        "HARINA",9,35.0,
        "AZUCAR",10,15.0
};

ARTICULO art3[10] = {
        "AGUA",1,10.0,
        "PAN",2,50.0,
        "HUEVO",3,100.0,
        "LECHE",4,25.0,
        "YOGURT",5,35.0,
        "QUESO",6,45.0,
        "SAL",7,25.0,
        "JABON",8,25.0,
        "HARINA",9,35.0,
        "AZUCAR",10,15.0
};

MU_TEST(OrderporPrecio_Ningunoigual) {
    ARTICULO *a;
    a = art;
    int n = 10;
    organizar_art(a,n);

    for(int i = 0;i < 10;i++)
    {
        printf("Nombre: %s\tID: %d\tPrecio: %lf\n\n",art[i].nombre,art[i].id,art[i].precio);
    }
}

MU_TEST(OrdenarporPrecio_2preciosiguales) {
    ARTICULO *a;
    a = art2;
    int n = 10;
    organizar_art(a,n);

    for(int i = 0;i < 10;i++)
    {
        printf("Nombre: %s\tID: %d\tPrecio: %lf\n\n",art2[i].nombre,art2[i].id,art2[i].precio);
    }
}

MU_TEST(OrdenarporPrecio_3preciosiguales) {
    ARTICULO *a;
    a = art3;
    int n = 10;
    organizar_art(a,n);

    for(int i = 0;i < 10;i++)
    {
        printf("Nombre: %s\tID: %d\tPrecio: %lf\n\n",art3[i].nombre,art3[i].id,art3[i].precio);
    }
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(OrderporPrecio_Ningunoigual);
    MU_RUN_TEST(OrdenarporPrecio_2preciosiguales);
    MU_RUN_TEST(OrdenarporPrecio_3preciosiguales);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}