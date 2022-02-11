#include<iostream>
#define greater(a,b) (a>b?a:b)
#include<string.h>
using namespace std;
int main(){
int a,b,c;
char x[20],y[20],z[20];
cout<<"\n enter the value of a and b:";
cin>>a>>b;
c=greater(a,b);
cout<<"greater value is "<<c;
cin.ignore();
cout<<"\n enter first string:";
gets(x);
cout<<"\n enter the second string:";
gets(y);
strcpy(z,greater(x,y));
puts(z);
return 0;
}
