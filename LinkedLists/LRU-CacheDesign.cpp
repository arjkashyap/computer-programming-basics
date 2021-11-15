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

// Doubly Linked List Node
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int x)
    {
        this->data = x;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

// design the class:
class LRUCache
{
private:
    Node *head_ref = nullptr;
    Node *tail_ref = nullptr;
    unordered_map<key, Node *> map;
    int space_avail;

public:
    // Constructor takes the param-> cache capacity
    LRUCache(int cap)
    {
        // constructor for cache
        space_avail = cap;
    }

    // this function should return value corresponding to key
    static int get(int key)
    {
        if (map.find(key) == map.end())
            return -1;
        Node *ptr = map[key];
        int res = ptr->data;
        ptr->prev->next = ptr->next;
        ptr->next->prev = (ptr->next != nullptr) ? ptr->prev : nullptr;
        ptr->prev = nullptr;
        ptr->next = head_ref;
        head_ref->prev = ptr;
        head_ref = ptr;
        return res;
    }

    // storing key, value pair
    static void set(int key, int value)
    {

        Node *newNode = Node(value);
        if (head_ref == nullptr)
        {
            map[key] = newNode;
            head_ref = newNode;
            tail_ref = newNode;
            space_avail--;
            return;
        }
        if (space_avail > 0)
        {
            newNode->next = head_ref;
            head_ref->prev = newNode;
            head_ref = newNode;
            map[key] = newNode;
            space_avail--;
        }
        else if (space_avail == 0)
        {
            Node *tmp = tail_ref;
            tail_ref = tail_ref->prev;
            free(tmp);
            newNode->next = head_ref;
            head_ref->prev = newNode;
            head_ref = newNode;
            map[key] = newNode;
        }
    }
}

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
