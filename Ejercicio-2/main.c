//
// Created by diego on 31/10/2019.
//

#include "minunit.h"

#include "Supermercado.h"

#define MINUNIT_EPSILON 1E-12

ARTICULO art[5] = {
        "AGUA",1,10.0,
        "PAN",2,50.0,
        "HUEVO",3,100.0,
        "LECHE",4,25.0,
        "YOGURT",5,35.0,
};

ARTICULO art2[10] = {
        "AGUA",3,10.0,
        "PAN",5,50.0,
        "HUEVO",7,100.0,
        "LECHE",9,25.0,
        "YOGURT",15,35.0,
        "QUESO",26,45.0,
        "SAL",47,24.0,
        "JABON",68,25.0,
        "HARINA",89,35.0,
        "AZUCAR",110,15.0
};

ARTICULO art3[15] = {
        "AGUA",1,10.0,
        "PAN",23,50.0,
        "HUEVO",34,100.0,
        "LECHE",45,25.0,
        "YOGURT",56,35.0,
        "QUESO",67,45.0,
        "SAL",78,25.0,
        "JABON",82,25.0,
        "HARINA",93,35.0,
        "AZUCAR",107,15.0,
        "COCAINA",109,300.2,
        "DESODORANTE",123,34.0,
        "RON",145,245,
        "CUADERNO",167,123,
        "ESCLAVO",189,1.0
};

ARTICULO art4[5] = {
        "AGUA",1,10.0,
        "HUEVO",3,100.0,
        "LECHE",4,25.0,
        "PAN",2,50.0,
        "YOGURT",5,35.0
};

ARTICULO art5[10] = {
        "AGUA",3,10.0,
        "AZUCAR",110,15.0,
        "HUEVO",7,100.0,
        "HARINA",89,35.0,
        "JABON",68,25.0,
        "LECHE",9,25.0,
        "PAN",5,50.0,
        "QUESO",26,45.0,
        "SAL",47,24.0,
        "YOGURT",15,35.0,
};

ARTICULO art6[15] = {
        "AGUA",3,10.0,
        "AZUCAR",110,15.0,
        "COCAINA",109,300.2,
        "CUADERNO",167,123,
        "DESODORANTE",123,34.0,
        "ESCLAVO",189,1.0,
        "HUEVO",7,100.0,
        "HARINA",89,35.0,
        "JABON",68,25.0,
        "LECHE",9,25.0,
        "PAN",5,50.0,
        "QUESO",26,45.0,
        "RON",145,245,
        "SAL",47,24.0,
        "YOGURT",15,35.0,
};

MU_TEST(OrderporPrecio_Ningunoigual) {
    ARTICULO *a;
    a = art;
    int n = 5;
    organizar_art(a,n);

    mu_assert("HUEVO",a[0].nombre);
    mu_assert("PAN",a[1].nombre);
    mu_assert("YOGURT",a[2].nombre);
    mu_assert("LECHE",a[3].nombre);
    mu_assert("AGUA",a[4].nombre);
}

MU_TEST(OrdenarporPrecio_2preciosiguales) {
    ARTICULO *a;
    a = art2;
    int n = 10;
    organizar_art(a,n);

    mu_assert("HUEVO",a[0].nombre);
    mu_assert("PAN",a[1].nombre);
    mu_assert("QUESO",a[2].nombre);
    mu_assert("HARINA",a[3].nombre);
    mu_assert("YOGURT",a[4].nombre);
    mu_assert("JABON",a[5].nombre);
    mu_assert("LECHE",a[6].nombre);
    mu_assert("SAL",a[7].nombre);
    mu_assert("AZUCAR",a[8].nombre);
    mu_assert("AGUA",a[9].nombre);
}

MU_TEST(OrdenarporPrecio_3preciosiguales) {
    ARTICULO *a;
    a = art3;
    int n = 15;
    organizar_art(a,n);

    mu_assert("COCAINA",a[0].nombre);
    mu_assert("RON",a[1].nombre);
    mu_assert("CUADERNO",a[2].nombre);
    mu_assert("HUEVO",a[3].nombre);
    mu_assert("PAN",a[4].nombre);
    mu_assert("QUESO",a[5].nombre);
    mu_assert("HARINA",a[6].nombre);
    mu_assert("YOGURT",a[7].nombre);
    mu_assert("DESODORANTE",a[8].nombre);
    mu_assert("JABON",a[9].nombre);
    mu_assert("LECHE",a[10].nombre);
    mu_assert("SAL",a[11].nombre);
    mu_assert("AZUCAR",a[12].nombre);
    mu_assert("AGUA",a[13].nombre);
    mu_assert("ESCLAVO",a[14].nombre);
}

MU_TEST(BusquedaPorID) {
    ARTICULO *a;
    ARTICULO resp;
    a = art;
    int n = 5;
    int id = 4;
    resp = busca_id(a,n,id);

    mu_assert("LECHE",resp.nombre);
    mu_assert_double_eq(25.0,resp.precio);
    mu_assert_int_eq(4,resp.id);
}

MU_TEST(BusquedaPorID2) {
    ARTICULO *a;
    ARTICULO resp;
    a = art2;
    int n = 10;
    int id = 110;
    resp = busca_id(a,n,id);

    mu_assert("AZUCAR",resp.nombre);
    mu_assert_double_eq(15.0,resp.precio);
    mu_assert_int_eq(110,resp.id);
}

MU_TEST(BusquedaPorID3) {
    ARTICULO *a;
    ARTICULO resp;
    a = art3;
    int n = 15;
    int id = 1;
    resp = busca_id(a,n,id);

    mu_assert("AGUA",resp.nombre);
    mu_assert_double_eq(10.0,resp.precio);
    mu_assert_int_eq(1,resp.id);
}

MU_TEST(BusquedaPorNombre) {
    ARTICULO *a;
    ARTICULO resp;
    a = art4;
    int n = 5;
    char nombre[] = {"LECHE"};
    resp = busca_nombre(a,n,nombre);

    mu_assert("LECHE",resp.nombre);
    mu_assert_double_eq(25.0,resp.precio);
    mu_assert_int_eq(4,resp.id);
}

MU_TEST(BusquedaPorNombre2) {
    ARTICULO *a;
    ARTICULO resp;
    a = art5;
    int n = 10;
    char nombre[] = {"AGUA"};
    resp = busca_nombre(a,n,nombre);

    mu_assert("AGUA",resp.nombre);
    mu_assert_double_eq(10.0,resp.precio);
    mu_assert_int_eq(3,resp.id);
}

MU_TEST(BusquedaPorNombre3) {
    ARTICULO *a;
    ARTICULO resp;
    a = art6;
    int n = 15;
    char nombre[] = {"ESCLAVO"};
    resp = busca_nombre(a,n,nombre);

    mu_assert("ESCLAVO",resp.nombre);
    mu_assert_double_eq(1.0,resp.precio);
    mu_assert_int_eq(189,resp.id);
}


MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(BusquedaPorNombre);
    MU_RUN_TEST(BusquedaPorNombre2);
    MU_RUN_TEST(BusquedaPorNombre3);

    MU_RUN_TEST(BusquedaPorID);
    MU_RUN_TEST(BusquedaPorID2);
    MU_RUN_TEST(BusquedaPorID3);

    MU_RUN_TEST(OrderporPrecio_Ningunoigual);
    MU_RUN_TEST(OrdenarporPrecio_2preciosiguales);
    MU_RUN_TEST(OrdenarporPrecio_3preciosiguales);

}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}