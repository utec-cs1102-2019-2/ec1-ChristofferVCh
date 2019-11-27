//
// Created by Christoffer on 13/11/2019.
//
using namespace std;
#include "Tablero.h"
Tablero::Tablero() {
    for(int y=; y<this->filas; y++){
        vector<Cuadrado> fila;
        for(int x=0; x<this->columnas; x++){
            Cuadrado *c=new Cuadrado();
            fila.push_back(*c);
        }
        this->matriz.push_back(fila);
    }
}

void Tablero::mostar(){
    for(int y=0; y<filas; y++){
        for(int x=0; x<this->columnas;x++){
            cout << matriz[y][x];
        }
        cout<<endl;}}