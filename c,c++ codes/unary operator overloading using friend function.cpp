#include<iostream>
using namespace std;

class coordinate{
    int a;
public:
    void set_data(){
        cout<<"Enter values of a"<<endl;
        cin>>a;
    }
    void show_data(){
        cout<<"a="<<a<<endl;
    }
    friend coordinate operator ++(coordinate);
};

coordinate operator ++(coordinate A){
    coordinate temp;
    temp.a=++A.a;
    return(temp);
}

int main(){
    coordinate x,y;
    x.set_data();
    y=++x;
    y.show_data();
    return 0;
}
