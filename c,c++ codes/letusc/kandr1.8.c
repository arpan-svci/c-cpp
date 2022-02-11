#include<stdio.h>
#include<conio.h>
void main(){
FILE *fp;
char c;
int i=0,j=0,k=0;
fp=fopen("kandr1.8.txt","w");
printf("\n enter the file:\n");
while((c=getchar())!=EOF){
    putc(c,fp);
}
fclose(fp);
fp=fopen("kandr1.8.txt","r");
while((c=getc(fp))!=EOF){
    if(c==' ')
        i++;
    if(c=='\t')
        j++;
    if(c=='\n')
        k++;
}
printf("\n no. of backspace character:%d",i);
printf("\n no. of tab space character:%d",j);
printf("\n no. of newline character:%d",k);
}
