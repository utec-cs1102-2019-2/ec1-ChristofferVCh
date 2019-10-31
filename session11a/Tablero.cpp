//
// Created by Christoffer on 30/10/2019.
//x
#include "Bloque.h"
#include "Tablero.h"
using namespace std;
bool Tablero::ocupated(int posiciony, int posiciox) {
    this->posiciony=posiciony;
    this->posicionx=posiciox;
    if(this->bloques[posiciony][posiciox].es_mina==true){
        return true;
    }
    else if(this->bloques[posiciony][posiciox].es_mina==false){
        return false;
    }
}

Tablero::Tablero(int filas, int columnas) {
    this->filas=filas;
    this->columnas=columnas;
    for(int i=0; i<filas; i++){
        vector<Bloque> lista;
        for(int x=0; x<columnas; x++){
            Bloque *bloque=new Bloque();
            lista.push_back(*bloque);
}
        this->bloques.push_back(lista); }}


void Tablero::mostar() {

    for(int x=0; x<this->columnas; x++){
        cout<<"\t"<<x<<"\t";}cout<<endl;
        cout<<"__ ";
        for(int x=0; x<this->columnas; x++){
            cout<<"_______________ ";
    }cout<<endl;
    for(int i=0; i<this->filas; i++){
        cout<<i<<"|";
        for(int x=0; x<this->columnas; x++){
            if(bloques[i][x].es_mina==true){
                cout<<"\t*\t";            }
            else{cout<<"\t"<<bloques[i][x].minas<<"\t";
        }
    }cout<<endl;}}

void Tablero::poner_minas() {
    srand (time(nullptr));
    for(int i=0; i<this->filas; i++){
        int xd=rand()%this->columnas;
        this->bloques[i][xd].es_mina = true;
    }
    }

void Tablero::num_minas(int posiciony, int posiciox) {
    this->posiciony=posiciony;
    this->posicionx=posiciox;
    int cont=0;
    if(posiciony>0 && posiciox>0 && posiciony<this->filas-1 && posiciox<this->columnas-1){
        for (int j=0; j<3; j++){
            for(int i=0; i<3; i++){
                if (this->bloques[posiciony-1+j][posiciox-1+i].es_mina==true)cont++;
            }}this->bloques[posiciony][posiciox].minas=cont;
    }
        else{
            for(int i=0; i<2; i++){ for(int j=0; j<2; j++){
                if(posiciony==0 && posiciox==0){if(this->bloques[posiciony+j][posiciox+i].es_mina==true)cont++;}
                else if(posiciony==0 && posiciox==this->columnas-1){if(this->bloques[posiciony+j][posiciox-1+i].es_mina==true)cont++;}
                else if(posiciony==this->filas && posiciox==0){if(this->bloques[posiciony-1+j][posiciox+i].es_mina==true)cont++;}
                else if(posiciony==this->filas-1 && posiciox==this->columnas-1){if(this->bloques[posiciony-1+j][posiciox-1+i].es_mina==true)cont++;}
            }this->bloques[posiciony][posiciox].minas=cont;
            }}}