#include<stdio.h>
void main()
{
 int n,i,a,s=0,t;
    printf("\n enter the no...");
    scanf("\n %d",&n);
   for(i=1;i<100;i++){
    while(n>0){
        t=n%10;
        n=n/10;
        s=s+t*t;
    }
    if(s==1){
        printf("\n the no is happy no ");
    }
    else{
        printf("%d\n",s);
        n=s;
        s=0;
    }

   }
}
