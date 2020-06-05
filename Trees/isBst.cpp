// for a given tree, check if it is a bst

#include<bits/stdc++.h>

typedef struct Node* np;

struct Node
{
    int data;
    np left;
    np right;
    Node(int data) 
    {
        this -> data = data;
        left = right = nullptr;
    }
}

void Insert(np root, int data)
{
    if(!root)
        root = new Node(data);
    else if(data <= root -> data)
        root -> left = Insert(root -> left, data);
    else if(data > root -> data)
        root -> right = Insert(root -> right, data);
    return root;
}

bool bstUtil(Node* root, int min, int max)
{
    if(!root)
        return true;
    if(root -> data < min || root -> data > max) return false;
    
    return bstUtil(root -> left, min, root -> data - 1) && bstUtil(root -> right, root -> data + 1, max);
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    if(!root)
        return true;
    return bstUtil(root, INT_MIN, INT_MAX);
}


int main()
{
    np root = nullptr;
    Insert(root, 20);
    Insert(root, 18);
    Insert(root, 15);
    Insert(root, 19);
    Insert(root, 28);
    Insert(root, 25);
    Insert(root, 50);
    Insert(root, 25);
    Insert(root, 27);
    std::cout << isBST(root) << std::endl;
    return 0;
}
