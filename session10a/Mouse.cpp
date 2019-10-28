//
// Created by Christoffer on 23/10/2019.
//

#include "Mouse.h"

using namespace std;
void CMouse::printDescription(){
    cout<<"-----------------------"<<endl;
    cout<<"Mouse features:"<<endl;
    cout<<this->color[0]<<" "<<this->color[1] << this->color[2]<<endl ;
    cout<<this->precision<<endl;
    cout<<"-----------------------";
}