#include "Curso.h"

Curso::Curso()
{

}

Curso::~Curso()
{
    //dtor
}
char* Curso::getNombre(){
    return nombre;
}
void Curso::setNombre(char t[30]){
    strcpy(nombre,t);
}

