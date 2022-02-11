#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left,*right;
};
struct node* create(){
struct node *newnode;
int x;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n enter -1 for no data");
printf("\n enter data:");
scanf("%d",&x);
if(x==-1){
    return 0;
}
newnode->data=x;
printf("\n enter left child of %d",x);
newnode->left=create();
printf("\n enter right child of %d",x);
newnode->right=create();
return newnode;
}
void preorder(struct node *root){
if(root==0)
    return;
printf("\t%d",root->data);
preorder(root->left);
preorder(root->right);
}
void inorder(struct node *root){
if(root==0)
    return;
inorder(root->left);
printf("\t%d",root->data);
inorder(root->right);
}
void postorder(struct node *root){
if(root==0)
    return;
postorder(root->left);
postorder(root->right);
printf("\t%d",root->data);
}
void main(){
struct node *root;
root=0;
root=create();
preorder(root);
printf("\n");
inorder(root);
printf("\n");
postorder(root);
return 0;
}
