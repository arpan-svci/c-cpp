#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *top=0;
void push(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    if(top==0){
        top=newnode;
        newnode->link=0;
    }
    else{
        newnode->link=top;
        top=newnode;
    }
}
void pop(){
    struct node *temp;
    if(top==0)
        printf("\n stack underflow \n");
    else{
        temp=top;
        top=top->link;
        free(temp);
    }
}
void peek(){
    if(top==0){
        printf(" stack is empty ");
    }
    else{
        printf("%d",top->data);
    }
    printf("\n");
}

void display(){
    struct node *temp;
    if(top==0){
        printf("\n stack is empty \n");
    }
    else{
        temp=top;
        while(temp!=0){
            printf("\t%d",temp->data);
            temp=temp->link;
        }
    }
    printf("\n");
}

void main(){
}
