#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int front=-1;
int rear=-1;
int queue[size];

void enqueue(int i ){
if(front==-1 && rear==-1){
    rear=front=0;
    queue[rear]=i;
}
else if(rear==(size-1)){
    printf("\n overflow condition");
}
else{
    rear++;
    queue[rear]=i;
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
    front++;
}
}
void display(){
if(front==-1&&rear==-1){
    printf("\n there is nothing in the queue");
}
else{
        int i=front;
    while(i<=rear){
        printf("\t%d",queue[i]);
        i++;
    }
}
}
void peek(){
if(front==-1&&rear==-1){
    printf("\n the queue is empty");
}
else{
   printf("\t%d",queue[front]);
}
}
void main(){
}
