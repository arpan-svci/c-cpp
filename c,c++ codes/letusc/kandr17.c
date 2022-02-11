#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MIN_LENTH 80
void main(){
    FILE *fp;
    char c,a,*l,d[1000];
    int b=0,i=0;
    fp=fopen("arpan","w");
    if(fp==NULL){
        printf("\n error");
        exit(1);
    }
    printf("\n input line and at last press EoF\n");
    while((c=getchar())!=EOF){
            putc(c,fp);
    }
    fclose(fp);
    fp=fopen("arpan","r");
    if(fp==NULL){
            printf("\n error");
            exit(1);
    }
    printf("\n lines greater then 80 characters are: \n\n");
    while((c=getc(fp))!=EOF){
        if(c!='\n'){
            d[b]=c;
            b++;
        }
        if(c=='\n'&&b>=MIN_LENTH){
            d[b]='\0';
            puts(d);
            printf("\n");
            b=0;
        }
        if(c=='\n')
            b=0;
    }
    fclose(fp);
}
