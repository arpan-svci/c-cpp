#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("enter the number....");
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
        s=s+i*(i+1);
    }
    printf("sum of series=%d",s);
}
