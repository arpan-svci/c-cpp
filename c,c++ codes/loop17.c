#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,c;
    printf("\n enter the number of elements in Fibonacci series:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
