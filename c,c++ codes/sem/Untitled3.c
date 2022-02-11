#include<stdio.h>
main(){
    int i;
    int j=0;
    for(i=0;i<50;i++){
        if(i%7==0)
            j++;
    }
    printf("%d\n",j);
}
