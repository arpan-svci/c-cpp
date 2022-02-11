#include<stdio.h>
void main()
{
 int count,i,j;
 for(i=1;i<=100;i++)
 {
     count=0;
     for(j=1;j<=i;j++)
     {
    if(i%j==0)
        count++;
     }
    if(count==2)
    printf("\t %d",i);


 }

}
