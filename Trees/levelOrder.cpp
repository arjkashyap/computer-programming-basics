// Implementing level order traversal on BT

#include<bits/stdc++.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};


Node* Insert(Node* root, int data)
{
    if(!(root))
        root = new Node(data);
    else if(data <= root -> data)
        root -> left = Insert(root -> left, data);
    else if(data > root -> data)
        root -> right = Insert(root -> right, data);
    return root;
}

void levelOrder(Node* root)
{
    std::queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        std::cout << curr -> data << " ";
        if(curr -> left) q.push(curr -> left);
        if(curr -> right) q.push(curr -> right);
        q.pop();
    }
    std::cout << "\n";
}

int main()
{
    Node* root = nullptr;
    root = Insert(root, 1);
    root = Insert(root, 2);
    root = Insert(root, 3);
    root = Insert(root, 4);
    root = Insert(root, 5);
    levelOrder(root);

    return 0;
}
