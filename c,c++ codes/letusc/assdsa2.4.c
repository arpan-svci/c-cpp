#include<stdio.h>
#include<conio.h>
#define MAXSIZE 100
void createset(int*a,int*b){
    int x,k=0,l=1;
printf("\n no. of element want to insert in the set:");
scanf("%d",b);
for(int i=0;i<*b;i++){
        k=0;
        printf("element %d:",i+1);
        scanf("%d",&x);
        for(int j=0;j<i;j++){
            if(*(a+j)==x)
                k++;
        }
        if(k==0)
            *(a+i)=x;
        else{
            printf("\n duplicate element\n");
            i--;
        }
}
}
void addelement(int*a,int*b){
int x,y,k=0;
printf("\n how many element want to add:");
scanf("%d",&y);
for(int i=*b;i<*b+y;i++){
        k=0;
        printf("element %d:",i+1);
        scanf("%d",&x);
        for(int j=0;j<*b+k;j++){
            if(a[j]==x)
                k++;
        }
        if(k==0)
            a[i]=x;
        else{
            printf("\n duplicate element\n");
            i--;

        }
}
*b=*b+y;
}

void deleteelement(int*a,int*b){
    int x,p,k=0,l=0;
printf("\n enter the element want to delete:");
scanf("%d",&x);
for(int i=0;i<*b;i++){
    if(x==a[i]){
        p=i;
    }
}
for(int j=p;j<*b-1;j++){
    a[j]=a[j+1];
}
*b=*b-1;
}

void unionofset(int*a1,int*b1,int*a2,int*b2,int*uni,int*u){
    int k=0,l=0;
for(int i=0;i<*b1;i++){
    uni[i]=a1[i];
}
*u=*b1;
for(int j=0;j<*b2;j++){
        k=0;
    for(int i=0;i<*b1;i++){
        if(uni[i]==a2[j])
        k++;
    }
    if(k==0){
        uni[*b1+l]=a2[j];
        l++;
    }
}
*u=*u+l;
}
void intersection_of_set(int*a1,int*b1,int*a2,int*b2,int*inter,int*in){
    int k=0;
for(int i=0;i<*b1;i++){
    for(int j=0;j<*b2;j++){
        if(a1[i]==a2[j]){
            inter[k]=a1[i];
            k++;
        }
    }
}
*in=k;
}
void printelement(int*a,int*b){
    printf("\n");
for(int i=0;i<*b;i++){
    printf("\t%d",*(a+i));
}
printf("\n");
}
void main(){
int a1[MAXSIZE],a2[MAXSIZE],uni[MAXSIZE],inter[MAXSIZE],b1,b2,u,in;
createset(a1,&b1);
printelement(a1,&b1);
createset(a2,&b2);
printelement(a2,&b2);
unionofset(a1,&b1,a2,&b2,uni,&u);
printelement(uni,&u);
intersection_of_set(a1,&b1,a2,&b2,inter,&in);
printelement(inter,&in);
//addelement(a1,&b1);
//printelement(a1,&b1);
//deleteelement(a1,&b1);
//printelement(a1,&b1);
}
