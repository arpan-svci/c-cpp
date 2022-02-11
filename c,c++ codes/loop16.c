#include<stdio.h>
void main()
{
    int i,j,k,count1=0,count2=0,count3=0;
    for(i=1;i<=10;i++){
     printf("\n enter %d th number....",i);
     scanf("%d",&j);
     if(j>0)
      count1++;
     else if(j=0)
      count2++;
     else
      count3++;
    }
    printf("%d\n",count1);
    printf("%d\n",count2);
    printf("%d\n",count3);
}
