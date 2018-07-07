#include "Persona.h"
#include <iostream>
using namespace std;
Persona::Persona()
{
    //ctor
}

Persona::~Persona()
{
    //dtor
}

char* Persona::getNombre(){
    return nombre;
}
char* Persona::getID(){
    return ID;
}
char* Persona::getEdad(){
    return edad;
}
char* Persona::getEmail(){
    return email;
}
void Persona::setNombre(char t[40]){
    strcpy(nombre,t);
}
void Persona::setEdad(char t[3]){
    strcpy(edad,t);
}
void Persona::setEmail(char t[30]){
    strcpy (email,t);
}
void Persona::setID(char t[10]){
    strcpy(ID,t);
}
char* Persona::getCursos(){
    std::cout<<"Los cursos son"<<std::endl;
}
