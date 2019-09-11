#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";
  int ival=42;
  int *p=&ival;
  cout<<p<<" "<<*p<<" "<<&p;
}