// find the diameter of a binary tree

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
        return new Node(data);
    else if(data <= root -> data)
        root -> left = Insert(root -> left, data);
    else if(data > root -> data)
        root -> right = Insert(root -> right, data);
}

int res = 0;
int Diameter(np root){
    if(!root)
        return 0;
    int lh = Diameter(root -> left);
    int rh = Diameter(root -> right);
    res = std::max(res, lh + rh + 1);
    return std::max(lh, rh) + 1;
}

int main()
{
    np root = nullptr;

    root = Insert(root, 19);
    root = Insert(root, 15);
    root = Insert(root, 16);
    root = Insert(root, 17);
    root = Insert(root, 18);
    root = Insert(root, 70);
    root = Insert(root, 10);
    root = Insert(root, 5);
    root = Insert(root, 13);
    root = Insert(root, 1);
    int h = Diameter(root);
    std::cout << "Diameter: " << res << "\n";
    return 0;
}











