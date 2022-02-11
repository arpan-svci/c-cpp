#include<iostream>
#include<conio.h>
using namespace std;
class complex{
private:
    int real;
    int imaginary;
public:
    void setdata(int x,int y){
        real=x;
        imaginary=y;
    }
    void showdata(){
        cout<<endl<<"real part="<<real;
        cout<<"\t imaginary part="<<imaginary;
    }
    complex operator+(complex c2){
    complex temp;
    temp.real=real+c2.real;
    temp.imaginary=imaginary+c2.imaginary;
    return temp;
    }
    complex operator-(){
    complex temp;
    temp.real=-real;
    temp.imaginary=-imaginary;
    return temp;
    }
    complex operator-(complex c){
    complex temp;
    temp.real=real-c.real;
    temp.imaginary=imaginary-c.imaginary;
    return temp;
    }
    complex operator*(complex c){
    complex temp;
    temp.real=real*c.real-imaginary*c.imaginary;
    temp.imaginary=c.real*imaginary+c.imaginary*real;
    return temp;
    }
    complex(int x,int y){
        real=x;
        imaginary=y;
    }
    complex(int x){
        real=x;
        imaginary=0;
    }
    complex(){
        real=0;
        imaginary=0;
    }
    complex(complex &c){
        real=c.real;
        imaginary=c.imaginary;
    }
};
int main(){
complex c1(3,4),c2(1,2),c3;
c1.showdata();
c3=c1-c2;
c3.showdata();
c3=-c1;
c3.showdata();
c3=c1*c2;
c3.showdata();
getch();
return 0;
}
