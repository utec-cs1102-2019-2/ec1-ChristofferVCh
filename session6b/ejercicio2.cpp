#include <iostream>
using namespace std;
void imprimir( int notas[], int n, int s){
    cout<<"Indice \t Valor"<<endl;
    for (int a=0; a<n; a++){
        if (notas[a]>s)
        cout<<a<<"\t"<<notas[a]<<endl;
    }
}
int promedio(int notas[], int n){
    int suma=0;
    for(int x=0; x<n; x++)
        suma=suma+notas[x];
    return suma/n;
}
void todo(int notas[],int n){
    int may=notas[0];
    int men=notas[0];
    for(int x=0; x<n; x++){
        if (notas[x]>may){
        may=notas[x];}
        if (notas[x]<men){
        men=notas[x];}
    }
    cout<<"La mayor nota es: "<<may<<endl;
    cout<<"La menor nota es: "<<men<<endl;
    for(int x=0; x<n; x++){
        if (notas[x]==men)
            notas[x]=0;
    }
    cout<<"El promedio sin la nota menor es:" <<promedio(notas, n)<<endl;
}
int main(){
    int n=0;
    cout<<"Ingrese la cantidad de alumnos:";cin>>n;
    int *notas=new int[n];
    for (int i=0; i<n; i++){
        cin>>notas[i];
    }
    imprimir(notas,n,0);
    int p= promedio(notas,n);
    cout<<"El promedio es: "<<p<<endl;
    cout<<"Las notas por encima del promedio son:"<<endl;
    imprimir (notas,n,p);
    todo(notas,n);
    return 0;
}