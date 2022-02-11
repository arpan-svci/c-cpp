#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int roll,score;
    char name[20];
    struct node *next;
};

    int insertatend(struct node*head){
    struct node *n,*temp;
    n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter roll no.:");
    scanf("%d",&n->roll);
    printf("enter name:");
    fflush(stdin);
    gets(n->name);
    printf("enter score:");
    scanf("%d",&n->score);
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=n;
    n->next=0;
    }

    int insertatbeginning(struct node *head){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter roll no.:");
    scanf("%d",&n->roll);
    printf("enter name:");
    fflush(stdin);
    gets(n->name);
    printf("enter score:");
    scanf("%d",&n->score);
    n->next=head;
    head=n;
    return head;
    }

    int insertatspecificposition(struct node*head,int k){
    struct node *n,*temp;
    int i,l=1;
    temp=head;
    n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter roll no.:");
    scanf("%d",&n->roll);
    printf("enter name:");
    fflush(stdin);
    gets(n->name);
    printf("enter score:");
    scanf("%d",&n->score);
    while(l<k){
        temp=temp->next;
        l++;
    }
    n->next=temp->next;
    temp->next=n;
    }

 int printlist(struct node *head){
     printf("\n");
     struct node *temp=head;
    while(temp!=0){
        printf("\t%d",temp->roll);
        printf("\t");
        fputs(temp->name,stdout);
        printf("\t%d",temp->score);
        printf("\n");
        temp=temp->next;
    }
    printf("\n");
   }


    struct node* creatlist(int a){
    struct node *head,*temp,*newnode;
    int b=1;
    head=0;
    while(b<=a){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter roll no.:");
    scanf("%d",&newnode->roll);
    printf("enter name:");
    fflush(stdin);
    gets(newnode->name);
    printf("enter score:");
    scanf("%d",&newnode->score);
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

   int delfrombeginnng(struct node *head){
    struct node *p=head;
    head=head->next;
    free(p);
    return head;
    //head=delfrombeginnng(head);
   }

    int delfromspecificposition(struct node *head,int j){
    struct node *temp=head;
    int k=1;
    while(k<(j-1)){
        temp=temp->next;
        k++;
    }
    struct node *p=temp->next;
    temp->next=p->next;
    free(p);
    }

    int delfromend(struct node *head){
    struct node *p,*q;
    struct node *temp=head;
    while(temp->next!=0){
        q=temp;
        temp=temp->next;
    }
    p=temp;
    q->next=0;
    free(p);
    }

void main(){
    struct node *head;

head=creatlist(2);
printlist(head);
head=insertatbeginning(head);
printlist(head);
insertatend(head);
printlist(head);
insertatspecificposition(head,2);
printlist(head);
head=delfrombeginnng(head);
printlist(head);
delfromend(head);
printlist(head);
delfromspecificposition(head,2);
printlist(head);
}




