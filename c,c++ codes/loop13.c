#include<stdio.h>
#include<math.h>
int octal(int x){
    int b[20],i,j=0,s=1,k,l=1;
    for(i=0;x>0;i++){
        b[i]=x%8;
        x=x/8;
        j++;
    }
    printf("\n");
    for(k=(j-1);k>=0;k--){
        s=s+(b[k]*pow(10,(j-l)));
        l++;
    }
    return s;
}

    void main(){
    int a[20],i,j=0,x,k;
    scanf("%d",&x);
    for(i=0;x>0;i++){
        a[i]=x%2;
        x=x/2;
        j++;
    }
    printf("\n");
    for(k=(j-1);k>=0;k--){
        printf("%d",a[k]);
    }
    printf("\n%d",octal(x));
}
