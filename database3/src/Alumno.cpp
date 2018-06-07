#include "Alumno.h"

Alumno::Alumno()
{
    //ctor
}

Alumno::~Alumno()
{
    //dtor
}
float Alumno::getPromedio(){
    float x=0;
    for (int i=0;i<6;i++){
        x=x+cursos[i].getNota();
    }
    x=x/6;
    return x;
}
Carrera Alumno::getCarrera(){
    return carrera;
}
