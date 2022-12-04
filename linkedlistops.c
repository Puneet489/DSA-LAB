#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
}*head;

void insertbeg(int data){
    struct node * temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    if(head == NULL){
        head = temp;
    }
    
    else{
        temp->next = head;
        head = temp;
    }
}

void insertend(int data){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        struct node * temp;
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void traversal(){
    struct node * temp;
    temp = head;
    while(temp->next != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    printf("%d ",temp->data);
}

void insertmid(int pos, int data){
    struct node * temp;
    int i = 0;
    temp = head;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = data;
    newnode -> next = temp->next;
    temp->next = newnode;
}

void deletebeg(){
    struct node * temp;
    temp = head;
    head = head->next;
    temp->next = NULL;
    free(temp);
}

void deleteend(){
    struct node * temp;
    temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
}

void deletemid(int pos){
    struct node * temp;
    struct node * temp2;
    temp = head;
    int i =1;
    while(i<pos){
        temp = temp->next;
        i++;
    }
    temp2 = temp;
    temp->next = temp->next->next;
}

int main(){
    struct node * one;
    struct node * two;
    struct node * three;
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    one->data = 1;
    two->data = 2;
    three->data = 3;
    one->next = two;
    two->next = three;
    three -> next = NULL;
    head = one;
    insertbeg(4);
    insertend(5);
    insertmid(4,4);
    deleteend();
    deletebeg();
    deletemid(2);
    traversal();
}
