// Deleting a node from a binary search tree

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

// Find the minimum in a tree
Node* findMin(Node* root){
    while(root -> left != NULL) root = root -> left;
    return root;
}


Node* getNewNode(int data){
    struct Node* newNode = new Node();
    newNode -> data = data;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

Node* Insert(Node* root, int data){
    if(root == NULL) 
        root = getNewNode(data);
    else if ( root -> data <= data )
        root -> left = Insert(root -> left, data);
    else if( root -> data > data)
        root -> right = Insert(root -> right, data);
    
    return root;
}

// Function for deleting the node
Node* Delete(Node* root, int data){
    if ( root == NULL )
        return root;
    else if ( root -> data <= data )
        root -> left = Delete(root -> left, data);
    else if ( root -> data > data )
        root -> right = Delete(root -> right, data);
    
    // When the node is found
    else{
        // When the node is a leaf node
        if ( root -> left == NULL && root -> right == NULL){
            delete root;
            root = NULL;
        }
        // When the node has only one child
        else if ( root -> left == NULL ){
            struct Node* temp = root;
            root = root -> right;
            delete temp;
        }

        else if ( root -> right == NULL){
            struct Node* temp = root;
            root = root -> left;
            delete temp;
        }

        // When the root has 2 children
        else{
            struct Node* temp = findMin(root -> right);
            root -> data = temp -> data;
            root -> right = Delete(root -> right, temp -> data);
        }
                
    }

    return root;
}



int main(){

    Node* root = NULL;
    root = Insert(root, 5); root = Insert(root, 10);
    root = Insert(root, 3); root = Insert(root, 4);
    root = Insert(root, 1); root = Insert(root, 11);

    // Delete node with value equals 5
    root = Delete(root, 5);

    return 0;
}









