#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define insert at beginning
#define insert at end
#define insert after some position
struct node{
int data;
struct node *next;
};
void main()
{
    struct node *newnode,*temp,*head,*p,*n;
    int i,j=0,k,l=1,m;
    printf("enter the no. of elements want to insert....");
    scanf("%d",&i);
    head=0;
    while(j<i){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data....");
        scanf("%d",&newnode->data);
        if(head==0){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        j++;
    }
    newnode->next=0;
    temp=head;
    while(temp!=0){
        printf("\n%d",temp->data);
        temp=temp->next;
    }
    /*n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the value want to insert at the beginning....");
    scanf("%d",&n->data);
    n->next=head;
    head=n;
    temp=head;*/


    /*n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the value want to insert at the end....");
    scanf("%d",&n->data);
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=0;
    temp=head;*/

    n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the no. of position after which you want to insert a number....");
    scanf("%d",&k);
    printf("\n enter the element want to insert....");
    scanf("%d",&n->data);
    if(k<i){
    while(l<k){
        temp=temp->next;
        l++;
    }
    n->next=temp->next;
    temp->next=n;
    }
    else{
        printf("\n error");
    }
        temp=head;
        while(temp!=0){
        printf("\n%d",temp->data);
        temp=temp->next;
    }


}
