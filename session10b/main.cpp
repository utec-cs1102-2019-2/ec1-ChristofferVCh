#include <iostream>
#include "Persona.h"
#include "Alumno.h"
using namespace std;
int main() {
    Persona *Chris = new Persona("Chris", 17, "72795505", "Peruano");
    Chris->mostrarpersona();

    Alumno *Alvaro= new Alumno("Jose", 16, "7372572", "Mexcicano", "201910325");

    Alvaro->mostrarAlumno();
    return 0;
}