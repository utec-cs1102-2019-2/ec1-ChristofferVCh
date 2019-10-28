//
// Created by lucia.llerena on 17/10/2019.
//
#include <iostream>
#ifndef UNTITLED_ALUMNOS_H
#define UNTITLED_ALUMNOS_H
using namespace std;

class Alumno{
private:
    string nombre;
    string apellidos;
    int edad;
    int creditos;
public:
    void setNombre(string nombre);
    string getNombre();

    void setApellido(string apellidos);
    string getApellido();

    void setEdad(int edad);
    int getEdad();

    void setCreditos(int creditos);
    int getCreditos();

    void imprimir();
};


#endif //UNTITLED_ALUMNOS_H
