#include<stdio.h>
void main()
{
int a[20],i,j,k;
printf("enter ten numbers....");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
{
for(j=0;j<10-i-1;j++)
{
if(a[j]>a[j+1])
{
k=a[j];
a[j]=a[j+1];
a[j+1]=k;
}
}
}
for(i=0;i<10;i++)
printf("%d\t",a[i]);
}
