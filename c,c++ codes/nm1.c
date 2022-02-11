#include<stdio.h>
#include<math.h>
float f1(float x){
float y=sin(x);
return y;
}
float s1(float x){
float y=x-(f1(x)/(cos(x)));
return y;
}
float f2(float x){
float y=sin(x);
return y;
}
float s2(float x1,float x2){
float y=(x1+x2)*0.5;
return y;
}
float f3(float x){
float y=sin(x);
return y;
}
float s3(float x1,float x2){
float y=x1-(f3(x1)*(x2-x1)/(f3(x2)-f3(x1)));
return y;
}
void main(){
    int c;

    float x1,x2,x02,x01,x03,i=0;
    printf("Enter 1 to use newton-raphson\n");
    printf("Enter 2 to use bisection\n");
    printf("Enter 3 to use regula-falsi\n");
    scanf("%d",&c);
    switch(c){

        case 1:

printf("enter lower limit of x:");
scanf("%f",&x1);
printf("enter upper limit of x:");
scanf("%f",&x2);
x01=s1(x1);
if(f1(x1)*f1(x2)>0)
printf("impossible case\n");
else if(f1(s1(x1))==0){
printf("the root is %f",x1);
}
else{
while((x2-x1)>0.02&&i<500){
if(f1(x01)*f1(x1)<0){
x2=x01;
x01=s1(x2);
}
else{
x1=x01;
x01=s1(x1);
}
i++;
}
printf("root of the equation in this limit=%f",x01);
}
break;

        case 2:
printf("enter lower limit of x:");
scanf("%f",&x1);
printf("enter upper limit of x:");
scanf("%f",&x2);
if(f2(x1)*f2(x2)>0)
printf("impossible case\n");
else{
while((x2-x1)>0.02&&i<500){
x02=s2(x1,x2);
if(f2(x02)==0){
printf("root=%f",x02);
break;
}
if(f2(x02)*f2(x1)<0){
x2=x02;
}
else{
x1=x02;
i++;
}
}
printf("root of the equation in this limit=%f",x02);
}
break;
        case 3:
printf("enter lower limit of x:");
scanf("%f",&x1);
printf("enter upper limit of x:");
scanf("%f",&x2);
if(f3(x1)*f3(x2)>0)
printf("impossible case\n");
else{
while((x2-x1)>0.02&&i<500){
x03=s3(x1,x2);
if(f3(x03)==0){
printf("root=%f",x03);
break;
}
if(f3(x03)*f3(x1)<0){
x2=x03;
}
else{
x1=x03;
i++;
}
}
printf("root of the eqution in this limit=%f",x03);
}
break;
    default : printf("ERROR!!");
    }
}
