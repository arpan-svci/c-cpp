#include<iostream>
using namespace std;

class A{
public:
    void f1(){
        cout<<"I'm in f1 of A"<<endl;
    }
};

class B:public A{
    void f1(){
        cout<<"I'm in f1 of B"<<endl;
    }
};

int main(){
    A *p,obj1;
    B obj2;
    p=&obj2;
    p->f1();
    return 0;
}
