// Write a function getNode() which returns key at nth index

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*  next;
};

void Insert(struct Node** headPtr, int data){
    struct Node* tmpPtr = (struct Node*)(malloc(sizeof(struct Node)));
    tmpPtr -> data = data;
    tmpPtr -> next = *headPtr;
    (*headPtr) = tmpPtr;
}

void Display(struct Node* headPtr){
    while(headPtr != NULL){
        printf("%d ", headPtr -> data);
        headPtr = headPtr -> next;
    }
    printf("\n");
}

int getNth(struct Node* headPtr, int n){
     int c = 0;
     while(headPtr != NULL){
        if( c == n )
            return headPtr -> data;
        else{
            c ++;
            headPtr = headPtr -> next;
        }
     }
}

int main(){
    int n, index;
    struct Node* root = NULL;
    
    printf("Enter the number of elements in the linked list\n");
    scanf("%d", &n);
    printf("Enter the elements of the linked list\n");
    while(n --){
        int a;
        scanf("%d", &a);
        Insert(&root, a);
    }
    
    Display(root);
    
    printf("Enter the index of the node.\n");
    scanf("%d", &index);

    printf("Element: %d\n", getNth(root, index));
    return 0;
}
