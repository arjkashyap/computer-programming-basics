// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node{
    bool isEndOfWord;
    int count1;
    map<char, Node *> mp;
};

Node *newNode(){
    Node *temp = new Node();
    temp->isEndOfWord = false;
    // int count1 = 0;
    return temp;
}


 // } Driver Code Ends
//User function template for C++


class TrieNode
{
    public: 
        TrieNode* child[26];
        bool isEnd;
        int wordCount;
        
        TrieNode()
        {
            for(int i = 0; i < 26; i++)
                child[i] = nullptr;
                
            isEnd = false;
            wordCount = 0;
        }
        
};

class Trie
{
    public: 
        TrieNode* root;
        Trie()
        {
            root = new TrieNode();
        }
        
        string insertAndPrint(string);
        
};

string Trie::insertAndPrint(string str)
{
    string displayString = "";
    bool endDisplayString = false;
    
    TrieNode* nodePtr = this -> root;
    
    for(int i = 0; i < str.length(); i++){
        
        char curr = str[i];
        int idx = curr - 'a';       // index of child array 
        
        
        
        // set child 
        if(nodePtr -> child[idx] == nullptr){
            nodePtr -> child[idx] = new TrieNode();

            if(endDisplayString == false)
                displayString += curr;
                
            endDisplayString = true;
        }else{
            displayString += curr;
        }
        
        
        nodePtr = nodePtr -> child[idx];
    }
    
    nodePtr -> isEnd = true;
    nodePtr -> wordCount++;

    if(nodePtr -> wordCount > 1)
        displayString += " " + to_string(nodePtr -> wordCount);
    
    return displayString;
}

class Solution
{

    public:
        
    /*
    If some city has same name, then prefix will be the name with suffix as the 
    count of occurence of that city prior to this and including this, seperated with spaces
    
        i/p: shimla  safari  jammu  delhi  jammu   dehradun
        o/p: s       sa      j      d      jammu 2 de 
        
        
        
    */
    
    void check(string *arr, int n)
    {
        Trie trie;
        for(int i = 0; i < n; i++){
            cout << trie.insertAndPrint(arr[i]) << endl;
        }
    }

};




// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string arr[n];
        for(int i = 0;i<n;i++){
            string s;
            cin >> s;
            arr[i] = s;
        }
        Solution obj;
        obj.check(arr,n);
    }
    return 0;
}
  // } Driver Code Ends