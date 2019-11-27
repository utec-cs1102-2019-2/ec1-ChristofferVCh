//
// Created by Christoffer on 13/11/2019.
//

#ifndef INC_13A_JUEGO_H
#define INC_13A_JUEGO_H

#include "Jugador.h"
#include "Tablero.h"
#include "Humano.h"
#include "Bot.h"
class Juego {
public:
    int turno=1;
    Humano *J1= new Humano();
    Humano *J2= new Humano();
    Tablero *table=new Tablero();

    Juego();
    void jugar();
};


#endif //INC_13A_JUEGO_H
