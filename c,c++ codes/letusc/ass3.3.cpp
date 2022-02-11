#include<iostream>
using namespace std;
int*maximum(int *a,int *b){
if(*a>*b)
    return a;
else if(*b>*a)
    return b;
else
    cout<<"value is same";
}
int main(){
int *p,*q,*x,a,b;
cin>>a;
cin.ignore();
cin>>b;
p=&a;
q=&b;
x=maximum(p,q);
cout<<"\n"<<*x;
}
