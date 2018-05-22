#ifndef VARIOSCURSOS_H
#define VARIOSCURSOS_H
#include "curso.h"
#include <string>


class VariosCursos
{
    private:
          int nCursos;
          Curso *arrCurso;
          //Curso *arrCurso=new Curso[nCursos];
          //Curso arrCurso[5];


    public:
        VariosCursos(int);
        ~VariosCursos();
        void setNames(std::string*);
        void setNotas(float**);

};

#endif // VARIOSCURSOS_H
