#include <conio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#ifdef _WIN32
#define CLEAR "cls"
#elif defined(unix)||defined(__unix__)||defined(__unix)||defined(__APPLE__)||defined(__MACH__)
#define CLEAR "clear"
#else
#error "SO no soportado para limpiar pantalla"
#endif
#ifndef MENU_H
#define MENU_H
#include <Persona.h>


class Menu : public Persona
{
    public:
        Menu();
        ~Menu();
        void menuPrincipal();
        void crearAlumno();
        void modificarAlumno();
        void eliminarAlumno();
        void visualizarAlumno(char codigo[30]);
        void buscarAlumno();
        void crearProfesor();
    protected:
    private:
};

#endif // MENU_H
