#include<stdio.h>
#include<conio.h>
#define n 50
int top=-1;
char stack[n];

void push(char x){
    if(top==(n-1))
        printf("\n overflow condition \n");
    else{
        top++;
        stack[top]=x;
    }
}

void display()
{
    int i;
if(top==-1)
        printf("\n the stack is empty");
    else{
        for(i=top;i>=0;i--)
            printf("%c",stack[i]);
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
    printf("%c",stack[top]);
}
void main(){
char str[50];
int i,j,k;
printf("\n enter the infix expression....");
gets(str);
printf("\n postfix expression is....");
for(i=0;str[i]!='\0';i++){
    if(str[i]=='+'||str[i]=='-'){
        if(top==-1){
            push(str[i]);
        }
        else{
            while(top!=-1){
                if(stack[top]=='*'||stack[top]=='/'||stack[top]=='^'){
                    peek();
                    pop();
                    if(top==-1){
                        push(str[i]);
                        break;
                    }
                }
                if(stack[top]=='+'||stack[top]=='-'){
                    peek();
                    pop();
                    push(str[i]);
                    break;
                }
                if(stack[top]=='('){
                    push(str[i]);
                    break;
                }
            }
        }
    }
     if(str[i]=='*'||str[i]=='/'){
        if(top==-1){
            push(str[i]);
        }
        else{
            while(top!=-1){
                if(stack[top]=='^'){
                    peek();
                    pop();
                    if(top==-1){
                        push(str[i]);
                        break;
                    }
                }
                if(stack[top]=='/'||stack[top]=='*'){
                    peek();
                    pop();
                    push(str[i]);
                    break;
                }
                if(stack[top]=='+'||stack[top]=='-'){
                    push(str[i]);
                    break;
                }
                if(stack[top]=='('){
                    push(str[i]);
                    break;
                }
            }
        }
    }
    if(str[i]=='^'){
        if(top==-1){
            push(str[i]);
        }
        else{
            while(top!=-1){
                if(stack[top]=='+'||stack[top]=='-'||stack[top]=='/'||stack[top]=='*'){
                    push(str[i]);
                    break;
                }
                if(stack[top]=='^'||stack[top]=='('){
                    push(str[i]);
                    break;
                }
                }
            }
        }
    if(str[i]=='('){
              push(str[i]);
        }
    if(str[i]==')'){
        while(stack[top]!='('){
              peek();
              pop();
            }
            pop();
        }
    if(str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'&&str[i]!='^'&&str[i]!='('&&str[i]!=')'){
        printf("%c",str[i]);
    }
    }
    display();
}


