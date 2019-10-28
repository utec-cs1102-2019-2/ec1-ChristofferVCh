//
// Created by Christoffer on 23/10/2019.
//

#include "Computadora.h"
voide mostrar{
    cout<<"Mostrando computadora"<<endl;
    cout<<"Keyboard Features:"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<this->teclado->getDescription()<<endl;
    cout<<"-----------------------"<<endl;
    this->mouse->printDescription();
};