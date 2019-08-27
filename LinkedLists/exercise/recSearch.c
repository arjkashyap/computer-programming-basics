// Searching an element using recursion

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void Insert(struct Node** root, int data){
    struct Node* tmpPtr = ( struct Node* )(malloc(sizeof(struct Node)));
    tmpPtr -> next = (*root);
    tmpPtr -> data = data;
    (*root) = tmpPtr;
}

void Display(struct Node* root){
    struct Node* tmpPtr = root;
    while(tmpPtr != NULL){
        printf("%d ", tmpPtr -> data);
        tmpPtr = tmpPtr -> next;
    }
    printf("\n");
}

int Search(struct Node* root, int element){
    if(root == NULL)
        return 0;
    if(root -> data == element)
        return 1;
    Search(root -> next, element);
}

int main(){
   struct Node* root = NULL;
   Insert(&root, 7);
   Insert(&root, 13);
   Insert(&root, 5);
   Insert(&root, 69);
   Insert(&root, 2);
   Insert(&root, 155);
   
   Display(root);
   
   int search;
   printf("Print the element to be searched in the linked list.\n");
   scanf("%d", &search);
   if(Search(root, search))
        printf("Element found\n");
   else
       printf("Element not found..\n");
   return 0;
}





