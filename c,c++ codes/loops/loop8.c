#include<stdio.h>
void main()
{
int n,i,j,s=0;
printf("\n enter the no...");
scanf("%d",&n);
for(int i=1;i<=n;++i)
{
for(j=1;j*j<=i;++j)
{
if(i%j==0)
{
if(i%j==j)
s=s+j;
else
s=s+j+i/j;
}
}
}
printf("\n the sum is %d",s);
}
