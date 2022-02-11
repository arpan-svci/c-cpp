#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the no....");
    scanf("%d",&n);
    for(i=1;i<=100;i++)
    {
        if(i%n==0)
        {
            printf("\t%d",i);
        }
    }
}
