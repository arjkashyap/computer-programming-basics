// Finding the height of the tree
// Height of the tree is the maximum number of edges in the longest path from the node to the leaf node.
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

// Helper function for new node
Node* getNewNode(int a){
    Node* newNode = new Node();
    newNode -> data = a;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

Node* Insert(Node* root, int a){
    if( root == NULL)
        root = getNewNode(a);
    else if( a <= root -> data )
        root -> left = Insert(root -> left, a);
    else if( a > root -> data )
        root -> right = Insert(root -> right, a);
    
    return root;
}

int findHeight(Node* root){
   int lHeight, rHeight;
   if( root == NULL )
        return -1;
    lHeight = findHeight(root -> left);
    rHeight = findHeight(root -> right);
    
    if( lHeight > rHeight)
        return (lHeight + 1);
    else
        return (rHeight + 1);   
}


int main(){
    Node* root = NULL;
    root = Insert(root, 1);
    root = Insert(root, 2);
    root = Insert(root, 3);
    root = Insert(root, 4);
    root = Insert(root, 5);
    root = Insert(root, 2);
     root = Insert(root, 14);
    
    cout<<"Height is "<<findHeight(root)<<endl;

    return 0;
}












