#include<stdio.h>
void main()
{
    int n,i,j,k=0,l=0,m,a,b[1000],c[1000],d[1000],e[1000],max1,max2;
    scanf("%d",&n);
    if(n>10000)
        printf("not supported");
    else{
        for(i=0;i<n;i++){
            scanf("%d%d",&b[i],&c[i]);
        }
    }
    for(j=0;j<n;j++){
        if(b[j]>c[j]){
            d[k]=(b[j]-c[j]);
            k++;
        }
        else{
            e[l]=(c[j]-b[j]);
            l++;
        }
    }
    max1=d[0],max2=e[0];
    for(m=0;m<k;m++){
        if(d[m]>max1)
            max1=d[m];
    }
        for(a=0;a<l;a++){
        if(e[a]>max2)
            max2=e[a];
    }
    if(max1>max2)
        printf("1 %d",max1);
    else
        printf("2 %d",max2);
}
