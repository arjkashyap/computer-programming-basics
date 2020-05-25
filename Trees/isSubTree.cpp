// For given Trees T and S, check if S is a subtree of T

#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree(string str) {
    if (str.length() == 0 || str[0] == 'N')
        return NULL;
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    Node *root = new Node(stoi(ip[0]));

    queue<Node *> queue;
    queue.push(root);

    int i = 1;
    while (!queue.empty() && i < ip.size()) {
        Node *currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

        if (currVal != "N") {

            currNode->left = new Node(stoi(currVal));

            queue.push(currNode->left);
        }

        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        if (currVal != "N") {
            currNode->right = new Node(stoi(currVal));

            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

bool isSubTree(Node* T, Node* S)
{
    if(T == nullptr && S == nullptr)
        return true;

    if(T != nullptr && S == nullptr)
        return false;

    if(T == nullptr && S != nullptr)
        return false;


    if(T -> data == S -> data)
        if(isSubTree(T-> left, S -> left) && isSubTree(T -> right, S -> right))
            return true;


    return isSubTree(T->left, S) || isSubTree(T->right, S);
}



int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string strT, strS;
        getline(cin, strT);
        Node *rootT = buildTree(strT);
        getline(cin, strS);
        Node *rootS = buildTree(strS);
        cout << isSubTree(rootT, rootS) << "\n";

    }


    return 0;
} 
