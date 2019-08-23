#include <stdio.h>

int main() {
#include "iostream.h"
#include "conio.h"
#include "math.h"
    void main()
    {
        int V[50], N[50], Rep[50];
        int i, j, k, total, indice, elementos, existeModa,n;
        float suma, suma2, media, varianza, desv_estandar, desv_media;
        cout<<"Numeros de datos que desea introducir: ";
        cin>>n;

        clrscr();
        for(i=1; i<=n; i++)
        {
            cout <<"Valor"<<i<<"= ";
            cin >> V[i];
            suma=suma+V[i];
            suma2=suma2+(V[i]*V[i]);
        }


        // Saca copia del arreglo
        for(i=1; i<=n; i++)
            N[i]=V[i];

        elementos = n;
        total = elementos;
        for(i=1; i<=elementos; i++)
        {
            for(j=i+1; j<=elementos; j++)
            {
                if(N[i]==N[j])
                {

                    for(k=j+1; k<=elementos; k++)
                        N[k-1]=N[k];

                    elementos--;
                    j--;
                }
            }
        }


        for(i=1; i<=elementos; i++)
            Rep[i] = 1;
        for(i=1; i<=elementos; i++)
            for(j=1; j<=total; j++)
                if(N[i]==V[j])
                    Rep[i]++;

        indice = 0;
        for(i=1; i<=elementos; i++)
            if(Rep[i]>Rep[indice])
                indice = i;

        media=suma/n;
        cout<<"\n\nMedia= "<<media<<"\n";

        varianza=((n*suma2)-(suma*suma))/(n*(n-1));
        cout<<"\n\nVarianza= "<<varianza;

        desv_estandar=sqrt(varianza);
        cout<<"\n\nDesviación estandar= "<<desv_estandar;

        desv_media=((suma2)-(suma*suma))/n;
        cout<<"\n\nDesviación media= "<<desv_media;

        getch();
}