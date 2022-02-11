#include<iostream>
using namespace std;

class B;
class A{
    int a;
    friend void fun(A,B,int);
public:
    void set_data(int x){
        a=x;
    }
};

class B{
    int b;
    friend void fun(A,B,int);
public:
    void set_data(int y){
        b=y;
    }
};

void fun(A o1,B o2,int n){
    cout<<"Sum is "<<o1.a+o2.b+n;
}

int main(){
    A obj1;
    B obj2;
    obj1.set_data(4);
    obj2.set_data(9);
    fun(obj1,obj2,5);
    return 0;
}
