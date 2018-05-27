#include "curso.h"

Curso::Curso(std::string name, double *notas,int size)
{
    this->name=name;
    this->size=size;
    this->notas=new double[size];

    for(double *ptr=notas,*ptr1=(this->notas);ptr<notas+size;ptr++,ptr++){
        *ptr1=*ptr;
    }
}
