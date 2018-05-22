#include "vector.h"
#include <iostream>

vector::vector()
{
    tam = 0;
    arr = new double[tam];
}

vector::vector(int size)
{
    tam = size;
    arr = new double[tam];
    // se llena de 0's
    for (double* ptr = arr; ptr != arr + tam; ptr++)
        *ptr = 0;
}

// si es que se le pasa un array
vector::vector(int size, double* x)
{
    tam = size;
    arr = new double[tam]; // se crea con el tamanio size
    // se llena arr con x
    for (double* ptr = arr; ptr != arr + tam; ptr++, x++)
        *ptr = *x;
}

void vector::append(double x = 0)
{
    // se crea array nuevo
    tam += 1;
    double* art1 = new double[tam];

    // se copia del array viejo al nuevo
    for (double *ptr = art1, *ptr1 = arr; ptr != art1 + tam - 1; ptr++, ptr1++)
        *ptr = *ptr1;

    // se elimina art antiguo
    delete[] arr;
    arr = art1; // se iguala el puntero de arr a art1

    // ultimo elemento = x
    double* ptr = arr + tam - 1;
    *ptr = x;
}

void vector::del(int x)
{
    //new array con tam-1
    tam--;
    double* art1 = new double[tam];

    int i = 0;
    double* ptr = arr;
    double* ptr1 = art1;
    while (ptr < arr + tam + 1) {
        if (i == x) { //si es el elemento a eliminar el arr antiguo
            ptr++; //aumenta en 1, el nuevo se queda en su pos
            i++;
            continue;
        }
        *ptr1 = *ptr; //copiar elementos mientras i!=x
        ptr1++;
        ptr++;
        i++;
    }
    delete[] arr;
    arr = art1;
}

void vector::insert(int index, double value)
{
    //se crea art1 con tam+1
    tam++;
    double* art1 = new double[tam];

    //se copia de arr a art1, si i==index, then se copia val y se salta
    double* ptr = arr;
    double* ptr1 = art1;
    int i = 0;

    while (ptr1 < art1 + tam) {
        if (i == index) {
            *ptr1 = value;
            ptr1++;
            i++;
            continue;
        }
        *ptr1 = *ptr;
        ptr1++;
        ptr++;
        i++;
    }
    delete[] arr;
    arr = art1;
}

//void vector::vaciar()
//{
//    //se crea art1 vacio
//    double art1=new double[0];

//}

void vector::printArr()
{
    for (double* ptr = arr; ptr < arr + tam; ptr++)
        std::cout << *ptr << " ";
    std::cout << '\n';
}

vector::~vector() { delete[] arr; }
