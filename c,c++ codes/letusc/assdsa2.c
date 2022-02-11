#include<stdio.h>
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(n>1)
        return(fibo(n-2)+fibo(n-1));
    else
        printf("\n not possible");
}
int fb(int n){
int n1=0,n2=1,f=1;
if(n==0)
    return 0;
else if(n==1)
    return 1;
else if(n>1){
for(int i=2;i<=n;i++){
    f=n1+n2;
    n1=n2;
    n2=f;
}
return f;
}
else
    printf("\n not possible");

}
void main(){
    int m,n;
printf("\n enter the no. of term in Fibonacci series....");
scanf("%d",&n);
m=fibo(n-1);
char a[m+2][n+2];
printf("\n%d\t%d",fibo(n-1),fb(n-1));
printf("\n\n");
for(int i=0;i<(m+2);i++){
    for(int j=0;j<(n+2);j++){
        a[i][j]=' ';
    }
}
for(int i=1;i<=n;i++){
    int j=fibo(i-1);
    a[m-j][i]='*';
}
for(int i=0;i<m+2;i++){
    a[i][0]='|';
}
for(int j=0;j<n+2;j++){
    a[m+1][j]='-';
}
for(int i=0;i<=m;i++){
        printf("%d",m-i);
    for(int j=0;j<(n+2);j++){
        printf("\t%c",a[i][j]);
    }
    printf("\n");
}
printf("\t");
for(int i=0;i<=10*n;i++){
    putchar('_');
}
printf("\n\t");
for(int i=1;i<=n;i++){
    printf("\t%d",i);
}
printf("\n\t");
for(int i=0;i<n;i++){
    printf("\t%d",fb(i));
}
}

