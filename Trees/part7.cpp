// InOrder Traversal
#include<iostream>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};

Node* getNewNode(char a){
    Node* newNode = new Node();
    newNode -> data = a;
    newNode -> left = newNode -> right = NULL;
    return newNode;
};

Node* Insert(Node* root, char a){
    if(root == NULL)
        root = getNewNode(a);
    else if( a <= root -> data )
        root -> left = Insert(root -> left, a);
    else if( a >= root -> data)
        root -> right = Insert(root -> right, a);
    return root;

}

// Function for Inorder travesal
void inOrder(Node* root){
    if(root == NULL)
        return;
    inOrder(root -> left);
    cout<<root -> data<<" ";
    inOrder(root -> right);

}

int main(){
    Node* root = NULL;
    root = Insert(root, 'M'); 
    root = Insert(root, 'B');
    root = Insert(root, 'Q');
    root = Insert(root, 'Z');
    root = Insert(root, 'A');
    root = Insert(root, 'C');
    
    inOrder(root);
    cout<<endl;
    return 0;
}
