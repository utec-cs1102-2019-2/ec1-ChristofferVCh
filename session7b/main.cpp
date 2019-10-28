#include <iostream>
using namespace std;
using entero=int;
void imprimir (entero filas, entero columnas, entero **matriz[]){
    cout<<"  ";
    for (int z=0; z<columnas; z++)
        cout<<"\t"<<z<<"\t";
    cout<<endl; cout<<"__ ";
    for (size_t z=0; z<columnas; z++)
        cout<<"______"<<"\t";
    cout<<endl;
    for (size_t x=0; x<filas; x++){
        cout<<x<<"|";
        for (size_t z=0; z<columnas; z++){
            cout<<"[";
            for(int d=0; d<3; d++){
            cout<<matriz[x][z][d]<<",";
        }cout<<"] \t";
        }
        cout<<endl;
    }}

int main() {
    int columnas; cout<<"Ingrese el numero de columnas: "; cin>>columnas;
    int filas; cout<<"Ingrese el numero de flas: "; cin>>filas;
    int ***matriz= nullptr;
    matriz = new int **[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int*[columnas];
        for (int x = 0; x < columnas; x++) {
            int promedio=0;
            matriz[i][x] = new int[3];
            for (int xd=0; xd<3; xd++) {
                matriz[i][x][xd] = 1 + rand() % 9;
                promedio=promedio+matriz[i][x][xd];
            }
            promedio=promedio/3;
            for (int xd=0; xd<3; xd++) {
                matriz[i][x][xd] = promedio;
        }
    }}
    imprimir(filas, columnas, matriz);
    return 0;
}