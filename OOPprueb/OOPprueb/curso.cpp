#include <iostream>
#include "curso.h"

Curso::Curso()
{

}


void Curso::setName(std::string x){
    nombre=x;
}

void Curso::setNotas(float *x){
    int menor;
    float temporal;
    for(int i=0;i<tamnota;i++,++x)
        notas[i]=*x;
    //Orden
    for(int i=0; i<tamnota;i++){
        menor=i;
        for(int j=i;j<tamnota;j++)
            if(notas[j]<notas[menor])
                menor=j;
        //cambio de notas[i] con el menor
        temporal=notas[i];
        notas[i]=notas[menor];
        notas[menor]=temporal;
    }
}

float Curso::obtenMayor(){
   return notas[tamnota-1];
}

float Curso::obtenMenor(){
    return notas[0];
}

void Curso::changeNomb(std::string x){
    nombre=x;
}

std::string Curso::obtenNom(){
    return nombre;
}

float Curso::obtenProm(){
    float result=0;
    for(int i=0;i<tamnota;i++)
        result += notas[i];
    result/=tamnota;
    return result;
}


std::string Curso::obtenInfo(){
    std::string showNotas;
    for(int i=0;i<tamnota;i++)
        showNotas+=std::to_string(notas[i])+" ";
    return "Curso: "+nombre+'\n'
            +"Notas: "+showNotas+'\n'
            +"Promedio: "+std::to_string(obtenProm());
}

