#include "vector.h"
#include <iostream>

using namespace std;

int main()
{
    int size = 7;
    double arr[size] = { 5, 13, 14, 12, 2, 7, 10 };
    // vector vec1(arr,size);
    vector vec1(size, arr);
    vec1.printArr();
    //std::cout << "\n\n\n\n ****** \n\n\n\n";
    //    vec1.append(20);
    //vec1.del(0);
    //    vec1.insert(4,55);
    vec1.printArr();
}
