#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
    int insertatend(struct node*head){
    struct node *n,*temp;
    n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the value want to insert at the end....");
    scanf("%d",&n->data);
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=n;
    n->next=0;
    }

    int insartatbeginning(struct node *head){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the value want to insert at the beginning....");
    scanf("%d",&n->data);
    n->next=head;
    head=n;
    return head;
    }

    int insertatspecificposition(struct node*head,int k){
    struct node *n,*temp;
    int i,l;
    temp=head;
    n=(struct node*)malloc(sizeof(struct node));
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
    }

 int printlist(struct node *head){
     struct node *temp=head;
    while(temp!=0){
        printf("\t%d",temp->data);
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

   int delfrombeginnng(struct node *head){
    struct node *p=head;
    head=head->next;
    free(p);
    return head;
    head=delfrombeginnng(head);
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
    int i,j,k=1;
    struct node *temp,*head,*p,*q;
    printf("\n enter the no. of integer want to insert....");
    scanf("%d",&i);
    head=creatlist(i);
    printlist(head);
    printf("\n");
    //printf("\n enter the position after which you want to insert a element....");
    //scanf("%d",&j);
    //insertatspecificposition(head,j);
    //insertatend(head);
    //printlist(head);
    //head=insartatbeginning(head);
    //printlist(head);
    //head=delfrombeginnng(head);
    //printlist(head);
    //printf("\n enter the position from where you want to delete a node....");
    //scanf("%d",&j);
    //delfromspecificposition(head,j);
    //printlist(head);
    //printf("\n");
    //delfromend(head);
    //printlist(head);

}

