#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node * top = NULL;

void insert(int data){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = data;
    if(top==NULL){
        newnode->next = NULL;
    }
    
    else{
        newnode->next = top;
    }
    
    top = newnode;
    printf("Pushed successfully\n");
}

void pop(){
    printf("%d \n",top->data);
    struct node * temp;
    temp = top;
    top = top->next;
    free(temp);
    printf("Popped successfully \n");
}

void traversal(){
    struct node * temp;
    temp = top;
    while(temp->next != NULL){
        printf("%d \n",temp->data);
        temp = temp->next;
    }
    
    printf("%d \n", temp->data);
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    traversal();
    pop();
    traversal();
    
}
