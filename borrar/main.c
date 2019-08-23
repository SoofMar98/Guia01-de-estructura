#include <stdio.h>
using namespace std ;
int main() {

        int n,pos;
        cout<<"Ingrese la cantidad de elementos : ";
        cin>>n;
        int vector[n];
        for(int i=0;i<n;i++){
            cout<<"\n Ingrese elemento en la posicion "<<i<<" del arreglo : ";
            cin>>vector[i];
        }
        cout<<"\n Ingrese la posicion a eliminar"<<endl;
        cin>>pos;
        int eliminado=vector[pos];
        for(int i=0;i<n;i++){
            if(i==pos){
                while(i<n-1){
                    vector[i]=vector[i+1];
                    i++;
                }
                break;
            }
        }
        n=n-1;
        for(int i=0;i<n;i++){
            cout<<"Los elementos del arreglo son "<<i<<" = "<<vector[i]<<endl;
        }
        cout<<"El elemento eliminado es : "<<eliminado;
        return 0;
}