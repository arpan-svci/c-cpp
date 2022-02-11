#include<stdio.h>
void main()
{
    int n,i,rev=0;
    printf("enter the number...");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        rev=rev*10+i;
    }
    printf("reverse of the number is...%d",rev);
}
