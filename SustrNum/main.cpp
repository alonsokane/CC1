#include <iostream>


double numero(char str[]){
    int tam=0;
    int indee=0;
    int mult=1;
    int divi=1;
    int cant=0;
    //int arr[];
    bool coma=false;
    int comain=0;

    double tempo=0;
    double num=0;

    for(int i=0; str[i]!='e';i++){
        if(str[i]=='.'){
            coma=true;
            comain=i;
            indee+=1;
            continue;
        }
        if(coma)
            divi*=10;
        tam+=1;
        indee+=1;
    }

    //123.45e-6

    //find number
    int j=0,k=0;
    cant=tam-1;

    while(j<indee){
        if(str[j]=='.'){
            ++j;
            continue;
        }
        tempo=str[j]-'0';
        for(int i=0;i<tam-1-k;i++)
            tempo*=10;

        num+=tempo;
        std::cout<<num<<std::endl;
        ++k;
        ++j;
    }

    num/=divi;




    //return tam;
    return num;

}

//t es subcadena de s
bool substring(char *s,char *t){
     for(;*s!='\0';++s)
         if(*s==*t)
             ++t;

     char *ptr=t;
     for(;*ptr!='\0';++ptr)


     if(t!=ptr)
         return false;
     return true;
}


double prub(char *str){
    //longitud
    double num=0;
    double expo=0;
    double temp=0;
    int tam=0;
    int tame=0;
    long long  divi=1;
    long long  mult=1;
    bool coma=false;
    bool posi=true;
    int length=0;
    for(;*str!='e';++str){
        ++length;
        if(*str=='.'){
            coma=true;
            continue;
        }
        if(coma)
            //++expo;
            divi*=10;
        ++tam;
    }
    str-=tam+1;

    int k=0;
    while(*str!='e'){
        if(*str=='.'){
            ++str;
            continue;
        }
        temp=*str-'0';
        for(int j=0;j<tam-1-k;j++)
            temp*=10;
        num+=temp;
        ++k;
        ++str;
    }
    str+=1;
    char *estr=str;
    if(*str=='-' || *str=='+'){
        ++estr;
        if(*str=='-')
            posi=false;
        for(;*estr!='\0';++estr,++tame);
    }else {
        for(;*estr!='\0';++estr,++tame);
    }

    k=0;
    ++str;
    for(;*str!='\0';++str){
        temp=*str-'0';
        for(int j=0;j<tame-1-k;j++)
            temp*=10;
        expo+=temp;
        ++k;
    }

    //"17.4176e-6"

    for(int i=0;i<expo;i++)
        if(posi)
            mult*=10;
        else
            divi*=10;


    num/=divi;
    num*=mult;
    return num;

}


int main() {

    //substring
    char strt[]="asd";
    char strs[]="1a2s3d";
    std::cout<<substring(strs,strt)<<std::endl;

    //notacion
    char string2[]="1.74176e+6";
    std::cout<<prub(string2)<<std::endl;

}