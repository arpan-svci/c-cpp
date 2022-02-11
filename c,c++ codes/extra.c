#include<stdio.h>
void main()
{
    int i,j,a[50][50],b[50][50],c[50][50],d[50][50],e[50][50],k;
    printf("enter the elements of the first 3*3 matrix...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of second 3*3 matrix...\n");
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix=\n");
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix=\n");
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }

        }
    }
    printf("multiplication matrix=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }



}
