#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};


 int printlist(struct node *temp){
    while(temp!=0){
        printf("\n%d",temp->data);
        temp=temp->next;
    }
   }


 int creatlist(int a){
    struct node *head,*temp,*newnode;
    int b=1;
    head=0;
    while(b<=a){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the data....");
    scanf("%d",&newnode->data);
    if(head==0){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=temp->next;
    }
    b++;
    temp->next=0;
    }
    temp=head;
    return head;
    }


void main(){
    int i,j;
    struct node *temp,*head;
    printf("\n enter the no. of integer want to insert....");
    scanf("%d",&i);
    temp=creatlist(i);
    printlist(temp);

}
