#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
int a[3][3];
int i=0,j=0,x,y,k,l,o,m,n;
int **p;
for(i=0;i<3;i++){         //pointer to an array
    for(j=0;j<3;j++){
        printf("\n enter (%d,%d)th no.:",i+1,j+1);
        scanf("%d",(*(a+i)+j));
    }
}
for(m=0;m<3;m++){
    for(n=0;n<3;n++){
        printf("\t%d",*(a[m]+n));
    }
    printf("\n");
}
printf("\n press enter for part b\n"); //array of pointers
getch();
printf("\n enter no. of rows of the 2d array:");
scanf("%d",&x);
printf("\n enter no. of column of the 2d array:");
scanf("%d",&y);
p=(int**)malloc(x*(sizeof(int*)));
for(o=0;o<x;o++){
    p[o]=(int*)malloc(y*sizeof(int));
}
for(k=0;k<x;k++){
    for(l=0;l<y;l++){
        printf("\n enter the value at position (%d,%d):",k+1,l+1);
        scanf("%d",p[k]+l);
    }
}
for(k=0;k<x;k++){
    for(l=0;l<y;l++){
        printf("\t%d",*(p[k]+l));
    }
    printf("\n");
}
return 0;
}
