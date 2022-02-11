#include<iostream>
using namespace std;

int function(int *p,int *q){
    return (*p + *q);
}

int main(){
    int x,y,s;
    cout<<"Enter the two number"<<endl;
    cin>>x>>y;
    int *p,*q;
    p=&x;
    q=&y;
    s=function(p,q);
    cout<<"Sum is "<<s;
    return 0;
}
