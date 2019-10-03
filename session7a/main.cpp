#include <iostream>
using  namespace std;
using entero=int;
void imprimir (entero filas, entero columnas, entero *matriz[]){
    cout<<"  ";
    for (int z=0; z<columnas; z++)
        cout<<z<<"  ";
   cout<<endl; cout<<"_ ";
    for (size_t z=0; z<columnas; z++)
        cout<<"_"<<"  ";
    cout<<endl;
    for (size_t x=0; x<filas; x++){
        cout<<x;
        for (size_t z=0; z<columnas; z++){
            cout<<"|"<<matriz[x][z]<<" ";}
        cout<<endl;
    }}

int sumadia (entero filas, entero columnas, entero *matriz[]) {
    entero cuadrado=0;
    entero suma=0;
    int a=0;
    if(columnas==filas) cuadrado=columnas;
    if(columnas>filas) cuadrado=filas;
    if (filas>columnas) cuadrado=columnas;
    for (int a=0; a<cuadrado; a++){
        suma=suma+matriz[a][a];}
    return suma;}

void tresbytres (entero filas, entero columnas, entero *matriz[]){
    int x=columnas/3; int restox=columnas%3;
    int y=filas/3; int restoy=filas%3;
    int a, b;
    for(a=0; a<y; a++){

        for (b=0; b<x; b++){
            int mayor=0;
            for(int xd=0+3*a; xd<3+3*a; xd++){
                for(int xd2=0+3*b; xd2<3+3*b; xd2++){
                if(matriz[xd][xd2]>mayor)
                    mayor=matriz[xd][xd2];
            }}
            for(int xd=0+3*a; xd<3+3*a; xd++){
                for(int xd2=0+3*b; xd2<3+3*b; xd2++){
                    if(matriz[xd][xd2]!=mayor)
                        matriz[xd][xd2]=0;
    }
}}if (a<y)
            y=restoy;
        if (b<x)
            x=restox;}

    imprimir(filas, columnas, matriz);}
int main() {
    entero filas;
    cout << "Ingrese numero de fila:";
    cin >> filas;
    entero columnas;
    cout << "Ingrese el numero de columnas:";
    cin >> columnas;
    entero **matrizA = nullptr;
    matrizA = new int *[filas];
    for (size_t i = 0; i < filas; i++) {
        matrizA[i] = new int[columnas];
        for (size_t x = 0; x < columnas; x++) {
            matrizA[i][x] = 1 + rand() % 9;
        }
    }
    entero **matrizB = nullptr;
    matrizB = new int *[filas];
    for (size_t i = 0; i < filas; i++) {
        matrizB[i] = new int[columnas];
        for (size_t x = 0; x < columnas; x++) {
            matrizB[i][x] = 1 + rand() % 9;
        }
    }
    entero **matrizC = nullptr;
    matrizC = new int *[filas];
    for (size_t i = 0; i < filas; i++) {
        matrizC[i] = new int[columnas];
        for (size_t x = 0; x < columnas; x++) {
            matrizC[i][x] = matrizA[i][x]*matrizB[i][x];
        }}
    imprimir(filas, columnas, matrizA);
    cout<<endl;
    imprimir(filas, columnas, matrizB);
    cout<<endl;
    tresbytres(filas, columnas, matrizC);
    cout<<"La suma de la diagonal mayor es: "<<sumadia(filas, columnas, matrizA);
    return 0;
}