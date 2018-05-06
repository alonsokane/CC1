#include <iostream>

bool edad(int edad) {
    return (edad < 18);
}

void impNum(int n, int i = 1) {
    //for (int i = 1; i < n; i++)
    //	std::cout << i << ",";
    //std::cout << n << std::endl;

    //Recursivo
    if (i == n) {
        std::cout << n << std::endl;
        return;
    }
    std::cout << i << ", ";
    impNum(n, ++i);
}


float tresNum(int a, int b, int c, int &mayor, int &menor) {
    float prom = 0;
    (a < b) ? ((a < c) ? menor = a : menor = c) : ((b > c) ? menor = c : menor = b);
    (a > b) ? ((a > c) ? mayor = a : mayor = c) : ((b < c) ? mayor = c : mayor = b);
    prom = ((a + b + c) / 3);
    return prom;
}

void dosNum(const int &a, const int &b, bool &amult2, bool &bmult2, bool &abmult, bool &poten) {
    amult2 = !(a % 2);
    bmult2 = !(b % 2);
    abmult = !(a % b);
    poten = (a * a == b);
}

bool evPrimo(int n) {//retorne true or false
    if (n < 1)
        return false;
    for (int i = 2; i < n; i++)
        if (!(n % i)) return false;
    return true;
}


void impPrimos(int n) {
    int cont = 0, act = 2;//comienza a evaluar por el numero 2
    if (n <= 0) {
        std::cout << "Cantidad no valida" << std::endl;
        return;
    }
    while (cont < n) {
        if (evPrimo(act)) {
            cont += 1;
            std::cout << act << " ";
        }
        act += 1;
    }
    std::cout << "\n";
}

int getDigitos(int n) {
    long detDig = 1, nDig = 0;
    while (detDig <= n) {
        nDig += 1;
        detDig *= 10;
    }
    return nDig;
}


int power(int x, int n) {
    int res = 1;
    for (int i = 0; i < n; i++)
        res *= x;
    return res;
}

void digNum(long x) {
    long divi, resto, digitos;
    digitos = getDigitos(x);//10^5==1000000
    divi = power(10, digitos - 1);//La division siempre es entre el numero de digitos
    resto = power(10, digitos);//El resto es mayor en un 0 que los digitos
    for (int i = 0; i < digitos; i++) {
        std::cout << (x % resto / divi) << "	";
        divi /= 10;
        resto /= 10;
    }
    std::cout << "\n";
}


bool palindrome(int x) {//Hacerlo recursivo
    long digitos, divdere = 1, restdere = 10, divizq, restizq;
    digitos = getDigitos(x);
    divizq = power(10, digitos - 1);
    restizq = power(10, digitos);
    for (int i = 0; i < digitos; i++) {
        if ((x % restizq / divizq) != (x % restdere / divdere))
            return false;
        divizq /= 10;
        restizq /= 10;
        divdere *= 10;
        restdere *= 10;
    }
    return true;
}

bool anioBisies(int x) {//1==bisiesto
    //if (!(x % 400))
    //	return true;
    //if (!(x % 100))
    //	return false;
    //if (!(x % 4))
    //	return true;
    //return false;

    //Con ternarios
    return (!(x % 400)) ? true : (!(x % 100)) ? false : (!(x % 4)) ? true : false;
}

int fibonacci(int x) {////imprime el n numero de fibonacci
    //int a = 0, b = 0, act;
    //for (int i = 0; i < x ; i++) {
    //	act = a + b;
    //	a = b;
    //	b = act;
    //	if (i == 0)
    //		a++;
    //}
    //return act;
    //Recursivo
    if (x == 1)
        return 1;
    if (x == 0)
        return 0;
    return fibonacci(x - 1) + fibonacci(x - 2);
}

int factorial(int n) {
    //int res = 1;
    //if (n < 0)
    //	return 0;
    //for (int i = 0; i < n; i++)
    //	res *= n - i;
    //return res;

    //Factorial
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}


int main() {
    //*****Edad*****
    //(edad(18) == 1) ? (std::cout << "Es menor" << "/n") : (std::cout << "Es mayor" << "/n");

    //*****Imprimir numeros*****
    //impNum(8);

    //*****Mayor menor 3 numeros*****
    //int x=12,y=29,z=1,mayor=0, menor=0;
    //float promedio;
    //promedio = tresNum(x, y, z, mayor, menor);
    //std::cout << "Promedio: " << promedio << "\n" << "Mayor: " << mayor << "\n" << "Menor: " << menor << "/n";

    //*****Evaluar dos numeros*****
    //int a = 4, b = 16;
    //bool am2, bm2, abm, apotb;
    //dosNum(a,b,am2,bm2,abm,apotb);
    //(am2) ? (std::cout << a << " es mult de 2" << "\n") : (std::cout << a << " no es mult de 2" << "\n");
    //(bm2) ? (std::cout << b << " es mult de 2" << "\n") : (std::cout << b << " no es mult de 2" << "\n");
    //(abm) ? (std::cout << a << " es mult de "<< b << "\n") : (std::cout << a << " no es mult de "<< b << "\n");
    //(apotb) ? (std::cout << a << "^2 = " << b << "\n") : (std::cout << a << "^2 != " << b << "\n");

    //*****Evaluar si primo*****
    //std::cout<<evPrimo(121)<<"\n";

    //*****Imprimir n numeros primos*****
    //impPrimos(28);

    //*****Imprimir digitos numero*****
    //digNum(123451231);

    //*****Determinar si un num es palindrome*****
    std::cout << palindrome(7890987) << "\n";

    //*****Determ si es anio bisiseto*****
    //std::cout << anioBisies(1700) << "\n";

    //*****n numero fibonacci*****
    //std::cout << fibonacci(6) << "\n";

    //*****Factorial de un numero*****
    //std::cout << factorial(5) << "\n";
}