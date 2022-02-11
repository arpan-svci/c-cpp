#include<stdio.h>
#include<math.h>
float f2(float x)
{
float y=sin(x);
return y;
}
float s2(float x1,float x2)
{
float y=(x1+x2)*0.5;
return y;
}

void main()
{
float x1,x2,x02,i=0;
printf("enter lower limit of x:");
scanf("%f",&x1);
printf("enter upper limit of x:");
scanf("%f",&x2);
if(f2(x1)*f2(x2)>0)
printf("impossible case\n");
else
{
while((x2-x1)>0.02&&i<500)
{
x02=s2(x1,x2);
if(f2(x02)==0)
{
printf("root=%f",x02);
break;
}
if(f2(x02)*f2(x1)<0)
{
x2=x02;
}
else
{
x1=x02;
i++;
}
}
printf("root of the equation in this limit=%f",x02);
}
}
