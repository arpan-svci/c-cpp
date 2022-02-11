#include<stdio.h>
void main()
{
int n,i,c=1;
for(i=1;i<=100;i++)
{
for(n=2;n<i;n++)
{
if(i%n==0)
c=0;
break;
}
if(c!=0)
printf("%d",i);
}
}
