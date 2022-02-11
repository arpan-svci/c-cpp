#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class NODE{
public:
    int data;
        NODE *next;
        NODE(){
            next=0;
        }
        NODE* innitnode(){
            NODE* p=new NODE;
            if(p==0){
                cout<<"malloc fails";
            }
            else
                return p;
        }
        void takedata(int x){
            data=x;
        }
};
class LIST{
 NODE *head;
 public:
 LIST(){
 head=0;
 }
 int deletefrombeginning(){
 NODE *temp;
 temp=head;
 head=head->next;
 delete temp;
 }
    int deletefromend(){
        NODE *temp;
        temp=head;
        while(temp->next->next!=0)
            temp=temp->next;
            delete temp->next;
            temp->next=NULL;

    }
    int addnodeatspecificpos(int x,int p){
            if(p==1){
                insertatbeginning(x);
                return 0;
            }
            NODE *newnode,*temp;
            newnode=newnode->innitnode();
            if(newnode==0){
                cout<<"\n memory allocation fails";
                return 0;
            }
            newnode->takedata(x);
            temp=head;
            for(int i=2;i<p;i++){
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;

    }
    int addnode(int x){
        NODE *newnode,*temp,a;
        newnode=a.innitnode();
        if(newnode==0){
            cout<<"\n memory allocation error\n";
            return 0;
        }
        newnode->takedata(x);
        if(head==0){
            head=newnode;
        }
        else{
                temp=head;
            while(temp->next!=0){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    int deletefromspecificposition(int p){
        if(p=1){
            deletefrombeginning();
            return 0;
        }
        NODE *temp,*q;
        temp=head;
        for(int i=2;i<p;i++){
            temp=temp->next;
        }
        q=temp->next;
        temp->next=q->next;
        delete q;
    }
    public:
    int insertatbeginning(int x){
        NODE *newnode,*temp;
        newnode=newnode->innitnode();
        if(newnode==0){
            cout<<"\n memory allocation error\n";
            return 0;
        }
        newnode->takedata(x);
        temp=head;
        head=newnode;
        head->next=temp;
    }

    int printlist(){
        NODE *temp;
        temp=head;
        if(head==0){
            cout<<"\nnothing can be found into the list\n";
            return 0;
        }
        cout<<endl<<"list:"<<endl;
        while(temp!=0){
            cout<<"\t"<<temp->data;
            temp=temp->next;
        }
    }
};
int main(){
LIST a;
a.addnode(4);
a.addnode(5);
a.addnode(6);
a.addnode(7);
a.insertatbeginning(1);
a.insertatbeginning(2);
a.printlist();
a.addnodeatspecificpos(8,1);
a.printlist();
a.deletefrombeginning();
a.printlist();
a.deletefromend();
a.printlist();
a.deletefromspecificposition(3);
a.printlist();
a.deletefromspecificposition(1);
a.printlist();
}
