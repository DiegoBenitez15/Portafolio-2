//
// Created by diego on 31/10/2019.
//

#include "Supermercado.h"
#include <string.h>


ARTICULO* organizar_art(ARTICULO *art, int n)
{
    ARTICULO aux;

    if(n < 0)
    {
        return art;
    }
    else if(n > 0)
    {
        int i;

        for(i = 0; i < n;i++)
        {
            if(art[i].precio < art[i + 1].precio)
            {
                aux = art[i];
                art[i] = art[i + 1];
                art[i + 1] = aux;
            }
            else if(art[i].precio == art[i + 1].precio)
            {
                if(strcmp(art[i].nombre,art[i+1].nombre) > 0)
                {
                    aux = art[i];
                    art[i] = art[i + 1];
                    art[i + 1] = aux;
                }
            }
        }

        organizar_art(art, n - 1);
    }
}

ARTICULO busca_id(ARTICULO *art, int n, int id)
{
    return busqueda_id(art,n,id,0);
}

ARTICULO busqueda_id(ARTICULO *art,int is, int id,int ii)
{

}