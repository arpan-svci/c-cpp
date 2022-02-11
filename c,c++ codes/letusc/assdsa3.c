#include<stdio.h>
void main(){
int a,c,n,l=1,o=1;
printf("\n no. of elements you want to insert....");
scanf("%d",&n);
int b[n],k;
for(int i=0;i<n;i++){
        printf("\n enter element no. %d....",i);
    scanf("%d",&b[i]);
}
//unary search method
k=0;
printf("\n the no. to find...");
scanf("%d",&a);
printf("\n your no. is present in the position....");
for(int i=0;i<n;i++){
    if(b[i]==a){
      printf("\t%d",i);
      k++;
    }
}
 if(k==0){
        printf("\n not find");
    }
//binary search method
for(int i=n;i>0;i--){
    for(int j=0;j<(i-1);j++){
        if(b[j]>b[j+1]){
            k=b[j];
            b[j]=b[j+1];
            b[j+1]=k;
        }
    }
}
printf("\n enter the no. whose position you want to know....");
scanf("%d",&c);
printf("\n the no. is present at the position :\n");
if(c>=(n/2)){
        int k=0;
    for(int i=n/2;i<n;i++){
        if(b[i]==c){
            printf("\t %d",i);
            k++;
        }
    }
    if(k==0)
        printf("\n not find");
}
else{
        int k=0;
    for(int i=0;i<n/2;i++){
        if(b[i]==c){
            printf("\t%d",i);
            k++;
        }
    }
    if(k==0){
        printf("\n not find");
    }
}
}
