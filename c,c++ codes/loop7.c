#include<stdio.h>
void main()
{
    int n,i,j,s=0,f=1;
    printf("enter the number....");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        s=s+f;
        f=1;
    }
    printf("sum of the series=%d",s);
}
