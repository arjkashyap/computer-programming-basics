// FInding the length of the list via itterative method

#include<stdio.h>
#include<stdlib.h>

int count = 0;          // global count

struct Node{
    int data;
    struct Node* next;
};

void Insert(struct Node** root, int data){
    struct Node* newNode = (struct Node*)(malloc(sizeof(struct Node)));
    newNode -> data = data;
    newNode -> next = *root;
    *root = newNode;
   
}

void Display(struct Node** root){
    struct Node* ptr = *root;
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");
}

int Count(struct Node* rootPtr){
    if( rootPtr == NULL )
        return 0;
    return 1 + Count(rootPtr -> next);
}

void DeleteNode(struct Node* rootPtr, int data){
   struct Node* tmpPtr = rootPtr;

    while( (rootPtr -> next ) -> data != data)
        rootPtr = rootPtr -> next;
    rootPtr -> next = (rootPtr -> next) -> next;
}

int main(){
    struct Node* root = NULL;
    Insert(&root, 12);
    Insert(&root, 3);
    Insert(&root, 14);
    Insert(&root, 21);
    Insert(&root, 9);

    Display(&root);
    printf("Linked list has %d nodes. \n", Count(root));
    DeleteNode(root, 9);
    Display(&root);   
    return 0;
}



