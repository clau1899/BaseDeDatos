#ifndef COMUNICACION_H
#define COMUNICACION_H
#include <Curso.h>
#include <string>
using namespace std;


class Comunicacion : public Curso
{
    public:
        Comunicacion();
        virtual ~Comunicacion();
        string tema;

};

#endif // COMUNICACION_H
