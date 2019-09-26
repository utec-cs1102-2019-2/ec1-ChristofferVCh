#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void mayores (int notas[], int promedio,int n){
    for (int i=0; i<n; i++){
       if (notas[i]>promedio)
        cout<<notas[i]<<endl;
    }
}
int main(){
    int n=0;
    srand(time(NULL));
    cout<<"Ingrese el tamaño del array: "; cin>>n;
    int *notas= new int[n];

    for(int b=0; b<n; b++){
        int num2=rand()%21;
        notas[b]=num2;
    }
    int suma=0;
    int xd=notas[0];
    for(int i=0; i<n; i++){
        suma=suma+notas[i];
        if (notas[i]>xd)
            xd=notas[i];
        }
    int promedio=suma/n;
    mayores(notas, promedio, n);
    cout<<"La mayor nota es: "<<xd;

    delete []notas;
    notas= nullptr;
    return 0;
}
