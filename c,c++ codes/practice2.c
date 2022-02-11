#include<stdio.h>
void main()
{
    int i,j,k,n,a[2000],s=0,max;
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    printf("\n enter the elements of the array");
    for(i=0;i<n;i++){
        printf("\nelement no%d=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(a[j]>a[j-1]){
               k=a[j];
               a[j]=a[j-1];
               a[j-1]=k;

            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
