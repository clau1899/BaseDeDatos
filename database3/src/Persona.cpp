#include "Persona.h"
#include <string>
using namespace std;

Persona::Persona(){}

Persona::~Persona(){}

string Persona::getNombre(){
    return nombre;
}
string Persona::getApellido(){
    return apellido;
}
char Persona::getID (){
    return *ID;
}
int Persona::getEdad(){
    return edad;
}
string Persona::getEmail (){
    return email;
}
Carrera Persona::getCarrera(){
    return carrera;
}
void Persona::setNombre (char x[30]){
    for (int i=0;i<30;i++){
        nombre[i]=x[i];
    }

}
void Persona::setApellido (char x[30]){
    for (int i=0;i<30;i++){
        apellido[i]=x[i];
    }

}
void Persona::setID (char x[30]){
    for (int i=0;i<30;i++){
        ID[i]=x[i];
    }

}
void Persona::setEdad (int x){
    edad=x;
}
void Persona::setEmail (char x[30]){
    for (int i=0;i<30;i++){
        email[i]=x[i];
    }

}
void Persona::setCarrera (Carrera x){
    carrera=x;
}
/*void Persona::setCarrera (Carrera.setNombre()){
    carrera=Carrera.setNombre();
}*/

