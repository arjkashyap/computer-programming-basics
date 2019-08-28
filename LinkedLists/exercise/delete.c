// Deleting the element from the given linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void Insert(struct Node** ptr, int data){
    struct Node* newNode = (struct Node*)(malloc(sizeof(struct Node)));
    newNode -> data = data;
    newNode -> next = (*ptr);
    (*ptr) = newNode;
}

void Display(struct Node* ptr){
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");
}

void Delete(struct Node** head_ref, int key){
   struct Node* tmp = *head_ref; 
   if(tmp -> data == key){
        (*head_ref) = tmp -> next;
        free(tmp);
        return;
   }
   struct Node* prev = *head_ref;       // previous node
   tmp = tmp -> next;               // front node
   while(tmp != NULL){
       if(tmp -> data == key){
           prev -> next = tmp -> next;
           free(tmp);
       }
       else{
            tmp = tmp -> next;
            prev = prev -> next;
       }
         
   }
}

int main(){
    struct Node* root = NULL;
    int n, del;

    printf("Enter the number of elements in the linked list\n");
    scanf("%d", &n);
    printf("Enter the elements in the linked list \n");
    while(n--){
        int a;
        scanf("%d", &a);
        Insert(&root, a);
    }
    Display(root);

    printf("Enter the element to be deleted \n");
    scanf("%d", &del);
    Delete(&root, del);
    Display(root);
    return 0;
}









