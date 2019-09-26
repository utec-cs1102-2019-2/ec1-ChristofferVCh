#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void imprimir (int filas, int columnas, int *matriz[]){
    for (int x=0; x<filas; x++){
        for (int z=0; z<columnas; z++){
            cout<<matriz[x][z]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    srand(time(NULL));
    int filas; cout<<"Ingrese el numero de filas: "; cin>>filas;
    int columnas; cout<<"Ingrese el numero de columnas: ", cin>>columnas;
    int **matriz= nullptr;
    matriz= new int *[filas];
    for (int i=0; i<filas; i++){
        matriz[i]=new int[columnas];
        for (int x=0; x<columnas; x++){
            matriz[i][x]= rand()%100;
        }
    }
    imprimir (filas, columnas, matriz);
    return 0;

}