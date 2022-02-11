#include<iostream>
#include<conio.h>
using namespace std;
float tax(float income,float percent=10){
    return (income*percent/100);
}
int main(){
cout<<tax(150,15)<<endl;
cout<<tax(1200);
return 0;
}
