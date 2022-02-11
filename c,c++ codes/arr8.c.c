#include<stdio.h>
void main()
{
    int a[50][50],b[50][50],i,j,m,n;
    printf("no of rows of the matrix...");
    scanf("%d",&m);
    printf("no of columns of the matrix...");
    scanf("%d",&n);
    printf("enter the elements of the matrix...");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
       for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("matrix=\n");
       for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose=\n");
       for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
}
