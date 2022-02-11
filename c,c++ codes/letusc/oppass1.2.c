#include<stdio.h>
#include<stdlib.h>
void main(){
int *p,n;
printf("\n enter the size of array:");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
printf("\n enter the elements of the array:\n");
for(int i=0;i<n;i++){
    printf("enter element no %d:",i+1);
    scanf("%d",p+i);
}
for(int i=0;i<n;i++){
    printf("\n %d no. element is:",i+1);
    printf("%d",*(p+i));
}
}
