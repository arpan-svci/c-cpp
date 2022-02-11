#include<stdio.h>
#include<conio.h>
void main(){
FILE *fp;
int i[1000],j=0,large=0,great=0,o,p,q,l;
char b,c;
for(int k=0;k<100;k++){
    i[k]=0;
}
fp=fopen("histogram","w");
while((c=getchar())!=EOF){
    putc(c,fp);
}
fclose(fp);
fp=fopen("histogram","r");
while((b=fgetc(fp))!=EOF){
    if(b!=' '&&b!='\n'){
        j++;
    }
    if(j>large){
        large=j;
    }
    if(b==' '||b=='\n'){
        i[j]++;
        j=0;
    }
}
printf("\n the horizontal histogram table is:\n");
for(int l=1;l<=large;l++){
        printf("%d:-%d:",l,l[i]);
    for(j=0;j<i[l];j++){
        printf("*");
    }
    printf("\n");
}
for(o=1;o<=large;o++){
    if(i[o]>great){
        great=i[o];
    }
}
char a[great+2][large+2];
for(l=0;l<=great;l++){
    for(j=0;j<=large;j++){
        a[l][j]=' ';
    }
}
for(p=1;p<=large;p++){
    for(q=0;q<i[p];q++){
        a[great-q][p]='*';
    }
}
printf("\n the vertical histogram table is:\n");
for(l=0;l<=great;l++){
    for(j=0;j<=large;j++){
        printf("\t%c",a[l][j]);
    }
    printf("\n");
}
for(l=0;l<large*10;l++){
    printf("_");
}
printf("\n");
printf("\t");
for(int m=1;m<=large;m++){
    printf("\t%d",i[m]);
}
printf("\t= no. of words contain same no. of letters");
printf("\n");
for(l=0;l<large*10;l++){
    printf("_");
}
printf("\n");
printf("\t");
for(l=1;l<=large;l++){
    printf("\t%d",l);
}
printf("\t= no. of letters");
}
