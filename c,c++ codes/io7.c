#include<stdio.h>
void main()
{
float a,b,c,i;
printf("enter three numbers...");
scanf("%f %f %f",&a,&b,&c);
i=(a+b+c)/3;
printf("\n %f is the average value",i);
if(a>i)
    printf("\n %f is greater than average value",a);
else
    printf("\n %f is less than average value",a);
if(b>i)
    printf("\n %f is greater than average value",b);
else
    printf("\n %f is less than average value",b);
if(c>i)
    printf("\n %f is greater than average value ",c);
else
    printf("\n %f is less than average value",c);

}
