//
// Created by Christoffer on 20/11/2019.
//

#ifndef SESSION14A_PALO_H
#define SESSION14A_PALO_H
using namespace std;
#include <iostream>
#include "Carta.h"

class Palo{
public:
    string nombre;
    string color;
    vector <Carta> cartas;
    Palo(string nombre);
};


#endif //SESSION14A_PALO_H
