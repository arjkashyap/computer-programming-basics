// For a given Complete binary tree, find the number of nodes
// In O(Logn * logn) Time 

#include<bits/stdc++.h>
#include<cmath>
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

int countNodes(np root)
{
    if(!root)
        return 0;
    int lh = 0, rh = 0;
    np curr = root;
    while(curr != nullptr){
        lh++;
        curr = curr -> left;
    }
    curr = root;
    while(curr !=nullptr){
        rh++;
        curr = curr -> right;
    }
    
    if(lh == rh)
        return pow(2, lh) - 1;
    else
        return countNodes(root -> left) + countNodes(root -> right) + 1;
}

int main()
{
    np root = nullptr;
    root = Insert(root, 10);
    root = Insert(root, 7);
    root = Insert(root, 18);
    root = Insert(root, 3);
    root = Insert(root, 8);
    root = Insert(root, 1);
    root = Insert(root, 9);
    root = Insert(root, 15);
    root = Insert(root, 19);
    root = Insert(root, 12);

    std::cout << countNodes(root) << "\n";
    return 0;
}














