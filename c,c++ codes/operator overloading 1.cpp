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
    complex operator + (complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};

int main(){
    complex c1,c2,c3;
    c1.set_data();
    c2.set_data();
    c3=c1+c2;
    cout<<"value of c1:\n";
    c1.show_data();
    cout<<"value of c1:\n";
    c2.show_data();
    cout<<"value of c1:\n";
    c3.show_data();
    return 0;
}
