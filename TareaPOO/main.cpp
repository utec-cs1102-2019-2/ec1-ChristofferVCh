#include <iostream>
using namespace std;
using T=int;
T xd=16;
int main() {
    //Declarar un puntero normal a una variable normal de tipo T
    T* puntero=&xd;
    //Declarar un puntero constante a una variable normal.
    T* const puntero2=&xd;
    //Declarar un puntero normal a una constante de tipo T.
    const T* puntero3=&xd;
    //Declarar un puntero constante a una constante T.
    const T* const puntero4=&xd;

    cout << "Christoffer Angel Vasquez Chirito" << endl;
    return 0;
}