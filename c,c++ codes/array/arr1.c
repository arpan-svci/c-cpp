#include<stdio.h>
void main()
{
int i,j,a[50],n;
printf ("enter the number of elements...");
scanf("%d",&n);
printf("\n enter %d numbers...",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
a[n+i]=a[i];
}
for(i=0;i<n;i++)
{
a[i]=a[2*n-i-1];
}
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}
