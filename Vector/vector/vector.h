#ifndef VECTOR_H
#define VECTOR_H

class vector {
private:
    int tam;

public:
    double* arr;
    void append(double);
    void del(int);
    void insert(int, double);
    //void vaciar();
    void printArr();
    vector(int);
    vector();
    vector(int, double*);
    ~vector();
};

#endif // VECTOR_H
