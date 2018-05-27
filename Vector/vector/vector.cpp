#include "vector.h"
#include <iostream>

vector::vector() //si no se le pasa nada esta vacio
{
    tam = 0;
    arr = new double[tam];
}

vector::vector(int size) //si se le pasa un tamanio se llena de 0's
{
    tam = size;
    arr = new double[tam];
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

void vector::vaciar()
{
    //se crea art1 vacio
    tam = 0;
    double* art1 = new double[0];
    delete[] arr;
    arr = art1;
}

double vector::retMayor()
{
    double mayor = *arr;
    for (double* ptr = arr + 1; ptr < arr + tam; ptr++) {
        if (*ptr > mayor)
            mayor = *ptr;
    }
    return mayor;
}

double vector::retMenor()
{
    double menor = *arr;
    for (double* ptr = arr + 1; ptr < arr + tam; ptr++) {
        if (*ptr < menor)
            menor = *ptr;
    }
    return menor;
}

bool vector::evPrimo(int x)
{
    if (x <= 1)
        return false;
    for (int i = 2; i < x; i++)
        if (!(x % i))
            return false;
    return true;
}

double vector::mayorPrim()
{
    double mayor = -1;
    for (double* ptr = arr; ptr < arr + tam; ptr++) {
        if (evPrimo(*ptr))
            if (*ptr > mayor)
                mayor = *ptr;
    }
    return mayor;
}

double vector::menorPrim()
{
    double menor = *(arr + tam - 1);
    for (double* ptr = arr; ptr < arr + tam; ptr++) {
        if (evPrimo(*ptr))
            if (*ptr < menor)
                menor = *ptr;
    }
    return menor;
}

double vector::sumVal()
{
    double suma = 0;
    for (double* ptr = arr; ptr < arr + tam; ptr++) {
        suma += *ptr;
    }
    return suma;
}

void vector::ordenar()
{
    double* menor;
    double tempo;
    for (double* ptr = arr; ptr < arr + tam; ptr++) {
        menor = ptr;
        for (double* ptr1 = ptr; ptr1 < arr + tam; ptr1++)
            if (*ptr1 < *menor)
                menor = ptr1;
        tempo = *menor;
        *menor = *ptr;
        *ptr = tempo;
    }
}
void vector::invertir()
{
    double tempo;
    for(double *ptr=arr,*ptr1=arr+tam-1;ptr<arr+tam/2;ptr++,ptr1--){
        tempo=*ptr;
        *ptr=*ptr1;
        *ptr1=tempo;
    }
}

void vector::printArr()
{
    if (tam == 0)
        return;
    for (double* ptr = arr; ptr < arr + tam; ptr++)
        std::cout << *ptr << " ";
    std::cout << '\n';
}

vector::~vector() { delete[] arr; }
