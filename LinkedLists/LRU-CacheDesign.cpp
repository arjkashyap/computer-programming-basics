/*
LRU Cache design algorithm
LRU -> Least Recently Used
This problem can also be done using Arrays but time complexity
will be higher. 
Given the fact that Cache is the fastest memory available, we look for a method which does not sacrifise speed.
Since the fastest ds available is Hash table we use it with doubly linked list
Note: The most recently used is kept at left position
*/

// { Driver Code Starts

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class LRUCache {
public:
    class node{
        public:
            int key;
            int val;
            node* prev;
            node* next;
            node(int key, int val){
                this->key = key;
                this->val = val;
            }
    };
    
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    int capacity;
    unordered_map<int,node*> map;
    
    LRUCache(int capacity) {
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void deleteNode(node* curNode){
        node* prevNode = curNode->prev;
        node* nextNode = curNode->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }
    
    void addNode(node* curNode){
        curNode->next = head->next;
        curNode->prev = head;
        curNode->next->prev = curNode;
        head->next = curNode;
    }
    
    int get(int key) {
        if(map.find(key) == map.end()) return -1;
        node* curNode = map[key];
        int result = curNode->val;
        map.erase(key);
        deleteNode(curNode);
        addNode(curNode);
        map[key] = head->next;
        return result;
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end()){
            node* curNode = map[key];
            map.erase(key);
            deleteNode(curNode);
        }
        if(map.size() == capacity){
            map.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new node(key,value));
        map[key] = head->next;
    }
};

int
main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);

        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
