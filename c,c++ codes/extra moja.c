#include<stdio.h>
void main()
{
    int n,i,a,s=0,t;
    for(n=1;n<10;n++){
        a=n;
        for(i=1;i<10;i++){
            while(n>0){
                t=n%10;
                n=n/10;
                s=s+t*t;
            }
            if(s==4){
                printf("\n %d  -  sad no ",a);
                break;
            }
            else{
                if(s==1){
                    printf("\n  %d  -  happy no ",a);
                    break;
                }
                else{
                n=s;
                s=0;
                }
            }
        }
    }
}
