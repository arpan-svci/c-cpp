#include<stdio.h>
#include<conio.h>
#define MAXLEN 100
int getlist(int *list,int*size){
    int a;
printf("\n how many elements want to enter:");
scanf("%d",&a);
for(int i=0;i<a;i++){
    printf("\n enter element no %d in the list:",i+1);
    scanf("%d",&list[i]);
}
*size=a;
}

int findlen(int*list,int*size){
//printf("\n size of list is %d",size);
return *size;
}

int pos(int *list,int x){
return list[x-1];
}
int modify(int *list,int x){
printf("\n enter the new value want to enter at %d th position:",x);
scanf("%d",&list[x-1]);
}
int insertelement(int *list,int *size,int x){
for(int i=size-1;i>=x-1;i--){
    list[i+1]=list[i];
}
printf("\n enter the value want to insert at position %d:",x);
scanf("%d",&list[x-1]);
size=size+1;
}
int deleteelement(int *list,int *size,int x){
for(int i=x-1;i<*size-1;i++){
    list[i]=list[i+1];
}
*size=*size-1;
}
int search(int *list,int *size,int x){
    int a=0;
for(int i=0;i<*size;i++){
    if(list[i]==x){
        return 1;
        a++;
        break;
    }
}
if(a==0)
return 0;
}
void printlistforward(int *list,int *size){
printf("\nLIST:\n");
for(int i=0;i<*size;i++){
    printf("\t%d",list[i]);
}
}
void printlistreverse(int *list,int *size){
printf("\nLIST\n");
for(int i=*size-1;i>=0;i--){
    printf("\t%d",list[i]);
}
}
void main(){
    int a1[MAXLEN],size,k,l,m;
getlist(a1,&size);
printlistforward(a1,&size);
printlistreverse(a1,&size);
k=search(a1,&size,5);
if(k==1)
    printf("\n element present in the list\n");
else
    printf("\n element does not present in the list\n");
modify(a1,3);
printlistforward(a1,&size);
l=findlen(a1,&size);
printf("\n size of list is %d\n",l);
m=pos(a1,5);
printf("\n element in position 5 is:%d\n",m);
}
