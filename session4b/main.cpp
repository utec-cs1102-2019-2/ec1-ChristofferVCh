#include <iostream>
using namespace std;
void pedir_notas(float &a, float &b);

int main() {
    float pc1 = 0.0;
    float bonus = 0.0;
    pedir_notas(pc1, bonus);
    cout << pc1 << " " << bonus<<endl;
    float *puntero = &pc1;
    *puntero=pc1+bonus;
    cout<<puntero<<" "<<*puntero<<" "<<&puntero<<endl;

    return 0;
}
void pedir_notas(float &a, float &b){
    cin>>a;
    cin>>b;
}