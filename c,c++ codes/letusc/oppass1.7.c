#include<stdio.h>
#include<conio.h>
struct student{
int roll;
char name[20];
int score[5];
};
void getdata(){
    int x,i;
    FILE *fp=fopen("student","w");
    printf("\n enter the no. of student:");
    scanf("%d",&x);
    int roll[x-1];

    for(i=0;i<x;i++){
            int a=0;
            struct student s;
            printf("\n enter details of student no. %d:",i+1);
            printf("enter roll:");
            scanf("%d",&s.roll);
            for(int j=0;j<i;j++){
                if(s.roll==roll[j]){
                a++;
                }
            }
        if(a!=0){
                printf("doublecate report :re enter");
                i--;
        }
        else{
            roll[i]=s.roll;
            printf("\n enter name:");
            fflush(stdin);
            gets(s.name);
            printf("enter scores:\n");
            for(int i=0;i<5;i++){
                printf("marks of subject no. %d:",i+1);
                scanf("%d",&s.score[i]);
            }
        fwrite(&s,sizeof(struct student),1,fp);
        }
    }
    fclose(fp);
}



void putdata(){
    FILE *fp=fopen("student","r");
struct student s;
while(fread(&s,sizeof(struct student),1,fp)!=0){
    fputs(s.name,stdout);
    printf("\t%d",s.roll);
    printf("\t%d",s.score[0]+s.score[1]+s.score[2]+s.score[3]+s.score[4]);
    printf("\n");
}
fclose(fp);
}



void addrecord(){
    struct student s;
    int roll,a=0;
    FILE *fp=fopen("student","r");
    printf("enter roll no.:");
    scanf("%d",&roll);
    while(fread(&s,sizeof(struct student),1,fp)!=0){
                if(s.roll==roll){
                    a++;
                }
          }
          fclose(fp);
          if(a!=0){
            printf("doublicate record\n");
          }
          else{
            FILE *fp=fopen("student","a");
            s.roll=roll;
            printf("enter name:");
            fflush(stdin);
            gets(s.name);
            printf("enter scores:\n");
            for(int i=0;i<5;i++){
                printf("score of subject %d:",i+1);
                scanf("%d",&s.score[i]);
            }
            fwrite(&s,sizeof(struct student),1,fp);
          }
          fclose(fp);

}

void search(){
int roll;
struct student s;
printf("enter the roll no. of the student whose record you want to see:");
scanf("%d",&roll);
FILE *fp=fopen("student","r");
while(fread(&s,sizeof(struct student),1,fp)!=0){
    if(s.roll==roll){
        fputs(s.name,stdout);
        printf("\t%d",s.roll);
        printf("\t%d",s.score[0]+s.score[1]+s.score[2]+s.score[3]+s.score[4]);
        return 0;
        fclose(fp);
    }
}
printf("record doesnot exist");
fclose(fp);
}
void main(){
getdata();
putdata();
addrecord();
putdata();
search();
}
