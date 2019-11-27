//
// Created by Christoffer on 20/11/2019.
//

#include "Juego.h"
void Juego::start() {
Carta c1(6); cartitas.push_back(c1);
Carta c2(6); cartitas.push_back(c2);
Carta c3(6); cartitas.push_back(c3);
Carta c4(4); cartitas.push_back(c4);
Carta c5(4); cartitas.push_back(c5);

/*
    for(int i=0;i<5;i++){
        int num_palo=rand()%4;
        int num_carta=rand()%(bara->palos[num_palo].cartas.size());
        cartitas.push_back(bara->palos[num_palo].cartas[num_carta]);
        bara->palos[num_palo].cartas.erase(bara->palos[num_palo].cartas.begin()+num_carta);
}*/}

bool Juego::es_poker() {
    bool poker=false;
    for(int i=0; i<5; i++){
        int cont=0;
        for(int x=0; x<2; x++){
            if(cartitas[i].numero==cartitas[x].numero) cont++;
        }
        if (cont==4){
            return true;
    }
}
    return false;
}
bool Juego::es_full() {
    bool full=false;
    for(int i=0; i<5; i++){
        int cont3=0;
        int cont2=0;
        for(int x=0; x<5;x++){
            if(cartitas[i].numero%2==0 && cartitas[i].numero==cartitas[x].numero)cont2++;
            else if(cartitas[i].numero==cartitas[x].numero) cont3++;
        }
        if (cont2==2 && cont3==3) return true;
    }
    return false;
}

bool Juego::es_duo() {
    bool poker=false;
    for(int i=0; i<5; i++){
        int cont=0;
        for(int x=0; x<5; x++){
            if(cartitas[i].numero==cartitas[x].numero) cont++;
        }
        if (cont==2){
            return true;
        }
    }
    return false;
}

bool Juego::es_trio() {
    bool poker=false;
    for(int i=0; i<5; i++){
        int cont=0;
        for(int x=0; x<5; x++){
            if(cartitas[i].numero==cartitas[x].numero) cont++;
        }
        if (cont==3){
            return true;
        }
    }
    return false;
}

