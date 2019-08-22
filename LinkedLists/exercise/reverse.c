#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

int *head=NULL;

void insert(int data){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL){
        head = newNode;
        head -> data = data;
        head -> next = NULL;
        return;
    }
    newNode -> next = head;
    newNode -> data = data;
    head = newNode;
}

void display(){
    struct *tmp = head;
    while(head -> next != NULL){
        printf("%d ", head -> data);
        head = head -> next;
    }
    head = tmp;
}

int main(){
    insert(3);
    insert(5);
    insert(8);
    insert(19);
    display();
    return 0;
}
