#include<stdio.h>
void main()
{
    int n,i,j,s=0;
    printf("enter the number...");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                s=s+j;
            }
        }
    }
    printf("sum of the series=%d",s);
}
