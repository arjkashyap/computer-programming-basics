// For a given binary tree, check if it is balanced or not
// Optimized approach
// O(n) solution

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


bool isBalanced(np root)
{
    if( !root )
        return 0;
    int lh = isBalanced(root -> left);
    if(lh == -1) return -1;
    int rh = isBalanced(root -> right);
    if(rh == -1) return -1;
    if( abs(lh - rh) > 1 )
        return -1;
    return max(lh, rh) + 1;
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











