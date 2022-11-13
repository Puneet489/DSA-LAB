#include <stdio.h>
#include <stdlib.h>

int stack[100], top = -1, i;

void push(int data){
    if(top == 100){
        printf("Stack overflow\n");
    }
    
    else{
        top = top +1;
        stack[top] = data;
        printf("Data pushed successfully\n");
    }
}

int pop(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    
    else{
        return stack[top];
        top = top - 1;
    }
}

void display(){
    if(top == -1){
        printf("The stack is empty");
    }
    
    else{
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    push(-1);
    push(0);
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    int x = pop();
    printf("%d", x);
    display();
}
