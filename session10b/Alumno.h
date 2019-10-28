
#ifndef SESSION10B_ALUMNO_H
#define SESSION10B_ALUMNO_H
#include <iostream>

#include "Persona.h"

class Alumno : public Persona {
private:
    string codigo;
public:
    Alumno(string nombre, int edad, string dni, string nac, string codigo);
    void mostrarAlumno();
};


#endif //SESSION10B_ALUMNO_H
