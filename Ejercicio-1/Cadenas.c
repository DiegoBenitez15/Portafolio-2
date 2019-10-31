//
// Created by diego on 30/10/2019.
//


int cadena(char *cadena,int x)
{
   int i,c;
   char aux;
   c = 0;

    while(cadena[0] != '.' && cadena[0] != ',' && cadena[0] != ':' && cadena[0] != ';' && cadena[0] != '?' && cadena[0] != '!')
   {
       for(i = 0;i > -1;i++)
       {
           if(cadena[i+1] == '\0')
           {
               break;
           }
           else
           {
               aux = cadena[i];
               cadena[i] = cadena[i+1];
               cadena[i+1] = aux;
           }
       }

       c--;
   }

    for(i = 0;i > -1;i++)
    {
        if(cadena[i+1] == '\0')
        {
            break;
        }
        else
        {
            aux = cadena[i];
            cadena[i] = cadena[i+1];
            cadena[i+1] = aux;
            c++;
        }
    }


    return c;
}