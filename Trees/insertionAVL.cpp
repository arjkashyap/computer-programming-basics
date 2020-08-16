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
//struct Node* rightRotate(struct Nod)
//{
//    std::cout << "Right Rotation" << std::endl;
//    std::cout << "elm " << root -> data << std::endl;
//    std::cout << "balance of this " << getBalance(root) << std::endl;
//    struct Node* x = root;
//    struct Node* y = root -> left;
//    struct Node* T1 = y -> left;
//    struct Node* T2 = y -> right;
//    struct Node* T3 = x -> right;
//    x -> left = T2;
//    x -> right = T3;
//    y -> right = x;
//    y -> left = T1;
//
//    // update height
//    x -> ht = std::max(getHeight(x -> left), getHeight(x -> right)) + 1;
//    y -> ht = std::max(getHeight(y -> left), getHeight(y -> right)) + 1;
//    std::cout << "Right Rotation Success " << std::endl;
//    return y;
//
//}
//
//struct Node* leftRotate(struct Node* root)
//{
//    struct Node* y = root;
//    struct Node* x = y -> right;
//    struct Node* T1 = y -> left;
//    struct Node* T2 = x -> left;
//    struct Node* T3 = x -> right;
//
//    y -> right = x;
//    y -> left = T1;
//    x -> left = T2;
//    x -> right = T3;
//
//    // update height
//    x -> ht = std::max(getHeight(x -> left), getHeight(x -> right)) + 1;
//    y -> ht = std::max(getHeight(y -> left), getHeight(y -> right)) + 1;
//
//    return x;
//}
struct Node *rightRotate(Node *y)  
{  
    std::cout << "Right Rotation" << std::endl;
    std::cout << "elm " << y -> data << std::endl;
    std::cout << "balance of this " << getBalance(y) << std::endl;
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
// rotate subtree rooted with x  
// See the diagram given above.  
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
    std::cout << "balance " << balance << std::endl; 
    // Rotation cases
    // Left Left Case
    if(balance > 1 && data < root -> left -> data){
        std::cout << "Left Left Case Insertion Success" << std::endl;
        return rightRotate(root);
    }
    
    // Right Rigth case
    if(balance < -1 && data > root -> right -> data){
        std::cout << "Right Right Case Insertion Success" << std::endl;
        return leftRotate(root);
    }
    
    // Left Right Case
    if(balance > 1 && data > root -> left -> data)
    {
        root -> left = leftRotate(root -> left);
        std::cout << "Left Right Case Insertion success" << std::endl;
        return rightRotate(root);
    }

    // Right Left Case
    if(balance < -1 && data < root -> right -> data)
    {
        root -> right = rightRotate(root -> right);
        std::cout << "Right Left Case Insertion success" << std::endl;
        return leftRotate(root);
    }
    
    std::cout << "No rotation Insertion success" << std::endl;

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

