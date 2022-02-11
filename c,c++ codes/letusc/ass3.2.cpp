#include<iostream>
using namespace std;
void swapv(int x,int y){
int z;
    z=x;
    x=y;
    y=z;
    cout<<"a="<<x<<"\t"<<"b="<<y;
}
int main(){
    int a,b;
    cout<<"enter two integer want to swap"<<endl;
    cout<<"enter a...";
    cin>>a;
    cout<<"enter b...";
    cin>>b;
    swapv(a,b);
    return 0;
}
