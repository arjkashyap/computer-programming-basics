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
using namespace std;

// Doubly Linked List Node
class Node{
    private:
        int data;
        Node* next;
        Node* prev;

    public:
        Node(int x)
        {
            this.data = x;
            this.next = nullptr;
            this.prev = nullptr;
        }
}

// design the class:
class LRUCache
{
private:
    Node* head_ref = nullptr;
public:
    LRUCache(int cap)
    {
        // constructor for cache
    }

    static int get(int key)
    {
        // this function should return value corresponding to key
    }

    static void set(int key, int value)
    {
        // storing key, value pair
    }
}

int main()
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
