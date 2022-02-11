#include<stdio.h>
int s=0;
int sum(int x)
{
    if(x>0)
    s=s+x%10+sum(x/10);
}
void main()
{
    int n,r;
    printf("\n enter the number:");
    scanf("%d",&n);
    r=sum(n);
    printf("\n sum of digits is %d",r);
}

