#include<stdio.h>
#include<math.h>
float f1(float x)
{
float y=sin(x);
return y;
}
float s1(float x)
{
float y=x-(f1(x)/(cos(x)));
return y;
}
void main()
{
float x1,x2,x01;
int i=0;
printf("enter lower limit of x:");
scanf("%f",&x1);
printf("enter upper limit of x:");
scanf("%f",&x2);
x01=s1(x1);
if(f1(x1)*f1(x2)>0)
printf("impossible case\n");
else if(f1(s1(x1))==0)
{
printf("the root is %f",x1);
}
else
{
while((x2-x1)>0.02&&i<500)
{
if(f1(x01)*f1(x1)<0)
{
x2=x01;
x01=s1(x2);
}
else
{
x1=x01;
x01=s1(x1);
}
i++;
}
printf("root of the equation in this limit=%f",x01);
}
}
