#include<iostream>
using namespace std;

class complex{
private:
    int a,b;
public:
    void set_data(){
        cout<<"Enter values of a & b"<<endl;
        cin>>a>>b;
    }
    void show_data(){
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
    complex operator -(){
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return(temp);
    }
};

int main(){
    complex c1,c3;
    c1.set_data();
    //c2.set_data();
    c3=-c1;
    cout<<"value of c1\n";
    c1.show_data();
    //c2.show_data();
    cout<<"value of c3\n";
    c3.show_data();
    return 0;
}
