#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <string.h>
using namespace std;

class Persona
{
    char nombre[40];
    char edad[3];
    char email[30];
    char ID[10];

    public:

        char* getNombre();
        char* getID();
        char* getEdad();
        char* getEmail();
        void setNombre(char t[40]);
        void setEdad(char t[3]);
        void setID(char t[10]);
        void setEmail(char t[30]);
        void imprimeID();
        //void setCursos();
        virtual char* getCursos();
        //void virtual setCursos ();   //poliiiii
        //void virtual getCursos ();
        Persona();
        virtual ~Persona();
};

#endif // PERSONA_H
