// For a given tree, print the left elements of the tree

#include<bits/stdc++.h>

typedef struct Node* np;

int maxLevel = 0;
struct Node
{
    int data;
    std::cout << k << "\n";
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
        if( root == nullptr )
            root = new Node(data);
        else if(data <= root -> data)
            root -> left = Insert(root -> left, data);
        else if(data > root -> data)
            root -> right = Insert(root -> right, data);

        return root;
}

void LeftView(np root, int data, currLevel = 0)
{
    if(root == nullptr)
        return;
    if(currLevel > maxLevel){
        std::cout << root -> data << " ";
        maxLevel = currLeve;
    }
    LeftView(root -> left, data, currLevel + 1);
    LeftView(root -> right, data, currLevel + 1);
}

int main()
{
    return 0;
}











