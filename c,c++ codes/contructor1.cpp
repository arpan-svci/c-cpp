#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    complex(int x,int y){ //this is a constructor
        a=x;
        b=y;
    }
    complex(int x){ //this is a constructor
        a=x;
        b=0;
    }
    complex(){ //this is a constructor
        a=0;
        b=0;
    }
    void show_value(){
        cout<<"("<<a<<","<<b<<")"<<endl;
    }
};

int main(){
    complex c1(3,4),c2(6),c3; //input values in constructor
    c1.show_value();
    c2.show_value();
    c3.show_value();
    return 0;
}
