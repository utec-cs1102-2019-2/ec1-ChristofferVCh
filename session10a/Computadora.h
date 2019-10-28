//
// Created by Christoffer on 23/10/2019.
//

#ifndef SESSION10A_COMPUTADORA_H
#define SESSION10A_COMPUTADORA_H

#include "Teclado.h"
#include "Mouse.h"
#include "Laboratorio.h"

class Computadora {
private:
    Teclado *teclado=new Teclado();
    Mouse *mouse=new Mouse()
public:
    void mostrar();
};


#endif //SESSION10A_COMPUTADORA_H
