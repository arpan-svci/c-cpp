#include<stdio.h>
#include<math.h>
float f3(float x)
{
float y=sin(x);
return y;
}
float s3(float x1,float x2)
{
float y=x1-(f3(x1)*(x2-x1)/(f3(x2)-f3(x1)));
return y;
}
void main()
{
float x1,x2,x03,i=0;
printf("enter lower limit of x:");
scanf("%f",&x1);
printf("enter upper limit of x:");
scanf("%f",&x2);
if(f3(x1)*f3(x2)>0)
printf("impossible case\n");
else
{
while((x2-x1)>0.02&&i<500)
{
x03=s3(x1,x2);
if(f3(x03)==0)
{
printf("root=%f",x03);
break;
}
if(f3(x03)*f3(x1)<0)
{
x2=x03;
}
else
{
x1=x03;
i++;
}
}
printf("root of the eqution in this limit=%f",x03);
}
}
