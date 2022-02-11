#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int x,y;
void getdimensions(){
int a,b;
printf("\n enter no. of rows:");
scanf("%d",&a);
printf("\n enter no. of columns:");
scanf("%d",&b);
x=a;
y=b;
}
int** dynamicmemoryallocation(){
int **a;
a=(int*)malloc(x*sizeof(int*));
for(int i=0;i<x;i++){
    a[i]=(int)malloc(y*sizeof(int));
}
return a;
}
void getvalue(int**a){
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        printf("\n enter the element at (%d,%d):",i+1,j+1);
        scanf("%d",a[i]+j);
    }
}
}
void printvalue(int**a){
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        printf("\t%d",*(a[i]+j));
    }
    printf("\n");
}
}
void main(){
int **p;
getdimensions();
p=dynamicmemoryallocation();
getvalue(p);
printvalue(p);
}
