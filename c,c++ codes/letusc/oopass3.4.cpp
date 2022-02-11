#include<iostream>
using namespace std;
int* maximum(int *a,int *b){
if(*a>*b)
    return a;
else if(*b>*a)
    return b;
else
    cout<<"value is same";
}
int main(){
int x,a,b;
int *p;
cout<<"enter first no.:";
cin>>a;
cin.ignore();
cout<<"enter second no.:";
cin>>b;
//x=maximum(&a,&b);
p=maximum(&a,&b);
cout<<"\ngreatest no.:"<<*p;
//cout<<endl<<&x;
}
