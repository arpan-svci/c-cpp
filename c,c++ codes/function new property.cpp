#include<iostream>
using namespace std;

int fun(int a,int b,int c=0);
int main(){
    int a,b,c,s;
    cout<<"Enter numbers to be added"<<endl;
    cin>>a>>b>>c;
    s=fun(a,b);
    cout<<"The sum is "<<s;
    s=fun(a,b,c);
    cout<<"The sum is "<<s;
    return 0;
}

int fun(int a,int b,int c){
    return (a+b+c);
}
