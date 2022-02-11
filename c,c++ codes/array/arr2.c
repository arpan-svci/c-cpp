#include<stdio.h>
void main()
{
int a[50],b[50],i,j,k,l,n,count=0,top=0;
printf("enter the number of elements want to insart....");
scanf("%d",&n);
printf("enter %d elements.....",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(k=0;k<n;k++)
{
for(j=k+1;j<n;j++)
{
if(a[k]==a[j])
{
count=count+1;
b[top]=a[k];
printf("\n%d",b[top]);
top=top+1;
}
}
}
if(count==0)
{
printf("no duplicate element");
}
printf("\n no of duplicate=%d",count);
for(l=0;l<=top;l++)
{
printf("%d",b[i]);
} 
printf("%d",n-count);
}
