#include<iostream>
#include<conio.h>
using namespace std;
void fool(int a,int b){
cout<<"inside f(int,int)"<<endl;
}
void fool(char a,int b){
cout<<"inside f(char,int)"<<endl;
}
int main(){
    int a=2,b=3;
    float c=2.4,d=4.6;
    char e='a',f='b';
fool(a,e);
fool(e,f);
//fool(c,d);
}
