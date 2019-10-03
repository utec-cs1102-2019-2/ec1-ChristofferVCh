#include <iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

#include <vector>
using entero=int;
int main(){
    srand(time(NULL));
    int n; cout<<"Ingrese el numero de elementos: ";cin>>n;
    int xd=0;
    vector <int> vector={};
    while(xd<n){
        vector.push_back(1 + rand() % 29);
        xd++;
    }
    for (int x=0; x<n; x++)
    { cout<<vector[x]<<";";}
    cout<<endl;
    for(int c=0; c<vector.size(); c++){
        if (vector[c]%3 ==0)
        vector.erase(vector.begin()+c);}

    for (int x=0; x<vector.size(); x++){
        cout<<vector[x]<<endl;
    }
    return 0;
}