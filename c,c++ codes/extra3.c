#include<stdio.h>
fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
void main()
{
    int i,n,s=0;
    printf("\n enter the no...");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+fact(i);
    }
    printf("sum of the series=%d",s);
}
