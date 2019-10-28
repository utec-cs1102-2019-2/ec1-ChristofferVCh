//
// Created by Christoffer on 24/10/2019.
//

#ifndef SESSION10B_PERSONA_H
#define SESSION10B_PERSONA_H
using namespace std;
#include <iostream>

class Persona {
private:
    int edad;
    string nombre;
    string dni;
    string nacionalidad;
public:
    Persona(string nombre, int edad, string dni, string nacionalidad);
    string getNombre();
    void mostrarpersona();
};


#endif //SESSION10B_PERSONA_H
