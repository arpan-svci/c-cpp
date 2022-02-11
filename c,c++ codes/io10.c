#include<stdio.h>
void main()
{
int a,b,c,d,e,f;
printf("enter the withdrawal amount...");
scanf("%d",&a);
b=a%100;
c=a/100;
d=b%50;
e=b/50;
f=d/10;
printf("\n no. of 100 rupees notes=%d",c);
printf("\n no. of 50 rupees notes=%d",e);
printf("\n no. of 10 rupees notes=%d",f);
}
