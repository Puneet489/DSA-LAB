#include <stdio.h>

struct node {
    int data;
    struct node * next;
};

struct node * front = NULL;

void createnode(int data){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(front == NULL){
        front = newnode;
        newnode->next=NULL;
    }
    
    newnode->data = data;
    
    
        
}

void thridnodefinding(struct node * front){
    struct node * temp;
    temp = front;
    while(temp->next->next->next != NULL){
        temp = temp->next;
    }
    
    printf("%d ", temp->data);
}

int main(){
    createnode(1);
    createnode(2);
    createnode(3);
    createnode(4);
    createnode(5);
    thirdnodefinding();
}
