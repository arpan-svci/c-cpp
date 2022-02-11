#include<stdio.h>
void main()
{
int i,j,n,a[50],max,min;
printf("enter the no of elements of the array....");
scanf("%d",&n); 
for(i=0;i<n;i++)
{
printf("enter %d th element of the array......",i);
scanf("%d",&a[i]);
}
max=a[0];
min=a[0]; 
for(i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("difference between maximum and minimum=%d",max-min);
}
