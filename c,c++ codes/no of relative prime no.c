#include<stdio.h>
 int gcd(int a,int b)
{
    int i,j,c[1000],d[1000],n=0,m=0,x,y,count1=0,count2=0,g=1;
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
    return g;
}
void main()
{
    int o,p,q,count=0;
    printf("enter the number....");
    scanf("%d",&q);
    for(o=2;o<q;o++)
    {
    for(p=o+1;p<=q;p++)
    {
     if(gcd(o,p)==1)
     {
         count=count+1;
     }
    }
    }
    printf("%d",count);

}
