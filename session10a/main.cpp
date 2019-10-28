#include <iostream>
#include "Computadora.h"
#include "Mouse.h

int main() {
    Computadora *computadora=new Computadora();
    computadora->mostrar();

    laboratorio *l = new laboratorio();
    l->agregarComputadora(*computadora);

}