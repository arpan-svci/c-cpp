#include<stdio.h>
#include<conio.h>
#define N 5
int queue[N],front=-1,rear=-1;

void enqueuefromfront(int x){
    if((front==(rear+1))||(front==0&&rear==(N-1))){
        printf("\n overflow condition \n");
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
        queue[front]=x;
    }
    else if(front==0){
        front=N-1;
        queue[front]=x;
    }
    else{
        front--;
        queue[front]=x;
    }
}

void enqueuefromrear(int x){
    if((front==(rear+1))||(front==0&&rear==(N-1))){
        printf("\n overflow condition \n");
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if(rear==N-1){
        rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}

void dequeuefromfront(){
if(front==-1&&rear==-1){
    printf("\n underflow condition \n");
}
else if(front==rear){
    front=rear=-1;
}
else if(front==N-1){
    front=0;
}
else{
    front++;
}
}

void dequeuefromear(){
if(front==-1&&rear==-1){
    printf("\n underflow condition \n");
}
else if(front==rear){
    front=rear=-1;
}
else if(rear==0){
    rear=N-1;
}
else{
    rear--;
}
}

void display(){
    printf("\n");
    int i;
    if(front==-1&&rear==-1){
        printf("\n there is nothing in the queue \n");
    }
    else{
        i=front;
    while(i!=rear){
            printf("\t%d",queue[i]);
            i=(i+1)%N;
        }
        printf("\t%d",queue[rear]);
    }
    printf("\n");
}

void main(){
enqueuefromfront(1);
enqueuefromrear(2);
enqueuefromfront(3);
display();
}
