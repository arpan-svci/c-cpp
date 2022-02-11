#include<stdio.h>
void main()
{
int i,j,k,a[50][50],b[50][50],c[50][50],d[50][50],e[50][50],n;
printf("enter the elements of first matrix..\n");
for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("(%d,%d) element =",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of senond matrix...\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("(%d,%d) element=",i+1,i+1);
scanf("%d",&b[i][j]);
}
}
printf("first matrix=\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("second matrix=\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
d[i][j]=a[i][j]+b[i][j];
e[i][j]=a[i][j]-b[i][j];
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
printf("\n");
}
printf("for addition =1,for substruction =2,for multiplication =3 \n enter your choice....");

scanf("%d",&n);
switch(n)
{
case 1:
{
printf("addition matrix=\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d",d[i][j]);
printf("\n");
}
};
break;
case 2:
{
printf("substruction matrix=\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",e[i][j]);
}
printf("\n");
}
};
break;
case 3:
{
printf("product matrix=\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
};
break;
default:
{
printf("wrong");
}
}
}
