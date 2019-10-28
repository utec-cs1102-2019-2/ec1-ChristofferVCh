#include <iostream>
#include "Alumno.h"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    Alumno *Venero= new Alumno();
    Alumno *Garcia = new Alumno();
    //string name1; cin>>name1;
    Venero->setNombre("Luis");
    Venero->setApellido("Venero");
    Venero->setCreditos(21);
    Venero->setEdad(18);

    Garcia->setNombre("Maria");
    Garcia->setApellido("Garcia");
    Garcia->setCreditos(16);
    Garcia->setEdad(19);

    Venero->imprimir();
    cout<<endl;
    Garcia->imprimir();
    return 0;
}