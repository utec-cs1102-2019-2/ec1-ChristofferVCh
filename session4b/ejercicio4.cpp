#include <iostream>
typedef unsigned long long ull;
using namespace std;

int fibonacci(int a, int first=0, int segundo=1, int contador=1){
    if (a==0)
        return 0;
    if (a==1)
        return 1;
    if (contador < a)
    {return fibonacci(a, segundo, first+segundo, contador+1);}
    return first+segundo;
}

int main(){
    int num;cout<<"Ingrese numero: "; cin>>num;
    cout<<fibonacci(num);
}

