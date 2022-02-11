#include<iostream>
using namespace std;

class BOX{
private:
    int l,b,h;
public:
    void set_data(){
        cout<<"Enter length, breadth and height of box"<<endl;
        cin>>l>>b>>h;
    }
    void show_data(){
        cout<<"l="<<l<<endl<<"b="<<b<<endl<<"h="<<h;
    }
};

int main(){
    BOX a;
    BOX *p;
    p=&a;
    p->set_data();
    p->show_data();
    return 0;
}
