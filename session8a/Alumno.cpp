//
// Created by lucia.llerena on 17/10/2019.
//

#include "Alumno.h"
void Alumno::setNombre(string nombre){
    this -> nombre=nombre;}
string Alumno::getNombre(){
    return this->nombre;
}

void Alumno::setApellido(string apellidos){
    this -> apellidos=apellidos;}
string Alumno::getApellido(){
    return this->apellidos;
}

void Alumno::setEdad(int edad){
    this -> edad=edad;}
int Alumno::getEdad(){
    return this->edad;
}

void Alumno::setCreditos(int creditos){
    this -> creditos=creditos;}
int Alumno::getCreditos(){
    return this-> creditos;
}

void Alumno::imprimir(){
    cout<<"Nombre: \t"<<this->getNombre()<<" "<<this->apellidos<<endl;
    cout<<"Edad:      \t"<<this->getEdad()<<endl;
    cout<<"Creditos: \t"<<this->getCreditos()<<endl;

}