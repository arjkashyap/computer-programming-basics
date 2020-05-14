//You are given pointer to the root of the binary search tree and two
// values and . You need to return the lowest common ancestor (LCA) 
// of and in the binary search tree

#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
        Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }


    Node *lca(Node *root, int v1,int v2) {
        if(root == nullptr)
            return root;
        if(root -> data == v1 || root -> data == v2)
            return root;

        Node* r1 = lca(root -> left, v1, v2);
        Node* r2 = lca(root -> right, v1, v2);

        if(r1 != nullptr && r2 != nullptr)
            return root;

        return (r1 != nullptr) ? r1 : r2;
    }
};

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

  	int v1, v2;
  	std::cin >> v1 >> v2;

    Node *ans = myTree.lca(root, v1, v2);

  	std::cout << ans->data;

    return 0;
}

