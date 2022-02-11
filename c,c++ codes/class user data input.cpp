#include<iostream>
using namespace std;

class complex{
private:
    int a,b;
public:
    void set_data(){
        cout<<"Enter a & b"<<endl;
        cin>>a>>b;
    }
    void show_data(){
    cout<<"a="<<a<<" "<<"b="<<b;
    }
};

int main(){
    complex c;
    c.set_data();
    c.show_data();
    return 0;
}
