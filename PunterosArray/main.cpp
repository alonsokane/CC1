#include <iostream>


int suma(int *x, int length) {
    int res = 0, i = 0;
    while (i < length) {
        res += *x;
        i += 1;
        x++;
    }
    return res;
}


int sumaRec(int *x, int length) {
    if (length == 1)
        return *x;
    return *x + sumaRec(++x, --length);
}


void invertir(int *x, const int &length) {
    int temp = 0;
    int *y = x + length - 1;
    while (y >= x) {//Se puede comparar memoria
        temp = *x;
        *x = *y;
        *y = temp;
        ++x;
        --y;
    }
}


int strSize(char *x) {
    int cont = 0;
    for (; *x != '\0'; cont++, ++x);
    return cont;
}

void concatenar(char *str1, char *str2) {
    int str1size = strSize(str1);
    int str2size = strSize(str2);
    char *temp = str1;
    int contVac = 0;
    int pos = 0;

    while (*temp != '\0') {
        if (*temp == ' ')
            contVac += 1;
        else {
            pos += 1;
            pos += contVac;
            //temp += contVac;
            contVac = 0;
        }
        temp += 1;
    }

    str1 += pos + 1;

    for (int i = 0; i < pos + strSize(str2); i++) {
        *str1 = *str2;
        ++str1;
        ++str2;
    }
}


void copiar(char *str1, char *str2) {
    int len1=strSize(str1);
    int len2=strSize(str2);
    if(len1<len2)
        return;

    for(int i=0;i<len2;i++){
        *str1=*str2;
        ++str1;
        ++str2;
    }

}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int lenArr = 6;
    std::cout << sumaRec(arr, lenArr) << std::endl;


//    char str[]={'h','e','l','l','o','\0'};
//    char str1[]="hello";
//    std::cout<<str<<'\n';

    invertir(arr, lenArr);
    for (int i = 0; i < lenArr; i++)
        std::cout << arr[i] << " ";

    std::cout << std::endl;

    char string1[] = "hello world";
    std::cout << strSize(string1) << " " << std::endl;


    char conc1[] = "12345           ";
    char conc2[] = "asdfg";

    concatenar(conc1, conc2);
    std::cout << strSize(conc2) << " " << std::endl;
    std::cout << conc1 << std::endl;



    char cop1[] = "Hello";
    char cop2[] = "there";
    copiar(cop1,cop2);
    std::cout << cop1 << std::endl;


    int asd[]={5,6,2,8,1};
    int *ptr2=asd+1;
    //ptr+=3;
    std::cout << *ptr2 << std::endl;
    long double y;
    std::cout << sizeof(y) << std::endl;

}