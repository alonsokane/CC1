#include <iostream>

using namespace std;

int main()
{
    std::cout<<"****Declaraciones de puntero 1D con new****"<<std::endl;
    //array con new
    int *arr;//se declara un puntero para el array
    //
    arr=new int[5] {5,19,6,14,5};//asignacion de valores al crear con new

    //print del array
    std::cout<<"\n****Antes de Imprimir****\n"<<std::endl;

    //circular un *array con otro puntero ptr
    for(int *ptr=arr; ptr!=arr+5;ptr++){
        std::cout<<*ptr<<" ";
    }
    std::cout<<'\n'<<*arr<<std::endl;
    std::cout<<"\n\n"<<std::endl;

    delete[] arr;

    //array 2D

    //      int **notCur={{5,19,6,14,5},{15,13,16,11,5},{7,13,1,10,4},
    //                     {15,11,3,9,3},{17,8,17,13,16}};


//    int **arr2d;//Puntero a puntero/puntero a array
//    arr2d=new int[5][5];
//    delete[] arr2d;

//    int(*arr2d)[5]=new int [5][5]{{5,19,6,14,5},{15,13,16,11,5},{7,13,1,10,4},
//                                 {15,11,3,9,3},{17,8,17,13,16}};


    int **arr2d=new int [5][5]{{5,19,6,14,5},{15,13,16,11,5},{7,13,1,10,4},
                                 {15,11,3,9,3},{17,8,17,13,16}};

    //fill con un for


    //print de arr2d
//    for(int *p=arr2d;p!=arr2d+5;p++){
//        for(int *q=*p;q!=*arr2d+5;q++)
//            std::cout<<*q<<" ";
//        std::cout<<std::endl;
//    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            std::cout<<arr2d[i][j]<<" ";
        std::cout<<std::endl;
    }



    delete[] arr2d;



}
