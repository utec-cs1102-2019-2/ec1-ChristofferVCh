//
// Created by Christoffer on 13/11/2019.
//

#include "Humano.h"
#include "Juego.h"

void Humano::marcar(){
    int x; cout<<"Ingrese x:"; cin>>x;
    int y; cout<<"Ingrese y1:"; cin>>y;
    juego->table->matriz[y][x]=1;
}