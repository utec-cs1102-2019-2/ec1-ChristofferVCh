//
// Created by Christoffer on 13/11/2019.
//

#ifndef INC_13A_BOT_H
#define INC_13A_BOT_H

#include "Jugador.h"
class Bot::public Jugador {
public:
    void marcar() override;
    Bot();
};


#endif //INC_13A_BOT_H
