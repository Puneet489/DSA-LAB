#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * front = NULL;
struct node * rear = NULL;

void push(int data){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    if(front == NULL){
        front = newnode;
        rear = newnode;
    }
    
    else{
        rear->next = newnode;
        rear = newnode;
    }
    
    printf("Element is successfully pushed in the queue\n");
}

int pop(){
    struct node * temp;
    temp = front;
    front = front->next;
    temp->next = NULL;
    int x = temp->data;
    free(temp);
    printf("Element is popped successfully\n");
    return x;
}

void display(){
    struct node * temp;
    temp = front;
    while(temp->next != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    printf("%d\n",temp->data);
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
    printf("%d\n",x);
    int y = pop();
    printf("%d\n",y);
    int z = pop();
    printf("%d\n",z);
    display();
}
