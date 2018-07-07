#ifndef CURSO_H
#define CURSO_H
#include <string>
#include <string.h>
using namespace std;

class Curso
{
    char nombre[30];

    public:
        Curso();
        virtual ~Curso();
        char* getNombre();
        void setNombre(char t [30]);



};

#endif // CURSO_H
