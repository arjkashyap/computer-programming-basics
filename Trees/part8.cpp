// Post order Traversal
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* getNewNode(int data){
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

Node* Insert(Node* root, int data){
    if(root == NULL)
        root = getNewNode(data);
    else if( data <= root -> data)
        root -> left = Insert(root -> left, data);
    else if( data > root -> data)
        root -> right = Insert(root -> right, data);
    return root;

}

void postOrder(Node* root){
    if(root == NULL)
        return;
    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root -> data<<" ";

}


int main(){
    Node* root = NULL;
    root = Insert(root, 12);
    root = Insert(root, 3);
    root = Insert(root, 14);
    root = Insert(root, 6);
    root = Insert(root, 7);
    root = Insert(root, 21);

    postOrder(root);
    cout<<endl;
    return 0;
}




