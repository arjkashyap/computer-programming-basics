// Pre order traversal in tree

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};



Node* Insert(Node *root, int a){
    if(root == NULL){
       root = new Node();
       root -> data = a;
       root -> left = root -> right = NULL;
    }
    if ( a <= root -> data)
        root -> left = Insert(root -> left, a);
    if ( a > root -> data )
        root -> right = Insert(root -> right, a);
    return root;

}

// Function for preorder traversal
void preOrder(Node *root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root -> left);
    preOrder(root -> right);
}

int main(){
    Node* root = NULL;          // Empty tree
    root = Insert(root, 5);
    root = Insert(root, 7);
    root = Insert(root, 4);
    root = Insert(root, 15);
    root = Insert(root, 5);
    root = Insert(root, 21);
    cout<<"here "<<endl;
    preOrder(root);
    return 0;

}



