#include "varioscursos.h"

VariosCursos::VariosCursos(int n)
{
    nCursos=n;
    arrCurso=new Curso[nCursos];
}


VariosCursos::~VariosCursos(){
    delete arrCurso;
}

void VariosCursos::setNames(std::string *x){
    for(int i=0;i<nCursos;i++,x+=1){
        //(*arrCurso).setName(*x);
        arrCurso[i].setName(*x);
    }
}


void VariosCursos::setNotas(float**x){
    for(int i=0;i<nCursos;i++){
        arrCurso[i].setNotas(*x);
    }
}
