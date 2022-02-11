#include<stdio.h>
#include<stdlib.h>

struct element{
    int value,row,column;
};
int creatematrix(struct element **e,int*a,int*b,int*c){    ;
    int count=0;
    printf("\n enter the no. of row and column of the matrix:");
    scanf("%d %d",b,c);
    printf("\n enter the no. of nonzero element:");
    scanf("%d",a);
    if((*a)>(*b)*(*c)){
        printf("\n wrong input \n");
        return 0;
    }
    *e=(struct element*)malloc((*a)*(sizeof(struct element)));
    for(int i=0;i<*a;i++){
        count=0;
        printf("\n enter element no. %d:\n",i+1);
        printf("\n enter position of the element:\n");
        printf("\n enter row:");
        scanf("%d",&(*e)[i].row);
        if((*e)[i].row>*b){
            printf("\n wrong input\n");
            i--;
            count++;
        }
        if(count==0){
        printf("\n enter column:");
        scanf("%d",&(*e)[i].column);
            if((*e)[i].column>*c){
                printf("\n wrong input\n");
                i--;
                count++;
            }
        }
        if(count==0){
            for(int j=0;j<i;j++){
                if((*e)[i].row==(*e)[j].row&&(*e)[i].column==(*e)[j].column){
                    printf("\n duplicate\n");
                    count++;
                    i--;
                    break;
                }
            }
        }
        if(count==0){
            printf("\n enter the value:");
            scanf("%d",&(*e)[i].value);
        }
    }
}
void printmatrix(struct element*e,int *a,int*b,int*c){
    int count=0,s=0;
printf("\n MATRIX:\n");
for(int i=0;i<*b;i++){
    for(int j=0;j<*c;j++){
            count=0;
            for(int k=0;k<*a;k++){
                    if(e[k].row==i+1&&e[k].column==j+1){
                        printf("\t%d",e[k].value);
                        count++;
                        break;
                    }
            }
            if(count==0){
                printf("\t%d",s);
            }
    }
    printf("\n");
}
}
void printtranspose(struct element*e,int*a,int*b,int*c){
int s=0,count=0;
printf("\nTRANSPOSE MATRIX:\n");
for(int i=0;i<*c;i++){
    for(int j=0;j<*b;j++){
            count=0;
            for(int k=0;k<*a;k++){
                    if(e[k].column==i+1&&e[k].row==j+1){
                        printf("\t%d",e[k].value);
                        count++;
                        break;
                    }
            }
            if(count==0){
                printf("\t%d",s);
            }
    }
    printf("\n");
}
}


int addmatrix(struct element*e,int*a,int*b,int*c,struct element *p,int*x,int*y,int*z){
int s=0,count=0,sum[10][10];
if((*b)!=(*y)||(*c)!=(*z)){
    printf("\n matrix are not addable\n");
    return 0;
}
for(int i=0;i<*b;i++){
    for(int j=0;j<*c;j++){
        sum[i][j]=0;
    }
}
for(int k=0;k<*a;k++){
        int u,v;
        u=e[k].row-1;
        v=e[k].column-1;
    sum[u][v]=e[k].value;
}
for (int j=0;j<*x;j++){
    int u,v;
        u=p[j].row-1;
        v=p[j].column-1;
    sum[u][v]=sum[u][v]+p[j].value;
}
printf("\n ADDITON MATRIX:\n");
for(int i=0;i<*b;i++){
    for(int j=0;j<*c;j++){
        printf("\t%d",sum[i][j]);
    }
    printf("\n");
}
}


int subtractmatrix(struct element*e,int*a,int*b,int*c,struct element*p,int*x,int*y,int*z){
int s=0,count=0,subtract[*b][*c];
if((*b)!=(*y)||(*c)!=(*z)){
    printf("\n matrix are not subtractable\n");
    return 0;
}
for(int i=0;i<*b;i++){
    for(int j=0;j<*c;j++){
        subtract[i][j]=0;
    }
}
for(int k=0;k<*a;k++){
        int u,v;
        u=e[k].row-1;
        v=e[k].column-1;
    subtract[u][v]=e[k].value;
}
for (int j=0;j<*x;j++){
    int u,v;
        u=p[j].row-1;
        v=p[j].column-1;
    subtract[u][v]=subtract[u][v]-p[j].value;
}
printf("\nSUBTRACTION MATRIX:\n");
for(int i=0;i<*b;i++){
    for(int j=0;j<*c;j++){
        printf("\t%d",subtract[i][j]);
    }
    printf("\n");
}
}
int multiplicationmatrix(struct element*e,int*a,int*b,int*c,struct element*p,int*x,int*y,int*z){
    int mul[*b][*z];
if(*c!=*y){
    printf("\n metrics are not multiplicable \n ");
    return 0;
}
for(int i=0;i<*b;i++){
    for(int j=0;j<*z;j++){
        mul[i][j]=0;
    }
}
int u,v;
for(int i=0;i<*a;i++){
    for(int j=0;j<*x;j++){
        u=e[i].row-1;
        v=p[j].column-1;
        mul[u][v]=mul[u][v]+e[i].value*p[j].value;
    }
}
printf("\nMULTIPLICATION MATRIX:\n");
for(int i=0;i<*b;i++){
    for(int j=0;j<*z;j++){
        printf("\t%d",mul[i][j]);
    }
    printf("\n");
}
}
void main(){
    struct element* p,*q;
    int a,b,c,x,y,z;
creatematrix(&p,&a,&b,&c);
printmatrix(p,&a,&b,&c);
printtranspose(p,&a,&b,&c);
creatematrix(&q,&x,&y,&z);
printmatrix(q,&x,&y,&z);
addmatrix(p,&a,&b,&c,q,&x,&y,&z);
printf("\n");
subtractmatrix(p,&a,&b,&c,q,&x,&y,&z);
multiplicationmatrix(p,&a,&b,&c,q,&x,&y,&z);
}
