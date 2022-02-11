#include<stdio.h>
#include<math.h>
float f(float x,float c){
    float y=x*tan(x)-c;
    return y;
}
float f1(float x){
float y=sin(x);
return y;
}
float s1(float x){
float y=x-(f1(x)/((x/(cos(x)*cos(x)))+tan(x)));
return y;
}
float main(){
    float x1=0,x2,x0,c;
    int flag,j=0,k,i=0;
    printf("enter the value of c in x tan x-c=0....");
    scanf("%f",&c);
    for(flag=1;flag<=3;flag++){
        for(x2=x1;f(x1,c)*f(x2,c)>0;x2=x2+0.2){
            ;
        }
            while((x2-x1)>0.002&&i<500000){
                x0=(x1+x2)*0.5;
                if(f(x0,c)==0){
                    printf("root=%f",x0);
                    break;
                }
                if(f(x0,c)*f(x1,c)<0){
                    x2=x0;
                }
                else{
                x1=x0;
                }
                i++;
            }

            printf("the %d th root of the equation is %f \n",flag,x0);
            for(x1=x0+0.2;f(x1,c)>0;x1=x1+0.2){
                ;
            }

    }
}
