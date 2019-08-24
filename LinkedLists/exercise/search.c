// Searching for an element in the linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

struct Node* root;

void Insert(Node** root, int data){
    Node* ptr;          // temperory pointer
    ptr = (malloc(sizeof(Node)));
    ptr -> data = data;
    ptr -> next = *root;
    *root = ptr;
}

void Display(Node** root){
    struct Node* ptr = *root;
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");
}

Node* Search(int s){            // Returns the pointer to node
    struct Node* ptr = root;
    while(ptr != NULL){
        if(ptr -> data == s)
            return ptr;
        ptr = ptr -> next;
    }
    return 0;
}

int main(){
    int search;
    printf("Enter the elements to be searched in the list \n");    
    scanf("%d", &search);
    for(int i = 0; i < 6; i++)
        Insert(&root, i+1);
    Display(&root);
    if(Search(search))
        printf("Element found at node at position %p\n", Search(search));
    else
        printf("Element not found..\n");
    return 0;
}






