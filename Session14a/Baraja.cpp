//
// Created by Christoffer on 20/11/2019.
//

#include "Baraja.h"
Baraja::Baraja(){
    string lista[4]={"Diamante","Espada","Corazon","Trebol"};
    for(int i=0; i<4;i++){
        Palo *palito=new Palo(lista[i]);
        palos.push_back(*palito);
    }
}