#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c,d,r,e,f;
    printf("enter the length and breadth of the rectangle..");
    scanf("%f %f",&a,&b);
    c=a*b;
    d=2*(a+b);
    r=sqrt(c/3.14);
    e=2*3.14*r;
    f=d/e;
    printf("\n radius of the circle is =%f",r);
    printf("\n ratio of perimeters of rectangle and circle=%f",f);
}
