#include "Estudiante.h"
#include <iostream>
using namespace std;
Estudiante::Estudiante()
{
    //ctor
}

Estudiante::~Estudiante()
{
    //dtor
}
char* Estudiante::getCarrera(){
    return carrera;
}
void Estudiante::setCarrera(char t[50]){
    strcpy(carrera,t);
}
char* Estudiante::getCursos(){
    std::cout<<"El estudiante lleva el siguiente curso"<<std::endl;
    return curso;

}
ostream& operator<<(ostream &output, Estudiante &o){
    output <<"Nombre: "<<o.getID()<<"\n"<<"Email: "<< o.getEmail()<<"\n"<<"Carrera: "<<o.getCarrera()<<"\n\n";
    return output;
}

