#include<stdio.h>
void main()
{
    int i,j,k,l,m,n,a[50][50],x[50];
    printf("\n enter the number of variable...");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("enter a(%d,%d) ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    for(i=1;i<=n;i++)
    {
       printf("\n enter b(%d)=",i);
       scanf("%d",&a[i][n+1]);
    }
    //check the matrix
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");

    }
    for(i=1;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=i;k<n+1;k++)
            {
                a[j][k]=a[j][k]-((a[j][i]/a[i][i])*a[i][k]);
            }
        }
    }
       for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}
