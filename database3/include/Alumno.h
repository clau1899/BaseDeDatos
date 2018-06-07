#ifndef ALUMNO_H
#define ALUMNO_H
#include <Persona.h>
#include <string>
#include <Curso.h>
#include <Carrera.h>
using namespace std;

class Alumno : public Persona
{
    Curso cursos[];
    //Carrera carrera;
    int promedio;
    public:
        Alumno();
        virtual ~Alumno();
        float getPromedio();
        Carrera getCarrera();
};

#endif // ALUMNO_H
