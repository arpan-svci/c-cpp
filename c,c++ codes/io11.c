#include<stdio.h>
void main()
{
 int a,b,c,d,e,f;
 float i,j;
 printf("enter the marks of 5 subjects...\n");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 if((a>100)||(b>100)||(c>100)||(d>100)||(e>100))
 {
 printf("error");
 }
 else
 {
     f=(a+b+c+d+e);
     j=f;
     i=j*100/500;
     printf("%d is the total aggregated marks\n",f);
     printf("%f is total aggregated percentage",i);

 }
}
