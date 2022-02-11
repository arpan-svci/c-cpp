#include<iostream>
using namespace std;

class complex{
    int a,b;
public:
    void set_data(){
        cout<<"Enter values of a and b"<<endl;
        cin>>a>>b;
    }
    void show_data(){
        cout<<"Value of a & b are:"<<endl;
        cout<<"a="<<a<<" "<<"b="<<b;
    }
    friend complex operator+(complex,complex);
};

complex operator+(complex X,complex Y){
    complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return(temp);
}

int main(){
    complex c1,c2,c3;
    c1.set_data();
    c2.set_data();
    c3=operator+(c1,c2);
    c3.show_data();
    return 0;
}
