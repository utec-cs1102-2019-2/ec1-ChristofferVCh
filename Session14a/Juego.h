//
// Created by Christoffer on 20/11/2019.
//

#ifndef SESSION14A_JUEGO_H
#define SESSION14A_JUEGO_H

#include "Baraja.h"
#include <iostream>

#include "Carta.h"
class Juego {
public:

    Baraja *bara;
    vector<Carta> cartitas;

    Juego(){cout<<"Creando juego.."<<endl;
        bara=new Baraja();
    }
    bool es_poker();
    bool es_duo();
    bool es_trio();
    bool es_full();
    void start();
     void mostart(){

        for (int i = 0; i < 5; i++) {
            cout<<cartitas[i].numero<<" - "<<cartitas[i].palo<<endl;
        }
    }};


#endif //SESSION14A_JUEGO_H
