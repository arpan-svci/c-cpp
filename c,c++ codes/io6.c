#include<stdio.h>
void main()
{
    int a,b,c,max,min;
    printf("enter the numbers....");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    printf("\n maximum=%d",a);
    else if(b>c)
    printf("\n maximum=%d",b);
    else
    printf("\n maximum=%d",c);

    if(a<b&&a<c)
    printf("\n minimum=%d",a);
    else if(b<c)
    printf("\n minimum=%d",b);
    else
    printf("\n minimum=%d",c);

}

