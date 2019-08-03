// Implementation of Binary Search Trees using linked lists
// Inserting an element in BST

#include<iostream>
using namespace std;

// Binary search tree node
struct bstNode{
    int data;
    bstNode* left;
    bstNode* right;
};


// Create a new node
// Function returns the address of the new node.
bstNode* getNode(int a){
    bstNode* newNode = new bstNode();
    newNode -> data = a;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

// Function for inserting the new node in BST
bstNode* insert(bstNode* root, int a){
    if(root == NULL){
        root = getNode(a);
    }
    else if( a <= root -> data ){
        root -> left = insert(root -> left, a);
    }
    else if( a > root -> data ) {
        root -> right = insert(root -> right, a);
    }
    return root;
}

int main(){
    // Create an empty tree
    bstNode* root = NULL;
    
    // Inserting nodes
    root = insert(root, 12);
    root = insert(root, 1);
    root = insert(root, 45);
    root = insert(root, 9);
    root = insert(root, 3);
    root = insert(root, 8);
    root = insert(root, 34);

    return 0;
}


