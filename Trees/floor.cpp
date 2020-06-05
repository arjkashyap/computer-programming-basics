// for a given bin tree, find the floor of a given number
// floor is the largest number which is closest of the given number

#include<bits/stdc++.h>

struct Node
{
    int data;
    struct Node* left;;
    struct Node* right;
    Node(int data)
    {
        this -> data = data;
        left = right = nullptr;
    }
};

struct Node* Insert(struct Node* root, int data)
{
    if(root == nullptr)
        root = new Node(data);
    else if(data <= root -> data)
        root -> left = Insert(root -> left, data);
    else if(data > root -> data)
        root -> right = Insert(root -> right, data);
    return root;
}

struct Node* floor(struct Node* root, int x)
{
    struct Node* res = nullptr;
    while(root != nullptr)
    {
        if(root -> data == x)
            return root;
        else if(root -> data > x)
            root = root -> left;
        else if(root -> data < x){
            res = root;
            root = root -> right;
        }
    }
    return res;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    struct Node* root = nullptr;
    root = Insert(root, 10);
    root = Insert(root, 5);
    root = Insert(root, 15);
    root = Insert(root, 12);
    root = Insert(root, 30);
    struct Node* f1 = floor(root, 13);
    std::cout << f1 -> data << std::endl;
    return 0;
}
