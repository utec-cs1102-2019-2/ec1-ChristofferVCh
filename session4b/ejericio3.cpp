#include <iostream>
using namespace std;
int main(){
    char letra='c';
    char *punt=&letra;
    char **segundo=&punt;
    int num=3;
    int *ptr=&num;
    int **ptr2=&ptr;
    cout<<letra<<" "<<punt<<" "<<segundo<<" "<<num<<" "<<ptr<<" "<<ptr2<<endl;
    return 0;
}
