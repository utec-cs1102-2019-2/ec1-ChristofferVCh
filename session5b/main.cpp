#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    int a=5;
    int *ptr=&a;
    a=8;
    *ptr=10;
    cout<<a;
    return 0;
}