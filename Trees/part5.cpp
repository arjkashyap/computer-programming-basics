// Level order traversal in a binary tree using queue

#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

// Function for level order traversal
void loTraversal(Node* root){
    if ( root == NULL)
        return;
    queue<Node*> Q;     // Queue object containing pointers
    Q.push(root);
    while(!Q.empty()){
        Node* current = Q.front();
        Q.pop();
        cout<<current -> data<<" ";
        if( current -> left != NULL) Q.push(current->left);
        if( current -> right != NULL) Q.push(current->right);
       
    }

    cout<<endl;
}


Node* getNewNode(int a){
    Node* newNode = new Node();
    newNode -> data = a;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

Node* Insert(Node* root, int a){
    if( root == NULL)
        root  = getNewNode(a);
    else  if ( a <= root -> data ){
        root -> left = Insert(root -> left, a);
    }
    else if ( a > root -> data ){
        root -> right = Insert(root -> right, a);
    }
    return root;
}

int main(){
    Node* root = NULL;
    root = Insert(root, 12);
    root = Insert(root, 3);
    root = Insert(root, 39);
    root = Insert(root, 4);
    root = Insert(root, 54);

    loTraversal(root);
    return 0;
}

