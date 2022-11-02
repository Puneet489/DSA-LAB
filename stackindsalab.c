#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node * top = NULL;

void push(int data){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    
    newnode->data = data;
    if(top == NULL){
        newnode->next = NULL;
    }
    
    else {
        newnode->next = top;
    }
    
    top = newnode;
    
    printf("New node was created\n");
}

int pop(){
    if(top == NULL){
        printf("The stack is empty");
    }
    
    else{
        struct node * temp;
        temp = top;
        int temp_data = temp->data;
        top = top->next;
        free(temp);
        return temp_data;
    }
    
}

void display(){
    if(top == NULL){
        printf("The stack is empty");
    }
    
    else{
        printf("The stack is\n");
        struct node * temp;
        temp = top;
        while(temp->next != NULL){
            printf("%d \n",temp->data);
            temp = temp->next;
        }
        
        printf("%d", temp->data);
    }
}

int main(){
    push(5);
    push(10);
    push(15);
    push(20);
    push(25);
    display();
}
