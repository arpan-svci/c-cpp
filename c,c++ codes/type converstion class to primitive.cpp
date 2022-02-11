#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
    void set_data(){
        cout<<"Enter values of a & b:"<<endl;
        cin>>a>>b;
    }
    operator int(){
        return a;
    }
};

int main(){
    int x;
    Complex c;
    c.set_data();
    x=c;
    cout<<"x="<<x;
    return 0;
}
