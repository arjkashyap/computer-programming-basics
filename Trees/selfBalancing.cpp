// Implementation of self balancing binary search trees
// Insertion and Deletion
// The type of SBBST implemented here is AVL tree

#include<bits/stdc++.h>

struct Node
{
    int val;
    Node* left;
    Node* right;
    int ht;         // Height of  Node
};

struct Node* getNewNode(int x)
{
    struct Node* newNode = new Node;
    newNode -> val = x;
    newNode -> left = nullptr;
    newNode -> right = nullptr;
    return newNode;
}

void inorder(struct Node* root)
{
    if(root == nullptr)
        return;
    std::queue<struct Node*> q;
    q.push(root);
    while(q.empty() == false)
    {
        struct Node* curr = q.front();
        q.pop();
        std::cout << curr -> val << " ";
        if(curr -> left) q.push(curr -> left);
        if(curr -> right) q.push(curr -> right);
    }
    std::cout << "\n";
}

int height(struct Node* node)
{
    if(node == nullptr)
        return 0;
    return node -> ht;
}

// Rotation
/* Cases: 
 * Left - Left Case: Right
 * Left - Right Case: Left -> Right
 * Right - Right Case: Left 
 * Right - Left Case: Right -> Left
 */
struct Node* rightRotate(struct Node* x)
{
    struct Node* y = x -> left;
    struct Node* T2 = y -> right;

    // Rotation
    x -> left = T2;
    y -> right = x;

    // update heights
    x -> ht = 1 + std::max(height(x -> left), height(x -> right));
    y -> ht = 1 + std::max(height(y -> left), height(y -> right));

    return y;
}

struct Node* lefttRotate(Node* x)
{
    struct Node* y = x -> right;
    struct Node* T2 = y -> left;

    // Rotation
    x -> right = T2;
    y -> left = x;

    // update heights
    x -> ht = 1 + std::max(height(x -> left), height(x -> right));
    y -> ht = 1 + std::max(height(y -> left), height(y -> right));

    return y;
}

// Get Balance factor of node N
int getBalance(Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

struct Node* insert(struct Node* root, int val)
{
    // Generic insertion
    if(root == nullptr)
        return getNewNode(val);
    else if( val <= root -> val )
        root -> left = insert(root -> left, val);
    else if(val > root -> val)
        root -> right = insert(root -> right, val);

    int balance = getBalance(root);

    // Left left
    if(balance > 1 && val < root -> left -> val)
        return rightRotate(root);
    // right right
    if(balance > -1 && val > root -> right -> val)
        return rightRotate(root);
    // left right
    if(balance > 1 && val > root -> left -> val){
        root -> left = lefttRotate(root -> left);
        return rightRotate(root);
    }
    if(balance > -1 && val < root -> right -> val){
        root -> right = rightRotate(root -> right);
        return lefttRotate(root);
    }
    return root;
}

int main()
{
    struct Node* root = nullptr;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 25);
    inorder(root); 

    return 0;
}
