#ifndef CARRERA_H
#define CARRERA_H
#include <string>
using namespace std;

class Carrera
{
    string nombre;
    public:
        Carrera();
        virtual ~Carrera();
        string getNombre();
        //void setNombre(string x);
};

#endif // CARRERA_H
