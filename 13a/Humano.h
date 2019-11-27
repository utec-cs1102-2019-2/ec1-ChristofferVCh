//
// Created by Christoffer on 13/11/2019.
//

#ifndef INC_13A_HUMANO_H
#define INC_13A_HUMANO_H

#include "Jugador.h"
class Humano:public Jugador {
public:
    Humano();
    void marcar() override;

};


#endif //INC_13A_HUMANO_H
