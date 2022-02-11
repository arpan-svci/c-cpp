#include<stdio.h>
#include<conio.h>
#define N 5
int s1[N],s2[N],top1=-1,top2=-1,count=0;

void enqueue(int x){
    push1(x);
    count++;
}

void push1(int x){
if(top1==(N-1))
    printf("\n overflow condition \n");
else{
    top1++;
    s1[top1]=x;
}
}

void push2(int x){
if(top2==(N-1))
    printf("\n overflow condition \n");
else{
    top2++;
    s2[top2]=x;
}
}

void pop1(){
if(top1==-1)
        printf("\n underflow condition \n");
else{
    top1--;
}
}

void pop2(){
if(top2==-1)
        printf("\n underflow condition \n");
else{
    top2--;
}
}

void dequeue(){
    int i,j;
if(top1==-1)
    printf("\n underflow condition \n");
else{
for(i=count;i>0;i--){
    push2(s1[i]);
    pop1();
}
pop2();
count--;
for(j=count;j>0;j--){
    push1(s2[j]);
    pop2();
}
}
}

void display(){
    int i;
if(top1==-1)
    printf("\n there is nothing in the queue \n");
else{
    for(i=0;i<=top1;i++){
        printf("\t%d",s1[i]);
    }
}
printf("\n");
}
void main(){
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
dequeue();
display();
enqueue(8);
display();
enqueue(9);
display();
enqueue(10);


}
