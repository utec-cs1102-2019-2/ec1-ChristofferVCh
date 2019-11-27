//
// Created by Christoffer on 13/11/2019.
//

#ifndef INC_13A_TABLERO_H
#define INC_13A_TABLERO_H
using namespace std;
#include "Cuadrado.h"
#include <vector>
#include <iostream>
class Tablero {
public:
    int filas=3;
    int columnas=3;

    vector<vector<Cuadrado>> matriz;
    void mostar();
    Tablero();
};


#endif //INC_13A_TABLERO_H
