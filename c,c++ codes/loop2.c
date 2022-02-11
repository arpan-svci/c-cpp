#include<stdio.h>
void main()
{
int n,i,s=0;
printf("enter the number..");
scanf("%d",&n);
while(i>0)
{
    i=n%10;
    n=n/10;
    s=s+i;
}
printf("sum of digits=%d",s);
}
