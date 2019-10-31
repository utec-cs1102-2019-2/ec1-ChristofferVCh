//
// Created by Christoffer on 30/10/2019.
//

#ifndef SESSION11A_TABLERO_H
#define SESSION11A_TABLERO_H
#include "Bloque.h"
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
class Tablero{
private:
    int filas;
    int columnas;
    int puntaje;
    int posiciony;
    int posicionx;
    bool ocupado;
    vector<vector<Bloque>> bloques;
public:
    Tablero (int filas, int columnas);
    void poner_minas();
    void num_minas(int posiciony, int posiciox);
    void mostar();
    bool ocupated(int posiciony, int posiciox);
};


#endif //SESSION11A_TABLERO_H
