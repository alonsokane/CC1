#ifndef VECTOR_H
#define VECTOR_H

class vector {
private:
    int tam;
    bool evPrimo(int);

public:
    double* arr;
    void append(double);
    void del(int);
    void insert(int, double);
    void vaciar();
    void printArr(); //*****
    double retMayor();
    double retMenor();
    double mayorPrim();
    double menorPrim();
    double sumVal();
    void ordenar();
    void invertir(); //*****
    vector(int);
    vector();
    vector(int, double*);
    ~vector();
};

#endif // VECTOR_H
