#include<stdio.h>
void main(){
    int i,j,n,count=0,k=1,a[100],b[100];
    printf("\n enter the number of elements want to enter in array:\t");
    scanf("%d",&n);
    printf("enter the element in the array\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b[0]=a[0];
    for(i=1;i<n;i++){
            for(j=0;j<k;j++){
                     if(a[i]==b[j])
                     count++;
            }
            if(count==0){
                    b[k]=a[i];
                    k++;
            }
            count=0;
    }
    printf("\n");
    for(i=0;i<k;i++){
            printf("%d\t",b[i]);

    }
    printf("\n no. of duplicate elements are %d",n-k);

}
