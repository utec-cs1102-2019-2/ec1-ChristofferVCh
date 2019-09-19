#include <iostream>
using namespace std;


int main() {
    cout << "Ejercicio 3" << endl;
    double *punt1= nullptr, *punt2= nullptr;
    punt1=new double();
    punt2=new double();
    cout<<"Ingrese el primer numero:"; cin>>*punt1;
    cout<<"Ingrese un segundo numero:"; cin>>*punt2;
    cout<<"La suma es: " << *punt1+*punt2<<endl;
    cout<<"La diferencia es:"<< *punt1-*punt2<<endl;
    cout<<"El producto es:"<<*punt1 * *punt2<<endl;
    delete punt1;
    delete punt2;
    punt1= nullptr;
    punt2= nullptr;
    return 0;
}