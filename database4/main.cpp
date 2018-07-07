#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Estudiante.h"
#include "Profesor.h"
#include "Institucion.h"
#include "Curso.h"
#include <stdlib.h>

//Limpiar pantalla
#ifdef _WIN32
#define CLEAR "cls"
#elif defined(unix)||defined(__unix__)||defined(__unix)||defined(__APPLE__)||defined(__MACH__)
#define CLEAR "clear"
#else
#error "SO no soportado para limpiar pantalla"
#endif

using namespace std;

int main()
{
    system ("color 3F");
    Institucion universidad;
    universidad.menuPrincipal();

    return 0;
}
