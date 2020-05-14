// For a given binary tree, print the nodes which are at a distance of k 
// units from the root node

#include<bits/stdc++.h>

struct Node
{
    int data;
    Node* left; 
    Node* right;
    Node(int data)
    {
        this -> data = data;
        left = right = nullptr;
    }
};


Node* Insert(Node* root, int data)
{
    if( !root )
        root = new Node(data);
    else if( data <= root -> data )
        root -> left = Insert( root -> left, data );
    else if( data > root -> data )
        root -> right = Insert( root -> right, data );
    return root;
}

void printKNodes(Node* root, int k)
{
    if( !root  )
        return;
    if( k == 0 )
        std::cout << root -> data << " ";
    else{
        printKNodes(root -> left, k - 1);
        printKNodes(root -> right, k - 1);
    }
}


int main()
{
    Node* root = nullptr;
    int k = 2;
    root = Insert(root, 10);
    root = Insert(root, 12);
    root = Insert(root, 13);
    root = Insert(root, 3);
    root = Insert(root, 8);
    root = Insert(root , 30);

    printKNodes(root, k);

    return 0;
}


