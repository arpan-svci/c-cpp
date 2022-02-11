#include<stdio.h>
#include<conio.h>
#define MAXLEN 100
int input_string(char*c){
printf("\n enter the string:");
gets(c);
fflush(stdin);
}
int find_len(char*c){
int count=0;
for(int i=0;c[i]!='\0';i++){
    count++;
}
return count;
}
void concatenate(char*c1,int *size1,char*c2,int *size2,char*result,int *size3){
for(int i=0;i<*size1;i++){
    result[i]=c1[i];
}
for(int j=0;j<*size2;j++){
    result[*size1+j]=c2[j];
}
*size3=*size1+*size2;
}
void str_cpy(char *c1,int *size1,char *c2,int *size2){
for(int i=0;i<=*size1;i++){
    c2[i]=c1[i];
}
*size2=*size1;
}
void main(){
char c1[MAXLEN],c2[MAXLEN],c3[MAXLEN];
int size1,size2,size3;
input_string(c1);
size1=find_len(c1);
//input_string(c2);
//size2=find_len(c2);
//concatenate(c1,&size1,c2,&size2,c3,&size3);
//puts(c3);
//printf("\n%d",size3);
str_cpy(c1,&size1,c2,&size2);
puts(c2);
printf("\n%d",find_len(c2));
}
