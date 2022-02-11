#include<iostream>
using namespace std;

class firstclass{
private:
    int a,b;
public:
    void set_data(){
        cout<<"Enter values of a and b"<<endl;
        cin>>a>>b;
    }
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
};

class secondclass{
private:
    int m,n;
public:
    void set_data(){
        cout<<"Enter values of a and b"<<endl;
        cin>>m>>n;
    }
    void show_data(){
        cout<<"m="<<m<<" "<<"n="<<n;
    }
    secondclass(){}
    secondclass(firstclass F){
        m=F.getA();
        n=F.getB();
    }
};

int main(){
    firstclass F1;
    secondclass S2;
    F1.set_data();
    S2.set_data();
    S2.show_data();
    S2=F1;
    S2.show_data();
    return 0;
}
