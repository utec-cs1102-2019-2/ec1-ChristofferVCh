//
// Created by Christoffer on 13/11/2019.
//

#ifndef INC_13A_JUGADOR_H
#define INC_13A_JUGADOR_H
#include <iostream>
#include "Juego.h"
using namespace std;

class Jugador {
public:
    int numero;
    string nombre;
    Jugador (int numero, string nombre);
    Juego *juego;
    virtual void marcar()=0;


};


#endif //INC_13A_JUGADOR_H
