// For given two tree
// checked if they are identical or not

#include<bits/stdc++.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int x)
    {
        data = x;
        right = left = nullptr;
    }
};

Node* Insert(Node* root, int data)
{
    if(root == nullptr)
        root = new Node(data);
    else if(root -> data <= data)
        root -> left = Insert(root -> left, data);
    else if(root -> data > data)
        root -> right = Insert(root -> right, data);

    return root;

}

bool isIdentical(Node* r1, Node* r2)
{
    if(r1 == nullptr && r2 == nullptr)
        return true;
    if( r1 != nullptr && r2 != nullptr ){
        return(
                ( r1 -> data == r2 -> data) &&
                ( isIdentical(r1 -> left, r2 -> left) ) &&
                ( isIdentical( r1 -> right, r2 -> right ) )
              );
    }
    return false;
}


int main()
{
    Node* r1 = nullptr;
    Node* r2  = nullptr;
    r1 = Insert(r1, 1);
    r1 = Insert(r1, 2);
    r1 = Insert(r1, 3);
    r1 = Insert(r1, 5);
    r1 = Insert(r1, 6);


    r2 = Insert(r2, 1);
    r2 = Insert(r2, 2);
    r2 = Insert(r2, 9);
    r2 = Insert(r2, 5);
    r2 = Insert(r2, 6);
    if(isIdentical(r1, r2))
        std::cout << "YES";
    else
        std::cout << "NOPE";

    std::cout << std::endl;
    return 0;
}





















