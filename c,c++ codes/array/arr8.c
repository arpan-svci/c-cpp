#include<stdio.h>
void main()
{
int i,j,a[100][100],b[100][100],m,n;
printf("enter the no. of rows of matrix....");
scanf("%d",&n); 
printf("enter the no. of columns of matrix....");
scanf("%d",&m);
printf("enter the elements of the matrix...\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("(%d,%d) th element=",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("matrix=\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[j][i]=a[i][j];
}
}
printf("transpose=\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}
