#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *headpointer=0,*tellpointer=0;

void creatlist(){
    struct node *newnode,*temp;
    int k,j=1;
    printf("\n how much data want to enter into the list....");
    scanf("%d",&k);
    while(j<=k){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n enter data....");
        scanf("%d",&newnode->data);
        if(headpointer==0){
            headpointer=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        j++;
    }
    newnode->next=headpointer;
    tellpointer=newnode;
}

void printlist(struct node*tell){
struct node *temp;
temp=tell->next;
printf("\n");
while(temp!=tell){
    printf("\t%d",temp->data);
    temp=temp->next;
}
printf("\t%d",temp->data);
printf("\n");
}
void insertatbeginning(){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n data want to insert at beginning....");
scanf("%d",&newnode->data);
newnode->next=headpointer;
headpointer=newnode;
tellpointer->next=newnode;
}

void insertatend(){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n data want to insert at end....");
scanf("%d",&newnode->data);
tellpointer->next=newnode;
newnode->next=headpointer;
tellpointer=newnode;
}

void insertatspecificpos(){
struct node *newnode,*temp,*p;
int i,j=1;
newnode=(struct node*)malloc(sizeof(struct node));
temp=headpointer;
printf("\n enter the position after which want to insert data");
scanf("%d",&i);
printf("\n enter the data want to insert....");
scanf ("%d",&newnode->data);
while(j<i){
    temp=temp->next;
    j++;
}
newnode->next=temp->next;
temp->next=newnode;
}

void deletefrombeginning(){
struct node *temp;
temp=headpointer;
headpointer=headpointer->next;
tellpointer->next=headpointer;
free(temp);
}

void deletefromend(){
struct node *temp,*p;
temp=headpointer;
while(temp->next!=tellpointer){
    temp=temp->next;
}
p=tellpointer;
tellpointer=temp;
tellpointer->next=headpointer;
free(p);
}

void deletefromspecificpos(){
struct node *temp,*p;
int i,j=1;
printf("\n enter the position from which want to delete a data....");
scanf("%d",&i);
temp=headpointer;
while(j<(i-1)){
    temp=temp->next;
    j++;
}
p=temp->next;
temp->next=p->next;
free(p);
}

void reverselist(){
    struct node *prevnode,*currentnode,*nextnode,*p;
    currentnode=headpointer;
    nextnode=currentnode->next;
    while(currentnode!=tellpointer){
        prevnode=currentnode;
        currentnode=nextnode;
        nextnode=nextnode->next;
        currentnode->next=prevnode;
    }
    headpointer->next=tellpointer;
    p=tellpointer;
    tellpointer=headpointer;
    headpointer=p;
}

void main(){
creatlist();
printlist(tellpointer);
reverselist();
printlist(tellpointer);
}
