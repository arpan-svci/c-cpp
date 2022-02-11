#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
struct node *left,*right;
int data;
};
struct node *root=0,*newnode,*temp;
void search(int x){
struct node *temp1;
if(x<temp->data){
temp1=temp;
temp=temp->left;
if(temp==0){
    temp1->left=newnode;
    return;
}
else{
    search(x);
}
}
else{
    temp1=temp;
    temp=temp->right;
    if(temp==0){
        temp1->right=newnode;
        return;
    }
    else{
        search(x);
    }
}
}

void insert(int x){
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->left=0;
newnode->right=0;
if(root==0){
    root=newnode;
}
else{
    temp=root;
    search(x);
}
}

void inorder(struct node *r){
if(r==0)
    return;
inorder(r->left);
printf("\t%d",r->data);
inorder(r->right);
}

void main(){
insert(5);
insert(10);
insert(6);
insert(9);
insert(8);
insert(7);
insert(1);
insert(3);
insert(2);
insert(4);
insert(12);
insert(19);
insert(20);
insert(13);
insert(15);
insert(14);
insert(16);
insert(18);
insert(17);
insert(11);
inorder(root);
}
