#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node * lp;
    int data;
    struct node * rp;
};

struct node * create(int data){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->lp = newnode->rp = NULL;
    return newnode;
}

struct node * insert(struct node * node, int data){
    if(node == NULL){
        return create(data);
    }
    
    else{
        if(node->data < data){
            node->rp = insert(node->rp,data);
        }
        
        else{
            node->lp = insert(node->lp,data);
        }
    }
    return node;
}

void inorder(struct node * root){
    if(root != NULL){
        inorder(root->lp);
        printf("%d ", root->data);
        inorder(root->rp);
    }
}

int main(){
    struct node * root;
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,30);
    root = insert(root,40);
    root = insert(root,50);
    inorder(root);
}
