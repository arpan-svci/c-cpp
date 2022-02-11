#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
    Complex(){}
    Complex(int k){
        a=k;
        b=0;
    }
    void set_data(int x,int y){
        a=x;
        b=y;
    }
    void show_data(){
        cout<<"a="<<a<<" "<<"b="<<b;
    }
};

int main(){
    int x=5;
    Complex c;
    c=x;
    c.show_data();
    return 0;
}
