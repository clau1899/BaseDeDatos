#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <Carrera.h>
#include <Curso.h>
using namespace std;

class Persona
{
    protected:
    char nombre[30];
    char apellido[30];
    //char ID[8];
    int edad;
    char email[30];


    char ID [8];
    Carrera carrera;
    Curso cursos[];////////////////////////////////////////////////////////////////////
     //polimorfismo en la forma de obtener cursos
    public:
        Persona();
        ~Persona();
        string getNombre();
        string getApellido();
        char getID ();
        int getEdad();
        string getEmail ();
        virtual Carrera getCarrera ();
        ////////////////////////////////////////////Curso getCursos()=0;
        void setNombre (char x[]);
        void setApellido (char x[]);
        void setID (char x[]);
        void setEdad (int x);
        void setEmail (char x[]);
        void setCarrera (Carrera x);

};

#endif // PERSONA_H
