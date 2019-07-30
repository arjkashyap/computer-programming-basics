// Searching for an element in a binary seach tree

#include<iostream>
using namespace std;

struct bstNode{
    int data;
    bstNode* left;
    bstNode* right;
};

bstNode* getNewNode(int a){
    bstNode* newNode = new bstNode();
    newNode -> data = a;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

bstNode* Insert(bstNode* root, int a){
    if( root == NULL)
        root = getNewNode(a);
    else if ( a <= root -> data ){
        root -> left = Insert(root -> left, a);
    }
    else if ( a > root -> data ){
        root -> right = Insert( root -> right, a);
    }

    return root;
}

// Search function
// Returns true if the element is found
bool Search(bstNode* root, int a){
    if(root == NULL)
        return false;
    if( root -> data == a )
        return true;
    else if ( a <= root -> data )
        return Search(root -> left, a);
    else if ( a > root -> data ) 
        return Search(root -> right, a);
}

int main(){
    int search;
    bstNode* root = NULL;
    root = Insert(root, 12);
    root = Insert(root, 11);
    root = Insert(root, 9);
    root = Insert(root, 4);
    root = Insert(root, 123);
    root = Insert(root, 100);

    cout<<"Enter the element to search in the tree. "<<endl;
    cin>>search;
    if(Search(root, search))
        cout<<"Element is found"<<endl;
    else
        cout<<"Element not found"<<endl;
    return 0;

}



