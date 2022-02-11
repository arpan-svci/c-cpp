#include<iostream>
#include<conio.h>
using namespace std;
void f(int a){
cout<<"inside f(int)"<<endl;
}
void f(float a){
cout<<"inside f(float)"<<endl;
}
int main(){
int a=3;
float b=3.5;
char c='a';
double d=2.500000;
f(a);
f(b);
f(c);
//f(d);
}
