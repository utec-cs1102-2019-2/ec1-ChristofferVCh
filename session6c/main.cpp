#include <iostream>
using namespace std;
using entero=int;

void imrpimir_todo(string codigo[], string nombres[], entero edades [], char sexo[], int n){
   cout<<"Codigo"<<" \t";
   cout<<"Nombre"<<" \t";
   cout<<"Edad "<<"\t ";
   cout<<"Sexo"<<endl;
   for (entero x=0; x<n; x++){
       cout<<codigo[x]<<"\t"<<nombres[x]<<"\t"<<edades[x]<<"\t"<<sexo[x]<<endl;
   }
}
int main() {
    int n; cout<<"Ingrese el numero de alumnos: "; cin>>n;
    string *codigos=new string [n];
    string *nombres=new string [n];
    entero *edades=new entero[n];
    char *sexo=new char[n];
    for (size_t i=0; i<n; i++){
        cout<<"Ingrese el codigo del "<<i+1<<" alumno: "; cin>>codigos[i];
        cout<<"Ingrese el nombre del "<<i+1<<" alumno: "; cin>>nombres[i];
        cout<<"Ingrese la edad del "<<i+1<<" alumno: "; cin>>edades[i];
        cout<<"Ingrese el sexo del "<<i+1<<" alumno: "; cin>>sexo[i];
    }
    imrpimir_todo(codigos, nombres, edades, sexo, n);
    cout << "Hello, World!" << endl;
    return 0;
}