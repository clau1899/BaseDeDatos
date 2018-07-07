#ifndef PROFESOR_H
#define PROFESOR_H
#include <Persona.h>


class Profesor : public Persona
{
    char curso[30];
    public:
        Profesor();
        virtual ~Profesor();
        void setCursos(char t[30]);
        char* getCursos();

};

#endif // PROFESOR_H
