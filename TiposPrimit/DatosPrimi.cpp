#include <iostream>
//#include <string>

int power(int x, int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= x;
    }
    return res;
}


void impRango(int sByte) {
    long long menor = power(2, (sByte * 8) - 1);
    long long mayor = power(2, (sByte * 8) - 1) - 1;
    std::cout << menor << "-" << mayor << std::endl;
}

int main() {
    //Bool
    //Representa el verdadero y falso
    std::cout << "Bool       " << sizeof(bool) << " bytes   ";
    impRango(sizeof(bool));

    //Int
    //Almacena los enteros, necesita 4 bytes de memoria
    std::cout << "Int       " << sizeof(int) << " bytes   ";
    impRango(sizeof(int));

    //Floating point
    //Almacena datos decimales con precision simple, necesita 4 bytes
    std::cout << "Float       " << sizeof(float) << " bytes   ";
    impRango(sizeof(float));

    //Double
    //Datos decimales con precision doble, por lo tanto necesita 8 bytes
    std::cout << "Double     " << sizeof(double) << " bytes   ";
    impRango(sizeof(double));

    //Char
    //Almacena caracteres, necesita 1 byte de memoria
    std::cout << "Char       " << sizeof(char) << " bytes   ";
    impRango(sizeof(char));

    //Long int
    //Misma cantidad de decimales que un int, 4 bytes
    std::cout << "Long      " << sizeof(long) << " bytes   ";
    impRango(sizeof(long));
}