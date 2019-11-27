#include <iostream>
#include "Baraja.h"
#include "Palo.h"
#include "Carta.h"
#include <stdlib.h>
#include <time.h>
#include "Juego.h"
using namespace std;
int main() {
    srand(time(nullptr));
    Juego *hola=new Juego();
    hola->start();
    cout<<hola->es_duo();
    cout<<hola->es_trio();
    cout<<hola->es_full();
/*
    do{
        hola=new Juego();
        cout<<"---------------"<<endl;
        hola->start();
    hola->mostart();

    cout<<hola->es_duo()<<endl;} while(!hola->es_duo());*/
    return 0;
     }


