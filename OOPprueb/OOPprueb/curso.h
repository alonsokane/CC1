#ifndef CURSO_H
#define CURSO_H

#include<string>



class Curso
{
private:
    std::string nombre;
    int tamnota=5;
    float notas[5];

public:
    void changeNomb(std::string);
    void setName(std::string);
    void setNotas(float*);//al setear se ordena creciente por notas
    //obten promedio notas
    float obtenProm();

    //obtener mayor/menor nota
    float obtenMayor(); //si return -1 ntncs no encontro
    float obtenMenor();

    std::string obtenNom();
    //Print nombre+ notas
    std::string obtenInfo();
    Curso();


};

#endif // CURSO_H
