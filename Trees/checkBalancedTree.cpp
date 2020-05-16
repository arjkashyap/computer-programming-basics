// For a given binary tree, check if it is balanced or not
// O(n2) solution

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
};

np Insert(np root, int data)
{
    if( root == nullptr )
        return new Node(data);
    else if( data <= root -> data)
        root -> left = Insert(root -> left, data);
    else if( data > root -> data )
        root -> right = Insert(root -> right, data);
}

int height(np root, int h = 0)
{
    if(root == nullptr)
        return -1;
    int lHeight = height(root -> left, h+1);
    int rHeight = height(root -> right, h+1);
    return std::max(lHeight, rHeight) + 1;
}

bool isBalanced(np root)
{
    if( !root )
        return true;
    return (abs(height(root -> left) - height(root -> right)) <= 1) && isBalanced(root -> left) && isBalanced(root -> right);
}

int main()
{
    np root = nullptr;
//    root = Insert(root, 14);
//    root = Insert(root, 9);
//    root = Insert(root, 18);
//    root = Insert(root, 7);
//    root = Insert(root, 11);
//    root = Insert(root, 16);
//    root = Insert(root, 10);
//    root = Insert(root, 13);
//
    root = Insert(root, 7);
    root = Insert(root, 6);
    root = Insert(root, 5);

    if(isBalanced(root))
        std::cout << "Yes";
    else
        std::cout << "No";
    std::cout << "\n";

    return 0;
}











