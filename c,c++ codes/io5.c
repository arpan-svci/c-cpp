#include<stdio.h>
void main()
{
int a,b,j,max,min;
float i,m,n;
printf ("enter the numbers....");
scanf("%d %d",&a,&b);
if(a>=b){
    max=a;
    min=b;
}
else{
    max=b;
    min=a;
}
m=max;
n=min;
i=m/n;
printf("%f",i);
j=max%min;
printf("\n%d/%d",j,min);
}
