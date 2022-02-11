#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node *head,*newnode,*p;
    int i,j=0;
    head=0;
    printf("no. of integer want to insert....");
    scanf("%d",&i);
    while(j<i){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data....");
        scanf("%d",&newnode->data);
            if(head==0){
                head=newnode;
                p=newnode;
            }
            else{
                p->next=newnode;
                p=newnode;
            }
            j++;
    }
    p=head;
    newnode->next=0;
    while(p!=0){
      printf("\n%d",p->data);
      p=p->next;
    }
    getch();
}
