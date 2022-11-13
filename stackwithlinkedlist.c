#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * top = NULL;

void push(int data){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    if(top == NULL){
        newnode->next = NULL;
    }
    
    else{
        newnode->next = top;
    }
    
    top = newnode;
    printf("New node pushed successfully\n");
}

int pop(){
    if(top == NULL){
        printf("Stack Underflow");
    }
    else{
        struct node * temp;
        temp = top;
        top = temp->next;
        return temp->data;
        temp->next = NULL;
        free(temp);
    }
}

void display(){
    if(top==NULL){
        printf("Stack is empty");
    }
    
    else{
        struct node * temp;
        temp = top;
        while(temp->next != NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
        printf("%d\n",temp->data);
    }
}
int main(){
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
    printf("%d\n", x);
    display();
}
