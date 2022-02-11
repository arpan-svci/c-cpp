#include<iostream>
#include<conio.h>
#include<string.h>
#define greater(x,y) (x>y?x:y)
#define great(str1,str2) (strlen(str1)>strlen(str2)?str1:str2)
using namespace std;
int main(){
int a,b;
a=greater(3,5);
cout<<a;
return 0;
getch();
}
