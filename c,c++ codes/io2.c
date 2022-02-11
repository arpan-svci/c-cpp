#include<stdio.h>
void main()
{
float a,b,c,d,e,f,g;
printf("enter the length and breadth of a rectangle....");
scanf("%f %f",&a,&b);
printf("radius of the circle...");
scanf("%f",&c);
d=2*(a+b) ;
e=a*b;
f=2*3.14*c;
g=3.14*c*c;
printf("\n perimeter of the rectangle is %f",d);
printf("\n perimeter of the circle is %f",f);
printf("\n area of the rectangle is %f",e);
printf("\n area of the circle %f",g);
}
