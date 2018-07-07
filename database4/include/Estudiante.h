#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include <string.h>
#include <Persona.h>
#include <Curso.h>

#include <vector>

using namespace std;

class Estudiante : public Persona
{
    char carrera[50];
    int promedio;
    char curso[30];

    public:
        Estudiante();
        virtual ~Estudiante();
        char* getCarrera();
        void setCarrera(char t[50]);
        char* getCursos();


};

#endif // ESTUDIANTE_H
