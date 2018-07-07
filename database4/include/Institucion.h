#ifndef INSTITUCION_H
#define INSTITUCION_H
#include <conio.h> // getch
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Estudiante.h"
#include "Profesor.h"
#include "Curso.h"
#ifdef _WIN32
#define CLEAR "cls"
#elif defined(unix)||defined(__unix__)||defined(__unix)||defined(__APPLE__)||defined(__MACH__)
#define CLEAR "clear"
#else
#error "SO no soportado para limpiar pantalla"
#endif

using namespace std;

class Institucion
{
    private:
        int numEst;
        int numProf;
        vector<Profesor*> profes;
        vector<Estudiante*> students;
        Curso cursos[15];

    public:
        //void crearCursos();

        void menuPrincipal();
        void crearEstudiante();
        void crearProfesor();
        void modificarEstudiante();
        void modificarProfesor();
        void eliminarEstudiante();
        void eliminarProfesor();
        void ordenarPorCarreras();
        void mostrarTodo();
        void mostrarRegistro(char t[10]);
        void buscarEstudiante();
        void buscarProfesor(Profesor* x);

        Institucion();
        virtual ~Institucion();
        void ascendenteEstudiantes();
        void descendenteEstudiantes();
        void ascendenteProfesores();
        void descendenteProfesores();

};

#endif // INSTITUCION_H
