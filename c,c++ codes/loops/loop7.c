#include<stdio.h>
void main()
{
int i,n,s=0,f=1,w;
printf("enter the digit....");
scanf("%d",&n);
for(i=1;i<=n;i++)
{f=1;
for(w=1;w<=i;w++)
{
f=f*w;
}
s=s+f;
}
printf("the sum of seriesis...%d",s);
}
