#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* getNewNode(int data){
    struct Node* ptr = (struct Node*)(malloc(sizeof(struct Node*)));
    ptr -> data = data;
    ptr -> left = ptr -> right = NULL;
    return ptr;
}

void Inorder(struct Node* ptr){
    
    if(ptr != NULL){
        Inorder(ptr -> left);
        printf("%d ", ptr -> data);
        Inorder(ptr -> right);
    }

}

struct Node* Insert(struct Node* head_ref, int data){
    if(head_ref == NULL)
        return getNewNode(data);
    if(data < (head_ref) -> data)
        (head_ref) -> left = Insert(head_ref -> left, data);
    else if(data >= (head_ref) -> data)
        head_ref -> right = Insert(head_ref -> right, data);
    return head_ref;
}


int main(){
    struct Node* root = NULL;
    root = Insert(root, 4);
    root = Insert(root, 1);
    root = Insert(root, 6);
    root = Insert(root, 2);
    root = Insert(root, 5);
    root = Insert(root, 7);
    root = Insert(root, 3);
    
    Inorder(root);
    return 0;
}

