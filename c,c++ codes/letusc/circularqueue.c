#include<stdio.h>
#include<conio.h>
#define N 5
int front=-1,rear=-1,queue[N];

void enqueue(int x){
    if(front==-1&&rear==-1){
        front++;
        rear++;
        queue[rear]=x;
    }
    else if((rear+1)%N==front){
        printf("\n overflow condition ");
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1&&rear==-1){
        printf("\n underflow condition");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%N;
    }
}
void display(){
    if(front==-1&&rear==-1){
        printf("\n there is nothing in queue");
    }
    else{
        int i=front;
        while(i!=rear){
            printf("\t%d",queue[i]);
            i=(i+1)%N;
        }
        printf("\t%d",queue[rear]);
    }
}
void main(){
enqueue(3);
enqueue(4);
enqueue(5);
enqueue(6);
enqueue(7);
enqueue(8);
display();
dequeue();
dequeue();
dequeue();
printf("\n");
display();
enqueue(9);
printf("\n");
display();
enqueue(8);
enqueue(9);
enqueue(11);
printf("\n");
display();
}
