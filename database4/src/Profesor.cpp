#include "Profesor.h"
#include <iostream>
using namespace std;
Profesor::Profesor()
{
    //ctor
}

Profesor::~Profesor()
{
    //dtor
}
void Profesor::setCursos(char t[30]){
    strcpy(curso,t);
}
char* Profesor::getCursos(){
    std::cout<<"El curso del profesor es: "<<std::endl;
    return curso;
}
