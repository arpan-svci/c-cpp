#include<stdio.h>
void main()
{
int n,a,b,c,i,j,k,s;
printf("enter three digit no...");
scanf("%d",&n);
a=n%10;
i=n/10;
b=i%10;
j=i/10;
c=j%10;
s=a+b+c;
printf("sum of digit is %d",s);
}
