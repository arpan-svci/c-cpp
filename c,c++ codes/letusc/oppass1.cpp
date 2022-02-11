#include<iostream>
using namespace std;
int main(){
int a=5,*p,**pp;
p=&a;
pp=&p;
cout<<"\n enter the value of the variable:";
cin>>a;
cout<<*p<<endl;
cout<<**pp<<endl;
cout<<**(&p)<<"\t"<<***(&pp);
}
