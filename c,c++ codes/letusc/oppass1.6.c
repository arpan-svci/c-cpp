#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct person{
char name[20];
int age;
};
struct person *p;
int x;
void getdata(){
fflush(stdin);
printf("\n no. of person:");
scanf("%d",&x);
printf("\n");
p=(struct person*)malloc(x*sizeof(struct person));
printf("\n enter the details:\n");
for(int i=0;i<x;i++){
    fflush(stdin);
    printf("\n enter the name of %d no. person:",i+1);
    gets(p[i].name);
    printf(" enter the age:");
    scanf("%d",&p[i].age);
}
}
void display(){
 for(int i=0;i<=(x-1);i++){
        for(int j=0;j<x-i;j++){
            if(p[j].age>p[j+1].age){
                struct person a;
                a=p[j];
                p[j]=p[j+1];
                p[j+1]=a;
            }
        }
    }
    for(int i=1;i<=x;i++){
    printf("\t%d\t",i);
    printf("\t%d\t\t",p[i].age);
    puts(p[i].name);
    printf("\n");
}
}
void main(){
getdata();
display();
return 0;
}
