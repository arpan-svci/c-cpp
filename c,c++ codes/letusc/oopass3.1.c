#include<iostream>
#include<conio.h>
#define greater(a,b) (a>b?a:b)
using namespace std;
void main(){
int a,b,c;
char x[20],y[20],z[20];
cout<<"\n enter the value of a and b";
cin>>a>>b;
c=greater(a,b);
cout<<c;
cin.ignore();
cout<<"\n enter first string:";
gets(x);
cout<<"\n enter the second string:";
gets(y);
c=greater(x,y);
puts(c);
}
