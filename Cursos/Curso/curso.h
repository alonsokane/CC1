#ifndef CURSO_H
#define CURSO_H
#include <string>
#include "/home/jjac1999/Projects/CC1/Vector/vector/vector.h"

class Curso {
private:
    std::string name;
    int size;
    double *notas;

public:
    Curso(std::string, double*,int);
    //float obtenerPromedio
};

#endif // CURSO_H
