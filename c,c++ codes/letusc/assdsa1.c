#include<stdio.h>
#include<conio.h>
long int fact(int n){
    if(n>1)
        return (n*fact(n-1));
    else if(n==0||n==1)
        return 1;
    else
        printf("not possible");
}

long int fun(int n){
int f=1;
if(n>1){
    for(int i=1;i<=n;i++){
        f=f*i;
    }
}
else if(n==0||n==1){
    f=1;
}
else
    printf("not possible");
return f;
}
void main(){
int f,fa,n;
printf("\n enter the no. whose factorial you want to know....");
scanf("%d",&n);
f=fun(n);
fa=fact(n);
printf("\n%d\t%d",f,fa);
for(int i=0;i<=n;i++){
    printf("\n%d=\t%5d\t%20d",i,fun(i),fact(i));
}
}
