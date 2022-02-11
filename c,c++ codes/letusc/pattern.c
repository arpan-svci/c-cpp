
#include<stdio.h>
void main()
{
    int i,j,k,l,m,n,a[101][101];
    scanf("%d",&l);
    printf("\n");
    for(k=1;k<=l;k++)
    {
        for(i=k;i<=(2*l-k);i++)
        {
            for(j=k;j<=(2*l-k);j++)
                a[i][j]=l+1-k;
        }
    }
    for(m=1;m<=(2*l-1);m++)
    {
        for(n=1;n<=(2*l-1);n++)
            printf("%3d",a[m][n]);
     printf("\n");
    }

}
