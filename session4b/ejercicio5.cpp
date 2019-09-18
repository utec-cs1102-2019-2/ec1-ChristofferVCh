#include <iostream>
#include <vector>

using namespace std;
using xd=int;
using t=double;
using signo=char;
xd adicion(xd a, xd b){
  return a+b;
}
xd restar(xd a,xd b){
  return a-b;
}
xd mul(xd a,xd b){
return a*b;
}
xd division(xd a,xd b){
return a/b;
}
int main(){
  xd first; cout<<"Ingrese el primer numero: "; cin>>first;
  signo sign; cout<<"Ingrese el operador: "; cin>>sign;
  xd second; cout<<"Ingrese el segundo numero: "; cin>>second;
  if(sign=='+')
    cout<<adicion(first,second);
  else if(sign=='-' )
    cout<<restar(first,second);
  else if(sign=='*')
    cout<<mul(first,second);
    else if(sign=='/')
    cout<<division(first,second);
    else{
      cout<<"Ingresar bien los datos";}
return 0;
}

