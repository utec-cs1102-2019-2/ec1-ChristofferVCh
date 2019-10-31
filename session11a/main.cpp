#include <iostream>
#include "Tablero.h"
int main() {
    Tablero *buscaminas = new Tablero(4,5);
    buscaminas->poner_minas();
    buscaminas->mostar();
    int n=3;
    while(n>0){
        int posicionx; cout<<"Ingrese posicion x:"; cin>>posicionx;
        int posiciony; cout<<"Ingrese posicion en y:"; cin>>posiciony;
        buscaminas->num_minas(posiciony,posicionx);
        buscaminas->mostar();
        if(buscaminas->ocupated(posiciony,posicionx)==true) break;}
    cout<<"JUEGO FINALIZADO";
        return 0;}