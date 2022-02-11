#include<stdio.h>
void main()
{
    int i,j,k,l,m,n;
    float a[50][50],sum;
    printf("\n enter the no of equation:");
    scanf("%d",&n);
    float x[n];
    for(i=1;i<=n;i++){
        x[i]=0;
    }
    printf("\n enter augmented matrix:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=(n+1);j++){
            printf("a[%d][%d]=",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1;i<100;i++){
        for(j=1;j<=n;j++){
            sum=0;
            for(k=1;k<=n;k++){
                if(j!=i)
                sum=sum+a[j][k]*x[k];
            }
            x[j]=(a[j][n+1]-sum)/a[j][j];
            printf("%f\t",x[j]);
        }
    }
    for(i=1;i<=n;i++){
        printf("\t%f\t",x[i]);
    }

}
