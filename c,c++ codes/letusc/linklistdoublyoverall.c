#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
struct node *prev;
int data;
struct node *next;
};
struct node *headpointer,*tellpointer,*newnode;

 int printlist(struct node *head){
     printf("\n");
     struct node *temp=head;
    while(temp!=0){
        printf("\t%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
   }

int creatdoublelist(i){
struct node *head,*temp;
int j,k=0;
head=0;
while(k<i){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=0;
    newnode->next=0;
    printf("\n enter data....");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0){
        head=newnode;
        temp=newnode;
    }
    else{
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode;
    }
    k++;
}
tellpointer=temp;
headpointer=head;
}

void insertatbeginning(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n enter data....");
scanf("%d",&newnode->data);
headpointer->prev=newnode;
newnode->next=headpointer;
headpointer=newnode;
}
void insertatend(){
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\n enter data....");
  scanf("%d",&newnode->data);
  newnode->next=0;
  newnode->prev=0;
  tellpointer->next=newnode;
  newnode->prev=tellpointer;
  tellpointer=newnode;
}
void insertafterspecificposition()
{
    struct node *temp,*p;
    int i,j=1;
    temp=headpointer;
    printf("\n enter the position after which want to enter data....");
    scanf("%d",&i);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n what data want to insert....");
    scanf("%d",&newnode->data);
    while(j<i){
        temp=temp->next;
        j++;
    }
    p=temp->next;
    newnode->next=temp->next;
    p->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}
void reverslist(){
    struct node*newnode,*temp;
    temp=headpointer;
while(temp!=0){
    newnode=temp->next;
    temp->next=temp->prev;
    temp->prev=newnode;
    temp=newnode;
}
newnode=headpointer;
headpointer=tellpointer;
tellpointer=newnode;
}

void delfrombeginning(){
struct node *temp;
temp=headpointer;
headpointer=temp->next;
free(temp);
}

void delfromend(){
struct node *temp;
temp=tellpointer;
tellpointer=temp->prev;
free(temp);
tellpointer->next=0;
}

void delfromspecificpos(){
struct node *temp;
int a,k=1;
printf("\n enter the position from where you want to delete....");
scanf ("%d",&a);
temp=headpointer;
while(k<a){
    temp=temp->next;
    k++;
}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
}
void main(){

int i,j,k;
printf("\n how much data you want to insert....");
scanf("%d",&i);
creatdoublelist(i);
printlist(headpointer);
}
