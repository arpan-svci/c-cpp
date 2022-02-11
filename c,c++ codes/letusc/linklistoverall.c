#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
  int reverselist(struct node *head)
  {
  struct node *prevnode,*nextnode,*currentnode;
  currentnode=head;
  prevnode=0;
  nextnode=head;
  while(nextnode!=0)
  {
      nextnode=nextnode->next;
      currentnode->next=prevnode;
      prevnode=currentnode;
      currentnode=nextnode;
  }
  head=prevnode;
  return head;
  }

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

    int insertatbeginning(struct node *head){
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
    int i,l=1;
    temp=head;
    n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the element want to insert....");
    scanf("%d",&n->data);
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
        printf("\t%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
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
    int i,j,l,m,k=1,a=1;
    struct node *temp,*head,*p,*q;
    printf("\n enter the no. of integer want to insert....");
    scanf("%d",&i);
    head=creatlist(i);
    printlist(head);
    printf("\n");
    while(k==1){
    printf("\n enter\n1-delete from beginning,\n2-delete from end,\n3-delete from some specific position,\n4-insert at beginning,\n5-insert at end,\n6-insert after some specific position,\n7-reverse the link list\n");
    scanf("%d",&j);
    switch(j){
    case 1:{
            head=delfrombeginnng(head);
            printlist(head);
            printf("\n");
        }
        break;
    case 2:{
            delfromend(head);
            printlist(head);
            printf("\n");
        }
        break;
    case 3:{
            printf("\n enter the position from where you want to delete....");
            scanf("%d",&l);
            delfromspecificposition(head,l);
            printlist(head);
            printf("\n");
        }
        break;
    case 4:{
            head=insertatbeginning(head);
            printlist(head);
            printf("\n");
        }
        break;
    case 5:{
            insertatend(head);
            printlist(head);
            printf("\n");
        }
        break;
    case 6:{
            printf("\n enter the position after which you want to insert a element....");
            scanf("%d",&m);
            insertatspecificposition(head,m);
            printlist(head);
            printf("\n");
        }
        break;
    case 7:{
         head=reverselist(head);
         printlist(head);
        }
        break;
    default:
        printf("\n wrong input");

    }
    printf("\n if you want to continue then press 1 else press any key except 1....");
    scanf("%d",&a);
    k=a;
  }
  if(k!=1){
      printf("\n end");
  }
}



