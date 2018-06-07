#ifndef CURSO_H
#define CURSO_H
#include <string>
using namespace std;

class Curso
{
    public:
        Curso();
        ~Curso();
        string nombre;
        int getNota();
    protected:
        int nota;
};

#endif // CURSO_H
