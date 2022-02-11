#include<stdio.h>
#include<conio.h>
void main(){
int a1[100],a2[100],a3[100],a4[100],a5[100],b1[100],b2[100],b3[100],b4[100],b5[100];
int x,y,z=0,count=0,c=0;
printf("\n enter the first polynomial:\n");
printf("\n enter no. of terms of the polynomial:");
scanf("%d",&x);
for(int i=0;i<x;i++){
    printf("\n enter co-efficient of %dth term",i+1);
    scanf("%d",&b1[i]);
    printf("\n enter power of %dth term:",i+1);
    scanf("%d",&a1[i]);
    }
printf("\n enter second polynomial:\n");
printf("\n enter no. of terms of the polynomial:");
scanf("%d",&y);
for(int i=0;i<y;i++){
    printf("\n enter co-efficient of %dth term",i+1);
    scanf("%d",&b2[i]);
    printf("\n enter power of %dth term:",i+1);
    scanf("%d",&a2[i]);
}
for(int i=0;i<x;i++){
        count=0;
    for(int j=0;j<y;j++){
        if(a1[i]==a2[j]){
            a3[i]=a1[i];
            b3[i]=b1[i]+b2[j];
            count++;
            break;
        }
    }
    if(count==0){
        a3[i]=a1[i];
        b3[i]=b1[i];
    }
}
for(int j=0;j<y;j++){
        for(int k=0;k<x;k++){
            if(a2[j]==a3[k]){
                  c++;
            }
        }
        if(c==0){
            a3[x+z]=a2[j];
            b3[x+z]=b2[j];
            z++;
        }
}
printf("\naddition polynomial is:");
for(int i=0;i<x+z;i++){
    printf("%d",b3[i]);
    printf("x^%d+",a3[i]);
}
z=0,count=0;
for(int i=0;i<x;i++){
        count=0;
    for(int j=0;j<y;j++){
        if(a1[i]==a2[j]){
            a4[i]=a1[i];
            b4[i]=b1[i]-b2[j];
            count++;
            break;
        }
    }
    if(count==0){
        a4[i]=a1[i];
        b4[i]=b1[i];
    }
}
for(int j=0;j<y;j++){
        c=0;
        for(int k=0;k<x;k++){
            if(a2[j]==a4[k]){
                  c++;
            }
        }
        if(c==0){
            a4[x+z]=a2[j];
            b4[x+z]=-b2[j];
            z++;
        }
}
printf("\nsubtraction polynomial is:");
for(int i=0;i<x+z;i++){
    printf("%d",b4[i]);
    printf("x^%d+",a4[i]);
}
z=0,count=0;
for(int i=0;i<x;i++){
        z=0;
    for(int j=0;j<y;j++){
            z=0;
        for(int k=0;k<=count;k++){
            if(a5[k]==a1[i]+a2[j]){
                b5[k]+=b1[i]*b2[j];
                z++;
                break;
            }
        }
        if(z==0){
            a5[count]=a1[i]+a2[j];
            b5[count]=b1[i]*b2[j];
            count++;
        }
    }
}
printf("\nmultiplication polynomial is:");
for(int i=0;i<count;i++){
    printf("%d",b5[i]);
    printf("x^%d+",a5[i]);
}
}
