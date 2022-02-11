#include<stdio.h>
void main()
{
    int i,j,a[25],b[50],k=0,s=0,l=0,max,min;
    for(j=1;j<=5;j++){
        printf("\n enter the marks of student %d: ",j);
        for(i=l;i<l+5;i++){
            printf("\n subject %d:",i-l+1);
            scanf("%d",&a[i]);
        }
        l=5*j;
    }
    for(i=1;i<=5;i++){
        for(j=k;j<k+5;j++)
        {
            s=s+a[k];
        }
        b[i-1]=s;
        printf("\n enter the total marks of student %d:%d",i,s);
        k=i*5;
        s=0;
    }
    max=b[0];
    min=b[0];
    for(i=1;i<5;i++){
        if(b[i]>max)
            max=b[i];
        if(b[i]<min)
            min=b[i];
    }
    if(max==min)
        printf("\n all student got same marks");
    else
    {
    printf("\n highest marks=%d",max);
    printf("\n least marks=%d",min);
    }

}
