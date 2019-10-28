
#include "Persona.h"
string Persona::getNombre() {
    return this->nombre;
}

Persona::Persona(string nombre, int edad, string dni, string nacionalidad){
    this->nombre=nombre;
    this->edad=edad;
    this->dni=dni;
    this->nacionalidad=nacionalidad;
}

void Persona::mostrarpersona() {
    cout<<"Nombre: \t"<<this->nombre<<endl;
    cout<<"Edad: \t"<<this->edad<<endl;
    cout<<"DNI: \t"<<this->dni<<endl;
    cout<<"Nacionalidad: \t"<<this->nacionalidad<<endl;
}