// For a given number and root node, find the ceil of the number in BST

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
};

np Insert(np root, int data)
{
    if(root == nullptr)
        root = new Node(data);
    else if(data <= root -> data)
        root -> left = Insert(root -> left, data);
    else if(data > root -> data)
        root -> right = Insert(root ->right, data);
    return root;
}

int findCeil(np root, int x)
{
    int ceil = 0;
    if(root -> data == x)
        return root -> data;
    while(root != nullptr)
    {
        if(x == root -> data){
            return root -> data;
        }
        else if(x < root -> data ){
            ceil = root -> data;
            root = root -> left;
        }
        else if(x > root -> data){
            root = root -> right;
        }
    }
    return ceil;
}

int main()
{
    np root = nullptr;
    root = Insert(root, 10);
    root = Insert(root, 5);
    root = Insert(root, 15);
    root = Insert(root, 12);
    root = Insert(root, 30);

    int ceil = findCeil(root, 3);
    if(ceil)
        std::cout << ceil;
    else
        std::cout << "None";
    std::cout << "\n";

    return 0;
}




