#include<stdio.h>
void main()
{
    int i,j,k,m,n,p;
    printf("\n enter the no. of rows of first matrix... ");
    scanf("%d",&m);
    printf("\n enter the no. of columns of first matrix...");
    scanf("%d",&n);
    printf("\n no of rows of second matrix is %d \n",n);
    printf("\n enter the no of columns of second matrix...");
    scanf("%d",&p);
    printf("\n");
    int a[m][n],b[n][p],c[m][p];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the (%d,%d) th element of first matrix=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("enter the (%d,%d) th element of second matrix=",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("first matrix=\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix=\n");
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("\t%d",b[i][j]);

        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("multiplication matrix=\n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
