#include<iostream>
#include<conio.h>
using namespace std;
void swapv(){
    int a,b,c;
    cout<<"enter first variable:";
    cin>>a;
    cout<<"enter second variable:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"first variable="<<a<<endl<<"second variable="<<b;
}
int main(){
    swapv();
return 0;
}
