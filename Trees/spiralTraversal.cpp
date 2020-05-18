// Print spiral order traversal of a tree

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void printSpiral(Node *root);

Node* buildTree(string str)
{
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    Node* root = newNode(stoi(ip[0]));

    queue<Node*> queue;
    queue.push(root);

    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        Node* currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

        if(currVal != "N") {

            currNode->left = newNode(stoi(currVal));

            queue.push(currNode->left);
        }

        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        if(currVal != "N") {

            currNode->right = newNode(stoi(currVal));

            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);

        printSpiral(root);
        cout << endl;
    }
    return 0;
}



#include<queue>
#include<stack>

void printSpiral(Node *root)
{
    if(!root)
        return;
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    bool reverse = true;
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node* curr = q.front();
            if(reverse)
                s.push(curr);
            else
                cout << curr -> data << " ";
             q.pop();

             if(curr -> left) q.push(curr -> left);
             if(curr -> right) q.push(curr -> right);

        }
        if(reverse){
            while(!s.empty()){
                Node* curr = s.top();
                cout << curr -> data << " ";
                s.pop();
            }
        }
        reverse = !reverse;
    }

}
