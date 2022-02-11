#include<stdio.h>
#include<conio.h>
void main(){
FILE *fp;
char c;
fp=fopen("fileext.c","r");
while((c=getc(fp))!=EOF){
    printf("%c",c);
}
}
