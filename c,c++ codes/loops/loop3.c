#include<stdio.h>
void main()
{
int n,rev=0;
printf("\n enter the number...");
scanf("%d",&n);
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("the reverse of the no is...%d",rev);
}
