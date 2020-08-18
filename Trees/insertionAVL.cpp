// Insertion operation in AVL trees

#include<iostream>
#include<queue>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    int ht;
    Node(int data)
    {
        this -> data = data;
        this -> left = nullptr;
        this -> right = nullptr;
        this -> ht = 0;
    }
};

int getHeight(struct Node* root)
{
    if(root == nullptr)
        return -1;
    return root -> ht; 
}

int getBalance(struct Node* root)
{
    if(root == nullptr)
        return -1;
    return getHeight(root -> left) - getHeight(root -> right);
}

//// Utitlity Function to right rotate a sub tree
struct Node *rightRotate(Node *y)  
{  
    Node *x = y->left;  
    Node *T2 = x->right;  
  
  // Perform rotation  
    x->right = y;  
    y->left = T2;  
  
    // Update heights  
    y->ht = std::max(getHeight(y->left), 
                    getHeight(y->right)) + 1;  
    x->ht = std::max(getHeight(x->left), 
                    getHeight(x->right)) + 1;  
  
    // Return new root  
    return x;  
}  
  
// A utility function to left  

struct Node *leftRotate(Node *x)  
{  
    Node *y = x->right;  
    Node *T2 = y->left;  
  
    // Perform rotation  
    y->left = x;  
    x->right = T2;  
  
    // Update heights  
    x-> ht = std::max(getHeight(x->left),     
                    getHeight(x->right)) + 1;  
    y-> ht = std::max(getHeight(y->left),  
                    getHeight(y->right)) + 1;  
  
    // Return new root  
    return y;  
}  
struct Node* insert(struct Node* root, int data)
{
    if(root == nullptr)
        return new Node(data);
    else if(data < root -> data)
        root -> left = insert(root -> left, data);
    else if(data > root -> data)
         root -> right = insert(root -> right, data);
    else 
        return root;
    // Update height of this node
    root -> ht = std::max(getHeight(root -> left), getHeight(root -> right)) + 1;
    
    // get balance of the current tree
    int balance = getBalance(root); 
    // Rotation cases
    // Left Left Case
    if(balance > 1 && data < root -> left -> data){
        return rightRotate(root);
    }
    
    // Right Rigth case
    if(balance < -1 && data > root -> right -> data){
        return leftRotate(root);
    }
    
    // Left Right Case
    if(balance > 1 && data > root -> left -> data)
    {
        root -> left = leftRotate(root -> left);
        return rightRotate(root);
    }

    // Right Left Case
    if(balance < -1 && data < root -> right -> data)
    {
        root -> right = rightRotate(root -> right);
        return leftRotate(root);
    }
    

    // Rotation not required
    return root;

}

void inOrder(struct Node* root)
{
    if(root == nullptr)
        return;

    std::queue<struct Node*> q;
    q.push(root);
    while(q.empty() == false)
    {
        struct Node* curr = q.front();
        q.pop();
        if(curr -> left) q.push(curr -> left);
        if(curr -> right) q.push(curr -> right);
        std::cout << curr -> data << " ";
    }
    std::cout << std::endl;
}

int main()
{

    struct Node* root = nullptr;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int node;
        std::cin >> node;
        root = insert(root, node);
    }
    inOrder(root);
    std::cin.get();
    return 0;
}

