#ifndef MATEMATICA_H
#define MATEMATICA_H
#include <Curso.h>
#include <string>
using namespace std;

class Matematica:public Curso
{
    public:
        Matematica();
        virtual ~Matematica();
        string tema;
        //nombre = "matematica" de curso?
        //nota de cada curso

};

#endif // MATEMATICA_H
