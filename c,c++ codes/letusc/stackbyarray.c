#include<stdio.h>
#include<conio.h>
#define n 10
int top=-1;
int stack[n];

void push(int x){
    if(top==(n-1))
        printf("\n overflow condition \n");
    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    if(top==-1)
        printf("\n stack underflow condition");
    else
    top--;
}

void peek(){
if(top==-1)
    printf("\n there is no element in stack");
else
    printf("%d",stack[top]);
}

void display()
{
    int i;
    printf("\n");
if(top==-1)
        printf("\n the stack is empty");
    else{
        for(i=top;i>=0;i--)
            printf("\t%d",stack[i]);
    }
    printf("\n");
}

void main(){
}
