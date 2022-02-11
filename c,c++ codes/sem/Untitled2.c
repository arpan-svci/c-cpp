#include<stdio.h>
main(){
    int a,b=10;
    a=(b>5)?b++:b--;
    printf("%d  %d\n",a,b);
}
