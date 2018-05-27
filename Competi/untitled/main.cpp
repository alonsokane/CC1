#include <iostream>
#include <string>
using namespace std;

int main()
{
    int as=0;
    int bs=0;
    int cs=0;
    int state=0;
    bool final=true;
    string str;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
       if(state==0) {
           if(str[i]=='a')
               as++;
           else if (str[i]=='b') {
               state = 1;
               bs++;
           }
           else{
               cout<<"NO";
               final=false;
               break;
           }
           continue;

       }
       if(state==1) {
           if(str[i]=='b')
               bs++;
           else if(str[i]=='c'){
               state=2;
               cs++;
           }
           else{
               cout<<"NO";
               final=false;
               break;
           }
           continue;
       }
       if(state==2) {
           if(str[i]=='c')
               cs++;
           else{
               cout<<"NO";
               final=false;
               break;
           }

       }
    }
    if(final){
        if((as > 0 && bs >0) && (cs==bs || cs==as ))
             cout<<"YES";
        else
            cout<<"NO";
     }
}
