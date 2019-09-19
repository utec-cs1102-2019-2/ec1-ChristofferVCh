#include <iostream>
using namespace std;


int main() {
    cout << "Ejercicio 2" << endl;
    int *ptrmon=nullptr;
    int *ptrvar= nullptr;

    int var=35;
    ptrvar=&var;

    ptrmon=new int();
    *ptrmon=21;

    delete ptrmon;
    cout<<*ptrvar<<" "<<*ptrmon;
    return 0;
}