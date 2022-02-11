#include<iostream>
using namespace std;

class complex{
private:
    int a,b;
public:
    ~complex(){ //this is a destructor
        cout<<"i'm in destructor";
    }
};

int main(){
    complex c;
    return 0;
}
