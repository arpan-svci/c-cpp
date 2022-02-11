#include<stdio.h>
void main()
{
int c,i,j,a[100][100],n;
printf("enter no. of rows and columns of squear matrix....");
scanf("%d",&n);
printf("enter the elements of the matrix....");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("enter (%d,%d) th element=\n",i+1,i+1);
scanf("%d",&a[i][j]);
}
}
printf("matrix=\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=1;i<(n-1);i++)
{
for(j=0;j<(n-1);j++)
{
c=a[i][j];
a[i][j]=a[j][i];
a[j][i]=c;
}
}
printf("transpose=\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}


