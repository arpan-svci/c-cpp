#include<iostream>
using namespace std;

class secondclass{
private:
    int m,n;
public:
    void set_data(){
        cin>>m>>n;
    }
    int getM(){
        return m;
    }
    int getN(){
        return n;
    }
};

class firstclass{
private:
    int a,b;
public:
    void show_data(){
        cout<<"a="<<a<<" "<<"b="<<b;
    }
    void operator =(secondclass S){
        //firstclass F;
        a=S.getM();
        b=S.getN();
        //return S;
    }
};

int main(){
    firstclass F1;
    secondclass S2;
    S2.set_data();
    F1=S2;
    F1.show_data();
    return 0;
}
