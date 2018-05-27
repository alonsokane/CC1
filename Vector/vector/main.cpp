#include "vector.h"
#include <iostream>

using namespace std;

int main()
{
    int size = 7;
    double arr[size] = { 5, 13, 12, 12, 2, 47, 23 };
    //    double arr[size] = { 2, 2, 2, 2, 2, 2, 2 };
    // vector vec1(arr,size);
    vector vec1(size, arr);
    vec1.printArr();
    //std::cout << "\n\n\n\n ****** \n\n\n\n";
    //    vec1.insert(4,55);
    //vec1.vaciar();
    //vec1.append(20);
    //vec1.del(0);
//    std::cout << "Mayor: " << vec1.retMayor() << std::endl;
//    std::cout << "Menor: " << vec1.retMenor() << std::endl;
    //vec1.ordenar();
    vec1.invertir();
    vec1.printArr();

    //std::cout << vec1.evPrimo(117) << std::endl;
//    std::cout << "Mayor Primo: " << vec1.mayorPrim() << std::endl;
//    std::cout << "Menor Primo: " << vec1.menorPrim() << std::endl;

//    std::cout << "Suma: " << vec1.sumVal() << std::endl;
}
