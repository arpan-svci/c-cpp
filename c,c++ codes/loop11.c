#include<stdio.h>
void main()
{
    int i,a,b,c;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=3;b++)
        {
            for(c=1;c<=3;c++)
                if(a!=b&&b!=c&&c!=a)
            {
                i=100*a+10*b+c;
                printf("\t %d",i);
                i=0;
            }
        }
    }
}
