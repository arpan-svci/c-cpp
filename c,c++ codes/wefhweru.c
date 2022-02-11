#include<stdio.h>

int main(){
    int a=10,b=1223145687;
    int *p,*q;
    p=&a;
    q=&b;
    printf("%d %d",p,q);
    return 0;
}
