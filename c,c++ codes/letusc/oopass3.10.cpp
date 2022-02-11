#include<iostream>
#include<conio.h>
#define n 10
using namespace std;
class STACK{
    int top=-1;
    int stack[n];
public:
     void push(int x){
        if(top==(n-1))
            cout<<"\n overflow condition \n";
        else{
            top++;
            stack[top]=x;
        }
    }

    void pop(){
        if(top==-1)
            cout<<"\n stack underflow condition";
        else{
            cout<<"pop="<<stack[top]<<endl;
            top--;
        }
    }
};
int main(){
    STACK a;
    a.push(10);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.push(7);
    a.push(8);
    a.push(12);
    a.push(56);
    a.push(5);
    a.push(6);
    a.push(61);
    a.push(64);
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.pop();

    return 0;
}
