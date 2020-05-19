// For a given binary tree, convert it into the mirror image of itself


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
    if(!root)
        return new Node(data);
    else if(data <= root -> data)
        root -> left = Insert(root -> left, data);
    else if(data > root -> data)
        root -> right = Insert(root -> right, data);
}

np mirror(np root)
{
    if(!root)
        return nullptr;
    np res = root;
    std::queue<np> q;
    q.push(root);
    while(!q.empty())
    {
        np curr = q.front();
        np left = curr -> left;
        np right = curr -> right;
        q.pop();
        if(left) q.push(left);
        if(right) q.push(right);
        curr -> left = right;
        curr -> right = left;
    }
    return res;
}

void LevelOrder(np root)
{
    if(!root)
        return;
    std::queue<np> q;
    q.push(root);
    while(!q.empty())
    {
        np curr = q.front();
        q.pop();
        std::cout << curr -> data << " ";
        if(curr -> left) q.push(curr -> left);
        if(curr -> right) q.push(curr -> right);
    }
    std::cout << std::endl;
}

int main()
{
    np root = nullptr;
    root = Insert(root, 10);
    root = Insert(root, 6);
    root = Insert(root, 19);
    root = Insert(root, 17);
    root = Insert(root, 21);
    LevelOrder(root);
    root = mirror(root);
    LevelOrder(root);
    return 0;
}













