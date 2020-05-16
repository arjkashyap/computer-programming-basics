// Print the left view of the binary tree.. 
// Using an itterative method

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
        root = new Node(data);
    else if(data <= root -> data)
        root -> left = Insert(root -> left, data);
    else if(data > root -> data)
        root -> right = Insert(root -> right, data);

    return root;
}

void leftView(np root)
{
    std::queue<np> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            np curr = q.front();
            q.pop();
            if(i == 0) std::cout << curr -> data << " ";
            if(curr -> left) q.push(curr -> left);
            if(curr -> right) q.push(curr -> right);

        }
    }
    std::cout << "\n";
}


int main()
{
    np root = nullptr;
    root = Insert(root, 10);
    root = Insert(root, 7);
    root = Insert(root, 14);
    root = Insert(root, 3);
    root = Insert(root, 9);
    root = Insert(root, 11);
    root = Insert(root, 20);
    root = Insert(root, 15);

    leftView(root);
    return 0;
}

















