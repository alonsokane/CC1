#include <iostream>
#include "curso.h"
#include "varioscursos.h"
#include <string>

int main()
{
//    //Array de objetos
//    Curso Cursos[5];

//    //Asignar datos
//    int notas[]={5,19,6,14,5};
//    std::string nombres[]={"Zoologia","CC1","Filo","Antro","Calculo"};

//    for(int i=0; i<5; i++){
//        Cursos[i].nombre=nombres[i];
//        Cursos[i].promedio=notas[i];
//    }



//    //Imprime notas antes orden
//    for(int i=0;i<5;i++){
//        std::cout<<Cursos[i].nombre+"    Nota: "<<Cursos[i].promedio<<std::endl;
//    }

////    //Ordena por notas
//    int menor;
//    float tempo=0;
//    std::string temponame;
//    for(int i=0; i<5;i++){
//        menor=i;
//        for(int j=i; j<5;j++)
//            if(Cursos[j].promedio<Cursos[menor].promedio)
//                menor=j;
//        //cambio de menor y actual
//        tempo=Cursos[i].promedio;
//        temponame=Cursos[i].nombre;
//        Cursos[i].promedio=Cursos[menor].promedio;
//        Cursos[i].nombre=Cursos[menor].nombre;
//        Cursos[menor].nombre=temponame;
//        Cursos[menor].promedio=tempo;
//    }


//    //Ordena alfa
////    int menor;
////    float tempo=0;
////    std::string temponame;
////    for(int i=0;i<5;i++){
////        menor=i;
////        for(int j=i;j<5;j++)
////            if(Cursos[j].nombre[0]<Cursos[menor].nombre[0])
////                menor=j;

////        //cambio de menor y actual
////        tempo=Cursos[i].promedio;
////        temponame=Cursos[i].nombre;
////        Cursos[i].promedio=Cursos[menor].promedio;
////        Cursos[i].nombre=Cursos[menor].nombre;
////        Cursos[menor].nombre=temponame;
////        Cursos[menor].promedio=tempo;
////    }

//    std::cout<<"\n\n\n\n\n";
//    //Imprime notas despues orden
//    for(int i=0;i<5;i++){
//        std::cout<<Cursos[i].nombre+"    Nota: "<<Cursos[i].promedio<<std::endl;
//    }

//    Curso CC1("CC1",14);
//    CC1.changeNomb("ICC");
//    CC1.changeProm(17.8);
//    std::cout<<CC1.obtenInfo()<<std::endl;

      Curso CC1;

      float notas[]={17,9,17,11,12};
      CC1.setNotas(notas);
      CC1.setName("CC1");
      std::cout<<CC1.obtenProm()<<std::endl;
      std::cout<<CC1.obtenMenor()<<std::endl;
      std::cout<<CC1.obtenMayor()<<std::endl;
      std::cout<<"\n\n\n\n";
      std::cout<<CC1.obtenInfo()<<std::endl;

      VariosCursos Set(5);
      std::string names[]={"Zoologia","CC1","Filo","Antro","Calculo"};

      //Crear 2D array con punteros




//      int **notCur={{5,19,6,14,5},{15,13,16,11,5},{7,13,1,10,4},
//                     {15,11,3,9,3},{17,8,17,13,16}};

      Set.setNames(names);
      //Set.setNotas(notCur);



}
