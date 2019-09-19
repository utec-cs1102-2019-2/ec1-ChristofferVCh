#include <iostream>
using namespace std;

int varGlobal=20;
int main() {
    cout << "Ejercicio 1" << endl;
    int var_local=10;
    int *ptr = &var_local;
    *ptr=20;
    cout<<var_local<<"\n";
    return 0;
}