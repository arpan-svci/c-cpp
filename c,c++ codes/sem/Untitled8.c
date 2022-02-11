#include<stdio.h>
void test(void){
    static int j;
    j++;
    printf("%d\n",j);
}
main(){
    test();
    test();
}
