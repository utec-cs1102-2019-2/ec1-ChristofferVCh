#include <iostream>
using namespace std;
int main() {
    cout<<"Index"<<"\t"<<"Value"<<"\t"<<"Direccion"<<endl;
    int Ch[7]={1,2,3,4,5,6,7};
    for (int a=0; a<7; a++){
        cout<<a<<"\t"<<Ch[a]<<"\t"<<&Ch[a]<<endl;
    }
    cout << "Hello, World!" << std::endl;

    return 0;
}