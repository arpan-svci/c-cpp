#include<iostream>
using namespace std;

int main(){
    int a=0,b=1;
    for(int i=0;i<5;i++){
        int k=b;
        b=a+b;
        a=k;
        cout<<a;
    }
}