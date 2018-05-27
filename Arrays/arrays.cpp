#include <iostream>


int sumArr(int x[], int tam) {
    int res = 0;
    for (int i = 0; i < tam; i++)
        res += x[i];
    return res;
}


int sumRec(int x[], int tam) {
    if (tam == 1)
        return x[tam - 1];
    return x[tam - 1] + sumRec(x, tam - 1);
}

void invertir(int y[], int tam) {
    int tempo = 0;
    int izq = 0, dere = tam - 1;
    for (int i = 0; i < (tam / 2); i++) {
        tempo = y[i];
        y[i] = y[tam - i - 1];
        y[tam - i - 1] = tempo;
    }
}


int lengthStr(const char str[]) {
    int cont = 0, i = 0;
    while (str[i] != '\0') {
        cont += 1;
        i += 1;
    }
    return cont;


}

void copiarStr(char str1[], char str2[]) {
    //Copia del str2 a str1
    if (lengthStr(str1) < lengthStr(str2)) {
        std::cout << "Tamanio insuficiente" << std::endl;
        return;
    }
    for (int i = 0; i < lengthStr(str2); i++)
        str1[i] = str2[i];
    str1[lengthStr(str2)]='\0';
}


void concatenar(char str1[], const char str2[]) {
    int cont = 0, coVacio = 0, p = 0;

    while (str1[p] != '\0') {
        if (str1[p] == ' ')
            coVacio += 1;
        else {
            cont += 1 + coVacio;
            coVacio = 0;
        }
        p += 1;
    }
    cont+=1;

    for(int i=cont;i<cont+lengthStr(str2);i++)
        str1[i]=str2[i-cont];

}




void imprimir(int n,int index=0){
    if(index>n)
        return;
    std::cout<<index<<" ";
    imprimir(n,index+1);
}


int main() {
    int n=5;
    imprimir(n);




    std::cout<<std::endl;
    //    int tam = 5;
//    int x[tam] = {1, 2, 3, 4, 5};

//    std::cout << sumArr(x, tam) << std::endl;

//    invertir(x, tam);

//    //Imprime elementos invertidos
//    for (int i = 0; i < tam; i++) {
//        std::cout << x[i] << " ";
//    }
//    std::cout << "\n";

//    char texto[] = "hello world";
//    std::cout << "Length del char: " << texto << " = " << lengthStr(texto) << std::endl;


//    char string1[] = "12345691984191";
//    char string2[] = "qwerty";
//    copiarStr(string1, string2);
//    std::cout << string1 << std::endl;



//    char con1[] = "1d fh  4t                ";
//    char con2[] = "qwerty";

//    concatenar(con1, con2);
//    std::cout << con1 << std::endl;


}



