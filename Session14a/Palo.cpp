//
// Created by Christoffer on 20/11/2019.
//

#include "Palo.h"
Palo::Palo(string nombre) {
    this->nombre=nombre;
    for(int i=1;i<14;i++){
        Carta *carta=new Carta(i);
        carta->palo=nombre;
        cartas.push_back(*carta);
    }
}