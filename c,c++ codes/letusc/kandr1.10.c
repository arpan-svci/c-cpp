#include<stdio.h>
#include<conio.h>
void main(){
FILE *fp,*f;
char c;
fp=fopen("kandr1.10","w");
while((c=getchar())!=EOF){
    putc(c,fp);
}
fclose(fp);
fp=fopen("kandr1.10","r");
f=fopen("kandr1.10output","w");
while((c=getc(fp))!=EOF){
    if(c=='\t'){
        putc('//',f);
        putc('t',f);
    }
    else if(c==' '){
        putc('//',f);
        putc('b',f);
    }
    else if(c=='//'){
        putc('//',f);
        putc('//',f);
    }
    else{
        putc(c,f);
    }
}
fclose(f);
fclose(fp);
f=fopen("kandr1.10output","r");
while((c=getc(f))!=EOF){
    printf("%c",c);
}
getch();
}
