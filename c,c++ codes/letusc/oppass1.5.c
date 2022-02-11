#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
FILE *fp;
int x,*s;
char **p;
void getdata(){
printf("\n enter the no. of person you want to store:");
scanf("%d",&x);
s=(int)malloc(x*sizeof(int));
p=(char*)malloc(x*sizeof(char*));
for(int i=0;i<x;i++){
    char a[40];
    fflush(stdin);
    printf("\n enter the name of the person %d:",i+1);
    gets(a);
    strcpy(p+i,a);
    printf("\n enter the age of the person %d:",i+1);
    scanf("%d",s+i);
    printf("\n");
}
}
void shortdata(){
    for(int i=0;i<=(x-1);i++){
        for(int j=0;j<x-i;j++){
            if(s[j]>s[j+1]){
                int d;
                d=s[j];
                s[j]=s[j+1];
                s[j+1]=d;
                char u[40];
                strcpy(u,p+j);
                strcpy(p+j,p+j+1);
                strcpy(p+j+1,u);
            }
        }
    }
}
void showlist(){
for(int i=1;i<=x;i++){
    printf("\t%d\t",i);
    printf("\t%d\t\t",s[i]);
    puts(p+i);
    printf("\n");
}
}
void main(){
getdata();
shortdata();
showlist();
}
