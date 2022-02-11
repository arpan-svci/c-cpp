#include<stdio.h>
void main()
{
    int a,b,i,j,c[1000],d[1000],n=0,m=0,x,y,count1=0,count2=0,g=1;
    printf("enter first number....");
    scanf("%d",&a);
    printf("enter second number...");
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count1=count1+1;
            c[n]=i;
            n++;
        }
    }
    for(j=1;j<=b;j++)
    {
        if(b%j==0)
        {
            count2=count2+1;
            d[m]=j;
            m++;
        }
    }
    for(x=0;x<count1;x++)
    {
        for(y=0;y<count2;y++)
        {
            if(c[x]==d[y])
            {
                g=1*c[x];
            }
        }
    }
    printf("GCD=%d",g);
}
