#include<iostream>
using namespace std;

class A{
public:
    void f1(){
        cout<<"I'm in A in f1"<<endl;
    }
    void f2(){
        cout<<"I'm in A in f2"<<endl;
    }
};

class B:public A{
public:
    void f1(){
        cout<<"I'm in B in f1"<<endl;    //method overriding
    }
    void f2(int x){
        cout<<"I'm in B in f2"<<endl;   //method overhiding
    }
};

int main(){
    B obj;
    obj.f1();
    obj.f2(4);
    return 0;
}

