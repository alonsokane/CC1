#ifndef CURSO_H
#define CURSO_H
#include <string>

class Curso {
private:
    std::string nombre;
    float notas[5];
public:
    Curso(std::string, int, int, int, int, int);
    //float obtenerPromedio
};

#endif // CURSO_H